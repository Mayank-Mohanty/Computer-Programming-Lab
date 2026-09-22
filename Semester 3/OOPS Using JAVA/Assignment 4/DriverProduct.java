import java.util.Scanner;
class Product {
    int id,quantity;
    String name;
    double unitPrice;
    static String storeName;
    static double gstPercentage;
    static int totalProducts;
    static {
        storeName = "ABC Store";
        gstPercentage = 18.0;
        totalProducts = 0;
    }
    Product(int id, String name, int quantity, double unitPrice) {
        this.id = id;
        this.name = name;
        this.quantity = quantity;
        this.unitPrice = unitPrice;
        totalProducts++;
    }
    double inventoryValue() {
        return quantity * unitPrice;
    }
    void display() {
        System.out.println(id + "\t" + name + "\t" + quantity + "\t\t" + unitPrice + "\t\t" + inventoryValue());
    }
}
class DriverProduct {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of Products: ");
        int n = sc.nextInt();
        Product[] p = new Product[n];
        for (int i = 0; i < n; i++) {
            System.out.println("\nEnter details of Product " + (i + 1));
            System.out.print("Enter Product ID: ");
            int id = sc.nextInt();
            sc.nextLine();
            System.out.print("Enter Product Name: ");
            String name = sc.nextLine();
            System.out.print("Enter Quantity: ");
            int quantity = sc.nextInt();
            System.out.print("Enter Unit Price: ");
            double price = sc.nextDouble();
            p[i] = new Product(id, name, quantity, price);
        }
        double totalInventoryValue = 0;
        Product mostValuable = p[0];
        for (int i = 0; i < p.length; i++) {
            totalInventoryValue += p[i].inventoryValue();
            if (p[i].inventoryValue() > mostValuable.inventoryValue())
                mostValuable = p[i];
        }
        double avgProductValue = totalInventoryValue / Product.totalProducts;
        System.out.println("\nStore Name: " + Product.storeName);
        System.out.println("GST Percentage: " + Product.gstPercentage + "%");
        System.out.println("\nID\tName\tQuantity\tUnit Price\tInventory Value");
        for (int i = 0; i < p.length; i++)
            p[i].display();
        System.out.println("\nTotal Number of Products: " + Product.totalProducts);
        System.out.println("Most Valuable Product: " + mostValuable.name);
        System.out.println("Total Inventory Value: " + totalInventoryValue);
        System.out.println("Average Product Value: " + avgProductValue);
    }
}
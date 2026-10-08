import java.util.Scanner;
class SalesPerson{
    int salesPersonId;
    String name;
    double salesAmount;
    SalesPerson(int salesPersonId,String name,double salesAmount){
        this.salesPersonId=salesPersonId;
        this.name=name;
        this.salesAmount=salesAmount;
    }
}
class SeniorSalesPerson extends SalesPerson {
    double incentivePercentage;
    SeniorSalesPerson(int salesPersonId,String name,double salesAmount,double incentivePercentage){
        super(salesPersonId,name,salesAmount);
        this.incentivePercentage=incentivePercentage;
    }
    double calculateIncentive(){
        return salesAmount*incentivePercentage/100;
    }
    double calculateTotalEarnings(){
        return salesAmount+calculateIncentive();
    }
    void display(){
        System.out.println("\nSales Person ID : " + salesPersonId);
        System.out.println("Name : " + name);
        System.out.println("Sales Amount : " + salesAmount);
        System.out.println("Incentive Percentage : " + incentivePercentage + "%");
        System.out.println("Incentive Amount : " + calculateIncentive());
        System.out.println("Total Earnings : " + calculateTotalEarnings());
    }
}
public class DriverSalesPerson{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of salespersons: ");
        int n=sc.nextInt();
        SeniorSalesPerson[] persons = new SeniorSalesPerson[n];
        for (int i=0;i<n;i++){
            System.out.println("\nEnter details of salesperson " + (i+1));
            System.out.print("Sales Person ID: ");
            int id=sc.nextInt();
            sc.nextLine();
            System.out.print("Name: ");
            String name=sc.nextLine();
            System.out.print("Sales Amount: ");
            double sales=sc.nextDouble();
            System.out.print("Incentive Percentage: ");
            double incentive=sc.nextDouble();
            persons[i] = new SeniorSalesPerson(id,name,sales,incentive);
        }
        System.out.println("\nSALES PERSON DETAILS:");
        for (int i=0;i<persons.length;i++){
            persons[i].display();
        }
    }
}

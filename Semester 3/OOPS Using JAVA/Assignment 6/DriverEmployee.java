abstract class Employee{
    int empId;
    String name;
    double basicSalary;
    Employee(int empId,String name,double basicSalary){
        this.empId=empId;
        this.name=name;
        this.basicSalary=basicSalary;
    }
    abstract double calculateSalary();
    void displayDetails(){
        System.out.println("Employee ID : " + empId);
        System.out.println("Name : " + name);
        System.out.println("Basic Salary : " + basicSalary);
        System.out.println("Calculated Salary : " + calculateSalary());
    }
}
class Manager extends Employee{
    Manager(int empId,String name,double basicSalary){
        super(empId,name,basicSalary);
    }
    double calculateSalary(){
        double allowance=basicSalary*20/100;
        return basicSalary+allowance;
    }
}
class Developer extends Employee{
    Developer(int empId,String name,double basicSalary){
        super(empId,name,basicSalary);
    }
    double calculateSalary(){
        double allowance=basicSalary*10/100;
        return basicSalary+allowance;
    }
}
class DriverEmployee{
    public static void main(String[] args){
        Employee manager = new Manager(101, "Mayank", 50000);
        Employee developer = new Developer(102, "Tusharkanto", 40000);
        System.out.println("MANAGER:");
        manager.displayDetails();
        System.out.println("\nDEVELOPER:");
        developer.displayDetails();
    }
}

abstract class Bank{
    abstract double getROI();
}
class SBI extends Bank{
    double getROI(){
        return 7.0;
    }
}
class PNB extends Bank{
    double getROI(){
        return 7.5;
    }
}
class BOI extends Bank{
    double getROI(){
        return 8.0;
    }
}
public class DriverBank{
    public static void main(String[] args){
        Bank bank;
        bank = new SBI();
        System.out.println("SBI Rate of Interest : " + bank.getROI());
        bank = new PNB();
        System.out.println("PNB Rate of Interest : " + bank.getROI());
        bank = new BOI();
        System.out.println("BOI Rate of Interest : " + bank.getROI());
    }
}

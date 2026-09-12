class Time{
    int h;
    int m;
    int s;
    Time(int h,int m,int s){
        this.h=h;
        this.m=m;
        this.s=s;
    }
    void displayTime() {
        System.out.printf("%02d:%02d:%02d",h,m,s);
    }
    Time addTime(Time t) {
        int totsecs=this.h*3600 + this.m*60 + this.s + t.h*3600 + t.m*60 + t.s;
        int h=totsecs/3600;
        int m=(totsecs%3600)/60;
        int s=totsecs%60;
        return new Time(h,m,s);
    }
}
class DriverTime{
    public static void main(String[] args){
        Time t1=new Time(10,45,30);
        Time t2=new Time(5,20,45);
        System.out.print("\nFirst Time: ");
        t1.displayTime();
        System.out.print("\nSecond Time: ");
        t2.displayTime();
        Time t3=t1.addTime(t2);
        System.out.print("\nAdded Time: ");
        t3.displayTime();
    }
}

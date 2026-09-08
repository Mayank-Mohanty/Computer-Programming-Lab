import java.lang.System;
import java.util.*;
class Area{
    int length;
    int breadth;
    void setDim(int length,int breadth){
        this.length=length;
        this.breadth=breadth;
    }
    int getArea(){
        return length*breadth;
    }
}
public class DriverArea{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter length: ");
        int length=sc.nextInt();
        System.out.print("Enter breadth: ");
        int breadth=sc.nextInt();
        Area a=new Area();
        a.setDim(length,breadth);
        System.out.println("Area of rectangle = " + a.getArea());
    }
}

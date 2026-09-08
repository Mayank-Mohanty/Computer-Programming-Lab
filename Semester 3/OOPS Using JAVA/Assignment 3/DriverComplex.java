import java.lang.System;
import java.util.*;
class ComplexNum{
    int real;
    int img;
    ComplexNum(int real,int img){
        this.real=real;
        this.img=img;
    }
    void displayCompNumber(){
        if (img>=0){
            System.out.println(real + "+" + img + "i");
        }
		else{
            System.out.println(real + "" + img + "i");
        }
    }
    ComplexNum addCompNumber(ComplexNum c){
        int newReal=this.real+c.real;
        int newImg=this.img+c.img;
        ComplexNum res=new ComplexNum(newReal,newImg);
		return res;
    }
}
public class DriverComplex{
    public static void main(String[] args){
        ComplexNum c1=new ComplexNum(5,3);
        ComplexNum c2=new ComplexNum(2,4);
        System.out.print("First complex number: ");
        c1.displayCompNumber();
        System.out.print("Second complex number: ");
        c2.displayCompNumber();
        ComplexNum c3=c1.addCompNumber(c2);
        System.out.print("Sum: ");
        c3.displayCompNumber();
    }
}

import java.lang.System;
import java.util.*;
class Box{
    double width;
    double height;
    double depth;
    Box(double width,double height,double depth){
        this.width=width;
        this.height=height;
        this.depth=depth;
    }
    double Volume(){
        return width*height*depth;
    }
}
public class DriverBox{
    public static void main(String[] args){
        Box b1=new Box(10,5,4);
        System.out.println("Width = " + b1.width);
        System.out.println("Height = " + b1.height);
        System.out.println("Depth = " + b1.depth);
        System.out.println("Volume = " + b1.Volume());
    }
}

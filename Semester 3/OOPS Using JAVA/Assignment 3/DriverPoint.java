import java.lang.System;
import java.util.*;
class Point{
	double xCo;
    double yCo;
    Point(double xCo,double yCo){
        this.xCo=xCo;
        this.yCo=yCo;
    }
    double distanceBetPoints(Point p){
        double dx=this.xCo-p.xCo;
        double dy=this.yCo-p.yCo;
        return Math.sqrt(dx*dx + dy*dy);
    }
}
public class DriverPoint{
    public static void main(String[] args){
        Point p1=new Point(2,3);
        Point p2=new Point(5,7);
        double distance=p1.distanceBetPoints(p2);
        System.out.println("Point 1: (" + p1.xCo + ", " + p1.yCo + ")");
        System.out.println("Point 2: (" + p2.xCo + ", " + p2.yCo + ")");
        System.out.println("Distance = " + distance);
    }
}

abstract class Shape{
    abstract void RectangleArea(double length,double breadth);
    abstract void SquareArea(double side);
    abstract void CircleArea(double radius);
}
class Area extends Shape{
    void RectangleArea(double length,double breadth){
        double area = length*breadth;
        System.out.println("Area of Rectangle = " + area);
    }
    void SquareArea(double side){
        double area = side*side;
        System.out.println("Area of Square = " + area);
    }
    void CircleArea(double radius){
        double area = 3.14*radius*radius;
        System.out.printf("Area of Circle = %.2f%n", area);
    }
}
class DriverShape{
    public static void main(String[] args){
        Area obj = new Area();
        obj.RectangleArea(10, 5);
        obj.SquareArea(5);
        obj.CircleArea(7);
    }
}

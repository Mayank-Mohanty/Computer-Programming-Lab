abstract class Figure{
    double dim1;
    double dim2;
    Figure(double dim1,double dim2){
        this.dim1=dim1;
        this.dim2=dim2;
    }
    abstract double getArea();
}
class Rectangle extends Figure{

    Rectangle(double length,double breadth){
        super(length,breadth);
    }
    double getArea(){
        return dim1*dim2;
    }
}
class Triangle extends Figure{

    Triangle(double base,double height){
        super(base,height);
    }
    double getArea(){
        return 0.5*dim1*dim2;
    }
}
class DriverFigure{
    public static void main(String[] args){
        Figure figure;
        figure = new Rectangle(10,5);
        System.out.println("Area of Rectangle = " + figure.getArea());
        figure = new Triangle(10, 5);
        System.out.println("Area of Triangle = " + figure.getArea());
    }
}

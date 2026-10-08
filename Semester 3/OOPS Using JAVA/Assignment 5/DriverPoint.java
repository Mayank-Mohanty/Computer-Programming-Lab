class Point2D {
    double x,y;
    Point2D(){
        x=0;
        y=0;
    }
    Point2D(double x,double y){
        this.x=x;
        this.y=y;
    }
    void display(){
        System.out.println("X Coordinate: " + x);
        System.out.println("Y Coordinate: " + y);
    }
}
class Point3D extends Point2D{
    double z;
    Point3D(double x,double y,double z) {
        super(x,y);
        this.z=z;
    }
    void show(){
        super.display();
        System.out.println("Z Coordinate: " + z);
    }
}
class DriverPoint {
    public static void main(String[] args){
        Point2D p1 = new Point2D();
        System.out.println("POINT 2D (Default Constructor):");
        p1.display();
        Point2D p2 = new Point2D(10, 20);
        System.out.println("\nPOINT 2D (Parameterized Constructor):");
        p2.display();
        Point3D p3 = new Point3D(10, 20, 30);
        System.out.println("\nPOINT 3D:");
        p3.show();
    }
}

interface A{
    void showA();
}
interface B{
    void showB();
}
class C implements A,B{
    public void showA(){
        System.out.println("Method of Interface A");
    }
    public void showB(){
        System.out.println("Method of Interface B");
    }
}
class DriverMultipleInheritance{
    public static void main(String[] args){
        C obj = new C();
        obj.showA();
        obj.showB();
    }
}

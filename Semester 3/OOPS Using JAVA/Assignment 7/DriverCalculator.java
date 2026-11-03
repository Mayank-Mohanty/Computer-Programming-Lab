interface Calculator{
	int a=20,b=10;
	void add();
	void sub();
	void mul();
	void div();
}
class DemoCalculator implements Calculator{
	public void add(){
		System.out.println("A + B = " + (a+b));
	}
	public void sub(){
		System.out.println("A - B = " + (a-b));
	}
	public void mul(){
		System.out.println("A * B = " + (a*b));
	}
	public void div(){
		System.out.println("A / B = " + (a/b));
	}
}
class DriverCalculator{
	public static void main(String[] args){
		Calculator c = new DemoCalculator();
		c.add();
		c.sub();
		c.mul();
		c.div();
	}
}
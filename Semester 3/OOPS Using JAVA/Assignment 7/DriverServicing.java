interface Servicing{
	abstract void getServiceTime();
}
class Car implements Servicing{
	public void getServiceTime(){
		System.out.println("Car Servicing will take 5 Hours");
	}
}
class Bike implements Servicing{
	public void getServiceTime(){
		System.out.println("Bike Servicing will take 3 Hours");
	}
}
class DriverServicing{
	public static void main(String[] args){
		Servicing ob = new Car();
		ob.getServiceTime();
		ob = new Bike();
		ob.getServiceTime();
	}
}

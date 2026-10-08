import java.util.*;
class Vehicle{
	int no;
	double fuelConsumed;
	Vehicle(int no,double fuelConsumed){
		this.no=no;
		this.fuelConsumed=fuelConsumed;
	}
	void display(){
		System.out.println("Vehicle No: "+no);
		System.out.println("Fuel Consumed: "+fuelConsumed);
	}
	double mileage() {
    return 0;
	}
}
class Car extends Vehicle{
	double dist;
	Car(int no,double fuelConsumed,double dist){
		super(no,fuelConsumed);
		this.dist=dist;
	}
	void display(){
		super.display();
		System.out.println("Distance Traveled: "+dist);
	}
	double mileage() {
    return dist/fuelConsumed;
	}
}
class ElectricCar extends Car{
	double energy;
	ElectricCar(int no,double fuelConsumed,double dist,double energy){
		super(no,fuelConsumed,dist);
		this.energy=energy;
	}
	void display(){
		super.display();
		System.out.println("Stored Energy: "+energy);
		System.out.println("Mileage: "+this.mileage());
	}
	double mileage(){
		return dist/fuelConsumed;
	}
}
class DriverVehicle{
	public static void main(String[] args){
		int i;
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter no. of Car: ");
		int n=sc.nextInt();
		ElectricCar[] c = new ElectricCar[n];
		for (i=0;i<n;i++){
			System.out.println("\nEnter Details of Car "+(i+1)); 
			System.out.print("Enter Vehicle No: ");
			int no=sc.nextInt();
			System.out.print("Enter Fuel Consumed: ");
			double fuelConsumed=sc.nextDouble();
			System.out.print("Enter Distance Traveled: ");
			double dist=sc.nextDouble();
			System.out.print("Enter Stored Energy: ");
			double energy=sc.nextDouble();
			c[i]=new ElectricCar(no,fuelConsumed,dist,energy);
		}
		System.out.println("\nVEHICLE WITH HIGHEST MILEAGE:");
		ElectricCar Highest=c[0];
		for (i=0;i<n;i++){
			if (c[i].mileage() > Highest.mileage())
				Highest=c[i];
		}
		Highest.display();
	}
}
class CmdLineSum{
	public static void main(String args[]){
		int a,b,res;
		if (args.length<2){
			System.out.println("Insufficient Arguments");
			return;
		}
		System.out.println("Entered Numbers:");
		for (int i=0;i<args.length;i++){
			System.out.println(args[i]);
		}
		a=Integer.parseInt(args[0]);
		b=Integer.parseInt(args[1]);
		res=a+b;
		System.out.println("Sum = "+res);
	}
}
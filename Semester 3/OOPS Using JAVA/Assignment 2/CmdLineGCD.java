class CmdLineGCD {
    public static void main(String args[]) {
        int a,b,rem,iterations=0;
        if (args.length!=2) {
            System.out.println("Invalid Arguments");
            return;
        }
        System.out.println("Entered Numbers:");
        for (int i=0; i<args.length;i++) {
            System.out.println(args[i]);
        }
        a=Integer.parseInt(args[0]);
        b=Integer.parseInt(args[1]);
        while (b!=0) {
            rem=a%b;
            a=b;
            b=rem;
            iterations++;
        }
        System.out.println("GCD = " + a);
        System.out.println("Number of Iterations = " + iterations);
    }
}
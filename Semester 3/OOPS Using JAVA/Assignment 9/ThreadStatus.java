class MyThread extends Thread {
    public void run() {
        try {
            Thread.sleep(500); // Keeping thread alive briefly
        } catch (InterruptedException e) {
            System.out.println(e);
        }
    }
}
class ThreadStatus {
    public static void main(String[] args) {
        MyThread t = new MyThread();       
        t.setName("Thread-1");
        System.out.println("Thread Name: " + t.getName());
        System.out.println("Thread ID: " + t.threadId());
        System.out.println("Is alive before start(): " + t.isAlive());
        t.start();
        System.out.println("Is alive after start(): " + t.isAlive());
        try {
            t.join(); // Wait for thread to finish
        } catch (InterruptedException e) {
            System.out.println(e);
        }
        System.out.println("Is alive after completion: " + t.isAlive());
    }
}

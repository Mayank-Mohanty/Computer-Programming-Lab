class ThreadStatus {
    public static void main(String[] args) {
        Thread t = new Thread();
        t.setName("MyThread");
        System.out.println("Thread Name: " + t.getName());
        System.out.println("Thread ID: " + t.getId());
        System.out.println("Is Alive: " + t.isAlive());
    }
}

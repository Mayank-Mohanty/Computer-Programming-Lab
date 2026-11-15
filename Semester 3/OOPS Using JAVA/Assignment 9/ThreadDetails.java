class ThreadDetails {
    public static void main(String[] args) {
        // Getting reference of the current thread (main thread)
        Thread t = Thread.currentThread();
        System.out.println("Class Name: " + t.getClass().getName());
        System.out.println("Thread Name: " + t.getName());
        System.out.println("Priority: " + t.getPriority());
        System.out.println("Thread Group Name: " + t.getThreadGroup().getName());
    }
}

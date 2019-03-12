class mythread extends Thread
{
    public void run()
    {
        for(int i=1;i<=10;i++)
            System.out.println("Child Thread");
    }
}
public class Multithreading 
{
    public static void main(String[] args) 
    {
        mythread t=new mythread();
        t.start();
        for(int i=1;i<=10;i++)
            System.out.println("Parent Thread");
    }
}
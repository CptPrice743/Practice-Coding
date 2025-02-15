public class Droid
{
    //Instance Fields
    int batteryLevel;
    String name;


    //Constructor
    public Droid(String droidName)
    {
        name = droidName;
        batteryLevel = 100;
    }

    //toString()
    public String toString()
    {
        return "Hello, I'm the droid: " + name; 
    }

    //Methods
    public void performTask(String task)
    {
        System.out.println(name + " is performing task: " + task);
        batteryLevel -= 10;
    }

    public void energyReport()
    {
        System.out.println("Battery level is: " + batteryLevel);
    }

    public void energyExchange()
    {
        batteryLevel = 100;
        System.out.println("Changing battery!");
    }

    public static void main(String[] args)
    {
        Droid codey = new Droid("Codey");
        System.out.println(codey);

        codey.performTask("Dacing");
        codey.energyReport();
        codey.energyExchange();
        codey.energyReport();
    }
}
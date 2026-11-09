public class This{
    void display () {
        System.out.println(this);
    }
    public static void main (String[] args)
    {
     This r = new This();
     System.out.println(r);
     r.display();
    }
}
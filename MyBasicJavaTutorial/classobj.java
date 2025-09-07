package MyBasicJavaTutorial;
class calculator
{
    int a;
    public int add (int n1, int n2)
    {
        int r= n1+n2;
        return r;
    }
    public int sub (int n1, int n2)
    {
        int r= n1-n2;
        return r;
    }
}




public class classobj 
{
    public static void main (String[] args)
    {
        int num1=6;
        int num2=8;

        calculator calc = new calculator();

        int result = calc.add(num1,num2);
        int result1 = calc.sub(num2,num1);
        int result2 = calc.add(result,result1);

        // System.out.println(result);
        // System.out.println(result1);
        // System.out.println(result2);
        System.out.println(result + "\n" + result1 + "\n" + result2 );
    }
}

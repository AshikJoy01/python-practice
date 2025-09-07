package MyBasicJavaTutorial;
public class demo 
    {
        public static void main (String[] args)
        {
            /* 
            int x=6;
            int y=9;

            boolean result = x!=y;
            //boolean result = x==y;
            //boolean result = x<=y;
            //boolean result = x>=y;

            System.out.println(result);
            */
            /* 
            int x = 7;
            int y = 5;
            int a = 5;
            int b = 9;

            boolean result = x<y || a<b;
            System.out.println(!result);
            */


            /* 


            int x = 8;
            int y = 17;
            int z = 66;


            if(x>y && x>z)
            {
                System.out.println(x);
                System.out.println("Thank you");
            }
            else if(y>z)
            {
                System.out.println(y);
                System.out.println("Thank you");
            }
            
            else
            {
                System.out.println(z);
                System.out.println("Thank you");
            }
                

            */


            //ternary operetor (  ?: )

            //  int x=5;

            //  int result = x%2==0 ? 10 : 20;

            //  System.out.println(result);


            // Switch case.


            // int x = 9;

            // switch(x)
            // {
            //     case 1:
            //     System.out.println("monday");
            //     break;

            //     case 2:
            //     System.out.println("tuesday");
            //     break;

            //     case 3:
            //     System.out.println("wednesday");
            //     break;

            //     case 4:
            //     System.out.println("thursday");
            //     break;

            //     case 5:
            //     System.out.println("friday");
            //     break;

            //     case 6:
            //     System.out.println("satarday");
            //     break;

            //     case 7:
            //     System.out.println("sunday");
            //     break;

            //     default :
            //     System.out.println("Enter a valid number");
                
            // }



            // new way of switch
            

            /* 

            String day = "monday";

            switch(day)
            {
                case "sunday" , "monday" -> System.out.println("8am");

                case "tuesday" -> System.out.println("7am");

                default -> System.out.println("6am");


            }

            */
                // another way to write switch 

                String day = "monday";
                String result = "";

                result = switch(day)
                {
                    case "sunday" , "monday" -> "8am";
    
                    case "tuesday" -> "7am";
    
                    default -> "6am";
                };

                System.out.println(result);





            



        }



    }

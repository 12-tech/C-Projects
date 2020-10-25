using System;

namespace learning_with_Frank
{
    class Program
    {
        static string name = "Ajoke";
        static string first = "Hello World, \n \n I am learning with ";
        static string last = " and it's quite interesting!";
        static int a = 520;
        static int b = 310;
        static int result = a + b;

        static string mid = $" we did addition of {a} + {b}  = {result} ";
        
        static void Main(string[] args)
        {
            Console.WriteLine(first + name + last + mid);
           
        }
    }
}

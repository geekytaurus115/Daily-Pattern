using System;


namespace HollowRectangle
{
    class Program
    {
        
        static void Main(string[] args)
        {
            Console.Write("Enter the number of rows : ");
            int rows = Convert.ToInt32(Console.ReadLine());

            Console.Write("Enter the number of cols : ");
            int cols = Convert.ToInt32(Console.ReadLine());

            for (int i = 1; i <= rows; i++)
            {
                for (int j = 1; j <= cols; j++)
                {
                    if (i == 1 || i == rows || j == 1 || j == cols)
                    {
                        Console.Write("*");
                    }
                    else
                    {
                        Console.Write(" ");
                    }

                }
                Console.Write("\n");
            }
        }
    }
}

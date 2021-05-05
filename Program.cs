using System;
using Laba6_OOP_Lib;
namespace Laba6_OOP
{
    class Program
    {
        static void Main()
        {
            Console.WriteLine("Vozniak Sofiia, is-01, 2 Variant");
            //x1 = 0, y1 = 0, x2 = 4, y2 = 4, x3 = 6, y3 = 0
            Triangles trianle = new Triangles(0, 0, 4, 4, 6, 0); 
            trianle.Perimetr();
            trianle.Square();
            //радіус = 3
            Circle circle = new Circle(3);
            circle.Perimetr();
            circle.Square();
        }
    }
}

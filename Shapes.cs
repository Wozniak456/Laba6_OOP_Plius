using System;

namespace Laba6_OOP_Lib
{
    public class Shapes
    {
        protected double SquareProp { get; set; }
        protected double PerimetrProp { get; set; }
        protected int x1, y1, x2, y2, x3, y3, radius;
        public Shapes(int x1, int y1, int x2, int y2, int x3, int y3) // конструктор для трикутника
        {
            this.x1 = x1; this.y1 = y1;
            this.x2 = x2; this.y2 = y2;
            this.x3 = x3; this.y3 = y3;
        }
        public Shapes(int radius) // конструктор для кола
        {
            this.radius = radius;
        }
        // віртуальні методи для обчислення периметра і площі
        public virtual void Square()
        {
            Console.WriteLine($"Square equation: {SquareProp:f3}");
        }
        public virtual void Perimetr()
        {
            Console.WriteLine($"Perimetr equation: {PerimetrProp:f3}");
        }
    }
    public class Triangles : Shapes
    {
        private double side1, side2, side3;
        public Triangles(int x1, int y1, int x2, int y2, int x3, int y3)
            : base(x1,y1,x2,y2,x3,y3)
        {
            side1 = SideEquation(x1, y1, x2, y2);
            side2 = SideEquation(x1, y1, x3, y3);
            side3 = SideEquation(x3, y3, x2, y2);
        }
        public override void Square()
        {
            double pivPerym = (side1 + side2 + side3) / 2;
            SquareProp = Math.Sqrt(pivPerym * (pivPerym - side1) * (pivPerym - side2) * (pivPerym - side3));
            base.Square();
        }
        public override void Perimetr()
        {
            PerimetrProp = side1 + side2 + side3;
            base.Perimetr();
        }
        public double SideEquation(int x1, int y1, int x2, int y2)
        {
            return Math.Sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        }
    }
    public class Circle : Shapes
    {
        public Circle(int radius) : base(radius)
        {
        }
        public override void Perimetr()
        {
            PerimetrProp = 2 * Math.PI * radius;
            base.Perimetr();
        }
        public override void Square()
        {
            SquareProp = Math.PI * radius * radius;
            base.Square();
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C01P023_EjercicioDesarrollado01
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(" ** PRMEDIO DE NOTAS ** ");
            Console.WriteLine(" ");

            string alumno;
            int nota1, nota2, nota3;

            Console.Write("Ingrese nombre del alumno: ");
            alumno = Console.ReadLine();
            Console.Write("Ingrese la nota 1: ");
            nota1 = int.Parse(Console.ReadLine());
            Console.Write("Ingrese la nota 2: ");
            nota2 = int.Parse(Console.ReadLine());
            Console.Write("Ingrese al nota 3: ");
            nota3 = int.Parse(Console.ReadLine());

            double promedio = (nota1 + nota2 + nota3) / 3.0; // 3.0 necesario para que la operación obtenga un resultado de tipo double y se asigne en la variable double de prmedio

            Console.WriteLine("___________________________________");
            Console.WriteLine("EL PROMEDIO: " + promedio.ToString("0.00")); //convertir el valor de tipo double a string con formato #.##

            Console.ReadKey();
            // f5 para compilar y ejecutar
        }
    }
}

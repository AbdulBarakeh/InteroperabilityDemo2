using System;
using TestServerLib;

namespace DemoClientCS
{
    class Program
    {
        static void Main(string[] args)
        {
            //pga marshaling kan vi bruge interfacet fra COM objektet til at instantiere objektet i .NET
            //I dette tilfælde har vi registreret TestServer dll'en i systemet og kan bruge den uden problemer, da COM's LONG og .NET's INT kan mappes direkte over
            //I nogen tilfælde kan man være nød til at skulle mappe datatyper om. Eks. Strings til char*.
            IDemoObj demoObj = new DemoObj();
            
            Console.WriteLine("2 plus 2 er: " + demoObj.Add(2, 2));
            Console.WriteLine("5 minus 2 er: " + demoObj.Sub(5, 2));
        }
    }
}

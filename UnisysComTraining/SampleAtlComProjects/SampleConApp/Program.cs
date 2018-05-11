using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using SampleATLProjLib;
namespace SampleConApp
{
    class Program
    {
        static void Main(string[] args)
        {
            FirstComponentClass comObj = new FirstComponentClass();
            object array = new int[] { 1, 2, 3, 4, 5 };
            int res = 0;
            comObj.AddNumbers(array, out res);
            Console.WriteLine("The result of this operation is " + res);
        }
    }
}

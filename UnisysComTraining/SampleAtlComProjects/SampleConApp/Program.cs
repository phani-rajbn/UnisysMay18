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
            //firstDemo();
            //eventDemo();
            invokeNativeFunc();
        }

        private static void invokeNativeFunc()
        {
            NativeConsumerClass cls = new NativeConsumerClass();
            cls.InvokeNativeMethod();
        }

        private static void eventDemo()
        {
            EventComponentClass cls = new EventComponentClass();
            cls.Apple += Cls_Apple;
            cls.Click += Cls_Click;
            cls.InvokeMethod("Test123");
        }

        private static void Cls_Click()
        {
            Console.WriteLine("The Click event is called");
        }

        private static void Cls_Apple()
        {
            Console.WriteLine("Apple event is called");
        }

        private static void firstDemo()
        {
            FirstComponentClass comObj = new FirstComponentClass();
            object array = new int[] { 1, 2, 3, 4, 5 };
            int res = 0;
            comObj.AddNumbers(array, out res);
            Console.WriteLine("The result of this operation is " + res);
        }
    }
}

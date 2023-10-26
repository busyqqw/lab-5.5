#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.5/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestMethod1)
        {
            
            int firstTerm = 1;
            int difference = 2;
            int n = 5;
            int result = nthTerm(firstTerm, difference, n);
            Assert::AreEqual(9, result);

        }

        TEST_METHOD(TestMethod2)
        {
            
            int firstTerm = 1;
            int difference = 2;
            int n = 5;
            int result = sumOfTerms(firstTerm, difference, n);
            Assert::AreEqual(25, result);
        }
    };
}

            

            



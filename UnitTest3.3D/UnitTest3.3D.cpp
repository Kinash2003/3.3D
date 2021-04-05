#include "pch.h"
#include "CppUnitTest.h"
#include "../3.3D/Date_Public.cpp"
#include "../3.3D/Date_Public.h"
#include "../3.3D/Triad.cpp"
#include "../3.3D/Triad.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33D
{
	TEST_CLASS(UnitTest33D)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Date_Public a(5, 5), b(5, 5);
			Assert::AreEqual(a == b, true);
		}
	};
}

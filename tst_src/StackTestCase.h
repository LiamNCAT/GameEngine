#include <cppunit/extensions/HelperMacros.h>
#include "container/stack.h"

Class StackTestCase: public CPPUNIT_NS::TestFixture{
  CPPUNIT_TEST_SUITE(StackTestCase);
  CPPUNIT_TEST(pushTest);
  CPPUNIT_TEST(popTest);
  CPPUNIT_TEST_SUITE_END();
public:
	void setUp();
	Stack<int> stack;
protected:
	void pushTest();
	void popTest();
}
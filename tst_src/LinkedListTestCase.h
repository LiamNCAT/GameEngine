#include <cppunit/extensions/HelperMacros.h>
#include "container/linkedlist.h"

class LinkedListTestCase : public CPPUNIT_NS::TestFixture{
  CPPUNIT_TEST_SUITE(LinkedListTestCase);
  CPPUNIT_TEST(deleteTest);
  CPPUNIT_TEST(containsTest);
  CPPUNIT_TEST(dmptyTest);
  CPPUNIT_TEST(insertTest);
  CPPUNIT_TEST_SUITE_END();
  
public:
	LinkedList<int> list;
	void setup();
	
protected:
	void deleteTest();
	void containsTest();
	void emptyTest();
	void insertTest();
}
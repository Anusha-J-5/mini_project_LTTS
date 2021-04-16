#include "unity.h"
#include <fun.h>

/* Modify these two lines according to the project */
#include <fun.h>
#define PROJECT_NAME "Contact_Management"

/* Prototypes for all the test functions */
  void addrecords();
	void deleterecords();
	void listrecords();
	void searchrecords();
	void modifyrecords();

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_delete);
  RUN_TEST(test_list);
  RUN_TEST(test_search);
  RUN_TEST(test_modify);
  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(0, addrecords());
  

}

void test_delete(void) {
  TEST_ASSERT_EQUAL(0, test_delete());
  
 
}

void test_list(void) {
  TEST_ASSERT_EQUAL(0, test_list());
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(0, test_list());
}

void test_search(void) {
  TEST_ASSERT_EQUAL(0,test_search());
  

}
void test_modify(void) {
  TEST_ASSERT_EQUAL(0,test_modify());

}


#include "unity.h"
#include "Heap_Sort.h"

void setUp(void){}

void tearDown(void){}

void test_Heap_Sort_With_12_minus_11_13_5_6_7_18_0_27_expect_heap_logic(void)
{   int maximum = 9;
    int i,heapsize;
    int b[] = {-11,0, 5, 6, 7, 12, 13, 18, 27};
    int a[] = {12, -11, 13, 5, 6, 7, 18, 0, 27};
    heapsize = maximum - 1;
    random_shuffle(a,maximum);
    printf("\n");
    heap_sort(a, heapsize);
    if(a != NULL){
    for (i = 0; i < maximum; i++)
        printf("%d ", a[i]);
      }
    else{
      printf("No Integer found for shuffling \n");
    }
    TEST_ASSERT_EQUAL_INT_ARRAY(a,b,9);
}

void test_Heap_Sort_With_12_11_expect_heap_logic(void)
{   int maximum = 2;
    int i, heapsize;
    int b[] = {11, 12};
    int a[] = {12, 11};
    heapsize = maximum - 1;
    random_shuffle(a,maximum);
    printf("\n");
    heap_sort(a, heapsize);
    if(a != NULL){
    for (i = 0; i < maximum; i++)
        printf("%d ", a[i]);
      }
    else{
      printf("No Integer found for shuffling \n");
    }
    TEST_ASSERT_EQUAL_INT_ARRAY(a,b,2);
}

void test_Heap_Sort_With_11_12_expect_heap_logic(void)
{   int maximum = 2;
    int i, heapsize;
    int a[] = {11, 12};
    int b[] = {11, 12};
    heapsize = maximum - 1;
    random_shuffle(a,maximum);
    printf("\n");
    heap_sort(a, heapsize);
    if(a != NULL){
    for (i = 0; i < maximum; i++)
        printf("%d ", a[i]);
      }
    else{
      printf("No Integer found for shuffling \n");
    }
    TEST_ASSERT_EQUAL_INT_ARRAY(a,b,2);
}

void test_Heap_Sort_With_11_expect_heap_logic(void){
    int maximum = 1;
    int i, heapsize;
    int a[] = {11};
    int b[] = {11};
    heapsize = maximum - 1;
    random_shuffle(a,maximum);
    printf("\n");
    heap_sort(a, heapsize);
    if(a != NULL){
    for (i = 0; i < maximum; i++)
        printf("%d ", a[i]);
      }
    else{
      printf("No Integer found for shuffling \n");
    }
    TEST_ASSERT_EQUAL_INT_ARRAY(a,b,1);
}

void test_Heap_Sort_With_NULL_expect_Error_message(void)
{   int maximum = 0;
    int i, heapsize;
    int a[] = {NULL};
    heapsize = maximum - 1;
    random_shuffle(a,maximum);
    printf("\n");
    heap_sort(a, heapsize);
    if(a[0] != NULL){
    for (i = 0; i < maximum; i++)
        printf("%d ", a[i]);
      }
    else{
      printf("No Integer found for shuffling \n");
    }
    TEST_ASSERT_EQUAL(NULL,a[0]);
}

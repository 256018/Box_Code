#include "unity.h"
#include "header.h"

/* Required by the unity test framework */
void setUp(void) {}
/* Required by the unity test framework */
void tearDown(void) {}

void test_create_box_list(void)
{
    head=NULL;
    /**
     * @brief Testcase to create box1.
     * 
     */
    TEST_ASSERT_EQUAL(SUCCESS,create_box_list(&head, 1, 1.2, 2.3, 3.4, 4.5, RED));

    /**
     * @brief Testcase to create box2.
     * 
     */
    TEST_ASSERT_EQUAL(SUCCESS,create_box_list(&head, 2, 2.2, 4.3, 5.4, 2.5, BLUE));
}
void test_print_box(void)
{
    /**
     * @brief Print details of all boxes.
     * 
     */
    TEST_ASSERT_EQUAL(SUCCESS,print_box(head));

    /**
     * @brief Check for NULL condition.
     * 
     */
    TEST_ASSERT_EQUAL(ERROR_NULL_PTR,print_box(NULL));
}
void test_search_box(void)
{
    /**
     * @brief Search for a box by giving an ID.
     * 
     */
    TEST_ASSERT_EQUAL(SUCCESS,search_box(head,1));

    /**
     * @brief Search for a box by giving an wrong ID.
     * 
     */
    TEST_ASSERT_EQUAL(NOT_FOUND,search_box(head,5));

    /**
     * @brief Check for NULL condition.
     * 
     */
    TEST_ASSERT_EQUAL(ERROR_NULL_PTR,search_box(NULL,1));
}
void test_count_box_color(void)
{
    /**
     * @brief Check for NULL condition.
     * 
     */
    TEST_ASSERT_EQUAL(ERROR_NULL_PTR,count_box_color(RED,NULL));

    /**
     * @brief Testcase for counting number of RED boxes.
     * 
     */
    TEST_ASSERT_EQUAL(SUCCESS,count_box_color(RED,head));
    TEST_ASSERT_EQUAL(1,no_of_box_by_color);

    /**
     * @brief Testcase for counting number of GREEN boxes.
     * 
     */
    TEST_ASSERT_EQUAL(SUCCESS,count_box_color(GREEN,head));
    TEST_ASSERT_EQUAL(0,no_of_box_by_color);
}
void test_average_volume_boxs(void)
{
    avg_vol=0;

    /**
     * @brief Checking for NULL condition.
     * 
     */
    TEST_ASSERT_EQUAL(ERROR_NULL_PTR,average_volume_boxs(NULL));

    /**
     * @brief Testcase to check for average volume of boxes.
     * 
     */
    TEST_ASSERT_EQUAL(SUCCESS,average_volume_boxs(head));
    TEST_ASSERT_EQUAL(30.234000,avg_vol);
}
void test_max_volume_box(void)
{
    max_volume=0;
    /**
     * @brief Checking for NULL condition.
     * 
     */
    TEST_ASSERT_EQUAL(ERROR_NULL_PTR,max_volume_box(NULL));

    /**
     * @brief Testcase to find maximum volume of box.
     * 
     */
    TEST_ASSERT_EQUAL(SUCCESS,max_volume_box(head));
    TEST_ASSERT_EQUAL(51.084000, max_volume);
}
void test_min_volume_box(void)
{
    min_volume=__INT_MAX__;
    /**
     * @brief Checking for NULL condition.
     * 
     */
    TEST_ASSERT_EQUAL(ERROR_NULL_PTR,min_volume_box(NULL));
    
    /**
     * @brief Testcase to find maximum volume of box.
     * 
     */
    TEST_ASSERT_EQUAL(SUCCESS,min_volume_box(head));
    TEST_ASSERT_EQUAL(9.384000, min_volume);
}
void test_diff_maxvol_minvol(void)
{
    diff_btw_maxvol_minvol=0;
    /**
     * @brief TestCase to check for difference between maximum and minimum volume.
     * 
     */
    TEST_ASSERT_EQUAL(SUCCESS,diff_maxvol_minvol(max_volume,min_volume));
    TEST_ASSERT_EQUAL(41.700000, diff_btw_maxvol_minvol);

    /**
     * @brief Checking for boundary condition.
     * 
     */
    TEST_ASSERT_EQUAL(ERROR,diff_maxvol_minvol(0,min_volume));
    TEST_ASSERT_EQUAL(ERROR,diff_maxvol_minvol(max_volume,0));
    TEST_ASSERT_EQUAL(ERROR,diff_maxvol_minvol(min_volume,max_volume));
}
void test_max_height_box(void)
{
    max_height=0;

    /**
     * @brief Testcase for checking of maximum height.
     * 
     */
    TEST_ASSERT_EQUAL(SUCCESS,max_height_box(head));
    TEST_ASSERT_EQUAL(5.400000, max_height);

    /**
     * @brief Checking for NULL condition.
     * 
     */
    TEST_ASSERT_EQUAL(ERROR_NULL_PTR,max_height_box(NULL));
}
void test_update_weight(void)
{
    TEST_ASSERT_EQUAL(SUCCESS,update_weight(head, 1));
    TEST_ASSERT_EQUAL(ERROR_NULL_PTR,update_weight(NULL, 1));
    TEST_ASSERT_EQUAL(ERROR,update_weight(head, 3));
}
void test_remove_box(void)
{
    TEST_ASSERT_EQUAL(SUCCESS,remove_box(&head,2));
    TEST_ASSERT_EQUAL(ERROR_NULL_PTR,remove_box(NULL,2));
    TEST_ASSERT_EQUAL(ERROR,remove_box(&head,2));
}
int main(void)
{
    UNITY_BEGIN();
    /**
     * @brief Running test cases.
     * 
     */
    RUN_TEST(test_create_box_list);
    RUN_TEST(test_print_box);
    RUN_TEST(test_search_box);
    RUN_TEST(test_count_box_color);
    RUN_TEST(test_average_volume_boxs);
    RUN_TEST(test_max_volume_box);
    RUN_TEST(test_min_volume_box);
    RUN_TEST(test_diff_maxvol_minvol);
    RUN_TEST(test_max_height_box);
    RUN_TEST(test_update_weight);
    RUN_TEST(test_remove_box);
    return UNITY_END();
}
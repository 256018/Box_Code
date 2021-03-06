#ifndef __BOX_C__
#define __BOX_C__
#include<stdio.h>
#include<stdlib.h>

/**
 * @brief define different color of boxes.
 * 
 */
typedef enum color_t
{
    RED = 0xFF, /**< Colour Code for RED */
    BLUE,       /**< Colour Code for BLUE */
    GREEN       /**< Colour Code for GREEN */
} color_t;

/**
 * @brief Define structure of a box.
 * 
 */
typedef struct box
{
    int id;
    float length;
    float breadth;
    float height;
    float weight;
    color_t color;
    struct box *next;
}box;

/**
 * @brief Define different type of errors.
 * 
 */
typedef enum error_t
{
    ERROR_NULL_PTR = -1,    /**< Null pointer dereferncing error */
    SUCCESS = 1,            /**< Compute operation is successful */
    NOT_FOUND = 0,           /**< Given thing cannot be found */
    ERROR = -2  
}error_t;

box *head;
float max_volume;
float min_volume;
float max_height;
float avg_vol;
int no_of_box_by_color;
float diff_btw_maxvol_minvol;

/**
 * @brief Create a box list object
 * 
 * @param head_ref 
 * @param new_id 
 * @param new_length 
 * @param new_breadth 
 * @param new_height 
 * @param new_weight 
 * @param new_color 
 * @return error_t 
 */
error_t create_box_list(box** head_ref, int new_id, float new_length, float new_breadth, float new_height, float new_weight, color_t new_color);

/**
 * @brief Defination of print_box function.
 * 
 * @param head_ref 
 * @return error_t 
 */
error_t print_box(box *head_ref);

/**
 * @brief Defination of search_box function
 * 
 * @param head_ref 
 * @param id 
 * @return error_t 
 */
error_t search_box(box *head_ref,int id);
error_t count_box_color(color_t color, box *head_ref);
error_t average_volume_boxs(box *head_ref);
error_t max_volume_box(box *head_ref);
error_t min_volume_box(box *head_ref);
error_t diff_maxvol_minvol(float maxvol, float minvol);
error_t update_weight(box *head_ref,int idw);
error_t remove_box(box** head_ref, int key);
error_t max_height_box(box *head_ref);
#endif
#include "header.h"

/**
 * @brief Count number of boxes which has same color
 * 
 * @param color 
 * @param head_ref 
 * @return error_t 
 */
error_t count_box_color(color_t color, box *head_ref)
{
    no_of_box_by_color=0;
    if(head_ref==NULL)
    {
        return ERROR_NULL_PTR;
    }
    while (head_ref != NULL)
    {
        if (head_ref->color == color)
        {
            no_of_box_by_color = no_of_box_by_color + 1;
        }
        head_ref = head_ref->next;
    }
    return SUCCESS;
}
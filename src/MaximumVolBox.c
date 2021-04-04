#include "header.h"

/**
 * @brief Function to find maximum volume box
 * 
 * @param head_ref 
 * @return error_t 
 */
error_t max_volume_box(box *head_ref)
{
    if(head_ref==NULL)
    {
        return ERROR_NULL_PTR;
    }
    while (head_ref != NULL)
    {
        if ((head_ref->length) * (head_ref->breadth) * (head_ref->height) > max_volume)
        {
            max_volume = (head_ref->length) * (head_ref->breadth) * (head_ref->height);
        }
        head_ref = head_ref->next;
    }
    return SUCCESS;
}
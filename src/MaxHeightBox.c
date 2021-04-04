#include "header.h"

/**
 * @brief Function to find the maximum height among all the boxes created.
 * 
 * @param head_ref 
 * @return error_t 
 */
error_t max_height_box(box *head_ref)
{
    if (head_ref == NULL)
    {
        return ERROR_NULL_PTR;
    }
    while (head_ref != NULL)
    {
        if (head_ref->height > max_height)
        {
            max_height = head_ref->height;
        }
        head_ref = head_ref->next;
    }
    return SUCCESS;
}
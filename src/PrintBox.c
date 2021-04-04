#include "header.h"

/**
 * @brief Display content of all boxes.
 * 
 * @param head_ref 
 * @return error_t 
 */
error_t print_box(box *head_ref)
{
    if (head_ref == NULL)
    {
        return ERROR_NULL_PTR;
    }
    while (head_ref != NULL)
    {
        head_ref = head_ref->next;
    }
    return SUCCESS;
}
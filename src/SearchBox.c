#include "header.h"

/**
 * @brief Find a particular box by it's ID.
 * 
 * @param head_ref 
 * @param id 
 * @return error_t 
 */
error_t search_box(box *head_ref, int id)
{
    if(head_ref==NULL)
    {
        return ERROR_NULL_PTR;
    }
    while (head_ref != NULL)
    {
        if (head_ref->id == id)
        {
            return SUCCESS;
        }
        head_ref = head_ref->next;
    }
    return NOT_FOUND;
}
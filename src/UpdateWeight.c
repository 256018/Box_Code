#include "header.h"

/**
 * @brief Update weight of a box by it's ID.
 * 
 * @param head_ref 
 * @param idw 
 * @return error_t 
 */
error_t update_weight(box *head_ref, int idw)
{
    if (head_ref == NULL)
    {
        return ERROR_NULL_PTR;
    }
    while (head_ref != NULL)
    {
        if (idw == head_ref->id)
        {
            head_ref->weight = 9.8;
            return SUCCESS;
        }
        head_ref = head_ref->next;
    }
    return ERROR;
}
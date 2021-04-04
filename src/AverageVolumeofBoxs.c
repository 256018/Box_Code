#include "header.h"

/**
 * @brief Function to calculate averagevolume of boxes
 * 
 * @param head_ref 
 * @return error_t 
 */
error_t average_volume_boxs(box *head_ref)
{
    if (head_ref == NULL)
    {
        return ERROR_NULL_PTR;
    }
    float sum = 0;
    while (head_ref != NULL)
    {
        sum = sum + ((head_ref->length) * (head_ref->breadth) * (head_ref->height));
        head_ref = head_ref->next;
    }
    avg_vol = sum / 2;
    return SUCCESS;
}
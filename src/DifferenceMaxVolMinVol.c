#include "header.h"

/**
 * @brief Function to find the difference between maximum and minimum volume of box.
 * 
 * @param maxvol 
 * @param minvol 
 * @return error_t 
 */
error_t diff_maxvol_minvol(float maxvol, float minvol)
{
    if (maxvol <= 0 || minvol <= 0 || minvol > maxvol)
    {
        return ERROR;
    }
    diff_btw_maxvol_minvol = maxvol - minvol;
    return SUCCESS;
}
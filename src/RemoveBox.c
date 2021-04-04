#include "header.h"

/**
 * @brief Remove a particular box by it's ID.
 * 
 * @param head_ref 
 * @param key 
 * @return error_t 
 */
error_t remove_box(box **head_ref, int key)
{
    if(*head_ref == NULL)
    {
        return ERROR_NULL_PTR;
    }
    
    // Store head node
    box *temp = *head_ref, *prev;

    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->id == key)
    {
        *head_ref = temp->next; // Changed head
        free(temp);             // free old head
        return SUCCESS;
    }

    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while (temp != NULL && temp->id != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in linked list
    if (temp == NULL)
    {
        return ERROR;
    }

    // Unlink the node from linked list
    prev->next = temp->next;

    free(temp); // Free memory

    return SUCCESS;
}
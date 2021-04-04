#include "header.h"

/**
 * @brief Create a box list object using malloc funtion
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
error_t create_box_list(box **head_ref, int new_id, float new_length, float new_breadth, float new_height, float new_weight, color_t new_color)
{
    /* Allocate a new node */
    box *new_node = (box *)malloc(sizeof(box));

    box *last = *head_ref;

    /* Put in the all data  */
    new_node->id = new_id;
    new_node->length = new_length;
    new_node->breadth = new_breadth;
    new_node->height = new_height;
    new_node->weight = new_weight;
    new_node->color = new_color;

    /* This new node is last node, so make next of it as NULL*/
    new_node->next = NULL;

    /* If the Linked List is empty, then make the new node as head */
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return SUCCESS;
    }

    /* Else traverse till the last node to update its address */
    while (last->next != NULL)
    {
        last = last->next;
    }
    /* Change the next of last node to new_node */
    last->next = new_node;
    return SUCCESS;
}
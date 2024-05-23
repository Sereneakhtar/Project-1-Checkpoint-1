#include "structs.h"
#include <cstdio>
#include <cstdlib>

// Function to insert a new node at the head of the list
NODE* listInsert(LIST* list, double key) {
    NODE* newNode = (NODE*)malloc(sizeof(NODE));
    if (newNode == NULL) {
        fprintf(stderr, "Error: cannot allocate memory\n");
        exit(1);
    }
    newNode->key = key;
    newNode->next = list->head;
    list->head = newNode;
    if (list->tail == NULL) {
        list->tail = newNode;
    }
    printf("Node with key %lf inserted\n", key);
    return newNode;
}

// Function to append a new node at the tail of the list
NODE* listAppend(LIST* list, double key) {
    NODE* newNode = (NODE*)malloc(sizeof(NODE));
    if (newNode == NULL) {
        fprintf(stderr, "Error: cannot allocate memory\n");
        exit(1);
    }
    newNode->key = key;
    newNode->next = NULL;
    if (list->tail != NULL) {
        list->tail->next = newNode;
    }
    list->tail = newNode;
    if (list->head == NULL) {
        list->head = newNode;
    }
    printf("Node with key %lf appended\n", key);
    return newNode;
}

// Function to search for a node with the specified key
NODE* listSearch(LIST* list, double key) {
    NODE* currentNode = list->head;
    while (currentNode != NULL) {
        if (currentNode->key == key) {
            printf("Query %lf FOUND in list\n", key);
            return currentNode;
        }
        currentNode = currentNode->next;
    }
    printf("Query %lf NOT FOUND in list\n", key);
    return NULL;
}

// Function to delete a node with the specified key
NODE* listDelete(LIST* list, double key) {
    NODE* currentNode = list->head;
    NODE* previousNode = NULL;
    while (currentNode != NULL) {
        if (currentNode->key == key) {
            if (previousNode != NULL) {
                previousNode->next = currentNode->next;
            } else {
                list->head = currentNode->next;
            }
            if (currentNode == list->tail) {
                list->tail = previousNode;
            }
            printf("Node with key %lf deleted\n", key);
            free(currentNode);
            return list->head;
        }
        previousNode = currentNode;
        currentNode = currentNode->next;
    }
    printf("Node with key %lf not found, cannot delete\n", key);
    return NULL;
}

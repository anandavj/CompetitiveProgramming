#include "single.h"

// check Empty
int isEmpty();

// Insert Procedure
void insertFirst(int newData);
void insertAt(int newData);
void insertMiddle(int newData, int left, int right);
void insertLast(int newData);

// Delete Procedure
void deleteFirst();
void deleteAt();
void deleteMiddle(int left, int right);
void deleteLast();

// Print Linked List
void printList();

// Search
bool isElement(int node);

// Sort
void sort();
// #ifdef SINGLE_H

#define SINGLE_H
#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *next;
};

Node *head;

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

// #endif
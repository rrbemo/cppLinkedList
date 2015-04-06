//
//  rbLinkedList.cpp
//  rbLinkedList
//
//  Created by Ryan Bemowski on 4/6/15.
//

#include <string>
#include <iostream>
#include <sstream>

#include "rbLinkedList.h"

rbLinkedList::rbLinkedList()
{
    h_ = new Node;
    z_ = new Node;
    h_->next = z_;
    z_->next = z_;
}

rbLinkedList::~rbLinkedList()
{
}

bool rbLinkedList::IsEmpty()
{
    if (h_->next == z_)
    {
        return true;
    }
    return false;
}

int rbLinkedList::Size()
{
    Node *currentNode;
    int nodeCount = 0;
    currentNode = h_;
    while (currentNode->next != z_)
    {
        nodeCount++;
        currentNode = currentNode->next;
    }
    return nodeCount;
}

void rbLinkedList::AddKey(int key)
{
    Node *newNode = new Node;
    newNode->key = key;
    newNode->next = h_->next;
    h_->next = newNode;
}

void rbLinkedList::RemoveKey(int key)
{
    Node *currentNode, *tempNode;
    currentNode = h_;
    while (currentNode->next != z_)
    {
        if (currentNode->next->key == key)
        {
            tempNode = currentNode->next;
            currentNode->next = currentNode->next->next;
            delete tempNode;
            return;
        }
        currentNode = currentNode->next;
    }
}

std::string rbLinkedList::ToString()
{
    std::stringstream ss;
    ss<<"Linked List:"<<std::endl;
    Node *currentNode;
    currentNode = h_;
    while (currentNode->next != z_)
    {
        ss<<currentNode->next->key<<std::endl;
        currentNode = currentNode->next;
    }
    return ss.str();}

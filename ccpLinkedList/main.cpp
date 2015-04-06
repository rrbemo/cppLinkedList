//
//  main.cpp
//  rbLinkedList
//
//  Created by Ryan Bemowski on 4/6/15.
//

#include <iostream>
#include "rbLinkedList.h"

int main(int argc, const char * argv[]) {
//    std::string waitString;
    rbLinkedList::rbLinkedList *ll = new rbLinkedList();
    std::cout<<"1isEmpty: "<<ll->IsEmpty()<<std::endl;
    ll->AddKey(4);
    ll->RemoveKey(4);
    std::cout<<"2isEmpty: "<<ll->IsEmpty()<<std::endl;
    ll->AddKey(5);
    std::cout<<"3isEmpty: "<<ll->IsEmpty()<<std::endl;
    ll->AddKey(6);
    ll->AddKey(4);
    ll->AddKey(5);
    ll->RemoveKey(4);
    ll->AddKey(6);
    ll->AddKey(4);
    ll->AddKey(5);
    ll->AddKey(6);
    std::cout<<"4isEmpty: "<<ll->IsEmpty()<<std::endl;
    std::cout<<"End Count: "<<ll->Size()<<std::endl;
    std::cout<<ll->ToString()<<std::endl;
    return 0;
}

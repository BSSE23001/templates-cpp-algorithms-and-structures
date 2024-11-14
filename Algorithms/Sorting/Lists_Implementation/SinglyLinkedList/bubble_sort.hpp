//
// Created by MuhammadHamza on 14/11/2024.
//

#ifndef BUBBLE_SORT_HPP
#define BUBBLE_SORT_HPP

void LinkedList::bubbleSort() {
    if (head == nullptr) { return; }
    bool swapped;
    do {
        swapped = false;
        for (Node *temp = head; temp && temp->getNext(); temp = temp->getNext()) {
            if (*(temp->getNext()) < *temp) {
                swapTheNodes(temp, temp->getNext());
            }
            swapped = true;
        }
    } while (swapped);
}

#endif //BUBBLE_SORT_HPP

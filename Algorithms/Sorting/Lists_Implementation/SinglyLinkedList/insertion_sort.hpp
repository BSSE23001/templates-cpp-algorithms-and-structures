//
// Created by MuhammadHamza on 14/11/2024.
//

#ifndef INSERTION_SORT_HPP
#define INSERTION_SORT_HPP

void LinkedList::insertionSort() {
    if (head == nullptr) { return; }
    if (head->getNext() == nullptr) { return; }
    Node *sorted = nullptr;
    Node *current = head;
    while (current) {
        Node *next = current->getNext();
        if (!sorted || *current < *sorted) {
            current->setNext(sorted);
            sorted = current;
        } else {
            Node *temp = sorted;
            while (temp->getNext() && *temp->getNext() < *current) {
                temp = temp->getNext();
            }
            current->setNext(temp->getNext());
            temp->setNext(current);
        }
        current = next;
    }
    head = sorted;
}

#endif //INSERTION_SORT_HPP

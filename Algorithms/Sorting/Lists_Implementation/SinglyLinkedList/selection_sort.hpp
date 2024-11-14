// Created by MuhammadHamza on 14/11/2024.

#ifndef SELECTION_SORT_HPP
#define SELECTION_SORT_HPP

void LinkedList::swapTheNodes(Node *a, Node *b) {
    // '=' operator must be implemented for Node for this function
    Node temp = *a;
    *a = *b;
    *b = temp;
}

void LinkedList::selectionSort() {
    if (head == nullptr) { return; }
    if (head->getNext() == nullptr) { return; }
    for (Node *temp = head; temp && temp->getNext(); temp = temp->getNext()) {
        Node *min = temp;
        for (Node *temp2 = temp->getNext(); temp2; temp2 = temp2->getNext()) {
            if (*temp2 < *min) {
                // '<' operator must be implemented for Node for this functionality
                min = temp2;
            }
        }
        swapTheNodes(temp, min);
    }
}

#endif //SELECTION_SORT_HPP

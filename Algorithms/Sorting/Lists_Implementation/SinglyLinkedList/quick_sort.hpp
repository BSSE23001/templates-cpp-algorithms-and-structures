//
// Created by MuhammadHamza on 14/11/2024.
//

#ifndef QUICK_SORT_HPP
#define QUICK_SORT_HPP

Node *LinkedList::partition(Node *start, Node *end, Node **new_start, Node **new_end) {
    Node *pivot = end;
    Node *prev = nullptr, *curr = start, *tail = pivot;
    while (curr != pivot) {
        if (curr->getValue() < pivot->getValue()) {
            if (!*new_start) *new_start = curr;
            prev = curr;
            curr = curr->getNext();
        } else {
            if (prev) prev->setNext(curr->getNext());
            Node *temp = curr->getNext();
            curr->setNext(nullptr);
            tail->setNext(curr);
            tail = curr;
            curr = temp;
        }
    }
    if (!*new_start) *new_start = pivot;
    *new_end = tail;

    return pivot;
}

Node *LinkedList::quickSortHelper(Node *head, Node *end) {
    if (!head || head == end) return head;
    Node *newHead = nullptr, *newEnd = nullptr;
    Node *pivot = partition(head, end, &newHead, &newEnd);
    if (newHead != pivot) {
        Node *temp = newHead;
        while (temp->getNext() != pivot) temp = temp->getNext();
        temp->setNext(nullptr);
        newHead = quickSortHelper(newHead, temp);
        temp = getTail();
        temp->setNext(pivot);
    }
    pivot->setNext(quickSortHelper(pivot->getNext(), newEnd));
    return newHead;
}

void LinkedList::quickSort() {
    quickSortHelper(head, getTail());
}

#endif //QUICK_SORT_HPP

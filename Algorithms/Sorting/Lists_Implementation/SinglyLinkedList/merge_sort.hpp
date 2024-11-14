//
// Created by MuhammadHamza on 14/11/2024.
//

#ifndef MERGE_SORT_HPP
#define MERGE_SORT_HPP

Node *LinkedList::merge(Node *left, Node *right) {
    if (!left || !right) { return nullptr; }
    if (*left < *right) {
        left->setNext(merge(left->getNext(), right));
        return left;
    } else {
        right->setNext(merge(left, right->getNext()));
        return right;
    }
}

Node *LinkedList::mergeSort(Node *head) {
    if (head == nullptr) { return head; }
    if (head->getNext() == nullptr) { return head; }
    Node *slow = head;
    Node *fast = head;
    while (fast->getNext() && fast->getNext()->getNext()) {
        slow = slow->getNext();
        fast = fast->getNext()->getNext();
    }
    Node *mid = slow->getNext();
    slow->setNext(nullptr);
    Node *left = mergeSort(head);
    Node *right = mergeSort(mid);
    return merge(left, right);
}

void LinkedList::mergeSort() {
    head = mergeSort(head);
}

#endif //MERGE_SORT_HPP

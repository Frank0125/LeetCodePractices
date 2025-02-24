#pragma once
//Given class by problem
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    ListNode(int x) : val(x), next(nullptr) {}
};

int random(int min, int max) {
    return min % (max - min + 1);
}
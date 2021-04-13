/*
 * @lc app=leetcode.cn id=61 lang=cpp
 *
 * [61] 旋转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (k==0 || head==nullptr || head->next==nullptr)
        {
            return head;
        }
        ListNode* p=head;
        int len=1;
        while (p->next!=nullptr)
        {
            ++len;
            p=p->next;
        }
        p=p->next=head;
        len=len-k%len;
        while (--len)
        {
            p=p->next;
        }
        head=p->next;
        p->next=nullptr;
        return head;
    }
};
// @lc code=end


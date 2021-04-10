/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
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
    ListNode* reverseList(ListNode* head) {
        ListNode *p=new ListNode,*q=nullptr;
        if (head==nullptr)
        {
            return head;    
        }
        //头插法
        while (head!=nullptr)
        {
            q=head;
            head=head->next;
            q->next=p->next;
            p->next=q;
        }
        return p->next;
    }
};
// @lc code=end


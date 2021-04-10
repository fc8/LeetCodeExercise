/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *h=new ListNode;
        ListNode *p=head,*q=h;
        while (p!=nullptr)  
        {
            if (p->val!=val)
            {
                q->next=p;
                p=p->next;
                q=q->next;
            }else{
                p=p->next;
            }
        }
        q->next=nullptr;
        return h->next;
        
    }
};
// @lc code=end


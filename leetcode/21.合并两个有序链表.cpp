/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head=new ListNode;
        ListNode *q=head;
        while (l1!=nullptr && l2!=nullptr)
        {
            if (l1->val>l2->val)
            {
                q->next=l2;
                l2=l2->next;
            }else{
                q->next=l1;
                l1=l1->next;
            }
            q=q->next;
        }

        if (l1!=nullptr)
        {
            q->next=l1;
        }else{
            q->next=l2;
        }
        return head->next;
    } 
};
// @lc code=end


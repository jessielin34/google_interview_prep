#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class LinkedList {
    public:
        vector<int> printReverseLinkedList(ListNode* root) {
            stack<int> nums;
            vector<ListNode*> points = storeptr(root);
            vector<int> result;

            for (int i = 0; i < points.size(); i++) {
                //int j = points[i];
                nums.push(root -> val);
                root = root -> next;
            }
            int n = nums.top();
            result.push_back(n);
            nums.pop();

            //while (root != nullptr) {
            //    nums.push(root->val);
            //    root = root->next;
            //}

            //while (!nums.empty()) {
            //    int n = nums.top();
            //    cout << n << endl;
            //    nums.pop();
            //}
        }

        int getLength(ListNode* root) {
            int count = 0;
            while (root != nullptr) {
                count += 1;
                root -> next;
            }
            return count;
        }

        vector<ListNode*> storeptr(ListNode* root) {
            vector<ListNode*> result;
            ListNode* dummyhead = new ListNode(0);
            int n = getLength(root); //example let's say we got 400 as the size
            //divide the size into equal groups with equal amounts in each group
            //using a for loop to the size of the divided of each group in the linkedlist.
            //push the first root value into the vector
            //if dummyhead == size of the divided group, push index into vector till the end
            //return result;
        }
};

//1 -> 2 -> 3 -> 4 -> 5 -> 6



// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};


 // } Driver Code Ends
//User function Template for C++

/*Link list node 
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    // void Reverse(Node *start,Node *end){
    //     Node *prev = NULL, *curr = begin->next, *first = curr;
    //     while(curr != end){
    //         Node *next = curr->next;
    //         curr->next = prev;
    //         prev = curr;
    //         curr = next;
    //     }
    //     begin->next = prev;
    //     first->next = end;
    // }
    // Node* reverseBetween(Node* head, int m, int n)
    // {
    //     //code here
    //     if(n==m) return head;
    //     Node *dummy = new Node(-1);
    //     dummy->next = head;
    //     Node *first = dummy, *end = head;
    //     int i=1,j=1;
    //     while(i!=m){
    //         i++;
    //         first = first->next;
    //     }
    //     while(j!=n){
    //         j++;
    //         last = last->next;
    //     }
    //     reverse(first,last->next);
    //     return dummy->next;
    // }
    void reverse(Node *begin,Node *end){

        Node *prev=NULL, *cur=begin->next, *first=cur;
        while(cur!=end){
            Node *next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        begin->next=prev;
        first->next=end;
    }
    Node* reverseBetween(Node* head, int m, int n)
    {
        //code here
        if(n==m) return head;
             Node * dummy=new Node(-1);
        dummy->next=head;
        Node *first=dummy,*last=head;
        int i=1,j=1;
        while(i!=m){
            i++;
            first=first->next;
        }
        while(j!=n){
            j++;
            last=last->next;
        }
        reverse(first,last->next);
        return dummy->next;
        
        
    }
};

// { Driver Code Starts.

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}



// Driver program to test above functions
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int N, m, n;
		cin >> N>>m>>n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		

        Solution ob;

		Node* newhead = ob.reverseBetween(head, m, n);
		printList(newhead);

		cout << "\n";



	}
	return 0;
}
  // } Driver Code Ends
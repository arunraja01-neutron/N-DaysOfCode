using namespace std;

 // } Driver Code Ends
class Solution{
public:
    struct node{
        int data;
        node *next;
    };
    node* makenode(int num){
        node *new_node = new node();
        new_node->data = num;
        return new_node;
    }
    int find(int N){
        node *head = new node();
        head->data = 1;
        node *itr = head;
        for(int i=2; i<=N; ++i){
            node *new_node = new node();
            new_node->data = i;
            itr->next = new_node;
            itr = new_node;
            if(i==N){
                new_node->next = head;
            }
        }
        itr = head;
        node *temp = NULL;
        while( itr->next ){
            //emp = itr->next->next;
            if(itr->next->next == itr){
                return itr->data;
            }
            itr->next = itr->next->next;
            itr = itr->next;
        }
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.find(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends

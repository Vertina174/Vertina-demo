#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* right;
    Node* left;
    Node(int val){
        right=left=NULL;
        data=val;
    }
};
int index=-1;
Node* tree(vector<int> preorder){
    ++index;
Node* root = new Node(preorder[index]);
if(preorder[index]==-1) return NULL;
root->left=tree(preorder);
root->right=tree(preorder);
return root;
}
void preorder1(Node* root){
    if (root==NULL) return;
    cout<<root->data<<" ";
    preorder1(root->left);
    preorder1(root->right);
}

void inorder(Node* root){
    if(root==NULL) return;
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}

int main()
{
    system("cls"); 
vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
Node* root=tree(preorder);
preorder1(root); 
cout<<endl;
inorder(root);

    return 0;
}
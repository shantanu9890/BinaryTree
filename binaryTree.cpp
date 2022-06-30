#include <iostream>
#include <bits/stdc++.h>
#include <queue>
#include "binaryTreeNode.h"

using namespace std;

int main(){

   // binaryTreeNode<int>*root=new binaryTreeNode<int>(10);
   // binaryTreeNode<int>*r=new binaryTreeNode<int>(20);
   // binaryTreeNode<int>*l=new binaryTreeNode<int>(30);

   // root->left=l;
   // root->right=r;

   // tree: 1 2 3 4 5 6 7 -1 -1 8 9 -1 -1 -1 -1 -1 -1 -1 -1

   // binaryTreeNode<int>*root= takeInputLevelWise();
   // cout<<"\nBinary Tree : "<<endl;
   // printTree(root);
   // cout<<"\nTotal nodes : "<<totalNodes(root)<<endl;
   
   // cout<<"inorder: ";inorder(root);cout<<endl;
   // cout<<"preorder: "; preorder(root);cout<<endl;
   // cout<<"postorder: ";postorder(root);cout<<endl;
   

   // int pre[]={1,2,4,5,8,9,3,6,7};
   // int in[]= {4,2,8,5,9,1,6,3,7};
   // binaryTreeNode<int>*root=buildTreeHelper(in,pre,0,9-1,0,9-1);
   // printTree(root);

   
   binaryTreeNode<int>*root1= takeInputLevelWise();
   binaryTreeNode<int>*root2= takeInputLevelWise();
   binaryTreeNode<int>*root3= takeInputLevelWise();
   // int d=diameter(root);
   // cout<<d<<endl;
   
   // pair<int,int>p=diameter_height(root);
   //diameter=p.second;
   // cout<<"diameter: "<<p.second<<endl;
   // cout<<"height: "<<p.first<<endl;
  class Comp{
				public:
				bool operator ()	(binaryTreeNode<int>* a,	binaryTreeNode<int>* b)	{
								return a->data	>	b->data;
				}
  }; 

   priority_queue<binaryTreeNode<int>* ,vector<binaryTreeNode<int>*>, Comp >p;
   p.push(root1);
   p.push(root2);
   p.push(root3);

   printTree(p.top());

}
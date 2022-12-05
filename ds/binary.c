#include<stdio.h>
<stdlib.h>
struct node
{
int data;
struct node *lchild,*rchild;
};
//function to insert a data in binary search tree
struct node *insert(struct node *root,int data)
{
struct node *t1,*t2;
t1=root;
t2=(struct node *)0;
//finding node to insert
while(t1!=(struct node *)0 && t1->data!=data)
{
t2=t1;
if(data<t1->data)
t1=t1->lchild;
else
t1=t1->rchild;
}
if(t1!=(struct node *)0;
//data already exist
printf("duplicate \n");
else
{
t1=(struct node *)malloc(sizeof(struct node *)0);
t1->data=data;
t1->lchild=t1->rchild=(struct node *)0;
if(root==(struct node *)0)
root=t1;
else
{
if(data<t2->data)
t2->lchild=t;
else
t2->rchild=t;
}
}
return root;
}
//function to display data in binary search tree
void(inorder(struct node *root);
{
if root!=(struct node*)0)
inorder(root->lchild);
printf("




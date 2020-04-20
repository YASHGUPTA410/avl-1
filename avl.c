#include<stdio.h> 
#include<stdlib.h> 
   
struct node 
{ 
    int key; 
    struct node *left, *right; 
}; 
struct node *newNode(int item) 
{ 
    struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->key = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
struct node* insert(struct node* node, int key) 
{ 
   if (node == NULL) return newNode(key); 
   if (key < node->key) 
   node->left  = insert(node->left, key); 
   else if (key > node->key) 
   node->right = insert(node->right, key);    
}

height(struct node* k)
{
int h;
while(k !=NULL)
{

h=1+max(height(k->left),height(k->right));
}
return h;
}

check(struct node* t,int lh,int rh)
{
int i,a,b,c,d;
struct node* t1,t2;
if((lh-rh)>1 || (rh-lh)<-1)
{
i==1;
printf(" is not balanced");
a=height(t->left);
b=height(t->right);
if(a>b)
t1=t->left;
else t1=t->right;
c=height(t1->left);
d=height(t1->right);
if(c>d)
t2=t1->left;
else t2=t1->right;
if(t1==t->left && t2==t1->left)
printf("L,L rotation");
else if (t1==t->right && t2==t1->right)
printf(" R,R rotation");
else if(t1==t->left && t2==t1->right)
printf("L,R rotation");
else("R,L rotation");
}

else
printf("is balanced");
}

void inorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        int lh=0,rh=0;
        inorder(root->left); 
        printf("%d \n", root->key); 
        lh=height(root);
        rh=height(root);
        check(root,lh,rh);
        inorder(root->right); 
    } 
} 

int main()
{
struct node *root = NULL; 
    root = insert(root, 1); 
    insert(root, 2); 
    insert(root, 3); 
    insert(root, 4); 
    insert(root, 5); 
    insert(root, 6); 
    inorder(root);
}
       
    
     
 
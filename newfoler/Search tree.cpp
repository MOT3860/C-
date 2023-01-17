#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct node{
    int info;
    struct node* left;
    struct node* right;
};
struct node* makeNode(int item){
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->info = item;
    p->left = NULL;
    p->right = NULL;
    return p;
}
struct node* insert(struct node* proot, int item){
    if(proot == NULL)
        proot = makeNode(item);
    else{
        if(proot->info == item)
            printf("p node has in binary search tree");
        else if(proot->info > item)
            proot->left = insert(proot->left, item);
        else if(proot->info < item)
            proot->right = insert(proot->right, item);
    }
    return proot;
}
struct node* inputNNode(struct node* proot, int n){
    if(n == 0)
        return NULL;
    int num;
    for(int i=0; i<n; i++){
        printf("Enter info of node : "); scanf("%d",&num);
        proot = insert(proot, num);
    }
    return proot;
}
void inOrder(struct node* proot){
    if(proot != NULL){
        inOrder(proot->left);
        printf("%d   ",proot->info);
        inOrder(proot->right);
    }
}
void printBinaryTree(struct node* proot, int level ){
    if(proot != NULL){
        printBinaryTree(proot->right, level+1);
        printf("\n");
        for(int i=0; i<level; i++)
            printf("\t");
        printf("%d",proot->info);
        printBinaryTree(proot->left, level+1);
    }
}
struct node* findMin(struct node* proot){
    while(proot->left != NULL){
        proot = proot->left;
    }
    return proot;
}
struct node* findMax(struct node* proot){
    while(proot->right != NULL)
        proot = proot->right;
    
    return proot;
}
struct node* deleteNode(struct node *proot, int item)
{
    //searching for the item to be deleted
    if(proot==NULL)
        return NULL;
    if (item >  proot->info)
        proot->right = deleteNode(proot->right, item);
    else if(item < proot->info)
        proot->left = deleteNode(proot->left, item);
    else
    {
        if(proot->left==NULL && proot->right==NULL)
        {
            printf("deleted %d", proot->info);
            free(proot);
            return NULL;
        }
        else if(proot->left==NULL || proot->right==NULL)
        {
            struct node *temp;
            if(proot->left ==NULL)
                temp = proot->right;
            else
                temp = proot->left;
            free(proot);
            return temp;
        }
        else
        {
           struct node* temp = findMin(proot->right);
           int num = proot->info;
           proot->info = temp->info;
           temp->info=num;
           temp->right = deleteNode(proot->right,item);
            }
        }
        return proot;
    }

int main(){
	int ch,n;
	struct node* root;
	do{
	printf("\n\n");
    printf("\n [1]. Input n node");
    printf("\n [2]. Insert node");
    printf("\n [3]. Print ");
    printf("\n [4]. Print In Binary Tree");
    printf("\n [5]. Search");
    printf("\n [6]. Delete");
    printf("\n Enter option : ");
        switch (ch)
        {
        case 1 :{
        	printf("Enter n node :"); scanf("%d",&n);
            root = inputNNode(root, n);
            break;
        }
        case 2 :{
            printf(" ");
            int arrNum[20] ={ 50,30,70,45,60,85,35,48,55,65,
                              75,90,33,40,47,52,58,63,73,80 };
            for(int i=0; i<20; i++){
                root = insert(root, arrNum[i]);
                printf("\n Inserted %d",arrNum[i]);
            }
            printf("\n Insert Completed");
            break;
        }
        case 3 :{
            printBinaryTree(root ,1);
            break;
            
        default:
            break;
        }
    }while(ch != 0);
     
    return 0;
}


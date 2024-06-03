#include<stdio.h>
#include<stdlib.h>
#define COUNT 3

struct node{
	int data;
	struct node* leftc;
	struct node* rightc;
};
int i=1, j=1, k=1;
void inOrderTraversal(struct node *root){
	if(root==NULL){
		return;
	}
	else{
		inOrderTraversal(root->leftc);
		printf("%d: %d\t", i, root->data);
		i++;
		inOrderTraversal(root->rightc);
	}
	
}
void preOrderTraversal(struct node *root){
	if(root==NULL){
		return;
	}
	else{
		printf("%d: %d\t", j, root->data);
		j++;
		preOrderTraversal(root->leftc);
		preOrderTraversal(root->rightc);
	}		
}
void postOrderTraversal(struct node *root){
	if(root==NULL){
		return;
	}
	else{
		postOrderTraversal(root->leftc);
		postOrderTraversal(root->rightc);
				
		printf("%d: %d\t", k, root->data);
		k++;

	}
}
int main(){
	struct node *root;
	root=(struct node*)malloc(sizeof(struct node));
	struct node *n1;
	n1=(struct node*)malloc(sizeof(struct node));
	struct node *n2;
	n2=(struct node*)malloc(sizeof(struct node));
	struct node *n3;
	n3=(struct node*)malloc(sizeof(struct node));
	struct node *n4;
	n4=(struct node*)malloc(sizeof(struct node));
	
	root->data=5;
	n1->data=15;
	n2->data=8;
	n3->data=7;
	n4->data=9;
	
	root->leftc=n1;
	root->rightc=n2;
	n1->leftc=n3;
	n1->rightc=n4;
	n2->leftc=NULL;
	n2->rightc=NULL;
	n3->leftc=NULL;
	n3->rightc=NULL;
	n4->leftc=NULL;
	n4->rightc=NULL;
	
	inOrderTraversal(root);
	printf("\n");
	preOrderTraversal(root);
	printf("\n");
	postOrderTraversal(root);
	
	free(root);
    free(n1);
    free(n2);
    free(n3);
    free(n4);
	
}

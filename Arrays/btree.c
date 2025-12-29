#include<stdio.h>
struct node{
    int key[3];
    int n;
};
void insert(struct node* root,int key){
    if(root->n<3){
        root->key[root->n]=key;
        root->n++;
    }else{
        printf("Node full\n");
    }
}
void print(struct node* root){
    for(int i=0;i<root->n;i++){
        printf("%d",root->key[i]);
    }
    printf("\n");
}
int main(){
    struct node root;
    root.n=0;
    insert(&root,10);
    insert(&root,20);
    insert(&root,30);
    insert(&root,40);
    insert(&root,50);
    print(&root);
    return 0;
}
//ID:6210451314 Name:Pornthida Suksankawanich
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;    
};

int main(){
    struct node *first ,*second=NULL,*third,*tmp, *tmp2;
    first = (struct node *)malloc(sizeof(struct node));
    int n ,count=0;
    scanf("%d",&n);
    if (n!=-1)
    {
        first->data=n;
        first->next = NULL;
        tmp=first;
    }else{
        first = NULL;
    }
    
    
    // printf("%d\n",tmp->data);
    while (count!=-1 && n!= -1)
    {
        scanf("%d",&n);
        if (n == -1){
            break;
        }
        second = (struct node *)malloc(sizeof(struct node));
        second->data=n;
        second->next = NULL;
        tmp2 = first;
        tmp = NULL;
        int check =0;
        while(tmp2 != NULL){
            if (n < tmp2->data )
            {
                second-> next = tmp2;
                check =1;
                if (tmp == NULL)
                {
                    first =second;
                }else{
                    tmp->next = second;
                }
                
                break;
            }
            // printf("fffff");
            tmp = tmp2;
            // tmp2 = tmp2->next;
            if (tmp2->next == NULL)
            {
                // printf("mmmm");
                break;
            }else{
                tmp2 = tmp2->next;
            }
            
        }
        if (check == 0)
        {
            tmp2->next = second;
        }
        
        
    }
    tmp = first;
    while(tmp != NULL){
        printf("%d\n",tmp->data);
        tmp = tmp->next;
    }

    
}
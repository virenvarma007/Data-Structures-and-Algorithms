#include <stdio.h>
#include <stdlib.h>

struct info{
	char name[100];
	int salary;
	int eno;
	struct info *next;
};

typedef struct info node;


node *create_list(){
	int k,n;
	node *p;
	node *head = ( node*) malloc(sizeof(node));
	printf("\n How many elements to enter:");
	scanf("%d",&n);
	printf("\nEnter Details:\n");
	for(int i=0;i<n;i++){
		if(i==0){
			head = (node*)malloc(sizeof(node));
			p = head;
		}
		else{
			p->next = (node*)malloc(sizeof(node));
			p = p->next;
		}
		printf("Enter the data to be inserted:\n");
		printf("Enter Employee Number: ");
		scanf("%d",&p->eno);
		printf("Enter Name: ");
		scanf(" %[^\n]",p->name);
		printf("Enter Salary: ");
		scanf("%d",&p->salary);

	}
	p -> next = NULL;
	return(head);
}



void display(node *head){
	int count = 1;
	node *p;
	p = head;

	while(p!=NULL){
		printf("\nNode %d:%d %s %d",count,p->eno,p->name,p->salary);
		count++;
		p=p->next;
	}
	printf("\n");
}


void insert(node **head){
	int k=0,rno;
	node *q,*p,*new;

	new = (node*) malloc(sizeof(node));
	printf("Enter the data to be inserted:\n");
	printf("Enter Employee Number = ");
	scanf("%d",&new->eno);
	printf("Enter Name = ");
	scanf(" %[^\n]",new->name);
	printf("Enter Salary = ");
	scanf("%d",&new->salary);
	printf("Insert at node = ");
	scanf("%d",&rno);

	p = *head;

	if(p->eno==rno){
		new->next = p;
		*head = new;
	}
	else{
		while((p!=NULL) && (p->eno!=rno)){
			q = p;
			p = p->next;
		}
		if(p == NULL){
			q->next = new;
			new->next = NULL;
		}
		else if(p->eno == rno){
			q->next = new;
			new->next = p;
		}
	}

}


void delete(node **head){
	int rno;
	node *p,*q;

	printf("Delete using Employee no = ");
	scanf("%d",&rno);

	p = *head;
	if(p->eno == rno){
		*head = p->next;
		free(p);
	}
	else{
		while((p!=NULL) && (p->eno!=rno)){
			q = p;
			p = p->next;
		}
		if(p == NULL){
			printf("Employee no not found\n");
		}
		else if(p->eno == rno){
			q->next = p->next;
			free(p);
		}
	}
}




void search(node **head){
	int key;
	node *p;

	printf("Enter the Employee no:");
	scanf("%d",&key);
	p = *head;
	if(p->eno == key){
		printf("Name = %s\nSalary = %d\n",p->name,p->salary);
	}
	else{
		while(p!=NULL){
			if(p->eno == key){
				printf("Name = %s\nSalary = %d\n",p->name,p->salary);
				break;
			}
			p = p->next;
		}
	}
}




void main(){
	int m;
	node *head = ( node*) malloc(sizeof(node));
	head = create_list();
Repeat:
	printf("\n\nPress 1 to display\nPress 2 to Insert\nPress 3 to delete\nPress 4 to search by Employee no.\nPress 5 to exit.\n");
	printf("Enter the operation = ");
	scanf("%d",&m);
	printf("\n");
	switch(m){
		case 1:
			display(head);
			goto Repeat;
		case 2:
			insert(&head);
			goto Repeat;
		case 3:
			delete(&head);
			goto Repeat;
		case 4:
			search(&head);
			goto Repeat;
		case 5:
			exit(0);
		default:
			printf("Invalid Input\n");
			goto Repeat;
	}

}

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
   int data;
   struct Node* prev;
   struct Node* next;
} Node;

void reset_head_to_start(struct Node** head) {
	while ((*head)->next != NULL) {
		(*head) = (*head)->next;
	}
}
void push(struct Node** head, int new_data) {
	Node *new_node = (struct Node*)malloc(sizeof(struct Node));

	new_node->data = new_data;
	new_node->next = (*head);
	new_node->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new_node;

	/* Change the pointer to point the new head, which is new_node */
	(*head) = new_node;
}
void print_list(const Node* head)
{
	/*Node *current;
	current = head;*/
	while (head != NULL)
	{
		printf("%d, ", head->data);
		head = head->prev;
	}
}
struct Node* get_node_at_index(struct Node* head, int index)
{
	int i;

	reset_head_to_start(&head);
	for (i = 0; head->prev != NULL; i++)
	{
		if (i == index)
			return head;
		head = head->prev;
	}
	return NULL;
}
int main() {
	Node *head = (struct Node*)malloc(sizeof(struct Node));
	/*Node *tail = (struct Node*)malloc(sizeof(struct Node));*/
	/*Node *value;*/

	head = NULL;
	push(&head, 1);
	push(&head, 2);
	push(&head, 3);
	push(&head, 4);
	push(&head, 5);

	reset_head_to_start(&head);
	/*value = get_node_at_index(head, 2);
	printf("%d\n", value->data);*/
	/*
	head->data = 1;
	head->prev = tail;
	head->next = NULL;
	tail->data = 2;
	tail->prev = NULL;
	tail->next = head;
	*/

	print_list(head);

	return (0);
}



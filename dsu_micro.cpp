
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
struct btree
{	int n;
	struct btree *left;
	struct btree *right;
}typedef btree,node;
btree *root,*ptr,*prev,*bfor,*x,*y;
int num;
char ch;

void main()
{	int c;
	void create(node *);
	void print(node *);
	void search(node *);
	void insert(node *);
	void modify(node *);
	void delet(node *);

	while(c!=7)
	{	clrscr();
		printf("1. CREATE
");
		printf("2. PRINT
");
		printf("3. SEARCH
");
		printf("4. INSERT
");
		printf("5. MODIFY
");
		printf("6. DELETE
");
		printf("7. EXIT

");
		printf("Enter your choice : ");
		scanf("%d",&c);
		switch(c)
		{
			case 1 :
			{	root=(node *)malloc(sizeof(node));
				printf("
Enter number : ");
				scanf("%d",&root->n);
				ptr=root;
				root->left=root->right=NULL;
				printf("Enter more(y/n)? ");
				ch=getch();
				create(root);
				break;
			}

			case 2 :
			{
				print(root);
				getch();
				break;
			}
			case 3 :
			{
				printf("
");
				search(root);
				getch();
				break;
			}
			case 4 :
			{
				printf("
");
				insert(root);
				getch();
				break;
			}
			case 5 :
			{
				printf("
");
				modify(root);
				getch();
				break;
			}
			case 6 :
			{
				printf("
");
				delet(root);
				getch();
				break;
			}
			case 7 :
				exit(0);

			default:
			{
				printf("
Invalid choice");
				getch();
				break;
			}
		}
	}
	getch();
}

void create(node *ptr)
{
	while(ch == 'y')
	{
		printf("
");
		ptr=prev=root;
		printf("Enter number : ");
		scanf("%d",&num);
		do
		{
			if(num < ptr->n)
			{
				prev=ptr;
				ptr=ptr->left;
			}
			else if(num > ptr->n)
			{
				prev=ptr;
				ptr=ptr->right;
			}
			else
			{
				prev=NULL;
				break;
			}
		}while(ptr);

		if(prev)
		{
			ptr=(node *)malloc(sizeof(node));
			ptr->n=num;
			ptr->left=ptr->right=NULL;
			if(ptr->n < prev->n)
			{
				prev->left=ptr;
				if(prev == root)
					root=prev;
			}
			if(ptr->n > prev->n)
			{
				prev->right=ptr;
				ptr->left=ptr->right=NULL;
				if(prev == root)
					root=prev;
			}
		}
		else
			printf("'%d' is already present.. 
",num);

		printf("Enter more(y/n)? ");
		ch=getch();
	}
}

void print(node *ptr)
{
	void inprint(node *);
	void preprint(node *);
	void postprint(node *);

	if(!ptr)
	{
		printf("Tree is empty...");
		return;
	}
	printf("
Root is '%d'
",root->n);
	printf("
INORDER   : ");
	inprint(root);
	printf("
PREORDER  : ");
	preprint(root);
	printf("
POSTORDER : ");
	postprint(root);
}


void inprint(node *ptr)
{
	if(!ptr)
		return;

	inprint(ptr->left);
	printf("%2d ",ptr->n);
	inprint(ptr->right);
	return;
}

void preprint(node *ptr)
{
	if(!ptr)
		return;

	printf("%2d ",ptr->n);
	preprint(ptr->left);
	preprint(ptr->right);
	return;
}
void postprint(node *ptr)
{
	if(!ptr)
		return;

	postprint(ptr->left);
  	postprint(ptr->right);
	printf("%2d ",ptr->n);
	return;
}

void search(node *ptr)
{
	if(!ptr)
	{
		if(ptr == root)
		{
			printf("Tree is empty... You can't search anything...");
			return;
		}
	}
	printf("Enter the number to search : ");
	scanf("%d",&num);

	while(ptr)
	{
		if(ptr->n == num)
		{
			printf("Success... You found the number...");
			return;
		}
		else if(ptr->n < num)
			ptr=ptr->right;
		else
			ptr=ptr->left;
	}
	printf("Tree don't contain '%d'...",num);
}

void insert(node *ptr)
{
	if(!ptr)
	{
		printf("Tree is empty...First create & then insert... ");
		return;
	}
	printf("
");
	ptr=prev=root;
	printf("Enter number to be inserted : ");
	scanf("%d",&num);

	do{
		if(num < ptr->n)
		{
			prev=ptr;
			ptr=ptr->left;
		}
		else if(num > ptr->n)
		{
			prev=ptr;
			ptr=ptr->right;
		}
		else
		{
			prev=NULL;
			break;
		}
	}while(ptr);

	if(prev)
	{
		ptr=(node *)malloc(sizeof(node));
		ptr->n=num;
		ptr->left=ptr->right=NULL;

		if(ptr->n < prev->n)
		{
			prev->left=ptr;
			if(prev == root)
				root=prev;
		}
		if(ptr->n > prev->n)
		{
			prev->right=ptr;
			ptr->left=ptr->right=NULL;
			if(prev == root)
				root=prev;
		}
		printf("
'%d' is inserted...",num);
	}
	else
		printf("'%d' is already present...",num);
	return;
}

void modify(node *ptr)
{
	int mod;
	if(!ptr)
	{
		if(ptr == root)
		{
			printf("Tree is empty... You can't modify anything...");
			return;
		}
	}
	printf("Modification of particular number can't create a binary
tree...");
	getch();
	printf("
Enter the number to get modified : ");
	scanf("%d",&num);
	prev=ptr;
	while(ptr)
	{
		if(ptr->n == num)
		{
			x=ptr;
			mod=x->n;
			printf("Then enter new number : ");
			scanf("%d",&num);
			bfor=ptr=root;
			while(ptr)
			{
				if(ptr->n == num)
				{
					printf("'%d' already present...Modification denied...,",num);
					return;
				}
				else if(ptr->n < num)
				{
					bfor=ptr;
					ptr=ptr->right;
				}
				else
				{
					bfor=ptr;
					ptr=ptr->left;
				}
			}
			if(x==root)
			{
				y=x->right;
				root=y;
				while(y->left)
					y=y->left;
				y->left=x->left;
				free(x);
			}
			else if(!(x->left) && !(x->right))
			{
				if(prev->left == x)
				{
					prev->left=NULL;
					free(x);
				}
				else if(prev->right == x)
				{
					prev->right=NULL;
					free(x);
				}
			}
			else if(!(x->left))
			{
				if(prev->left == x)
				{
					prev->left=x->right;
					free(x);
				}
				else if(prev->right == x)
				{
					prev->right=x->right;
					free(x);
				}
			}
			else if(!(x->right))
			{
				if(prev->left == x)
				{
					prev->left=x->left;
					free(x);
				}
				else if(prev->right == x)
				{
					prev->right=x->left;
					free(x);
				}
			}
			else
			{
				y=x->right;
				while(y->left)
					y=y->left;
				y->left=x->left;
				if(prev->left == x)
					prev->left=y;
				else if(prev->right == x)
					prev->right=y;
				free(x);
			}
			ptr=(node *)malloc(sizeof(node));
			ptr->n=num;
			ptr->left=ptr->right=NULL;
			if(ptr->n < bfor->n)
			{
				bfor->left=ptr;
				if(bfor == root)
					root=bfor;
			}
			if(ptr->n > bfor->n)
			{
				bfor->right=ptr;
				ptr->left=ptr->right=NULL;
				if(bfor == root)
					root=bfor;
			}
			printf("'%d' is modified by '%d'",mod,ptr->n);
			return;
		}
		else if(ptr->n < num)
		{
			prev=ptr;
			ptr=ptr->right;
		}
		else
		{
			prev=ptr;
			ptr=ptr->left;
		}
	}
	printf("Tree don't contain '%d'...",num);
}

void delet(node *ptr)
{
	if(!ptr)
	{
		if(ptr == root)
		{
			printf("Tree is empty... You can't delete anything...");
			return;
		}
	}
	printf("Enter the number to get deleted : ");
	scanf("%d",&num);
	prev=ptr;

	while(ptr)
	{
		if(ptr->n == num)
		{
			if(ptr==root)
			{
				x=ptr->right;
				root=x;
				while(x->left)
					x=x->left;
				x->left=ptr->left;
				free(ptr);
				printf("'%d' is deleted...",num);
				return;
			}
			else if(!(ptr->left) && !(ptr->right))
			{
				if(prev->left == ptr)
					prev->left=NULL;
				else
					prev->right=NULL;
				free(ptr);
				printf("'%d' is deleted...",num);
				return;
			}
			else if(!(ptr->left))
			{
				if(prev->left == ptr)
				{
					prev->left=ptr->right;
					free(ptr);
				}
				else if(prev->right == ptr)
				{
					prev->right=ptr->right;
					free(ptr);
				}
				printf("'%d' is deleted...",num);
				return;
			}
			else if(!(ptr->right))
			{
				if(prev->left == ptr)
				{
					prev->left=ptr->left;
					free(ptr);
				}
				else if(prev->right == ptr)
				{
					prev->right=ptr->left;
					free(ptr);
				}
				printf("'%d' is deleted...",num);
				return;
			}
			else
			{
				x=ptr->right;
				while(x->left)
					x=x->left;
				x->left=ptr->left;
				if(prev->left == ptr)
					prev->left=ptr->right;
				else if(prev->right == ptr)
					prev->right=ptr->right;
				free(ptr);
				printf("'%d' is deleted...",num);
				return;
			}
		}
		else if(ptr->n < num)
		{
			prev=ptr;
			ptr=ptr->right;
		}
		else
		{
			prev=ptr;
			ptr=ptr->left;
		}
	}
	printf("Tree don't contain '%d'...",num);
}

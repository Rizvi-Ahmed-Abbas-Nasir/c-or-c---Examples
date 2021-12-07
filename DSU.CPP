	#include<stdio.h>
	#include<conio.h>
	#include<stdlib.h>
	int main(){
		int a[100],size,n,i,j,ch,pos,value;
		while(1){
		printf("\n1. Create an Array\n2. Insert Elements\n3. Delete Element\n4. Display\n5. Exit\n Enter Your Choice:\n");
		scanf("%d",&ch);
		switch(ch){
		case 1:
			printf("Enter the size of an array:");
			scanf("%d",&size);	//size=5
			printf("Enter %d array elements\n",size);
			for(i=0;i<size;i++)	// 12,10,11,16,18
				scanf("%d",&a[i]);

		break;
		case 2:
			printf("Array before Insertion:");
			for(i=0;i<size;i++)
				printf("%d\n",a[i]);
			printf("Enter the position where you want to insert the element:");
			scanf("%d",&pos);	//pos=3
			printf("Enter the value to be inserted:");
			scanf("%d",&value);	//value =13			
			for(i=size;i>=pos;i--) 
				i=2,pos=3;
				a[i]=a[i-1];		// 12,10,13,11,16,18
			a[pos-1]=value;
			printf("Array after insertion:");
			for(i=0;i<size+1;i++)
				printf("%d\n",a[i]);
			size++;
			break;
			case 3:
			printf("Array before deletion:\n");
			for(i=0;i<size;i++){
				printf("%d\n",a[i]);
			}
			printf("Enter the location where you wish to delete element:\n");
			scanf("%d", &pos);
			if (pos >= size+1)
			printf("Deletion not possible.\n");
			else
			{
 			for (i = pos - 1; i < size - 1; i++)	// 12,13,11,16,18
				a[i] = a[i+1];			//pos=2,i=5
 			printf("Resultant array:\n");
 			for (i = 0; i < size - 1; i++)
				printf("%d\n", a[i]);
			size--;
			}
			break;
			case 4:
			printf("Array elements are:\n");
			for(i=0;i<size;i++)
				printf("%d\n",a[i]);
			break;
			case 5:
			exit(1);
			default:
				printf("Wrong choice. Please try again");

		}
		}
		return 0;
	}
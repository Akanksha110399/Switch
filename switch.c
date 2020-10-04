#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice;
	printf("1.Pizza--Rs.239\n2.Burger--Rs.129\n3.Pasta--Rs.179\n4.French Fries--Rs.99\n5.Sandwich--Rs.149\n");//Menu Given
	printf("Enter your Choice between 1 to 5\n");//Selecting choice 
	scanf("%d",&choice);
	switch(choice)
		{
		case 1:printf("Food item - Pizza\nPrice - Rs.239\n");//if choice=1
			break;
	    case 2:printf("Food item - Burger\nPrice - Rs.129\n");//if choice=2
	        break;
	    case 3:printf("Food item - Pasta\nPrice - Rs.179\n");//if choice=3
	        break;   
	    case 4:printf("Food item - French Fries\nPrice - Rs.99\n");//if choice=4
	        break;
	    case 5:printf("Food item - Sandwich\nPrice - Rs.149\n");//if choice=5
	        break;
	    default:printf("Enter correct choice,The number you have entered is not in the menu\n");//if choice doesn't match
		}
    return 0;
}

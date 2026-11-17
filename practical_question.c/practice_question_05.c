//program to implementlinear queue using array
#include <stdio.h>
#include <stdlib.h>

void initqueue(void);
void display(void);

int queue[5];
long front, rear;

int main()
{
    int choice, info;
    //Initialising queue
    initqueue();
    do
    {
        //Displaying menu
        printf(" MENU  \n");
        printf("1.Insert an element in queue\n");
        printf("2.Delete an element from queue\n");
        printf("3.Display the queue\n");
        printf("4.Exit!\n");
        printf("Your choice :");
        scanf("%i", &choice);
        switch (choice)
        {
        case 1:
            if (rear < 4)
            {
                printf("enter the number");
                scanf("%d", &info);
                if (front == -1)
                {
                    front++;
                    rear = 0;
                }
                else
                    rear = rear + 1;
                queue[rear] = info;
            }
            else
            {
                printf("queue is full");
                getchar();
            }
            break;
        case 2:
            {
                int val;
                if (front != -1)
                {
                    val = queue[front];
                    if (front == rear)
                    {
                        front = -1;
                        rear = -1;
                    }
                    else
                    {
                        front = front + 1;
                        printf("no delete is =%d", val);
                    }
                }
                else
                {
                    printf("queue is empty");
                    getchar();
                }
            }
            break;

        case 3:
            display();
            getchar();
            break;

        case 4:
            exit(0);
        default:
            printf("you entered wrong choice!");
        }

    } while (choice != 4);

    return 0;
}

void initqueue()
{
    //Initialising front & rear to -1
    front = rear = -1;
}

/*diaplaying the current position of the queue*/
void display()
{
    int i;
    //Displaying element in queue
    for (i = front; i <= rear; i++)
    {
        printf("%i", queue[i]);
    }
}

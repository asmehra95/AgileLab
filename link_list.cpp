#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
int menu(void );
void print(struct node *);
using namespace std;
struct node
{
    int info;
    struct node *link;
};

int main()
{
    struct node *start,*n,*temp;
    int flag=1;
    int i=0;
    int a;
    char ch;
while (1)
{
    a=menu();
      switch (a)
{
case 1 :
    while (flag)
    {
      i++;
      n=(struct node *)malloc(sizeof(struct node));
      cout << "Enter the element: ";
      cin>>n->info;
      n->link=NULL;
      if (i==1)
          start=n;
       else
        temp->link=n;
       temp=n;
      cout <<"do you want to insert more ? (y/n)";
      cin>> ch;
      if(ch=='n' || ch=='N')
      {
          flag=0;
      }
    }
    print(start);
    break;

case 2:
        system("cls");

        cout << "\n\n \t\t\t 1. at start";
        cout << "\n\n \t\t\t 2. at end";
        cout << "\n\n \t\t\t 3. at Nth position from start";
        cout << "\n\n \t\t\t 4. at Nth position from end ";
        cout << "\n\n \t\t\t Enter your choice :\n " ;
        cin >> ch;
        switch (ch)
        {
        case 1:
            if (start == NULL)
            {
                cout << "No list found!";
            }else
            {
                n=(struct node *)malloc(sizeof(struct node));
                cout << "Enter the element: ";
                cin >> n->info;
                n->link=start;
                start=n;
                print(start);

                cin>>ch;
            }
        };
        break;
        case 0:
            exit(0);
};
getch();
}

}
int menu()
{
  int a;
  system("cls");
  cout << "\n\n \t\t\t 1. Make a continuous list";
  cout << "\n\n \t\t\t 2. Insert an element";
  cout << "\n\n \t\t\t 3. Delete an element";
  cout << "\n\n \t\t\t 4. Exit";
  cout << "\n\n \t\t\t Enter your choice :\n " ;
  cin >> a;
  if (a==4 )
  {
      return 0;
  }
 return a;
}

void print(struct node *st)
{
    cout << "\n Current List is :  \t \t \n";
  do
  {
      cout << " "<<st->info<<" ";
      st=st->link;
      if (st->link== NULL)
      {
          cout<< " " << st->info << " ";
      }
  }while(st->link != NULL);
       // cout << " "<<st->info<<" ";
     // st=st->link;
}

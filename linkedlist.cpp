/*
Program: Singly Linked Queue

*/

#include <iostream>
#include <iomanip>
using namespace std;

struct node{
	int data;
	node *next;
}*head;

void createlist(int);
void addbegin(int);
void addafter(int,int);
void display();
void del(int);
void delfirstelem();
void count();
void reverse();
void search(int);

int main()
{
	while(1)
	{
		int choice;
		cout << "[1] - Create a list\n";
		cout << "[2] - Add at the beginning\n";
		cout << "[3] - Add after\n";
		cout << "[4] - Delete\n";
		cout << "[5] - Display\n";
		cout << "[6] - Count\n";
		cout << "[7] - Reverse\n";
		cout << "[8] - Search\n";
		cout << "[9] - Exit\n";
		cout << "===================\n";
		cout << "Enter your choice: ";
		cin >> choice;
		int n, num, pos;
		switch(choice){
			case 1:
				cout << "\nHow many node you want: ";
				cin >> n;
				cout << "\nEnter " << n << " element(s)\n";
				for(int i=0;i<n;i++)
				{
					cin >> num;
					createlist(num);
				}
				display();
				break;
			case 2:
				cout << "\nEnter a number (add at beginning)";
				cin >> num;
				addbegin(num);
				display();
				break;
			case 3:
				cout << "\nEnter the value and position of your element: ";
				cin >> num >> pos;
				addafter(num,pos);
				display();
				break;
			case 4:
				cout << "\nEnter the value to be deleted from the list: ";
				cin >> num;
				del(num);
				//cout << "delete first element ";
				//delfirstelem();
				system("pause>0");
				display();
				break;
			case 5:
				display();
				break;
			case 6:
				count();
				break;
			case 7:
				reverse();
				display();
				break;
			case 8:
				cout << "\nEnter the value to search: ";
				cin >> num;
				search(num);
				break;
			case 9:
				exit(1);
			case 0:
				delfirstelem();
				break;
			default:
				cout << "\nWrong choice!\n";
		}
		cout << endl;
		system("pause");
	}	
	return 0;
}

void delfirstelem()
{
	node *tmp;
	tmp=head;
	head=tmp->next;
	delete tmp;
}


//creation
void createlist(int n)
{
	node *p, *tail;
	tail = new node;
	tail->data = n;
	tail->next = NULL;
	if(head==NULL)
		head=tail;
	else
	{
		p=head;
		while(p->next!=NULL)
			p=p->next;
		p->next = tail;
	}
}

//add begin
void addbegin(int n)
{
	node *tmp;
	tmp = new node;
	tmp->data = n;
	tmp->next = head;
	head=tmp;
}

//add after
void addafter(int n,int pos)
{
	node *tmp, *p;

	if(head==NULL)
	{
		cout << "You have to create first the linked list\n";
		return;
	}

	p=head;
	for(int i=0;i<pos-1;i++)
	{
		p=p->next;
		if(p==NULL)
		{
			cout << "There are less than "<<pos<<" elements";
			return;
		}
	}
	tmp = new node;
	tmp->next = p ->next;
	tmp->data = n;
	p->next = tmp;

}

void del(int n)
{
	node *tmp,*p;
	//delete at the beginning
	if(head==NULL)
	{
		cout << "You have to create first the linked list\n";
		return;
	}
	if(head->data == n)
	{
		tmp = head;
		head = head->next;
		delete tmp;
		return;
	}
	p=head;
	//delete in between
	while(p->next->next!=NULL)
	{
		if(p->next->data == n)
		{
			tmp = p->next;
			p->next = tmp->next;
			delete tmp;
			return;
		}
		p=p->next;
	}
	if(p->next->data == n)
	{
		tmp = p->next;
		delete tmp;
		p->next=NULL;
		return;
	}
	cout << "\nElement " << n << " not found\n";
}

//count
void count()
{
	node *p;
	p=head;
	int cnt=0;
	while(p!=NULL)
	{
		p=p->next;
		cnt++;
	}
	cout << "There are " << cnt <<" elements is the list\n";
}

void reverse()
{
	node *p1, *p2, *p3;
	//for one element only
	if(head->next==NULL)
		return;
	p1=head;
	p2=p1->next;
	p3=p2->next;
	p2->next=p1;
	p1->next=NULL;

	while(p3!=NULL)
	{
		p1=p2;
		p2=p3;
		p3=p3->next;
		p2->next=p1;
	}
	head=p2;
}

void search(int n)
{
	node *p;
	p=head;
	int pos=1;
	while(p!=NULL)
	{
		if(p->data==n)
		{
			cout << "The element value "<<n<<" found at position "<< pos;
			return;
		}
		pos++;
		p=p->next;
	}
	cout << "The element value "<<n<<" is not found\n";
}

//display
void display()
{
	node *p;
	if(head==NULL)
	{
		cout << "List is empty!\n";
		return;
	}
	p=head;
	cout << endl;
	cout << setw(20) << "POINTER" << setw(20) << "DATA" << setw(20) << "NEXT" << endl;
	while(p!=NULL)
	{
		cout << setw(20) << p << setw(20) << p->data << setw(20) << p->next << endl;
		p = p->next;
	}
	cout << endl;
}

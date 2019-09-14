//				KBC Game
//				*** ****

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int day,year,mon;
long int amt=0;
char name[30];
void info()
{
	clrscr();
	cout<<"\nEnter Name :";
	cin>>name;

	cout<<"\nEnter Birth Year  :";
	cin>>year;

	{       //Year Validation

		if(year>2018)
		{
			cout<<"\n\n\n\n\t\tEnter Valid Year...!";
			getch();
			info();
		}

	}	//Year Validation Over

	cout<<"Enter Birth Month :";
	cin>>mon;

	{	//Month Validation

		if(mon>12)
		{
			cout<<"\n\n\n\n\t\t\tEnter Valid Month...!";
			getch();
			info();
		}

	}	//Month Vadlidation Over


		cout<<"Enter Birth Day   :";
		cin>>day;

	{	//Day Validation

		if(mon==2)
		{
			int temp;
			temp=year;
			temp=year%4;
			if(temp==0)
			{
				if(day>29)
				{
					cout<<"\n\n\n\n\t\t\tEnter Valid Day...!";
					getch();
					info();
				}
			}
		 }
		else if(day>31)
		{
			cout<<"\n\n\n\n\t\t\tEnter Valid Day...!";
			getch();
			info();
		}

	}       //Day Validation Over

}
void score()
{
	cout<<"\nHello "<<name<<endl;

	{
		int i,a=0;

		for(i=year;i<2018;i++)
			a++;

		cout<<"Your Age is:"<<a;
		getch();
	       //	exit(0);
	}
}
void start()
{
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tHello "<<name<<" Welcome To KBC ";
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tPress any key Start ";
	getch();
	clrscr();
}
void kbc_demo()
{
	clrscr();

	cout<<"\n\t\t\t KBC Questios Bank...";

	cout<<"\n\n\t\t\tLevel 1"<<endl;
	cout<<"\t\t\t***** *"<<endl;
	{
		cout<<"\t\tQ01)        5000"<<endl;
		cout<<"\t\tQ02)      20,000"<<endl;
		cout<<"\t\tQ03)      50,000"<<endl;
		cout<<"\t\tQ04)    1,30,000"<<endl;

	}

	cout<<"\n\t\t\tLevel 2"<<endl;
	cout<<"\t\t\t***** *"<<endl;
	{
		cout<<"\t\tQ05)    3,30,000"<<endl;
		cout<<"\t\tQ06)   10,00,000"<<endl;
		cout<<"\t\tQ07)   20,00,000"<<endl;
		cout<<"\t\tQ08)   35,00,000"<<endl;

	}

	cout<<"\n\t\t\tLevel 3"<<endl;
	cout<<"\t\t\t***** *"<<endl;
	{
		cout<<"\t\tQ09)   50,00,000"<<endl;
		cout<<"\t\tQ10)   75,00,000"<<endl;
		cout<<"\t\tQ11) 1,00,00,000"<<endl;
		cout<<"\t\tQ12) 5,00,00,000"<<endl;

	}
		cout<<"\n\t\tPress any key to start the Game";
		getch();
		clrscr();
}
void kbc()
{
	int ans;

	cout<<"\n\n\n\n\n\n\tQ1)Who Is The Founder of C Language?"<<endl;
	cout<<"\t1)Steve Job	2)Jeff Bezos"<<endl;
	cout<<"\t3)Denis Ritche 4)Linus Torvald"<<endl;

	cout<<"\tEnter Answer :";
	cin>>ans;

	{	//Q=1
		if(ans==3)
		{
			clrscr();
			cout<<"\n\n\n\n\n\n\tANSEWR\n\tQ1)Who Is The Founder of C Language?"<<endl;
			cout<<"\t1)Steve Job-Apple CEO	     2)Jeff Bezos-Amazon CEO"<<endl;
			cout<<"\t3)Denis Ritche-Founder of C 4)Linus Torvald-Father of Linux"<<endl;
			getch();

			clrscr();
			cout<<"\n\n\n\n\n\n\tQ2)Who Is The Founder of Linus Language?"<<endl;
			cout<<"\t1)Steve Job	2)Jeff Bezos"<<endl;
			cout<<"\t3)Denis Ritche 4)Linus Torvald"<<endl;

			cout<<"\tEnter Answer :";
			cin>>ans;
		}
		else
		{
			clrscr();
			cout<<"\n\n\n\n\n\n\tQ1)Who Is The Founder of C Language?"<<endl;
			cout<<"\t1)Steve Job-Apple CEO	     2)Jeff Bezos-Amazon CEO"<<endl;
			cout<<"\t3)Denis Ritche-Founder of C 4)Linus Torvald-Father of Linux"<<endl;
			cout<<"\tYou Won :"<<amt;
			getch();
			exit(0);
		}
	}	//Q-1

	{	//Q=2

		if(ans==4)
		{
			clrscr();
			cout<<"\n\n\n\n\n\n\n\tANSWER\n\tQ2)Who Is The Founder of Linux Language?"<<endl;
			cout<<"\t1)Steve Job-Apple CEO	     2)Jeff Bezos-Amazon CEO"<<endl;
			cout<<"\t3)Denis Ritche-Founder of C 4)Linus Torvald-Father of Linux"<<endl;
			getch();

			clrscr();

			cout<<"\n\n\n\n\n\n\tQ3)Who Is The Founder of Java Language?"<<endl;
			cout<<"\t1)Steve Job	 2)Jeff Bezos"<<endl;
			cout<<"\t3)James Gosling 4)Linus Torvald"<<endl;

			cout<<"\tEnter Answer :";
			cin>>ans;
		}
		else
		{
			clrscr();
			cout<<"\n\n\n\n\n\n\n\tANSWER\n\tQ2)Who Is The Founder of Linux Language?"<<endl;
			cout<<"\t1)Steve Job-Apple CEO	         2)Jeff Bezos-Amazon CEO"<<endl;
			cout<<"\t3)James Gosling-Founder of Java 4)Linus Torvald-Father of Linux"<<endl;
			amt=5000;
			cout<<"\tYou Won :"<<amt;
			getch();
			exit(0);
		}
	}	//Q-2

	{	//Q=3

		if(ans==3)
		{
			clrscr();
			cout<<"\n\n\n\n\n\n\n\tANSWER\n\tQ3)Who Is The Founder of Java Language?"<<endl;
			cout<<"\t1)Steve Job-Apple CEO	         2)Jeff Bezos-Amazon CEO"<<endl;
			cout<<"\t3)James Gosling-Founder of Java 4)Linus Torvald-Father of Linux"<<endl;
			getch();

			clrscr();

			cout<<"\n\n\n\n\n\n\tQ4)Who Is The Founder of HTML Language?"<<endl;
			cout<<"\t1)Steve Job	2)Jeff Bezos"<<endl;
			cout<<"\t3)Timlee       4)Linus Torvald"<<endl;

			cout<<"\tEnter Answer :";
			cin>>ans;
		}
		else
		{
			clrscr();
			cout<<"\n\n\n\n\n\n\n\tANSWER\n\tQ3)Who Is The Founder of Java Language?"<<endl;
			cout<<"\t1)Steve Job-Apple CEO	         2)Jeff Bezos-Amazon CEO"<<endl;
			cout<<"\t3)James Gosling-Founder of Java 4)Linus Torvald-Father of Linux"<<endl;
			amt=20000;
			cout<<"\tYou Won :"<<amt;
			getch();
			exit(0);
		}
	}	//Q-3

	{	//Q=4

		if(ans==3)
		{
			clrscr();
			cout<<"\n\n\n\n\n\n\n\tANSWER\n\tQ4)Who Is The Founder of HTML Language?"<<endl;
			cout<<"\t1)Steve Job-Apple CEO	        2)Jeff Bezos-Amazon CEO"<<endl;
			cout<<"\t3)Timlee-Founder of HTML       4)Linus Torvald-Father of Linux"<<endl;
			getch();

			clrscr();

			cout<<"\n\n\n\n\n\n\tQ5)Who Is The Founder of WWW?"<<endl;
			cout<<"\t1)Steve Job	2)Jeff Bezos"<<endl;
			cout<<"\t3)Timlee       4)Linus Torvald"<<endl;

			cout<<"\tEnter Answer :";
			cin>>ans;
		}
		else
		{
			clrscr();
			cout<<"\n\n\n\n\n\n\n\tANSWER\n\tQ2)Who Is The Founder of HTML Language?"<<endl;
			cout<<"\t1)Steve Job-Apple CEO	     2)Jeff Bezos-Amazon CEO"<<endl;
			cout<<"\t3)Timlee-Founder of HTML    4)Linus Torvald-Father of Linux"<<endl;
			amt=130000;
			cout<<"\tYou Won :"<<amt;
			getch();
			exit(0);
		}
	}	//Q-4
}
int main()
{
	clrscr();

	//info();

	//score();

	//start();

	kbc_demo();

	kbc();

	getch();

	return 0;

}

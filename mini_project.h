
/*Project Name-Student's Admission To Computer Science Course Degree */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node
{
	int rno;
	char nm[20];
	int d,m,y;
	struct node *next,*t1n,*t2n,*l1n,*l2n,*eln;	
}NODE;

typedef struct list
{
	NODE *st,*t1s1,*t1s2,*t2s1,*t2s2,*l1s1,*l1s2,*l2s1,*l2s2,*els1,*els2,*els3;
}LIST;

void init(LIST *t)							//Initializing  all pointers to NULL
{
	 t->st=NULL,t->t1s1=NULL,t->t1s2=NULL,t->t2s1=NULL,t->t2s2=NULL,t->l1s1=NULL,t->l1s2=NULL,t->l2s1=NULL,t->l2s2=NULL,t->els1=NULL,t->els2=NULL,t->els3=NULL;
}
int d,m,y;
int ct1s1=0,ct1s2=0,ct2s1=0,ct2s2=0,cl1s1=0,cl1s2=0,cl2s1=0,cl2s2=0,cel1=0,cel2=0,cel3=0;

NODE *ispresent(LIST *t,int i)			    //Checking entered roll no node is present in list
{
	NODE *z=t->st;
	while(z)
	{
		if(z->rno==i)
			break;
		z=z->next;
	}
	return z;
}

void insert(LIST *t)						//Inserting a node in the list 
{
	int opt=0,no;
	NODE *a=(NODE *)malloc(sizeof(NODE));
	printf("\nEnter Details:");
	printf("\nRoll no.:\t");
	while(1)
	{
		if(opt)
			printf("Roll No. is already Registered...\nEnter New Roll No.:\t");
		scanf("%d",&a->rno);
		if(ispresent(t,a->rno))
			opt=1;
		else
			break;
	}
	printf("Name:\t\t");
	scanf("%s",a->nm);
	printf("\n%-40s\n%-30s%-15s\n1.%-30s1) %-15s\n2.%-30s2) %-15s\n","Options for theory 1 subject","Subject name"," Course code","Software Engg.","3SE201","Discrete Mathematics","3DM201");
	printf("\nEnter Choice for theory 1:\t");
a:	scanf("%d",&opt);
	if(opt==1)
	{
		NODE *b=t->t1s1;
		if(b==NULL)
			t->t1s1=a;
		else
		{
			while(b->t1n)
				b=b->t1n;
			b->t1n=a;
		}
		ct1s1++;
	}
	else if(opt==2)
	{
		NODE *b=t->t1s2;
		if(b==NULL)
			t->t1s2=a;
		else
		{
			while(b->t1n)
				b=b->t1n;
			b->t1n=a;
		}
		ct1s2++;
	}
	else
	{
		printf("\nEnter Option either 1 or 2:\t");
		goto a;
	}
	printf("\n%-40s\n%-30s%-15s\n1.%-30s1) %-15s\n2.%-30s2) %-15s\n","Options for theory 2 subject","Subject name"," Course code","Data Structure","3DS201","Operating Systems","3OS201");
	printf("\nEnter Choice for theory 2:\t");
b:	scanf("%d",&opt);
	if(opt==1)
	{
		NODE *b=t->t2s1;
		if(b==NULL)
			t->t2s1=a;
		else
		{
			while(b->t2n)
				b=b->t2n;
			b->t2n=a;
		}
		ct2s1++;
	}
	else if(opt==2)
	{
		NODE *b=t->t2s2;
		if(b==NULL)
			t->t2s2=a;
		else
		{
			while(b->t2n)
				b=b->t2n;
			b->t2n=a;
		}
		ct2s2++;
	}
	else
	{
		printf("\nEnter Option either 1 or 2:\t");
		goto b;
	}
	printf("\n%-40s\n%-30s%-15s\n1.%-30s1) %-15s\n2.%-30s2) %-15s\n","Options for lab 1","Subject name"," Course code","Processor Architecture","3PA252","Data Base","2DB252");
	printf("\nEnter Choice for Lab 1:  \t");
c:	scanf("%d",&opt);
	if(opt==1)
	{
		NODE *b=t->l1s1;
		if(b==NULL)
			t->l1s1=a;
		else
		{
			while(b->l1n)
				b=b->l1n;
			b->l1n=a;
		}
		cl1s1++;
	}
	else if(opt==2)
	{
		NODE *b=t->l1s2;
		if(b==NULL)
			t->l1s2=a;
		else
		{
			while(b->l1n)
				b=b->l1n;
			b->l1n=a;
		}
		cl1s2++;
	}
	else
	{
		printf("\nEnter Option either 1 or 2:\t");
		goto c;
	}
	printf("\n%-40s\n%-30s%-15s\n1.%-30s1) %-15s\n2.%-30s2) %-15s\n","Options for lab 2","Subject name"," Course code","Computer Networks","3CN252","Progamming lab 1","3PL252");
	printf("\nEnter Choice for Lab 2:  \t");
d:	scanf("%d",&opt);
	if(opt==1)
	{
		NODE *b=t->l2s1;
		if(b==NULL)
			t->l2s1=a;
		else
		{
			while(b->l2n)
				b=b->l2n;
			b->l2n=a;
		}
		cl2s1++;
	}
	else if(opt==2)
	{
		NODE *b=t->l2s2;
		if(b==NULL)
			t->l2s2=a;
		else
		{
			while(b->l2n)
				b=b->l2n;
			b->l2n=a;
		}
		cl2s2++;
	}
	else
	{
		printf("\nEnter Option either 1 or 2:\t");
		goto d;
	}
	printf("\n%-40s\n%-30s%-15s\n1.%-30s1) %-15s\n2.%-30s2) %-15s\n3.%-30s3) %-15s","Options for electives","Subject name"," Course code","Image Processing","3IM201","Artificial intelligence","3AI201","Machine Learning","3ML201");
	printf("\nEnter Choice for Elective: \t");
e:	scanf("%d",&opt);
	if(opt==1)
	{
		NODE *b=t->els1;
		if(b==NULL)
			t->els1=a;
		else
		{
			while(b->eln)
				b=b->eln;
			b->eln=a;
		}
		cel1++;
	}
	else if(opt==2)
	{
		NODE *b=t->els2;
		if(b==NULL)
			t->els2=a;
		else
		{
			while(b->eln)
				b=b->eln;
			b->eln=a;
		}
		cel2++;
	}
	else if(opt==3)
	{
		NODE *b=t->els3;
		if(b==NULL)
			t->els3=a;
		else
		{
			while(b->eln)
				b=b->eln;
			b->eln=a;
		}
		cel3++;
	}
	else
	{
		printf("\nEnter Option either 1 or 2 or 3:\t");
		goto e;
	}
	a->d=d;
	a->m=m;
	a->y=y;
	a->next=a->t1n=a->t2n=a->eln=a->l1n=a->l2n=NULL;
	if(t->st==NULL)
		t->st=a;
	else
	{
		NODE *b=t->st;
		while(b->next)
			b=b->next;
		b->next=a;
	}
}

void display(LIST *t)						
{
	NODE *d=t->st;
	int i=0;
	while(d)
	{
		if(i==0)
		{
			printf("\n\nDetails:\n\n");
			printf(" %-15s |    %-15s|    %-15s","Roll No.","Name","Date");
		}
		printf("\n  %-15d|    %-15s|    %d/%d/%d",d->rno,d->nm,d->d,d->m,d->y);
		d=d->next;
		i=1;
	}
	if(!i)
		printf("Empty list\n");
}

void displayt1(LIST *t,NODE *d)			//displaying theory 1 subject's student list
{
	int i=0;
	while(d)
	{
		if(i==0)
		{
			printf("\n\nDetails:\n\n");
			printf(" %-15s |    %-15s|    %-15s","Roll No.","Name","Date");
		}
		printf("\n  %-15d|    %-15s|    %d/%d/%d",d->rno,d->nm,d->d,d->m,d->y);		
		d=d->t1n;
		i=1;
	}
	if(!i)
		printf("Empty list\n");
}

void displayt2(LIST *t,NODE *d)			//displaying theory 2 subject's student list
{
	int i=0;
	while(d)
	{
		if(i==0)
		{
			printf("\n\nDetails:\n\n");
			printf(" %-15s |    %-15s|    %-15s","Roll No.","Name","Date");
		}
		printf("\n  %-15d|    %-15s|    %d/%d/%d",d->rno,d->nm,d->d,d->m,d->y);
		d=d->t2n;
		i=1;
	}
	if(!i)
		printf("Empty list\n");
}

void displayl1(LIST *t,NODE *d)			//displaying lab 1 subject's student list
{
	int i=0;
	while(d)
	{
		if(i==0)
		{
			printf("\n\nDetails:\n\n");
			printf(" %-15s |    %-15s|    %-15s","Roll No.","Name","Date");
		}
		printf("\n  %-15d|    %-15s|    %d/%d/%d",d->rno,d->nm,d->d,d->m,d->y);
		d=d->l1n;
		i=1;
	}
	if(!i)
		printf("\nEmpty list\n");
}

void displayl2(LIST *t,NODE *d)			//displaying lab 2 subject's student list
{
	int i=0;
	while(d)
	{
		if(i==0)
		{
			printf("\n\nDetails:\n\n");
			printf(" %-15s |    %-15s|    %-15s","Roll No.","Name","Date");
		}
		printf("\n  %-15d|    %-15s|    %d/%d/%d",d->rno,d->nm,d->d,d->m,d->y);
		d=d->l2n;
		i=1;
	}
	if(!i)
		printf("Empty list\n");
}

void displayel(LIST *t,NODE *d)			//displaying elective subject's student list
{
	int i=0;
	while(d)
	{
		if(i==0)
		{
			printf("\n\nDetails:\n\n");
			printf(" %-15s |    %-15s|    %-15s","Roll No.","Name","Date");
		}
		printf("\n  %-15d|    %-15s|    %d/%d/%d",d->rno,d->nm,d->d,d->m,d->y);
		d=d->eln;
		i=1;
	}
	if(!i)
		printf("Empty list\n");
}

void change(LIST *t,int no)
{
	int opt;
	NODE *f,*d,*c,*e,*b=t->els1;	
	c=t->els1;  d=t->els2;  e=t->els3;
	while(c!=NULL)
	{
		if(c->rno==no)	
		{
			printf("\n%-40s\n%-30s%-15s\n1.%-30s%-15s\n2.%-30s%-15s\n3.%-30s%-15s\n","Options for electives","Subject name","Course code","Image Processing","3IM201","Artificial intelligence","3AI201","Machine Learning","3ML201");
			printf("\nEnter Choice for Elective: \t");
			scanf("%d",&opt);
			if(c==t->els1)
				t->els1=c->eln;
			else
				b->eln=c->eln;
			cel1--;
			if(opt==1)
			{
				f=t->els1;
				while(f!=NULL)
				{
					if(f->rno>no)
						break;
					d=f;
					f=f->eln;
				}
				if(f==t->els1)
					t->els1=c;
				else
					d->eln=c;
				c->eln=f;
				cel1++;
			}
		 	else if(opt==2)
				{
					f=t->els2;
					while(f!=NULL)
					{
						if(f->rno>no)
							break;
						d=f;
						f=f->eln;
					}
					if(f==t->els2)
						t->els2=c;
					else
						d->eln=c;
					c->eln=f;
					cel2++;
				}
			else
			{
				f=t->els3;
				while(f!=NULL)
				{
					if(f->rno>no)
						break;
					d=f;
					f=f->eln;
				}
				if(f==t->els3)
					t->els3=c;
				else
					d->eln=c;
				c->eln=f;
				cel3++;
			}
			return;				
		}
		b=c;
		c=c->eln;
	}
	c=d;
	b=c;
	while(c!=NULL)
	{
		if(c->rno==no)	
		{
			printf("\n%-40s\n%-30s%-15s\n1.%-30s%-15s\n2.%-30s%-15s\n3.%-30s%-15s\n","Options for electives","Subject name"," Course code","Image Processing","3IM201","Artificial intelligence","3AI201","Machine Learning","3ML201");
			printf("\nEnter Choice for Elective: \t");
			scanf("%d",&opt);
			if(c==t->els2)
				t->els2=c->eln;
			else
				b->eln=c->eln;
			cel2--;
			if(opt==1)
				{
					f=t->els1;
				while(f!=NULL)
				{
					if(f->rno>no)
						break;
					d=f;
					f=f->eln;
				}
				if(f==t->els1)
					t->els1=c;
				else
					d->eln=c;
				c->eln=f;
				cel1++;
				
				}
		 	else if(opt==2)
				{
					f=t->els2;
					while(f!=NULL)
					{
						if(f->rno>no)
							break;
						d=f;
						f=f->eln;
					}
					cel2++;
					if(f==t->els2)
						t->els2=c;
					else
						d->eln=c;
					c->eln=f;
					
				}
			else
			{
				f=t->els3;
				while(f!=NULL)
				{
					if(f->rno>no)
						break;
					d=f;
					f=f->eln;
				}
				if(f==t->els3)
					t->els3=c;
				else
					d->eln=c;
				c->eln=f;
				cel3++;
				
			}
			return;			
		}
		b=c;
		c=c->eln;
	}
	c=e;
	b=c;
	while(c!=NULL)
	{
		if(c->rno==no)	
		{
			printf("\n%-40s\n%-30s%-15s\n1.%-30s%-15s\n2.%-30s%-15s\n3.%-30s%-15s\n","Options for electives","Subject name"," Course code","Image Processing","3IM201","Artificial intelligence","3AI201","Machine Learning","3ML201");
			printf("\nEnter Choice for Elective: \t");
			scanf("%d",&opt);
			if(c==t->els3)
				t->els3=c->eln;
			else
				b->eln=c->eln;
			cel3--;
			if(opt==1)
				{
					f=t->els1;
					while(f!=NULL)
					{
						if(f->rno>no)
							break;
						d=f;
						f=f->eln;
					}
					if(f==t->els1)
						t->els1=c;
					else
						d->eln=c;
					c->eln=f;
					cel1++;
				
				}
		 	else if(opt==2)
				{
					f=t->els2;
					while(f!=NULL)
					{
						if(f->rno>no)
							break;
						d=f;
						f=f->eln;
					}
					if(f==t->els2)
						t->els2=c;
					else
						d->eln=c;
					c->eln=f;
					cel2++;
					
				}
			else
			{
				f=t->els3;
				while(f!=NULL)
				{
					if(f->rno>no)
						break;
					d=f;
					f=f->eln;
				}
				if(f==t->els3)
					t->els3=c;
				else
					d->eln=c;
				c->eln=f;
				cel3++;
				
			}	
			return;				
		}
		b=c;
		c=c->eln;
	}
}

void save(LIST *t)					 // Saving the data in list to the file stu.txt
{
	FILE *f=fopen("stu.txt","w");
	fprintf(f,"%d %d %d %d %d %d %d %d %d %d %d\n",ct1s1,ct1s2,ct2s1,ct2s2,cl1s1,cl1s2,cl2s1,cl2s2,cel1,cel2,cel3);
	NODE *a=t->st;
	while(a)
	{
		fprintf(f,"%s %d %s %d %d %d\n","Registered",a->rno,a->nm,a->d,a->m,a->y);
		a=a->next;
	}
	a=t->t1s1;
	while(a)
	{
		fprintf(f,"%s %d %s %d %d %d\n","3SE201",a->rno,a->nm,a->d,a->m,a->y);
		a=a->t1n;
	}
	a=t->t1s2;
	while(a)
	{
		fprintf(f,"%s %d %s %d %d %d\n","3DM201",a->rno,a->nm,a->d,a->m,a->y);
		a=a->t1n;
	}
	a=t->t2s1;
	while(a)
	{
		fprintf(f,"%s %d %s %d %d %d\n","3DS201",a->rno,a->nm,a->d,a->m,a->y);
		a=a->t2n;
	}
	a=t->t2s2;
	while(a)
	{
		fprintf(f,"%s %d %s %d %d %d\n","3OS201",a->rno,a->nm,a->d,a->m,a->y);
		a=a->t2n;
	}
	a=t->l1s1;
	while(a)
	{
		fprintf(f,"%s %d %s %d %d %d\n","3PA252",a->rno,a->nm,a->d,a->m,a->y);
		a=a->l1n;
	}
	a=t->l1s2;
	while(a)
	{
		fprintf(f,"%s %d %s %d %d %d\n","3DB252",a->rno,a->nm,a->d,a->m,a->y);
		a=a->l1n;
	}
	a=t->l2s1;
	while(a)
	{
		fprintf(f,"%s %d %s %d %d %d\n","3CN252",a->rno,a->nm,a->d,a->m,a->y);
		a=a->l2n;
	}
	a=t->l2s2;
	while(a)
	{
		fprintf(f,"%s %d %s %d %d %d\n","3PL252",a->rno,a->nm,a->d,a->m,a->y);
		a=a->l2n;
	}
	a=t->els1;
	while(a)
	{
		fprintf(f,"%s %d %s %d %d %d\n","3IM201",a->rno,a->nm,a->d,a->m,a->y);
		a=a->eln;
	}
	a=t->els2;
	while(a)
	{
		fprintf(f,"%s %d %s %d %d %d\n","3AI201",a->rno,a->nm,a->d,a->m,a->y);
		a=a->eln;
	}
	a=t->els3;
	while(a)
	{
		fprintf(f,"%s %d %s %d %d %d\n","3ML201",a->rno,a->nm,a->d,a->m,a->y);
		a=a->eln;
	}
	fclose(f);
}

int isvalid(int d,int m,int y)			//Checking the entered date is valid or not				
{
	if((m==2 && (y%400==0 || (y%100!=0 && y%4==0))) && d<30 && d>0)
		return 1;
	if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && d<32 && d>0)
		return 1;
	if((m==4 || m==6 || m==9 || m==11) && d<31 && d>0)
		return 1;
	if(m==2 && d<29 && d>0)
		return 1;
	return 0;
}

LIST p;								   //

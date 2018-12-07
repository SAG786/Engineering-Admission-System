
/*Project Name-Student's Admission To Computer Science Course Degree */
#include"mini_project.h"
void student();
void faculty();
int main()
{
	int opt,no;
	char c[7];
	init(&p);
	NODE *b;
	FILE *f=fopen("stu.txt","r");
	if(!f)
	{
		printf("\nEmpty File");
	}
	if(f)
	{
		fscanf(f,"%d %d %d %d %d %d %d %d %d %d %d",&ct1s1,&ct1s2,&ct2s1,&ct2s2,&cl1s1,&cl1s2,&cl2s1,&cl2s2,&cel1,&cel2,&cel3);
		while(1)
		{
			NODE *a=(NODE *)malloc(sizeof(NODE));
		   	fscanf(f,"%s %d %s %d %d %d",c,&a->rno,a->nm,&a->d,&a->m,&a->y);
			a->next=a->eln=a->t1n=a->t2n=a->l1n=a->l2n=NULL;
			if(feof(f))
				break;
			if(strcmp(c,"Registered")==0)
			{
				b=p.st;
				if(p.st==NULL)
					p.st=a;
				else
				{
					while(b->next)
						b=b->next;
					b->next=a;
				}
			}
			else
			{
				b=p.st;
				while(b->rno!=a->rno)
					b=b->next;
				a=b;
				if(strcmp(c,"3SE201")==0)
				{
					b=p.t1s1;
					if(b==NULL)
						p.t1s1=a;
					else
					{
						while(b->t1n)
							b=b->t1n;
						b->t1n=a;
					}
				}
				else if(strcmp(c,"3DM201")==0)
				{
					b=p.t1s2;
					if(b==NULL)
						p.t1s2=a;
					else
					{
						while(b->t1n)
							b=b->t1n;
						b->t1n=a;
					}
				}
				else if(strcmp(c,"3DS201")==0)
				{
					b=p.t2s1;
					if(b==NULL)
						p.t2s1=a;
					else
					{
						while(b->t2n)
							b=b->t2n;
						b->t2n=a;
					}
				}
				else if(strcmp(c,"3OS201")==0)
				{
					b=p.t2s2;
					if(b==NULL)
						p.t2s2=a;
					else
					{
						while(b->t2n)
							b=b->t2n;
						b->t2n=a;
					}
				}
				else if(strcmp(c,"3PA252")==0)
				{
					b=p.l1s1;
					if(b==NULL)
						p.l1s1=a;
					else
					{
						while(b->l1n)
							b=b->l1n;
						b->l1n=a;
					}
				}
				else if(strcmp(c,"3DB252")==0)
				{
					b=p.l1s2;
					if(b==NULL)
						p.l1s2=a;
					else
					{
						while(b->l1n)
							b=b->l1n;
						b->l1n=a;
					}
				}
				else if(strcmp(c,"3CN252")==0)
				{
					b=p.l2s1;
					if(b==NULL)
						p.l2s1=a;
					else
					{
						while(b->l2n)
							b=b->l2n;
						b->l2n=a;
					}
				}
				else if(strcmp(c,"3PL252")==0)
				{
					b=p.l2s2;
					if(b==NULL)
						p.l2s2=a;
					else
					{
						while(b->l2n)
							b=b->l2n;
						b->l2n=a;
					}
				}
				else if(strcmp(c,"3IM201")==0)
				{
					b=p.els1;
					if(b==NULL)
						p.els1=a;
					else
					{
						while(b->eln)
							b=b->eln;
						b->eln=a;
					}
				}
				else if(strcmp(c,"3AI201")==0)
				{
					b=p.els2;
					if(b==NULL)
						p.els2=a;
					else
					{
						while(b->eln)
							b=b->eln;
						b->eln=a;
					}
				}
				else
				{
					b=p.els3;
					if(b==NULL)
						p.els3=a;
					else
					{
						while(b->eln)
							b=b->eln;
						b->eln=a;
					}
				}
		}
	}
	}
	printf("\n*****Computer Science Degree Course Admission*****\n");
	b=p.st;
	if(p.st!=NULL)
	{
		
		while(b->next)
		{
			b=b->next;
		}
		printf("Last Modified Date:\t%d/%d/%d\n",b->d,b->m,b->y);
	}
	else
		d=m=y=0;
	printf("\nEnter today's date :\t");
	do{
		scanf("%d/%d/%d",&d,&m,&y);
		if(!isvalid(d,m,y))
		{	
			printf("Enter Valid Date:");
			continue;
		}
		if(b==NULL)
			break;
		if((d>=b->d && m==b->m && y==b->y) || (m>b->m && y==b->y) || y>b->y)
			break;
		else
			printf("Enter Valid Date :\n");
	}while(1);
	  while(1)
		{
				printf("\nDepartment Of computer science & engineering ");	
				printf("\n****MENU****\n1.Student\n2.Faculty\n3.Exit\nYour Option:\t");
				scanf("%d",&opt);
				if(opt<0)
				{
					printf("\nInvalid Input");
					continue;
				}
				if(opt>2)
				{
					break;
				}				
				switch(opt)
				{
					case 1:
						student();
						break;
					case 2:
						faculty();
				}
		}
			return 0;
}

void student()
{
	int opt,no;
	while(1)
	{
	  printf("\n****MENU****\n1.Register\n2.Display All\n3.Change in Elective Course\n4.Exit\nYour Option:\t");
	  scanf("%d",&opt);
		if(opt<0)
		{
			printf("\nInvalid Input");
			continue;
		}
	  if(opt>3 )
	    {
		save(&p);
		break;
	    }
	  switch(opt)
	  {
		case 1:
			insert(&p);
			break;
		case 2:
			display(&p);
			break;
		case 3:
			printf("Enter Roll No : \t");
			scanf("%d",&no);
	    		NODE *b=ispresent(&p,no);
			if(b)
			{
				if((d-(b->d)<7 && m-b->m==0 && y-b->y==0) || (m-(b->m)<=1 && (b->d)-d>23 && y-b->y==0) || (y-(b->y)==1 && (b->m)-m==11 && (b->d)-d>23))
					change(&p,no);
				else
					printf("\nSorry you are unable to change");
			}
			else
				printf("\nEntered Roll No is Unregistered: \t");
		
	 }
	}
}
void faculty()
{
		int opt;
		while(1)
		   {
			printf("\n****MENU****\n1.Display All\n2.Display theory 1\n3.Display theory 2\n4.Display Lab 1\n5.Display Lab 2\n6.Display Elective\n7.Exit\nYour Option :\t");
			scanf("%d",&opt);
			if(opt<0)
			{
				printf("\nInvalid Input");
				continue;
			}
			if(opt>6)
			{
				save(&p);
				printf("\n****Count For CSE Dept.****\n%-30s%-15s\n%30s","Subjects","Count","\n   Theory");
				printf("\n1.%-30s%-15d\n2.%-30s%-15d","Software Engg.",ct1s1,"Discrete Mathematics",ct1s2);
				printf("\n1.%-30s%-15d\n2.%-30s%-15d\n%30s","Data Structure",ct2s1,"Operating Systems",ct2s2,"\n   Lab");
				printf("\n1.%-30s%-15d\n2.%-30s%-15d","Processor Architecture",cl1s1,"Data Base",cl1s2);
				printf("\n1.%-30s%-15d\n2.%-30s%-15d\n%30s","Computer Networks",cl2s1,"Programming Lab 1",cl2s2,"\n   Elective");				
				printf("\n1.%-30s%-15d\n2.%-30s%-15d\n3.%-30s%-15d","Image Processing",cel1,"Artificial Intelligence",cel2,"Machine Learning",cel3);
				return;
			}
			switch(opt)
			{
			
			case 1:
				display(&p);
				break;
			case 2:
				printf("\nChoose\n1.3SE201\t\t2.3DM201\nYour option:\t");
				i:	scanf("%d",&opt);
				if(opt>2)
				{
				printf("\nEnter Option either 1 or 2:\t");
		        goto i;
				}
				if(opt==1)
					displayt1(&p,p.t1s1);
				else
					displayt1(&p,p.t1s2);
				break;	
			case 3:
				printf("\nChoose\n1.3DS201\t\t2.3OS201\nYour option:\t");
				k:	scanf("%d",&opt);
				if(opt>2)
				{
				printf("\nEnter Option either 1 or 2:\t");
		        goto k;
		    	}
				if(opt==1)
					displayt2(&p,p.t2s1);
				else
					displayt2(&p,p.t2s2);			
				break;
			case 4:
				printf("\nChoose\n1.3PA252\t\t2.3DB252\nYour option:\t");
				l:	scanf("%d",&opt);
				if(opt>2)
				{
				printf("\nEnter Option either 1 or 2:\t");
		        goto l;
		    	}
				if(opt==1)
					displayl1(&p,p.l1s1);
				else
					displayl1(&p,p.l1s2);
				break;
			case 5:
				printf("\nChoose\n1.3CN252\t\t2.3PL252\nYour option:\t");
				m:	scanf("%d",&opt);
				if(opt>2)
				{
				printf("\nEnter Option either 1 or 2:\t");
		        goto m;
		    	}
				if(opt==1)
					displayl2(&p,p.l2s1);
				else
					displayl2(&p,p.l2s2);
				break;
			case 6:
				printf("\nChoose\n1.3IM201\t\t2.3AI201\t\t3.ML201\nYour option:\t");
				n:	scanf("%d",&opt);
				if(opt>3)
				{
				printf("\nEnter Option either 1 or 2 or 3:\t");
		        goto n;
		    	}	
				if(opt==1)
					displayel(&p,p.els1);
				else if(opt==2)	
					displayel(&p,p.els2);	
				else
					displayel(&p,p.els3);
				break;		
				
			}
	    }	
}


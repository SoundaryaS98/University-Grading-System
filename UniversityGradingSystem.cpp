#include<iostream>
#include<string>
using namespace std;
int b=0,a;
char yrn;
string sub[50];  
int credit[10],mark[10],GPA[10],sem=0,credits=0,marks=0;	
float CGPA=0,SGPA=0;
string pass;
int checkmark()
{
	if(mark[a]>10)
	{
				    cout<<"Invalid choice.Maximum Grade point is 10.\n";
				    cout<<"Enter the grade points (marks out of 10) of "<<sub[a]<<":";
				    cin>>mark[a];
					checkmark();				    
	}
	else if(mark[a]<0)
	{
			     	cout<<"Invalid choice.Grade points can't be negative.\n";
			     	cout<<"Enter the grade points (marks out of 10) of "<<sub[a]<<":";
			     	cin>>mark[a];
			     	checkmark();
	}
	return mark[a];
}
string grade()
{
	string grade;
	if(mark[a]==10)
	  grade="O";
	else if(mark[a]>=9)
	  grade="A+";
	else if(mark[a]>=8)
	  grade="A";
	else if(mark[a]>=7)
	  grade="B+";
	else if(mark[a]>=6)
	  grade="B";
	else if(mark[a]>=5.5)
	  grade="C+";
	else if(mark[a]>=5)
	  grade="C";
	else
	  grade="F";
	return grade;
}
int main()
{
	int sem,ass[2];
    string name,SRN;
	cout<<"\t\t\t\t\t\t\t\t\t****REVA UNIVERSITY****"<<endl<<endl;
	cout<<"************************************************************************************************************************************************************************";
	cout<<"\nEnter your name:";
	cin>>name;
	cout<<"Enter your SRN:";
	cin>>SRN;
	do
	{
	  system("cls");
	  cout<<"\t\t\t\t\t\t\t\t\t****REVA UNIVERSITY****"<<endl<<endl;
	  cout<<"************************************************************************************************************************************************************************";	
	  cout<<"\nHi,"<<name<<".What do you want to find?"<<endl<<endl;
      cout<<"A.Passing marks\nB.SGPA\nC.CGPA\n\n";
	  char choice;
	  cin>>choice;
	  system("cls");
	  switch(choice)
	  {
		case 'A':
		case 'a':
			cout<<"\t\t\t\t\t\t\t\t\t****REVA UNIVERSITY****"<<endl<<endl;
        	cout<<"************************************************************************************************************************************************************************";
			cout<<"\t\tYou have opted to find your passing marks.\n\n";
			int IA[3],lowest;
			cout<<"Enter the subject for which you want to find the passing marks:";
			cin>>pass;
			cout<<endl;
			for(int i=1;i<=3;i++)
			{
			  cout<<"Enter your "<<pass<<" Internal Assessment-"<<i<<" marks(out of 15): ";
			  cin>>IA[i];
			  if(IA[i]>15)
			  {
			  	cout<<"Sorry, Maximum marks for Internal Assessment is 15.\n";
			  	i--;
			  	continue;
			  }
			  else if(IA[i]<0)
			  {
			  	cout<<"Sorry, Internal assessment marks can't be negative.\n";
			  	i--;
			  	continue;
			  }
			  else
			    continue;
		    }
			//if(IA[1]<=15&&IA[2]<=15&&IA[3]<=15)
			{
			  if(IA[1]<=IA[2]&&IA[1]<=IA[3])
			    lowest=IA[1];
			  else if(IA[2]<=IA[1]&&IA[2]<=IA[3])
		        lowest=IA[2];
		      else
		        lowest=IA[3];
		    marks=IA[1]+IA[2]+IA[3]-lowest;
		    for(int j=0;j<2;j++)
		    {
		    	cout<<"\nEnter the "<<pass<<" assignment "<<j+1<<" marks(out of 5):";
		        cin>>ass[j];
		        if(ass[j]>5)
		        {
		        	cout<<"Sorry, Maximum marks for each assignment is 5.\n";
					j--;
		            continue;
		        }
		        else if(ass[j]<0)
		        {
		        	cout<<"Sorry, Assignment marks can't be negative.\n";
		        	j--;
		        	continue;
				}
		        else
		            continue;
			}
		    //if(ass[0]<=5&&ass[1]<=5)
		    {
		       marks+=ass[0]+ass[1];
		       system("cls");
		       cout<<"\t\t\t\t\t\t\t\t\t****REVA UNIVERSITY****"<<endl<<endl;
	           cout<<"************************************************************************************************************************************************************************";
		       cout<<"\nConsidering the best 2 internal marks with the 2 assignment marks,";
		       cout<<"you got "<<marks<<" marks out of 40 in "<<pass<<".\n";
		       if(marks>=14)
		       {
		          cout<<"\n***You have qualified for externals.***\n";
		          cout<<"\n\nYou need 25 marks out of 100 in "<<pass<<" externals to pass, to get a C grade.";
		          cout<<"\nAfter scaling down to 60,you need 15 marks in "<<pass<<" externals to pass, to get a C grade.";
		          cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
		          cout<<"\nYou need "<<((50-marks)*100)/60<<" marks out of 100 in "<<pass<<" externals to get C+ grade.";
		          cout<<"\nYou need "<<50-marks<<"  marks out of 60 in "<<pass<<" externals to get C+ grade.";
		          cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
				  cout<<"\nYou need "<<((55-marks)*100)/60<<" marks out of 100 in "<<pass<<" externals to get B grade.";
		          cout<<"\nYou need "<<55-marks<<"  marks out of 60 in "<<pass<<" externals to get B grade.";
				  cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
		          cout<<"\nYou need "<<((60-marks)*100)/60<<" marks out of 100 in "<<pass<<" externals to get B+ grade.";
		          cout<<"\nYou need "<<60-marks<<"  marks out of 60 in "<<pass<<" externals to get B+ grade.";
		          cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
		          cout<<"\nYou need "<<((70-marks)*100)/60<<" marks out of 100 in "<<pass<<" externals to get A grade.";
		          cout<<"\nYou need "<<70-marks<<"  marks out of 60 in "<<pass<<" externals to get A grade.";
		          cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
		          if((80-marks)<60)
				  {
				    cout<<"\nYou need "<<((80-marks)*100)/60<<" marks out of 100 in "<<pass<<" externals to get A+ grade.";
		            cout<<"\nYou need "<<80-marks<<"  marks out of 60 in "<<pass<<" externals to get A+ grade.";
		            cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
		          }
				  else //80-marks>60
				  {
				    cout<<"\nYou are not eligible to get A+ grade "<<pass<<".";
				    cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
				  }
				  if((90-marks)<60)
				  {
				    cout<<"\nYou need "<<((90-marks)*100)/60<<" marks out of 100 in "<<pass<<" externals to get O grade.";
		            cout<<"\nYou need "<<90-marks<<"  marks out of 60 in "<<pass<<" externals to get O grade.";
		            cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
		          }
		          else //90-marks>60
		          {
		            cout<<"\nYou are not eligible to get O grade in "<<pass<<".";
		            cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
		          }
				    cout<<"\n\t\t\t\t\t\t\t***All The Best!***\n"<<endl;
		        }
		        else //marks<14
		           cout<<"\n\nYou have not qualified for "<<pass<<" externals.\n\nBetter luck next time.\n\n";
		        }
		    }
		    break;
		case 'B':
		case 'b':
			cout<<"\t\t\t\t\t\t\t\t\t****REVA UNIVERSITY****"<<endl<<endl;
	        cout<<"************************************************************************************************************************************************************************";
			cout<<"\t\tYou have opted to find your SGPA.\n\n";
			credits=0;
			SGPA=0;
			b=1;
			for(int a=0;a<b;a++)
			{
				cout<<"\nEnter the name of subject "<<a+1<<"(Enter 0 to terminate):";
			    cin>>sub[a];
				if(sub[a]=="0")
					break;
				else
				{
				 cout<<"Enter the number of credits of "<<sub[a]<<":";
				 cin>>credit[a];
				 if(credit[a]<0)
				 {
				 	cout<<"Invalid choice.Credits can't be negative.\n";
				 	cout<<"Enter the number of credits of "<<sub[a]<<":";
				    cin>>credit[a];
				 }
				 cout<<"Enter the grade points (marks out of 10) of "<<sub[a]<<":";
				 cin>>mark[a];
				  checkmark();
				 {
				 	GPA[a]=credit[a]*mark[a];
				 }
			     credits+=credit[a];
				 b++;
				 SGPA+=GPA[a];
			    }
		    }
		    SGPA=SGPA/credits;
		    system("cls");
		    if(sub[0]=="0")
		    {
		    	cout<<"No subject entered.\n\n";
		    	break;
			}
			cout<<"\t\t\t\t\t\t\t\t\t****REVA UNIVERSITY****"<<endl<<endl;
	        cout<<"************************************************************************************************************************************************************************";
		    cout<<endl<<endl<<endl; 
		    cout<<"\t\t-------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\t\t|\tSUBJECT\t\t|\tCREDITS\t\t|\tGRADE POINT\t|\t   GPA\t\t|\t   GRADE\t|\n";
		    for(a=0;a<b-1;a++)
		    {
		    	cout<<"\t\t-------------------------------------------------------------------------------------------------------------------------\n";
		    	cout<<"\t\t|\t "<<sub[a]<<"\t\t|\t   "<<credit[a]<<"\t\t|\t    "<<mark[a]<<"\t\t|\t   "<<GPA[a]<<"\t\t|\t     "<<grade()<<"\t\t|"<<endl;
			}
			cout<<"\t\t-------------------------------------------------------------------------------------------------------------------------\n";
			cout<<"\n\t\t\t\tSGPA="<<SGPA<<endl<<endl;
			break;
		case 'c':
		case 'C':
	    {
	    	sem=0;
	    	CGPA=0;
	    	cout<<"\t\t\t\t\t\t\t\t\t****REVA UNIVERSITY****"<<endl<<endl;
	        cout<<"************************************************************************************************************************************************************************";
	        cout<<"\n\t\tYou opted to find the CGPA.\n\n";
			cout<<"Enter the number of semesters of which you want to find the CGPA:";
			cin>>sem;
			if(sem==0)
			{
				cout<<"Thank you!\n\n";
			    break;
			}
			else if(sem<0)
		    {
				cout<<"Sorry number of semesters can't be negative.\n\n";
				break;
			}
			float semSGPA[sem];
			int a;
			 for(a=1;a<=sem;a++)
			 {
			 	cout<<"Enter the semester "<<a<<" SGPA:";
			    cin>>semSGPA[a];
			    if(semSGPA[a]>10)
			     {
			     	cout<<"Sorry, Maximum SGPA is 10.\n";
			     	a--;
			     	continue;			     
			     }
			     else if(semSGPA[a]<0)
			     {
			     	cout<<"Sorry, SGPA can't be negative.\n";
			     	a--;
			     	continue;
				 }
			    else
			    {
			    		CGPA+=semSGPA[a]; 
			    		continue;
				}
				
		     }
		     CGPA=CGPA/sem;
		     //if(semSGPA[a]<=10)
		     	cout<<"\n\t\tYour CGPA is "<<CGPA<<endl;
		    break;
	    }
		default:
		cout<<"Sorry.Invalid choice."<<endl;
	}
	cout<<"Do you want to know anything else?(y for yes and n for no):";
	cin>>yrn;
	system("cls");
    }
	while(yrn=='y');
	  cout<<"\n\n\n\t\t\t\t\t  ***THANK YOU***\n\n\t\t\t\t\t***ALL THE BEST!***\n";
	system("pause");
	return 0;
}

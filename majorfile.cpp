#include<iostream>
#include<cstdlib>
#define max 5
using namespace std;
void filter(char a[][2],int b[][10],char c[][20])
{   char blood_group[2];
    int mob[10];
    char mail[20];
	cout<<"Enter blood group or mobile or email id of the person whose data you want to reterieve";
	cout<<"\n 1. Blood group";
	cout<<"\n 2. Mobile";
	cout<<"\n 3. Email";
	int ch;
	switch(ch)
	{
		case 1: cout<<"Enter Blood group";
		cin>>blood_group[2];
		        for(int i=0;i<max;i++)
		        {
		        	if(a[i][2]==blood_group[2])
		        	{
		        		cout<<b[i][10];
		        		cout<<c[i][20];
					}
				}
	}
}
int main()
{
	char donar_Name[30];
	int ch;
	int age;
	char email[20];
	int mobile[10];
	char blood_gp[2];
	char gender;
	int count= 0;
	char donar_matrix[max][30];
	int age_matrix[max];
	char email_matrix[max][20];
	int mobile_matrix[max][10];
    char bloodgroup_matrix[max][2];
	char gender_matrix[max];
	
	cout<<"1. Enter new donor details \n";
	cout<<"2. List all Donors \n";
	cout<<"3. Filter data \n";
	cout<<"4. Exit";
	while(1)
	{
	cout<<"\n Enter your Choice";
	cin>>ch;
	if(ch == 1)
	{    count++;
	    cout<<"This is donor number   "<<count<<"\n";
		cout<<"Enter Donor Name\t";
		cin>>donar_Name;
		cout<<"\nEnter Age of the Donor\t";
		cin>>age;
		cout<<"\nEnter Email of the user\t";
		cin>>email;
		cout<<"\nEnter Mobile Number\t";
		//cin>>mobile;
		cout<<"\nEnter Blood group\t";
		cin>>blood_gp;
		cout<<"Enter gender";
		cin>>gender;
		donar_matrix[count][30]=donar_Name[30];
		age_matrix[count]=age;
		email_matrix[count][20]=email[20];
		mobile_matrix[count][10]=mobile[10];
		bloodgroup_matrix[count][2]=blood_gp[2];
		gender_matrix[count]=gender;
	}
	if(ch == 2)
	{
		for(int i=0;i<count;i++)
		{
			cout<<"Donor number"<<i;
			cout<<"Name  :"<<donar_matrix[i];
			cout<<"Age   :"<<age_matrix[i];
			cout<<"Email Address  :"<<email_matrix[i][20];
			cout<<"Mobile Number  :"<<mobile_matrix[i][10];
			cout<<"Blood Group    :"<<bloodgroup_matrix[i][2];
			cout<<"Gender :"<<gender_matrix[i];
			
		}
		}
	if(ch == 3)
	{       filter(bloodgroup_matrix,mobile_matrix,email_matrix);
			}
	if(ch == 4)
	     exit(0);				
}
 
return 0;
}

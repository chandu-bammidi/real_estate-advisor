 #include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
using namespace std;          
class real_estate
{
	public:
	int price;
	string area;
	void welcome();  
	//void details();  
	void show();
};
void house();
void details();
void conform();
void rented_house();
void land();
void real_estate::welcome()
{
	int choice;
	cout<<"\t\t\t\t\t\t\t\t<-<-WELCOME!->->"<<endl;
	cout<<"what do you want to buy?"<<endl;
	cout<<"press 1)if you want to buy a house"<<endl;
	cout<<"press 2)if you want to buy land"<<endl;
	cout<<"press 3,if you want rented house"<<endl;
	cout<<"enter your choice";
	cin>>choice;
	switch(choice)
	{
		case 1:
			house();
			break;
		case 2:
			land();
			break;
	     case 3:
		rented_house();
		break;
	}
}
void house()
{
	ofstream house("customer.txt",ios::app);
	int bhk;
	
	string area;
	int i;
	char s[100];
	string area1="jalandhar";
	string choice_of_home;
	cout<<"the houses are available in jalandhar  ludhaina   lawgate"<<endl;
	cout<<"enter the area where you want to buy a house"<<endl;
	cin>>area;
	cout<<"how many bed room you want? 1BHK(or)2BHK(or)3BHK"<<endl;
	cin>>bhk;
	ifstream jala1house("jalandhar1bhk.txt");
	if(bhk==1&&area=="jalandhar")
	{
		while(jala1house.eof()==0)
		{
			jala1house.getline(s,100);
			cout<<s;
			cout<<endl;
			
		}
		cout<<"select the house"<<endl;
		cin>>i;
		if(i==1)
		{
        cout<<"ravi apartments"<<endl;
		cout<<"vinni road,warangal"<<endl;
		cout<<"5th floor"<<endl;
		cout<<"rate:50lakhs"<<endl;
		house<<"ravi apartments"<<endl;
		house<<"vinni road,warangal"<<endl;
		house<<"5th floor"<<endl;
		house<<"rate:50lakhs"<<endl;
		conform();
		}
		else if(i==2)
		{
		  cout<<"pardhu apartments"<<endl;
 		  cout<<"sam road"<<endl;
		  cout<<"6th floor"<<endl;
          cout<<"rate:35lakhs:"<<endl;
          house<<"pardhu apartments"<<endl;
 		  house<<"sam road"<<endl;
		  house<<"6th floor"<<endl;
          house<<"rate:35lakhs:"<<endl;
          conform();
		}
		else if(i==3)
		{
			cout<<"chandu apartments"<<endl;
            cout<<"near gajuwaka"<<endl;
            cout<<"3rd floor"<<endl;
            house<<"chandu apartments"<<endl;
            house<<"near gajuwaka"<<endl;
            house<<"3rd floor"<<endl;
            conform();
		}
	}
	jala1house.close();
	ifstream jala2house("jalandhar2bhk.txt") ;
	if(bhk==2&&area=="jalandhar")
	{
		while(jala2house.eof()==0)
		{
			jala2house.getline(s,100);
			cout<<s;
			cout<<endl;
		
		}
		cout<<"select the house"<<endl;
		cin>>i;
		if(i==1)
		{
		cout<<"veera apartments"<<endl;
        cout<<"pallavi road"<<endl;
        cout<<"5th floor"<<endl;
        cout<<"rate:40lakhs"<<endl;
        house<<"veera apartments"<<endl;
        house<<"pallavi road"<<endl;
        house<<"5th floor"<<endl;
        house<<"rate:40lakhs"<<endl;
        conform();
        }
        else if(i==2)
        {
        cout<<"chandu apartments"<<endl;
        cout<<"G.T road"<<endl;
        cout<<"7th floor"<<endl;
		cout<<"rate:47lakhs	"<<endl;
		house<<"chandu apartments"<<endl;
        house<<"G.T road"<<endl;
        house<<"7th floor"<<endl;
		house<<"rate:47lakhs"<<endl;
		conform();	
		}
		else if(i==3)
		{
		cout<<"annapurna apartments"<<endl;
   		cout<<"market road"<<endl;
		cout<<"6th floor"<<endl;
	    house<<"annapurna apartments"<<endl;
   		house<<"market road"<<endl;
		house<<"6th floor"<<endl;
		conform();
		}
	}
	jala2house.close();
	ifstream jala3house("jalandhar3bhk.txt") ;
	if(bhk==3&&area=="jalandhar")
	{
		while(jala3house.eof()==0)
		{
			jala3house.getline(s,100);
			cout<<s;
			cout<<endl;
			
		}
		cout<<"select the house"<<endl;
		cin>>i;
		if(i==1)
		{
		cout<<"laxmi apartments"<<endl;
        cout<<"VHDL road"<<endl;
        cout<<"7th floor"<<endl;
        cout<<"rate:78lakhs"<<endl;
        house<<"laxmi apartments"<<endl;
        house<<"VHDL road"<<endl;
        house<<"7th floor"<<endl;
        house<<"rate:78lakhs"<<endl;
        conform();
		}
		else if(i==2)
		{
		cout<<"digital apartments"<<endl;
		cout<<"petrol bunk road"<<endl;
		cout<<"8th floor"<<endl;
		cout<<"rate:67lakhs"<<endl;
		house<<"digital apartments"<<endl;
		house<<"petrol bunk road"<<endl;
		house<<"8th floor"<<endl;
		house<<"rate:67lakhs"<<endl;
		conform();
		}
		else if(i==3)
		{
		cout<<"ion apartments"<<endl;
		cout<<"library road"<<endl;
		cout<<"3rd floor"<<endl;
		house<<"ion apartments"<<endl;
		house<<"library road"<<endl;
		house<<"3rd floor"<<endl;
		conform();
		}
	}
	jala3house.close();
	ifstream lawgate1("lawgate1bhk.txt");
	if(bhk==1&&area=="lawgate")
	{
		while(lawgate1.eof()==0)
		{
			lawgate1.getline(s,100);
			cout<<s;
			cout<<endl;
		}
		cout<<"select the house"<<endl;
		cin>>i;
		if(i==1)
		{
		cout<<"rajesh apartments"<<endl;
		cout<<"vinni road"<<endl;
		cout<<"5th floor"<<endl;
		cout<<"rate:57lakhs"<<endl;
		house<<"rajesh apartments"<<endl;
		house<<"vinni road"<<endl;
		house<<"5th floor"<<endl;
		house<<"rate:57lakhs"<<endl;
		conform();
		}
		else if(i==2)
		{
		cout<<"	pavan apartments"<<endl;
		cout<<"sam road"<<endl;
		cout<<"6th floor;"<<endl;
		cout<<"rate:56lakhs	"<<endl;
		house<<"pavan apartments"<<endl;
		house<<"sam road"<<endl;
		house<<"6th floor;"<<endl;
		house<<"rate:56lakhs"<<endl;
		conform();
		}
		else if(i==3)
		{
		cout<<"chandra apartments"<<endl;
		cout<<"near gajuwaka"<<endl;
		cout<<"3rd floor"<<endl;
		cout<<"rate:90lakhs"<<endl;
		house<<"chandra apartments"<<endl;
		house<<"near gajuwaka"<<endl;
		house<<"3rd floor"<<endl;
		house<<"rate:90lakhs"<<endl;
		conform();
		}
	}
	lawgate1.close();
	ifstream lawgate2("lawgate2bhk.txt");
	if(bhk==2&&area=="lawgate")
	{
		while(lawgate2.eof()==0)
		{
			lawgate2.getline(s,100);
			cout<<s;
			cout<<endl;	
		}
		cout<<"select the house"<<endl;
		cin>>i;
		if(i==1)
		{
		cout<<"veena apartments"<<endl;
		cout<<"pallan road"<<endl;
		cout<<"5th floor"<<endl;
		cout<<"rate:50lakhs"<<endl;
	    house<<"veena apartments"<<endl;
		house<<"pallan road"<<endl;
		house<<"5th floor"<<endl;
		house<<"rate:50lakhs"<<endl;
		conform();
		}
		else if(i==2)
		{
		cout<<"chand apartments"<<endl;
		cout<<"G.T road"<<endl;
		cout<<"7th floor"<<endl;
		cout<<"rate:35lakhs"<<endl;
		house<<"chand apartments"<<endl;
		house<<"G.T road"<<endl;
		house<<"7th floor"<<endl;
		house<<"rate:35lakhs"<<endl;
		conform();
		}
		else if(i==3)
		{
		cout<<"anna apartments"<<endl;
		cout<<"market road"<<endl;
		cout<<"6th floor"<<endl;
		cout<<"rate:56lakhs"<<endl;
		house<<"anna apartments"<<endl;
		house<<"market road"<<endl;
		house<<"6th floor"<<endl;
		house<<"rate:56lakhs"<<endl;
		conform();
		}
	}
	lawgate2.close();
	ifstream lawgate3("lawgate3bhk.txt");
	if(bhk==3&&area=="lawgate")
	{
		while(lawgate3.eof()==0)
		{
			lawgate3.getline(s,100);
			cout<<s;
			cout<<endl;
		}
	   	cout<<"select the house"<<endl;
		cin>>i;
		if(i==1)
		{
		cout<<"laxmipurna apartments"<<endl;
		cout<<"NTR road"<<endl;
		cout<<"7th floor"<<endl;
		cout<<"rate:57lakhs	"<<endl;
		house<<"laxmipurna apartments"<<endl;
		house<<"NTR road"<<endl;
		house<<"7th floor"<<endl;
		house<<"rate:57lakhs"<<endl;
		conform();
		} 
		else if(i==2)
		{
		cout<<"digitech apartments"<<endl;
		cout<<"YSR ROAD road"<<endl;
		cout<<"8th floor"<<endl;
		cout<<"rate:52lakhs"<<endl;
		house<<"digitech apartments"<<endl;
		house<<"YSR ROAD road"<<endl;
		house<<"8th floor"<<endl;
		house<<"rate:52lakhs"<<endl;
		conform();
		}
		else if(i==3)
		{
		cout<<"ion apartments"<<endl;
		cout<<"INDIRA road"<<endl;
		cout<<"3rd floor"<<endl;
		cout<<"rate:45lakhs	"<<endl;
		house<<"ion apartments"<<endl;
		house<<"INDIRA road"<<endl;
		house<<"3rd floor"<<endl;
		house<<"rate:45lakhs"<<endl;
		conform();
		}
	}
	lawgate3.close();
	ifstream ludhaina1("ludhaina1bhk.txt");
	if(bhk==1&&area=="ludhaina")
	{
		while(ludhaina1.eof()==0)
		{
			ludhaina1.getline(s,100);
			cout<<s;
			cout<<endl;
		}
		cout<<"select the house"<<endl;
		cin>>i;
		if(i==1)
		{
		cout<<"rakesh apartments"<<endl;
		cout<<"vinner road"<<endl;
		cout<<"5th floor"<<endl;
		cout<<"rate:32lakhs"<<endl;
		house<<"rakesh apartments"<<endl;
		house<<"vinner road"<<endl;
		house<<"5th floor"<<endl;
		house<<"rate:32lakhs"<<endl;
		conform();
		}
		else if(i==2)
		{
		cout<<"pavani apartments"<<endl;
		cout<<"samuel road"<<endl;
		cout<<"6th floor"<<endl;
		cout<<"rate:23lakhs"<<endl;
		house<<"pavani apartments"<<endl;
		house<<"samuel road"<<endl;
		house<<"6th floor"<<endl;
		house<<"rate:23lakhs"<<endl;
		conform();
		}
		else if(i==3)
		{
		cout<<"gupta apartments"<<endl;
		cout<<"near gajuwaka"<<endl;
		cout<<"3rd floor"<<endl;
		cout<<"rate:42lakhs"<<endl;
		house<<"gupta apartments"<<endl;
		house<<"near gajuwaka"<<endl;
		house<<"3rd floor"<<endl;
		house<<"rate:42lakhs"<<endl;
		conform();
		}
	}
	ludhaina1.close();
	ifstream ludhaina2("ludhaina2bhk.txt");
	if(bhk==2&&area=="ludhaina")
	{
		while(ludhaina2.eof()==0)
		{
			ludhaina2.getline(s,100);
			cout<<s;
			cout<<endl;	
		}
		cout<<"select the house"<<endl;
		cin>>i;
		if(i==1)
		{
		cout<<"vani apartments"<<endl;
		cout<<"pallani road"<<endl;
		cout<<"5th floor"<<endl;
		cout<<"rate:87lakhs"<<endl;
		house<<"vani apartments"<<endl;
		house<<"pallani road"<<endl;
		house<<"5th floor"<<endl;
		house<<"rate:87lakhs"<<endl;
		conform();
		}
		else if(i==2)
		{
		cout<<"charu apartments"<<endl;
		cout<<"G.K road"<<endl;
		cout<<"7th floor"<<endl;
		cout<<"rate:41lakhs	"<<endl;
		house<<"charu apartments"<<endl;
		house<<"G.K road"<<endl;
		house<<"7th floor"<<endl;
		house<<"rate:41lakhs"<<endl;
		conform();
		}
		else if(i==3)
		{
		cout<<"annayya apartments"<<endl;
		cout<<"mark road"<<endl;
		cout<<"6th floor"<<endl;
		cout<<"rate:57lakhs	"<<endl;
		house<<"annayya apartments"<<endl;
		house<<"mark road"<<endl;
		house<<"6th floor"<<endl;
		house<<"rate:57lakhs"<<endl;
		conform();
		}
	}
	ludhaina2.close();
	ifstream ludhaina3("ludhaina3bhk.txt");
	if(bhk==3&&area=="ludhaina")
	{
		while(ludhaina3.eof()==0)
		{
			ludhaina3.getline(s,100);
			cout<<s;
			cout<<endl;
		}
	cout<<"select the house"<<endl;
		cin>>i;
		if(i==1)
		{
		cout<<"varadhi apartments"<<endl;
		cout<<"palla road"<<endl;
		cout<<"1th floor"<<endl;
		cout<<"rate:85lakhs"<<endl;
		house<<"varadhi apartments"<<endl;
		house<<"palla road"<<endl;
		house<<"1th floor"<<endl;
		house<<"rate:85lakhs"<<endl;
		conform();
	    }
	    else if(i==2)
	    {
	    cout<<"chakaran apartments"<<endl;
		cout<<"G.o road"<<endl;
		cout<<"7th floor"<<endl;
		cout<<"rate:41lakhs"<<endl;
		house<<"chakaran apartments"<<endl;
		house<<"G.o road"<<endl;
		house<<"7th floor"<<endl;
		house<<"rate:41lakhs"<<endl;
		conform();
		}
		else if(i==3)
		{
		cout<<"annaka apartments"<<endl;
		cout<<"marker road"<<endl;
		cout<<"6th floor"<<endl;
		cout<<"rate:52lakhs	"<<endl;
		house<<"annaka apartments"<<endl;
		house<<"marker road"<<endl;
		house<<"6th floor"<<endl;
		house<<"rate:52lakhs	"<<endl;
		conform();
		}
	}
	ludhaina3.close();
}
void conform();
void land()
{
    ofstream land("customer.txt",ios::app);
	int sq_ft;
	int acre;
	long int rate;
	string area;
	int j;
	int k;
	char type_of_land[20];
	char farm[20]="farmland";
	//char house[20]="house";
	cout<<"we have land for cultivation only"<<endl;
	
	cout<<"to continue press 1 \n to cancel press 2"<<endl;
	cin>>j;


	if(j==1)
	{
		cout<<"if you want then you have to type farmland"<<endl;
		cin>>type_of_land;
	if(strcmp(type_of_land,farm)==0)
    {
    	cout<<endl;
    cout<<"the lands are available in available in ludhaina and jalandhar"<<endl;
    cout<<"enter the area where you want to buy land"<<endl;
    cin>>area;
    cout<<"one can buy up to 5 acres due to some income tax issues"<<endl;
    cout<<"how many acres you want you buy"<<endl;
    cin>>acre;
    if(acre>=1&&acre<2&&area=="jalandhar")
    {
        cout<<endl;
    	cout<<"The available lands in jalandhar are:"<<endl;
    	cout<<"1-acre land at the ends of the jalandhar is of rate 5 lakhs"<<endl;
    	land<<"The available lands in jalandhar are:"<<endl;
    	land<<"1-acre land at the ends of the jalandhar is of rate 5 lakhs"<<endl;
    	conform();
	}
    if(acre>=2&&acre<=5&&area=="jalandhar")
    {
    	cout<<endl;
    	cout<<"In jalandhar the available lands are:"<<endl;
    	cout<<"3-acre land of rate 10 lakhs is available"<<endl;
    	land<<"In jalandhar the available lands are:"<<endl;
    	land<<"3-acre land of rate 10 lakhs is available"<<endl;
    	conform();
	}
	 if(acre>=1&&acre<2&&area=="ludhaina")
    {
    	cout<<endl;
    	cout<<"The available lands in ludhaina are:"<<endl;
    	cout<<"1.7-acre land at the ends of the ludhaina is of rate 7 lakhs"<<endl;
    	land<<"The available lands in ludhaina are:"<<endl;
    	land<<"1.7-acre land at the ends of the ludhaina is of rate 7 lakhs"<<endl;
    	conform();
	}
    if(acre>=2&&acre<=5&&area=="ludhaina")
    {
    	cout<<endl;
    	cout<<"In ludhaina the available lands are:"<<endl;
    	cout<<"4-acre land of rate 20 lakhs is available"<<endl;
    	land<<"In ludhaina the available lands are:"<<endl;
    	land<<"4-acre land of rate 20 lakhs is available"<<endl;
    	conform();
	}
	}
	
	else
	{
		cout<<"invalid input"<<endl;
	}
	land.close();
}
else 
{
	cout<<"BYEEEE"<<endl;
}
}
void conform();
void rented_house()
{
ofstream rent("customer.txt",ios::app);
char area[36];
int choice;
int select;
cout<<"rented houses are available in jalandhar and lawgate"<<endl;
cout<<"enter the area you want to take rented house"<<endl;
cin>>area;
char jal[29]="jalandhar";
char law[29]="lawgate";
cout<<"enter the range(rent)"<<endl;
cout<<"1.rent>=6000   2.rent>=10000"<<endl;
cin>>choice;
if(choice==1)
{
		cout<<"you have selected the range of >=6000"<<endl;
		if(strcmp(area,jal)==0)
		{
			cout<<"IN JALANDHAR THE AVAILABLE RENTED HOUSES ARE:"<<endl;
			cout<<"1:nandhini apartments with 1 bhk"<<endl;
			cout<<"locality:jyothi chowk"<<endl;
			cout<<endl;
			cout<<"2:koushik apartments with 1bhk"<<endl;
			cout<<"locality:modal town"<<endl;
			cout<<endl;
		    cout<<"select house"<<endl;
		    cin>>select;
		    if(select==1)
		    {
		    cout<<"1:nandhini apartments with 1 bhk"<<endl;
			cout<<"locality:jyothi chowk"<<endl;
			 rent<<"1:nandhini apartments with 1 bhk"<<endl;
			rent<<"locality:jyothi chowk"<<endl;
			cout<<endl;
			conform();
			}
			else if(select==2)
			{
			cout<<"2:koushik apartments with 1bhk"<<endl;
			cout<<"locality:modal town"<<endl;
			rent<<"2:koushik apartments with 1bhk"<<endl;
			rent<<"locality:modal town"<<endl;
			rent<<endl;
			conform();
			}
		}
		if(strcmp(area,law)==0)
		{
			cout<<"IN LAWGATE THE AVAILABLE RENTED HOUSES ARE:"<<endl;
			cout<<"1:nandu apartments with 1 bhk"<<endl;
			cout<<"locality:near more super market"<<endl;
			cout<<endl;
			cout<<"2:kavya apartments with 1bhk"<<endl;
			cout<<"locality:near temple"<<endl;
			cout<<endl;
		    cout<<"select house"<<endl;
		    cin>>select;
		    if(select==1)
		    {
		    cout<<"1:nandu apartments with 1 bhk"<<endl;
			cout<<"locality:near more super market"<<endl;
			cout<<endl;
			rent<<"1:nandu apartments with 1 bhk"<<endl;
			rent<<"locality:near more super market"<<endl;
			conform();
			}
			else if(select==2)
			{
			cout<<"2:kavya apartments with 1bhk"<<endl;
			cout<<"locality:near temple"<<endl;
			cout<<endl;
		    rent<<"2:kavya apartments with 1bhk"<<endl;
		   rent<<"locality:near temple"<<endl;
		
			conform();
			}
		}
}
		if(choice==2)
		{
		cout<<"you have selected the range of >=10000"<<endl;
		if(strcmp(area,jal)==0)
		{
			cout<<"IN JALANDHAR THE AVAILABLE RENTED HOUSES ARE:"<<endl;
			cout<<"1:kohli apartments with 2 bhk"<<endl;
			cout<<"locality:baba temple"<<endl;
			cout<<endl;
			cout<<"2:raina apartments with 3 bhk"<<endl;
			cout<<"locality:near baazar road"<<endl;
			cout<<endl;
		    cout<<"select house"<<endl;
		    cin>>select;
		    if(select==1)
		    {
		    cout<<"1:kohli apartments with 2 bhk"<<endl;
			cout<<"locality:baba temple"<<endl;
			cout<<endl;
			  rent<<"1:kohli apartments with 2 bhk"<<endl;
			rent<<"locality:baba temple"<<endl;
			conform();
			}
			else if(select==2)
			{
			cout<<"2:raina apartments with 3 bhk"<<endl;
			cout<<"locality:near baazar road"<<endl;
			cout<<endl;
			rent<<"2:raina apartments with 3 bhk"<<endl;
			rent<<"locality:near baazar road"<<endl;
			conform();
			}
		}
		if(area=="lawgate")
		{
			cout<<"IN LAWGATE THE AVAILABLE RENTED HOUSES ARE:"<<endl;
			cout<<"1:duplesis apartments with 2 bhk"<<endl;
			cout<<"locality:ice cream parlour"<<endl;
			cout<<endl;
			cout<<"2:rabada apartments with 3 bhk"<<endl;
			cout<<"locality:near opticals shop"<<endl;
			cout<<endl;
		    cout<<"select house"<<endl;
		    cin>>select;
		    if(select==1)
		    {
		    cout<<"1:duplesis apartments with 2 bhk"<<endl;
			cout<<"locality:ice cream parlour"<<endl;
			cout<<endl;
			rent<<"1:duplesis apartments with 2 bhk"<<endl;
			rent<<"locality:ice cream parlour"<<endl;
			conform();
			}
			else if(select==2)
			{
			cout<<"2:rabada apartments with 3 bhk"<<endl;
			cout<<"locality:near opticals shop"<<endl;
			cout<<endl;
			rent<<"2:rabada apartments with 3 bhk"<<endl;
			rent<<"locality:near opticals shop"<<endl;
			conform();
			}
		}
	}
	rent.close();     
}
void conform()
{
	int conform;
	cout<<"to conform press 1 (or) to cancel press 2"<<endl;
	cin>>conform;
	if(conform==1)
	{
		cout<<"you have purchased the property sucessfully"<<endl;
		details();
	}
	else if(conform==2)
	{
		cout<<"you have cancelled"<<endl;
	}
	else
	{
	 cout<<"invalid input"<<endl;
	}
}
void details()
{
	ofstream data("customer.txt",ios::app);
	cout<<"enter your details"<<endl;
	char fn[30];
	cout<<"enter your first name"<<endl;
	cin>>fn;
	data<<"name:"<<fn<<ends;
	char ln[30];
	cout<<"enter your last name"<<endl;
	cin>>ln;
	data<<ln<<endl;
	char phno[20];
	cout<<"enter your mobile number"<<endl;
	cin>>phno;
	data<<"phone number:"<<phno<<endl;
	data<<endl;
	cout<<"you should be ready with your money with in 15 days"<<endl;
	cout<<"we call you with in 10 days to remind you"<<endl;
	cout<<"\t\t\t\t\t\t\t\t<-<-THANK YOU!->->"<<endl;
}
int main()
{
real_estate advi;
advi.welcome();	
return 0;
}

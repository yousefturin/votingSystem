/* FIRST STEP  in this program is  to go in to admin mode after that you need to select add IN NUMBER to the system 
in that way the people after that can voite becose the system file will compare between ID number that we have in database and the user input of id NUMBER 
the program still have a cuple problems one of them the csv system doesnt save the function inside it so i think i need to make a fout function in the program
 that will print inside the csv folder the function after that it will print the resulte ->>> but i didn't make it yet maybe if i can i will do it    v 1.0
 

 */ 






#include<stdlib.h>

#include<conio.h>

#include <stdlib.h>

#include<string>                 

#include<ctype.h>                   

#include<dos.h> 

#include<iostream>

#include<ctime>

#include<fstream>

#include<iomanip>

#include <vector>

#include<iterator>

#include<sstream>

#include <unistd.h>
using namespace std;
string natID ;
int n;
int quit = true ;



int enterFaceAdminstration(){

			cout<<"\t\t\t\t\t\t\t\t\t\t\t\t<1> S E A R C H   TOTAL POINTS \n\t\t\t\t\t\t\t\t\t\t\t\t"
									  "<2> S E A R C H   FIRST  CANDEDATE POINTS\n\t\t\t\t\t\t\t\t\t\t\t\t"
									  "<3> S E A R C H   SECOND CANDEDATE POINTS\n\t\t\t\t\t\t\t\t\t\t\t\t"
									  "<4> A D D    	 ID NUMBER TO SYSTEM\n\t\t\t\t\t\t\t\t\t\t\t\t"
									  "<5> Q U I T \n \n  Enter your choice:"<<endl;
									  cin>>n;


		return n; 
}






class logInGoverment{
	
	public :
		string userNameAttempt;
		string passWordAttempt;


		void login(){
			cout<<"Please Enter Your Username And Password.\nUsername:";
			cin>> userNameAttempt;
			if (userNameAttempt == userName)
			{
				cout<<"Password:\n";
  			 	char ch;
   				ch = _getch();
   			while(ch != 13){
				
      			if(ch=='\b')
      		  	{
      		  	
            	cout<<"\b \b";
            	passWordAttempt.erase( passWordAttempt.end() -1 );
        		
				}
        			else{
						passWordAttempt.push_back(ch);
						cout << '*';
				
					}
      			
				ch = _getch();

   			}
				// dont know any other ways to do it 
				if(passWordAttempt == passWord )
				{
					cout<<"\nC";
					usleep(33000);
					cout<<"H";
					usleep(33000);
					cout<<"E";
					usleep(33000);
					cout<<"C";
					usleep(33000);
					cout<<"K";	
					usleep(33000);
					cout<<"I";
					usleep(33000);
					cout<<"N";
					usleep(33000);
					cout<<"G";
					usleep(33000);
					cout<<".";
					usleep(33000);
					cout<<".";	
					usleep(33000);
					cout<<"."<<endl;
					usleep(33000);
					cout<<"\t\t\t\t\t\t\t\t\t\t\t\tWelcome to ADMIN mood\n";
					cout<<"\t\t\t\t\t\t\t\t\t\t    \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";
					
				}
				else
				{
				cout<<"\nYour Password Is Inviled, Please Try Agian \n ";
				cout<<"YOU HAVE 2 ATTEMPTED LEFT !!!!!\n";
				login();	
								}				
			}
			else 
			{
				cout<<"\nYour Username Is Inviled, Please Try Agian \n ";
				login();
			}
		}
	private :
		string userName= "Admin";
		string passWord= "Admin12345";	


};

string getnatID(){
		cout<<"Pelese Enter Your NATIONAL ID :\n";
			cin>>natID;

		return natID;
					
	}	
	
class poile{
	
	
	public :
	
	
	void nameCandidateCheeck(){
			
			cout<<"Pelese Enter Your Candidate Name :\n";
				cin>>nameCandidate;

		if ((nameCandidate == "TRUMP" )||( nameCandidate == "trump")){ 
			
				setInformation();
			     
			return;
		}
		if ((nameCandidate == "BIDEN" )||( nameCandidate == "biden")){ 
				
				setInformation1();
			     
			return;
		}
		
		else {
			cout<<"YOU ENTER WRRONG CANDIDATE NAME PLEASE CHECK YOUR SPELEING!!!"<<endl;
			nameCandidateCheeck();
			sleep(2);	
			system("CLS");
			return ;
			
		}
	}
	
		
		
	int getInformation(){
	
		cout<<"Pelese Enter Your FIRS Name :\n";
			cin>>name;
		cout<<"Pelese Enter Your MOTHER Name :\n";
			cin>>motherName;
		cout<<"Pelese Enter Your FATHER Name :\n";
			cin>>fatherName;
		cout<<"Pelese Enter Your FAMILY Name :\n";
			cin>>familyName;		
		cout<<"Pelese Enter Your Full ADDRESS :\n";
			cin>>address;
		cout<<"Pelese Enter Your PHONE NUMBER :\n";
			cin>>phoneNumber;
			
		nameCandidateCheeck();																	
	}	
	
	
	
	
	int setInformation(){
		
	ofstream Fout;
	time_t now;
	struct tm nowLocal;
	now = time (NULL);
	nowLocal = *localtime(&now);
	Fout.open("poile.csv", ios::app);
	Fout<<natID<<','<<name<<','<<fatherName<<','<<familyName<<','<<motherName<<','<<phoneNumber<<','<<address<<','<<nameCandidate<<','<<"0"<<','<<"1"<<','<<nowLocal.tm_mday<<"/"<<nowLocal.tm_mon+1<<"/"<<nowLocal.tm_year+1900<<','<<nowLocal.tm_hour<<":"<<nowLocal.tm_min<<":"<<nowLocal.tm_sec<<" "<<'\n';
	cout<<"L";
	usleep(33000);
	cout<<"O";
	usleep(33000);
	cout<<"D";
	usleep(33000);
	cout<<"I";
	usleep(33000);
	cout<<"N";
	usleep(33000);
	cout<<"G"<<endl;
	cout<<"Thank you for giving you voice to whom you thik is diserved \n";
	

  	}
  	int setInformation1(){
		
	ofstream Fout;
	time_t now;
	struct tm nowLocal;
	now = time (NULL);
	nowLocal = *localtime(&now);
	Fout.open("poile.csv", ios::app);
	Fout<<natID<<','<<name<<','<<fatherName<<','<<familyName<<','<<motherName<<','<<phoneNumber<<','<<address<<','<<nameCandidate<<','<<"1"<<','<<"0"<<','<<nowLocal.tm_mday<<"/"<<nowLocal.tm_mon+1<<"/"<<nowLocal.tm_year+1900<<','<<nowLocal.tm_hour<<":"<<nowLocal.tm_min<<":"<<nowLocal.tm_sec<<" "<<'\n';
	cout<<"L";
	usleep(33000);
	cout<<"O";
	usleep(33000);
	cout<<"D";
	usleep(33000);
	cout<<"I";
	usleep(33000);
	cout<<"N";
	usleep(33000);
	cout<<"G"<<endl;
	cout<<"Thank you for giving you voice to whom you thik is diserved \n";
	

  	}
  	
 	private : 
	string address;
	string motherName;
	string fatherName;
	string name;
	string nameCandidate;
	string date;
	string phoneNumber; 
	string familyName;	
	
};



class csvRow{
	
	public :
		
		string const& operator[](size_t index)const {
		
		return m_data[index];
		
		}
		
		size_t size()const {
		return m_data.size();
		
		}
		
		void readNextRow(istream& str){
			
			string line;
			getline(str, line);
			std::stringstream lineStream(line);
			string cell;
			
			m_data.clear();
			while(getline(lineStream, cell, ',')){
				
				m_data.push_back(cell);
				
			}
			if(!lineStream && cell.empty()){
				
				m_data.push_back("");
			}
			
		}
	private :
		
		vector<string>m_data; 	
};




istream& operator>>(istream& str, csvRow& data) {
	data.readNextRow(str);
	return str;
}



void firstNameCandidateResuelt(){
	
	//	ofstream Fout;
	//	Fout.open("poile.csv", ios::app);
	//	Fout<<','<<','<<','<<','<<','<<','<<','<<','<<','<<','<<','<<','<<"TRUMP"<<','<<"=SUM(J:J)"<<'\n';
		
		ifstream file("poile.csv");
		csvRow row ;
		while(file >> row ){
			if (row[12]=="TRUMP"){
			cout<<"INFORMATION:"<<','<<row[12]<<','<<row[13]<<'\n';
			}
		
		
		}				
			
}



void secondNameCandidateResuelt(){
	

	//	ofstream Fout;
	//	Fout.open("poile.csv", ios::app);
	//	Fout<<','<<','<<','<<','<<','<<','<<','<<','<<','<<','<<','<<','<<"BIDEN"<<','<<"=SUM(I:I)"<<'\n';
		
		ifstream file("poile.csv");
		csvRow row ;
		while(file >> row ){	
			if (row[13]=="BIDEN"){
			cout<<"INFORMATION:"<<','<<row[12]<<','<<row[13]<<'\n';
			}	
		
		
		}

}

void addIdNumber(){
	
	cout<<"Pelese Enter Your NATIONAL ID :\n";
	cin>>natID;
	ofstream Fout;
	Fout.open("system.csv", ios::app);
	Fout<<natID<<'\n';
	cout<<"L";
	usleep(33000);
	cout<<"O";
	usleep(33000);
	cout<<"D";
	usleep(33000);
	cout<<"I";
	usleep(33000);
	cout<<"N";
	usleep(33000);
	cout<<"G"<<endl;
  	// NEED FUNCTION TO GO BACK TO THE  main();


}






int  enterFaceUser(){

	
	cout<<"\t\t\t\t\t\t\t\t\t\tUNITED	STATES	OF AMEICA  ELECTION   SYSTYM              										 \n";
	cout<<"\t\t\t\t\t\t\t\t\t\t                                                   FOR :2020                  						 \n";
	cout<<"\t\t\t\t\t\t\t\t\t\tTHIS SYSTYM IS HIGHLY SECURED                                               						     \n";
	cout<<"\t\t\t\t\t\t\t\t\t\tPLEASE READ THIS RULS VERY CARFULLY:                                         						 \n";
	cout<<"\t\t\t\t\t\t\t\t\t\tBE CARFUL WHEN YOU ENTER YOUR NATIONAL ID AND ALL DATA .                     						 \n";
	cout<<"\t\t\t\t\t\t\t\t\t\tYOU ARE RESPONSIBLE FOR ALL INFORMATION THAT YOU WILL ENTER.                  						 \n";
	cout<<"\t\t\t\t\t\t\t\t\t\tALL THE INFORMATION WILL BE CHECKED BY THE US DATA BASE.                     						 \n";
	cout<<"\t\t\t\t\t\t\t\t\t\tIF THERE WILL BE ANY ERORRS WITH YOUR INFORMATION THAT YOU ENTERED, YOU WILL BE ACCOUNTABLE TO THe LAW\n";
	cout<<"\t\t\t\t\t\t\t\t\t\tAS IT'S IN THE constitution NUMBER[59934/2321] OF UNITED STATES OF AMEICA      	                     \n";
	cout<<"\t\t\t\t\t\t\t\t\t\t                                                                              \n";
	cout<<"\t\t\t\t\t\t\t\t\t\t                                                                              \n";
	cout<<"\t\t\t\t\t\t\t\t\t\t                                                                              \n";
	cout<<"\t\t\t\t\t\t\t\t\t\t                                                                              \n";
	cout<<"PREES ENTER TO FOLLOW \n";

}











int main (){

enterFaceUser();

	
if (cin.get() == '\n'){
	
	poile election;
	ifstream file("system.csv");
	csvRow row ;
	getnatID();
	while(file >> row ){
				
		if (row[0] == natID){
			
					cout<<"\nC";
					usleep(33000);
					cout<<"H";
					usleep(33000);
					cout<<"E";
					usleep(33000);
					cout<<"C";
					usleep(33000);
					cout<<"K";	
					usleep(33000);
					cout<<"I";
					usleep(33000);
					cout<<"N";
					usleep(33000);
					cout<<"G";
					usleep(33000);
					cout<<".";
					usleep(33000);
					cout<<".";	
					usleep(33000);
					cout<<"."<<endl;
					usleep(33000);
					
			cout<<"Your information is correct\n";
			sleep(2);	
			system("CLS");

			break;
		}
		
	}	
	if (row[0] != natID){
		
			cout<<"Your information is incorrect\n";
			sleep(2);
			system("CLS");
			main();
		
		}	

	


		election.getInformation();	

	

	
		
	}
if (cin.get()== '\t' ) {

//else{
	
	logInGoverment Goverment;
	Goverment.login();
	enterFaceAdminstration();
	
	switch (n){
		
		case 1:
		//	totalNumberOfVoters();
			
				break ;
		
		case 2:
			firstNameCandidateResuelt();
			
				break;	
		case 3:
			secondNameCandidateResuelt();
			
				break;
		case 4:
			addIdNumber();
			
				break;
		case 5 :
			
			quit= false;
			
				break;
			
		default :{
		
					cout<<"You Entered Wrrong Choice Please Try Agin :"<<endl;
		
					enterFaceAdminstration();
				
					break;
		}		
									
	}
	
	



}

else {
	main();
}
	
	
	
	
}





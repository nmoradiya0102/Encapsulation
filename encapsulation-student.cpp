#include<iostream>
#include<string.h>

using namespace std;

class student{
	private:
		int id;
		char name[100];
		int age;
		char course[100];
		char email[100];
		char city[100];
		char collage[100];
		
	public:
		void setter (int i ,char n[] , int a , char cr[] , char em[] , char ct[] , char clg[]){
			id = i;
			strcpy(name,n);
			age = a;
			strcpy(course,cr);
			strcpy(email,em);
			strcpy(city,ct);
			strcpy(collage,clg);
		}
		void getter(){
			cout<<"std id: "<<id<<endl;
			cout<<"std name: "<<name<<endl;
			cout<<"std age: "<<age<<endl;
			cout<<"std course: "<<course<<endl;
			cout<<"std email: "<<email<<endl;
			cout<<"std city: "<<city<<endl;
			cout<<"std collage: "<<collage<<endl;
		}
};

int main(){
	student obj1 , obj2 , obj3 , obj4 , obj5 ;
	
	char name[]="pinal";
	char course[]="Bussiness managment";
	char email[]= "pinalabc@gmail.com";
	char city[]="Surat";
	char clg[]="SDJ";
	obj1.setter(1020,name,18,course,email,city,clg);
	obj1.getter();
	
	
	obj2.setter(1122,"yesha",19,"Finance managment","yeshadrv@gmail.com","Mumbai","central collage");
	obj2.getter();
	
	obj3.setter(1324,"vikram",20,"International bussiness","vikrambd@gmail.com","Baroda","parul university");
	obj3.getter();
	
	obj4.setter(4321,"parth",19,"Hospitality","parthpie@gmail.com","Delhi","international collage");
	obj4.getter();
	
	obj5.setter(3214,"sneh",21,"Accoutant","snehacc@gmail.com","Ahamdabad","indira gandhi");
	obj5.getter();
	
	return 0;

} 




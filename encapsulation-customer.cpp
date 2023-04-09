#include<iostream>
#include<string.h>


using namespace std;

class customer{
	public:
	    int id;
	    char name[100];
	    int age;
	    char brand[100];
	    int mobile;
	    char city[100];
	    char validity[100];
	
	void setter(int i , char n[] , int a , char bn[] , int m , char ct[] , char v[]){
		id = i;
	    strcpy(name,n);
	    age = a;
	    strcpy(brand,bn);
	    mobile = m;
	    strcpy(city,ct);
	    strcpy(validity,v);
	    
	}
	
	void getter(){
		cout<<"cust id: "<<id<<endl;
		cout<<"cust name: "<<name<<endl;
		cout<<"cust age: "<<age<<endl;
		cout<<"cust brand name: "<<brand<<endl;
    	cout<<"cust mobile no.: "<<mobile<<endl;
		cout<<"cust city: "<<city<<endl;
		cout<<"cust card validity: "<<validity<<endl;
	}
	
};

int main(){
	
	customer obj1 , obj2 , obj3 , obj4 , obj5;
	
	obj1.setter(222,"Vikas",25,"Jio",8769453732,"Surat","Three year");
	obj1.getter();
	
	obj2.setter(125,"Rahul",20,"Vi",9876543210,"Rajkot","Two year");
	obj2.getter();
	
	obj3.setter(432,"Shrey",29,"Airtel",9517532684,"Vadodra","One year");
	obj3.getter();
	
	obj4.setter(472,"Aryan",30,"Vodafone",8529637451,"Bhavnagar","Two year");
	obj4.getter();
	
	obj5.setter(445,"Jemin",24,"Idea",7596841532,"Amreli","Six month");
	obj5.getter();
	
	return 0;
}


















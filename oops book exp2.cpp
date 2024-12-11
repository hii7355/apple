#include<iostream>
using namespace std;

class publication{
	string title;
	float price;
public:
	void getdata(){
		cout<<"\n\tEnter Title";
		cin>>title;
		cout<<"\n\tEnter price";
		cin>>price;
	}
	void display(){
		cout<<"\n\tTitle is "<<title;
		cout<<"\n\tPrice is "<<price;
	}	
};
class book:public publication{
	int count;
public:
	void getbook(){
		cout<<"\n\tEnter No. of pages ";
		cin>>count;
	}
	void displaybook(){
		cout<<"\n\tNo. of pages are "<<count;
	}
};
class tape:public publication{
	float time;
public:
	void gettape(){
		cout<<"\n\tEnter playing time ";
		cin>>time;
	}
	void displaytape(){
		cout<<"\n\tplaying time is "<<time;
	}	
};


int main(){
	cout<<"\n\t PUBLICATION";
	book b1;
	tape t1;
	b1.getdata();
	b1.getbook();
	t1.getdata();
	t1.gettape();
	b1.display();
	b1.displaybook();
	t1.display();
	t1.displaytape();
	return 0;
}


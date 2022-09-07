#include "bits/stdc++.h"
using namespace std;
class Hero{
	private:
char health;
char level;

public:

Hero(char health,char level){
	this->health=health;
	this->level=level;
}



//copy consture
Hero (Hero &temp){
	this->level=temp.level;
	this->health=temp.health;
}
void print(){
	cout<< "level::"<< level<<endl;
	cout<<  "health::"<< health<<endl;
	}



char gethealth(){
	return health;
}
char getlevel(){
	return level;
}

void sethealth(char h ){
	health=h;
}
void setlevel(char l){
	level=l;
}








};
int main(){

Hero s('m','k');
//s.print();

Hero r(s);
r.print();












// Hero a('l');

// cout<<"level"<<a.getlevel()<<endl;



// Hero*h=new Hero('k','m');
// h->print();
// Hero temp('m','k');
// h->sethealth('o');
// h->setlevel('A');
// cout<<"level::" <<(*h).getlevel()<<endl;
// cout<<"level::" <<(*h).gethealth()<<endl;


//temp.print();
// 		Hero ramesh;
// 		cout<<"size of"<<sizeof(ramesh)<<endl;
// 	cout<<"this is the lavel of your"<<ramesh.getlevel()<<endl;
// cout<<"your age is "<< ramesh.getage()<<endl;
	return 0;
}
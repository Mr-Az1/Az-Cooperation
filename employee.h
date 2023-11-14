#include<D:\Mr.Az\monster.h>
int empcnt,empmax=4;
struct member{
	int info[8];
	int weapon,armor;
	string name;
	
	inline void set(int a=1,int b=1,int c=1,int d=1,int wea=1,int ar=1,string nam="azz"){
		info[0]=a;info[1]=b;info[2]=c;info[3]=d;
		weapon=wea;armor=ar;name=nam;
		return ;
	}
}man[100];
inline void insert_man(int a=1,int b=1,int c=1,int d=1,int wea=0,int ar=0,string nam="azz"){
	empcnt++;man[empcnt].set(a,b,c,d,wea,ar,nam);empmax=max(empmax,siz(nam)); 
	return ;
}

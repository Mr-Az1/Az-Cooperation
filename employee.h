#include<D:\Mr.Az\armor.h>
int empcnt,empmax;
struct member{
	int info[6];
	int Weapon,Armor;
	string Name;
	int HP=10000;
	
	inline void set(int a=1,int b=1,int c=1,int d=1,int wea=1,int ar=1,string nam="azz"){
		info[1]=a;info[2]=b;info[3]=c;info[4]=d;
		Weapon=wea;Armor=ar;Name=nam;
		return ;
	}
}employee[100];
inline void insert_man(int a=1,int b=1,int c=1,int d=1,int wea=0,int ar=0,string nam="azz"){
	empcnt++;employee[empcnt].set(a,b,c,d,wea,ar,nam);empmax=max(empmax,siz(nam)); 
	return ;
}
inline void list_emp(){
	print("±àºÅ ");
	printw("Ãû×Ö",empmax-1,7);
	for(rint i=1;i<=4;i++) print(" "+infname(i),infcol(i)); 
	print(" E.G.OÎäÆ÷ E.G.O»¤¼×\n"); 
	for(rint i=1;i<=empcnt;i++){
		auto temp=employee[i];
		printw(itos(i),4,7);
		printw(temp.Name,max(empmax,4),7);
		for(rint j=1;j<=4;j++) sprintw(itos(temp.info[j]),4,7);
		printw(weapon[temp.Weapon].Name,9,7);
		printw(armor[temp.Armor].Name,9,7);
		puts("");Sleep(10);
	}
	return ;
}

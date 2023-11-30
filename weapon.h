#include<D:\Mr.Az\basic_info.h>
int weacnt=0;
struct weapon{
	string Name,Level;
	int Damage_Color;
	vector<string> describe;
	pii Attack;
	bool spe[100];
}weapon[100];
inline void init_weapon(){
	#define twea weapon[weacnt]
	twea.Name="警戒棍";
	twea.Level="Be";
	twea.Damage_Color=1;
	twea.describe.pb("挥舞手中的警戒棍");
	twea.Attack={250,250};
	weacnt++;
	twea.Name="樱落";
	twea.Level="SAn";
	twea.Damage_Color=damnum("精神");
	twea.describe.pb("建立了平面直角坐标系");
	twea.describe.pb("开了手中的每日一题，发出耀眼白光");
	twea.describe.pb("掏出成绩表");
	twea.spe[1]=1;
	twea.Attack={250,250};
	return ;
} 

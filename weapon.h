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
	twea.Name="�����";
	twea.Level="Be";
	twea.Damage_Color=1;
	twea.describe.pb("�������еľ����");
	twea.Attack={250,250};
	weacnt++;
	twea.Name="ӣ��";
	twea.Level="SAn";
	twea.Damage_Color=damnum("����");
	twea.describe.pb("������ƽ��ֱ������ϵ");
	twea.describe.pb("�������е�ÿ��һ�⣬����ҫ�۰׹�");
	twea.describe.pb("�ͳ��ɼ���");
	twea.spe[1]=1;
	twea.Attack={250,250};
	return ;
} 

#include<D:\Mr.Az\employee.h>
int moncnt=1;
struct monster{
	string Name,Level,Num;// ���� �ȼ� ��� 
	string Story;// �������� 
	string WorkName[5];// ����ѡ������ 
	vector<int> Work[5];// �����ɹ��� 
	vector<string> describe;
	vector<pair<string,int>> Manage;// ������֪ 
	int Damage_Color,HP,Weapon,Armor,Energy,Count;// ���� ���� ���ι��������������� �濨���������� 
	int Count_Limit,HP_Limit;
	pair<int,int> Attack;//�˺�����
	double kangxing[6]; 
	
	bool Is_Info,Is_Manage[10],Is_Weapon,Is_Armor;
	int Value_Info,Value_Weapon,Value_Armor;
}monster[100];
inline void init_monster(){
	#define tmon monster[moncnt]
	tmon.Name="������1";
	tmon.Level="SAn";
	tmon.Num="H-2-16-65";
	tmon.Weapon=1;
	tmon.Armor=1;
	tmon.Energy=30; 
	tmon.Count=tmon.Count_Limit=2;
	tmon.Damage_Color=1;
	tmon.Attack={500,1000};
	tmon.kangxing[1]=0.6;
	tmon.kangxing[2]=0.8;
	tmon.kangxing[3]=1.2;
	tmon.kangxing[4]=0.6;
	tmon.HP=20000;
	tmon.Story=
	(string)"8.24\n"+
	(string)"����ǰ�������һ��ʯͷ������˵���Ǵ����ʯͷ����⵽��δ֪���ܷ�Ӧ����֪��С���Ա������Ϊ���Ƕ�δ֪̽����������\n"+
	(string)"8.26\n"+
	(string)"��֡������ʯͷ�ĸ������ݶ���·�ߵ�ʯͷû��������Ҳ��ȫû�в������ܷ�Ӧ�ĺۼ���\n"+
	(string)"8.29\n"+
	(string)"ǰ��ӻ������ˡ������������һ�����ʯ��\n"+
	(string)"8.31\n"+
	(string)"���ǵ��о��������˽�չ����ӵ����ʶ������Ӧ�����ǣ�һ��ʯͷ���Լ���˼�룬���ǲ���˼�飡\n"+
	(string)"8.32\n"+
	(string)"����һ�ֲ��õ�Ԥ�С����������ڷ���һЩ��������֪�ķ�Ӧ����\n"+
	(string)"8.33\n"+
	(string)"���������ѣ������޷���֮�࿹���ұ��������뿪�������㿴������ƪ�ռǣ������뿪��������������������������ģ�\n"+
	(string)"�k�����ս����١����k���������ǡ����Ὣ�ػ�������\n"+
	(string)"[blood]\n",
	tmon.describe.pb("������ƽ��ֱ������ϵ");
	tmon.describe.pb("�������е�ÿ��һ�⣬����ҫ�۰׹�");
	tmon.describe.pb("�ͳ��ɼ���");
	tmon.WorkName[1]="����1",tmon.WorkName[2]="����2",tmon.WorkName[3]="����3",tmon.WorkName[4]="����4";
	tmon.Work[1]={0,10,10,20,20,20};
	tmon.Work[2]={0,30,30,30,40,40};
	tmon.Work[3]={0,10,10,20,20,30};
	tmon.Work[4]={0,10,30,50,70,90};
	tmon.Manage.pb({"���� ������1 �Ĺ������Ϊ �� ʱ���м��ʻ����Ʒ ���� �����ָ̻�һ���ľ���ֵ��",10});
	tmon.Manage.pb({"�� ������1 ͻ������ʱ��������� \"����\" ��Ʒ��Ա�������滻Ϊ \"����\"������������ֻš�",10});
	tmon.Manage.pb({"������1 ���ܡ���ӣ֮�̡��ĸ���Ч��Ӱ�졣",10});
	tmon.Manage.pb({"������1 ÿ�غϻ�Ϊ�Լ����һ�㡸��ӣ֮�̡���������ӣ֮�̡������ﵽ 3 ʱ������ӣ֮�̡��������㲢���̶��ҷ�Ա����ɸ߶���˺���",10});
	tmon.Value_Info=30;
	tmon.Value_Weapon=20;
	tmon.Value_Armor=20;
	#undef tmon
}
inline void insert_mon(int num){mon.push_back(num);return ;};
inline int work_mon(int monn,int emp,int mod){
	#define tmon monster[mon[monn]]
	#define temp employee[emp]
	print(temp.Name+" �������� "+((tmon.Is_Info)?tmon.Name:tmon.Num)+" ���� "+tmon.WorkName[mod]+" ����\n");
	int cnt1=0,sum=0;
	for(rint i=1;i<=tmon.Energy;i++){
		if(random(tmon.Work[mod][temp.info[3]])) print("��",10),cnt1++;
		else print("��",12);
		sum++;
		Sleep(200);
	}
	double result=100.0*cnt1/sum;int ret=0;
	PE_BOX+=cnt1;
	print("\n�������: ");
	if(result<=30) 		{print("��",4);		ret=1;}
	else if(result<=70) {print("��",11);	ret=2;}
	else 				{print("��",10);	ret=3;}
	print("\n�����������\n");
	getch();
	#undef tmon
	#undef temp
	return ret;
}

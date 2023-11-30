#include<D:\Mr.Az\employee.h>
int moncnt=1;
struct monster{
	string Name,Level,Num;// 名称 等级 编号 
	string Story;// 身世故事 
	string WorkName[5];// 工作选项名称 
	vector<int> Work[5];// 工作成功率 
	vector<string> describe;
	vector<pair<string,int>> Manage;// 管理须知 
	int Damage_Color,HP,Weapon,Armor,Energy,Count;// 武器 护甲 单次工作产出能量上限 逆卡巴拉计数器 
	int Count_Limit,HP_Limit;
	pair<int,int> Attack;//伤害上限
	double kangxing[6]; 
	
	bool Is_Info,Is_Manage[10],Is_Weapon,Is_Armor;
	int Value_Info,Value_Weapon,Value_Armor;
}monster[100];
inline void init_monster(){
	#define tmon monster[moncnt]
	tmon.Name="异想体1";
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
	(string)"今天前锋队送来一块石头，他们说这是从这块石头上侦测到了未知高能反应，我知道小组成员都是认为这是对未知探索的契机。\n"+
	(string)"8.26\n"+
	(string)"奇怪……这块石头的各项数据都和路边的石头没有两样，也完全没有产生高能反应的痕迹。\n"+
	(string)"8.29\n"+
	(string)"前锋队或许搞错了……这根本就是一块鹅卵石！\n"+
	(string)"8.31\n"+
	(string)"我们的研究终于有了进展！它拥有意识！它回应了我们！一块石头有自己的思想，真是不可思议！\n"+
	(string)"8.32\n"+
	(string)"我有一种不好的预感……它好像在发生一些我们所不知的反应……\n"+
	(string)"8.33\n"+
	(string)"他正在苏醒！我们无法与之相抗，我必须马上离开这里，如果你看到了这篇日记，立即离开这里，他的力量不是我们做能理解的！\n"+
	(string)"祂……终将降临……祂将治愈我们……吾将重获新生！\n"+
	(string)"[blood]\n",
	tmon.describe.pb("建立了平面直角坐标系");
	tmon.describe.pb("开了手中的每日一题，发出耀眼白光");
	tmon.describe.pb("掏出成绩表");
	tmon.WorkName[1]="工作1",tmon.WorkName[2]="工作2",tmon.WorkName[3]="工作3",tmon.WorkName[4]="工作4";
	tmon.Work[1]={0,10,10,20,20,20};
	tmon.Work[2]={0,30,30,30,40,40};
	tmon.Work[3]={0,10,10,20,20,30};
	tmon.Work[4]={0,10,30,50,70,90};
	tmon.Manage.pb({"当对 异想体1 的工作情况为 优 时，有几率获得饰品 晨曦 并立刻恢复一定的精神值。",10});
	tmon.Manage.pb({"当 异想体1 突破收容时，所有佩戴 \"晨曦\" 饰品的员工将被替换为 \"哀歌\"，并立刻陷入恐慌。",10});
	tmon.Manage.pb({"异想体1 不受「白樱之刻」的负面效果影响。",10});
	tmon.Manage.pb({"异想体1 每回合会为自己添加一层「白樱之刻」，当「白樱之刻」层数达到 3 时，「白樱之刻」层数清零并立刻对我方员工造成高额精神伤害。",10});
	tmon.Value_Info=30;
	tmon.Value_Weapon=20;
	tmon.Value_Armor=20;
	#undef tmon
}
inline void insert_mon(int num){mon.push_back(num);return ;};
inline int work_mon(int monn,int emp,int mod){
	#define tmon monster[mon[monn]]
	#define temp employee[emp]
	print(temp.Name+" 对异想体 "+((tmon.Is_Info)?tmon.Name:tmon.Num)+" 进行 "+tmon.WorkName[mod]+" 工作\n");
	int cnt1=0,sum=0;
	for(rint i=1;i<=tmon.Energy;i++){
		if(random(tmon.Work[mod][temp.info[3]])) print("■",10),cnt1++;
		else print("■",12);
		sum++;
		Sleep(200);
	}
	double result=100.0*cnt1/sum;int ret=0;
	PE_BOX+=cnt1;
	print("\n工作结果: ");
	if(result<=30) 		{print("差",4);		ret=1;}
	else if(result<=70) {print("良",11);	ret=2;}
	else 				{print("优",10);	ret=3;}
	print("\n按任意键返回\n");
	getch();
	#undef tmon
	#undef temp
	return ret;
}

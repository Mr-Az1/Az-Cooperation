#include<D:\Mr.Az\plot.h>
inline void Die_Message(int emp){
	cout<<employee[emp].Name<<" ���ˣ������㺦��������\n";
	return ;
} 
inline void Die(int emp){
	Die_Message(emp);
	for(rint i=emp+1;i<=empcnt;i++) swap(employee[i],employee[i-1]);
	empcnt--;
	return ;
}
inline void damage_mon(int mon,int emp){
	stack<int> res;
	#define tmon monster[mon]
	#define temp employee[emp]
	#define tempar armor[temp.Armor]
	#define tempwea weapon[temp.Weapon]
	#define origin_damage_mon rand(tmon.Attack)
	auto kangxing_emp=tempar.kangxing[tmon.Damage_Color];
	#define damage_mon  int(origin_damage_mon*kangxing_emp)
	#define origin_damage_emp rand(tempwea.Attack)
	auto kangxing_mon=tmon.kangxing[tempwea.Damage_Color];
	#define damage_emp int(origin_damage_emp*kangxing_mon)
//	cout<<"DEBUG: �Է���ɵ��˺�="<<origin_damage<<" ����="<<kangxing<<" �����˺�="<<damage<<endl;
	int i=0;
	while(tmon.HP>0&&temp.HP>0){
		i++;
		if(i%2){
			print(tmon.Name+" "+tmon.describe[rand0(tmon.describe.size())]+
			" ��Ա�� "+temp.Name+" ����� "+itos(damage_mon)+" ��"+damname(tmon.Damage_Color)+"�˺�\n");
			temp.HP-=damage_mon;
			temp.HP=max(0,temp.HP);
			print("Ա�� "+temp.Name+" ��ǰѪ��: "+itos(temp.HP)); 
		}
		else{
			print(temp.Name+" "+
			tempwea.describe[rand0(tempwea.describe.size())]+
			" �������� "+tmon.Name+
			" ����� "+itos(damage_emp)+" ��"+
			damname(tempwea.Damage_Color)+"�˺�\n");
			tmon.HP-=damage_emp;
			tmon.HP=max(0,tmon.HP);
			print("������ "+tmon.Name+" ��ǰѪ��: "+itos(tmon.HP));
		}
		Sleep(10);
		printf("\n");
	}
	if(tmon.HP==0){
		tmon.Count=tmon.Count_Limit;
		tmon.HP=tmon.HP_Limit;
		res.push(0);
	}
	if(temp.HP==0) Die(emp),res.push(1);
	#undef tmon
	#undef temp
	#undef tempar
	#undef tempwea
	#undef origin_damage_mon
	#undef origin_damage_emp
	#undef damage_mon
	#undef damage_emp 
}

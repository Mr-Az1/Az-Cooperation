#include<D:\Mr.Az\plot.h>
inline void Die_Message(int emp){
	cout<<employee[emp].Name<<" 死了，都是你害得啦主管\n";
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
//	cout<<"DEBUG: 对方造成的伤害="<<origin_damage<<" 抗性="<<kangxing<<" 最终伤害="<<damage<<endl;
	int i=0;
	while(tmon.HP>0&&temp.HP>0){
		i++;
		if(i%2){
			print(tmon.Name+" "+tmon.describe[rand0(tmon.describe.size())]+
			" 对员工 "+temp.Name+" 造成了 "+itos(damage_mon)+" 点"+damname(tmon.Damage_Color)+"伤害\n");
			temp.HP-=damage_mon;
			temp.HP=max(0,temp.HP);
			print("员工 "+temp.Name+" 当前血量: "+itos(temp.HP)); 
		}
		else{
			print(temp.Name+" "+
			tempwea.describe[rand0(tempwea.describe.size())]+
			" 对异想体 "+tmon.Name+
			" 造成了 "+itos(damage_emp)+" 点"+
			damname(tempwea.Damage_Color)+"伤害\n");
			tmon.HP-=damage_emp;
			tmon.HP=max(0,tmon.HP);
			print("异想体 "+tmon.Name+" 当前血量: "+itos(tmon.HP));
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

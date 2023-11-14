#include<D:\Mr.Az\weapon.h>
struct armor{
	string name;
	int damage_val[100];
}armor[100];
inline void init_armor(){
	armor[0].name="忘了1";
	armor[0].damage_val[damcol("精神")]=20;
	armor[0].damage_val[damcol("物理")]=12;
	armor[0].damage_val[damcol("侵蚀")]=15;
	armor[0].damage_val[damcol("灵魂")]=15;
	
	armor[1].name="忘了2";
	armor[1].damage_val[damcol("精神")]=10;
	armor[1].damage_val[damcol("物理")]=12;
	armor[1].damage_val[damcol("侵蚀")]=8;
	armor[1].damage_val[damcol("灵魂")]=10;
	return ;
}

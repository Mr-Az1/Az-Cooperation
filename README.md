﻿# Az-Cooperation

设计者：咕咕咕的小飞瑶 Mr.Az

#### 1.0 初始阶段

##### 1.0.0 项目开始了 2023/10/16

1. 实现了基本的登陆界面、起名、导入存档，以及基本输出函数和输出颜色的使用。
2. 确定了大致流程和玩法

##### 1.0.1 2023/10/16

1. 完成了第一天员工入职，选择异想体，并简单写了新的一天

##### 1.0.2 2023/10/17

1. 进行分类式项目处理

|     文件名     |          作用          |
| :------------: | :--------------------: |
| `basic_info.h` | 基本功能函数、定义变量 |
|   `weapon.h`   |       E.G.O 武器       |
|   `armor.h`    |       E.G.O 护甲       |
|  `monster.h`   |         异想体         |
|  `employee.h`  |          员工          |
|    `plot.h`    |          剧情          |

2. 完善了基本函数，实现随机，实现基本武器、员工信息存储及调用。

##### 1.0.3 2023/11/07

中间大部分更新内容没有写，大约有以下几点: 

1. 封装了大量的函数并对函数的源代码进行了对齐处理
2. 实现了选择员工操作员工的基本功能
3. 实现了剧情
4. 考虑加入当天剧情结束后，在游戏玩家的路径下生成当天的剧情。

##### 1.0.4 2023/11/15

1. 修复选择剧情的 BUG
2. 实现导出当天剧情

##### 1.0.5 2023/11/17

1. 由于里面变量太丑了（悲，所以进行了大改
    1. 将所有变量取名为英文全称，开头大写，前面附上功能（例：Value_Weapon = 解锁武器信息需要的能量）
    2. 临时变量
        1. 临时怪物：`tmon`
        2. 临时员工：`temp`
    3. 将初始化代码进行规范化处理
2. 我会输出不同颜色力！（喜）将完善输出 RGB 的功能，丰富界面。
3. 在 `github` 上开源

##### 1.0.6 2023/11/30

1. 修复几个BUG
2. 完善工作功能
3. 目前可以玩第一天了

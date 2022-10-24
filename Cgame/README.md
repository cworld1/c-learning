# Cgame
一些用C语言编写的小游戏, 用**最少**的代码实现**最多**的功能  
代码极**短**, 可玩性**高**, 这么**好玩**的项目不关注下吗?  
**14**行贪吃蛇, **22**行俄罗斯方块, **22**行2048, **24**行扫雷...  

使用说明:
1. `.c`文件, **不使用**第三方库, 复制粘贴即可使用
2. 仅支持**windows**下运行, 可移植其他平台可作为参考代码
3. 主流的编译器&IDE几乎都能支持编译
4. 部分代码使用了**c99**特性, 比较远古的编译器&IDE可能需要`-std=c99`
5. _sleep()在vs下会出现4996号错误, 屏蔽警告或换windows.h的Sleep()
6. **注意**后缀是`.c`, 部分代码在`.cpp`会**报错**
7. 如果编译还是不通过可以加q群反馈

使用Clang-format格式化, 代码应该很规范了

真的能学到很多知识, 这里你能学到很多平时见不到的操作~  
很适合做为入门的小项目练手, 之后会做动画讲解这些代码...

目前仅在**bilibili**发布有关视频  
bilibili ID: 你已经是大佬啦快和萌新们聊天吧 ([传送门](https://space.bilibili.com/345058248))  
如果想要交流的话, 欢迎加入作者的QQ交流群: **957964924**  
* * *
## 相关视频
目前仅在bilibili发布视频  
|视频内容|文件夹名称|视频链接|
|-|-|-|
|俄罗斯方块|Tetris|[BV13f4y1r7zn](https://www.bilibili.com/video/BV13f4y1r7zn)|
|贪吃蛇|GluttonousSnake|[av372394997](https://www.bilibili.com/video/av372394997)|
|五子棋|Five-in-a-row|[av969124292](https://www.bilibili.com/video/av969124292)|
|扫雷|Minesweeper|[av87216317](https://www.bilibili.com/video/av87216317/)|
|2048|2048|[av89592082](https://www.bilibili.com/video/av89592082/)|
|窗口游戏|WindowGame|[av90604701](https://www.bilibili.com/video/av90604701/)|
|走迷宫|Maze|[av370410413](https://www.bilibili.com/video/av370410413)|
|俄罗斯方块_old|Tetris|[av85378627](https://www.bilibili.com/video/av85378627/)|
|贪吃蛇_old|GluttonousSnake|[av85378627](https://www.bilibili.com/video/av85378627/)|
* * *
## 关于代码的相关声明
本存储库使用MIT开源协议  
代码主要用于交流学习使用,二次创作或商用都可以的,注明原作者就行,最好可以跟我说一下...  
* * *
## 目前所有的游戏
每个游戏有很多版本, 整理的比较乱, 就这样凑合着吧...*(目前还在补充注释&整理中)*  
**tiny**(极小): 满足一定规范的版本, 用最少的代码实现功能  
**chaos**(混乱): 仅满足一行80字符的版本, 用最少的字符实现功能  
**color**(颜色): 给控制台增加一些颜色, 可玩性更好  
**old**: 几乎过时的版本, 都会加上old的标记  
1. **俄罗斯方块(Tetris)**
    * chaos版本: 11行, 仅满足一行80字符的压缩
    * tiny版本: 22行, 满足一定规范
    * color版本: 25行, 增加一些颜色
    * comment版本: 含注释版本(已过时)
2. **贪吃蛇(GluttonousSnake)**
    * chaos版本: 5行, 仅满足1行80字符的压缩
    * tiny版本: 14行, 满足一定规范
    * color版本: 17行, 增加一些颜色
    * screen版本: 89行, 多进程, 窗口组成贪吃蛇
    * std版本: 47行, 展开&去闪烁
    * add版本: 67行, 完善&拓展功能
3. **扫雷(Minesweeper)**
    * tiny版本: 24行, 满足一定规范
    * mouse版本: 236行, 更完整的功能&交互
    * Linux版本: 31行, 方便移植就顺便实现了
4. **2048**
    * tiny版本: 22行, 实现基本功能
    * color版本: 24行, 增加一些颜色
5. **窗口游戏(WindowGame)**
    * Snake: 贪吃蛇
    * Tetris: 俄罗斯方块
    * 2048: 2048
6. **走迷宫(Maze)**
    * tiny: 21行, 满足一定规范
7. **五子棋(Five-in-a-row)**
    * FIR: 19行, 实现基本功能
    * AIv1: 30行, 增加自动下子功能
    * AIv1(text): 34行, 去闪烁&打印评估分
    * AIv1.1: 34行, 优化界面
8. **敬请期待Coming soon...**
* * *
## 更新日志
不想维护这个了, 时间线太乱...打算重新设计了
|日期|内容|
|:-:|-|
|2021.1.15| 迷宫(压缩 21行)
|2020.12.13| 迷宫(tiny 25行)
|2020.11.15| 贪吃蛇(更新 screen)
|2020.10.25| 贪吃蛇(std 52行)
|2020.10.5| 重新整理五子棋系列
|2020.10.3| 重新整理扫雷系列&2048系列
|2020.10.2| 移除不必要的文件夹, 重新归类, 重新整理俄罗斯方块系列
|2020.10.1| 贪吃蛇(color 17行), 重新整理贪吃蛇系列
|2020.9.20| 俄罗斯方块(chaos 10行)
|2020.9.19| 俄罗斯方块(color 26行)和2048(color 24行)
|2020.9.13| 俄罗斯方块(tiny 24行)
|2020.9.4| 五子棋AIv1.1(界面优化)
|2020.8.10| 五子棋AIv1(30行)
|2020.7.24| 五子棋(19行)
|2020.7.17| 2048(22行)
|2020.7.4| 优化俄罗斯方块(tiny 30行)和扫雷(keyboard 25行)
|2020.7.4| 贪吃蛇(tiny 14行), 扫雷(Linux 31行)
|2020.6.26| 扫雷(keyboard 25行)
|2020.6.19| 贪吃蛇(chaos 5行)
|2020.6.13| 俄罗斯方块(tiny 30行)(chaos 11行)
|2020.6.13| 贪吃蛇(tiny 15行)(chaos 6行)(偷偷更新~)
|2020.4.30| 窗口游戏(源码)
|2020.4.24| 走迷宫(26行)
|2020.3.18| 把之前的代码全部生成.exe可执行程序，归纳在exe文件夹中
|2020.3.3| 窗口游戏(.exe)
|2020.2.21| 贪吃蛇(screen版本)
|2020.2.17| 2048(28行)
|2020.2.15| 扫雷(236行)
|2020.2.6| 扫雷(29行)
|2020.2.3| 创建了新的文件夹Older version归纳旧版本
|2020.1.29| 俄罗斯方块(2个版本),和一个旧版本38行
|2020.1.28| 贪吃蛇(3个版本)
|2019.12.27| 俄罗斯方块(48行)
|2019.12.15| 贪吃蛇(25行)
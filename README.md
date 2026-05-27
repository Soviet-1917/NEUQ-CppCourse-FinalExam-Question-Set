NEUQ-C++期末题库(各方收集综合)

# 一、文件组织结构

```
NEUQ-C++Qs/
├── 程序设计40题/
│   ├── practice/*.cpp
│   ├── picture/*.cpp
│   └── val/*.cpp
├── 小题/
│   ├── 选择题/*.png
│   └── 选择填空判断/*.png
└── README.md
```

# 二.如何高效使用

## 1.程序设计填空题

### i.程序设计题简介:

程序设计题共提供三个文件夹: `practice,val,picture`

其中`practice`是给你用来训练的原题,

`val`是给你的答案，用来验证，这里指提供了一种能过关的答案,

`picture`是每道题的题干，当然收集并不全，如果没有`picture`,在`practice`的 `*cpp`文件开头会有这样的注释:
```C++
/**
 * @brief 题干说明
 * @example input :
 * 			output:
 * 注:example部分题目有，提供测试用例
 * 注:如果brief写的根据注释完成代码，说明注释已经足够你完成题目
*/

```
### ii.文件编码

所有文件编码都是`GBK`,当然你可以使用`GBK-to-utf8`等工具将编码转换，但如果使用考试使用的IDE:`DEV-C++`默认编码是`GBK`

注意:你也可以使用`VS/VSCode`打开文件夹答题(如果你会配置环境的话)，这通常能更快验证答案。题目默认C++ Standard = `C++98`

建议手动的g++编译与运行指令:
```powershell
g++ Testxx.cpp -std=c++98 -o Testxx.exe
./Testxx.exe
```
配置好C++环境也可以按`F5`自动配置运行，但是要注意，`VSCode`的`F5`使用`UTF-8`，需要转换

## 2.小题

小题可以通过放大挡住答案再答题，这里建议如果是程序题可以直接跳过节省时间，主攻概念题，因为考试允许切出去 `敲代码调试`

## 3.结束
```text
|This markdown is written in NEUQ Library,|
|and Hope this project can help you.	  |
|						    May 27th, 2026|
```

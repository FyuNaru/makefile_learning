## makefile 练习与笔记

参考的教程是：

https://www.bilibili.com/video/BV1vg41177zT?p=2&share_source=copy_web&vd_source=8108cda013e10f4c1d41c26c96c51780

### first_make

包含最基本的单文件，类多文件（同目录下），引入第三方库的makefile的编写

### test_gcc

0. 初始状态：

.cpp .h

1. 预处理：

将头文件和宏都加入到cpp文件中，下一步编译只编译cpp文件

g++ -E test.cpp

会将预处理结果输出到屏幕

g++ -E test.cpp > test.ii

将结果重定向到文件

2. 编译

将cpp源代码编译为汇编代码

g++ -S test.ii

生成test.s

3. 汇编

将汇编代码.s转为二进制代码.o

g++ -c test.s

-c指令比较常用，可以直接从原始的.cpp .h直接使用该命令

4. 链接

将二进制代码.o生成可执行文件

g++ test.o -o test

5. 运行

运行可执行文件
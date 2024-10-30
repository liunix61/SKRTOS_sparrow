# SKRTOS_sparrow
Lightweight rtos inspired by SKRTOS



### 说明

这里是sparrow已经移植好了的工程，适用于arm cm3架构（例如stm32f103c8t6）。

**开发环境是clion**

SparrowHAL是hal库的移植，SparrowStdlib是标准库的移植。



**开发环境是Keil**

SparrowKeilStd是在keil环境下能稳定运行的标准库工程，适用于keil v5.06版本的编译器。SparrowKeilHal是在keil环境下能稳定运行的HAL库工程,	适用于Keil V6版本的编译器。

如果编译没问题但是运行错误，请尝试降低keil的编译器优化等级。这是因为hal生成的工程默认编译优化全开，可能导致出现bug。





### 教程

关于Sparrow的文档教程已经完结了。

知乎链接：[400行程序写一个实时操作系统（开篇） - 知乎 (zhihu.com)](https://zhuanlan.zhihu.com/p/963319443)

# ExdiGdbSrv
项目来源 https://github.com/fly55555/ExdiHelper

更新:
1.支持对x86windows的调试
如图
![111](https://github.com/ilovecsad/ExdiGdbSrv/assets/78861284/c353ceed-454e-4f89-b0cd-133f1dcbda29)
2.添加了一些 寄存器。比如可以正常使用了 dd fs:[0]

特别注意:
由于我不喜欢使用 windbg插件的方式 去解密 KDDEBUGGER_DATA64的数据,因此我把解密的步骤挪到了 ReadVirtualMemory函数中
。重点来 如果你要解密你版本系统的数据，请动手修改 三个值!!!!!

![222](https://github.com/ilovecsad/ExdiGdbSrv/assets/78861284/283965d6-132d-4ede-8a45-6bd9909c5fce)

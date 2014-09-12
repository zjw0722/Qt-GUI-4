/*
*=====================================================================================
Description:  本文件是SCSDB-ETL的调度层(Dispatcher)的接口 测试 实现文件。
Version:	1.0
Created:	2014-08-05
Compiler:	g++
Author:     张建威
Company:	深圳市汉云科技有限公司
* =====================================================================================
*/

#include "SCSETLDispatcher.h"

// 获取错误代码
int CSCSETLDispatcher::GetErrno()
{}

// 获取详细错误信息
string CSCSETLDispatcher::GetError()
{}

// 注册打印日志信息的回调函数
void CSCSETLDispatcher::RegisterPrintLog(PRINT_LOG pPrintLog)
{}

// 连接数据库
int CSCSETLDispatcher::Connect(EMDBType eType, STConPa stPa)
{}

// 查询所有数据库
int CSCSETLDispatcher::GetDB(vector<string> &vecDB)
{}

// 查询指定数据库中的所有数据表
int CSCSETLDispatcher::GetTables(string strDB, vector<string> &vecTbls)
{}

// 获取建表语句
// int CSCSETLDispatcher::GetTableStatement(const std::string &strTblName, const std::string &pstrTblStmt)
// {}

// 表结构导入到SCSDB
// int CSCSETLDispatcher::StartExpStructToSCS(cosnt std::string &strTblName) {}

// 表结构导入到SCSDB
int CSCSETLDispatcher::StartExpStructToSCS(std::vector<std::string> &vecTblName)
{}

// 表结构导入到文件
int CSCSETLDispatcher::StartExpStructToFile(std::vector<std::string> &vecTblName, std::string strFileName)
{}

// 启动导出数据到文件
int CSCSETLDispatcher::StartExpDataToFile(STExpSqlFile &stExpSqlFile)
{}

// 启动导出数据到文件
int CSCSETLDispatcher::StartExpDataToFile(STExpTblFile &stExpTblFile)
{}

// 启动导出数据到SCS数据库
int CSCSETLDispatcher::StartExpDataToSCS(STExpSqlScs &stExpSqlScs)
{}

// 启动导出文件数据到SCS数据库
int CSCSETLDispatcher::StartExpDataToSCS(STExpTblScs &stExpTblScs)
{}

// 启动导出文件数据到SCS数据库
int CSCSETLDispatcher::StartFileToSCS(STExpFileScs &stExpFileSCS)
{}


int CSCSETLDispatcher::AddReadThread(TaskID &id)
{}

// 加快每个线程的抽取速度
int CSCSETLDispatcher::AddPumpSpeed()
{}

// 减缓每个线程的抽取速度
int CSCSETLDispatcher::SubPumpSpeed()
{}

// 关闭数据库
int CSCSETLDispatcher::Close()
{}

// 终止正在进行的ExpImp任务
int CSCSETLDispatcher::CancelExpImp()
{}

// 获取当前的ExpImp任务的状态
int CSCSETLDispatcher::GetExpImpStatus(STExpImpStatus &stStatus)
{}

// 获取当前导入的总行数
scslong64 CSCSETLDispatcher::GetImportNum()
{}

//
void CSCSETLDispatcher::SetErr(int nErr, string strErr)
{}

static void* CSCSETLDispatcher::StartDynAdjust(void *arg)
{}

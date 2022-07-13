#define ElemType int

#include <iostream>
#include "../init.h"
#include "List.h"
#include "List.cc"

using namespace std;

SqList L;
int i;
ElemType e;

int main()
{
    cout << "0. 初始化顺序表" << endl;
    if (!InitList(L))
        cout << "初始化失败" << endl;
    for (i = 1; i <= 5; i++)
        ListInsert(L, i, i);
    cout << "初始化并插入5个元素顺序表的顺序表:" << endl;
    ListPrint(L);
    cout << endl;

    // 1. 插入测试
    cout << "1. 顺序表的插入" << endl;
    i = 3;
    e = 12;
    cout << "插入位置：" << i << "，插入元素：" << e << endl;
    if (ListInsert(L, i, e))
    {
        cout << "插入成功，插入后的顺序表为：" << endl;
        ListPrint(L);
    }
    else
        cout << "插入位置不合法或顺序表已满" << endl;
    cout << endl;

    // 2. 取值测试
    cout << "2. 顺序表的取值" << endl;
    i = 7;
    cout << "取值位置：" << i << endl;
    if (GetElem(L, i, e))
        cout << "第3个数据元素为：" << e << endl;
    else
        cout << "取值位置不合法" << endl;
    cout << endl;

    // 3. 查找测试
    cout << "3. 顺序表的查找" << endl;
    e = 3;
    cout << "查找的数据元素：" << e << endl;
    if (i = LocateElem(L, e))
        cout << "数据元素" << e << "在顺序表中第" << i << "个位置" << endl;
    else
        cout << "数据元素" << e << "在顺序表中不存在" << endl;
    cout << endl;

    // 4. 删除测试
    cout << "" << endl;
    i = 5;
    cout << "删除的位置：" << i << endl;
    if (ListDelete(L, i))
    {
        cout << "删除成功，删除后的顺序表为：" << endl;
        ListPrint(L);
    }
    else
        cout << "删除位置不合法或顺序表已空" << endl;
    cout << endl;

    return 0;
}
Status InitList(SqList &L)
{                                   // 构造一个空的顺序表L
    L.elem = new ElemType[MAXSIZE]; // 为顺序表分配一个大小为MAXSIZE的数组空间
    if (!L.elem)
        exit(OVERFLOW); // 存储分配失败退出
    L.length = 0;       // 空表长度为0
    return OK;
}

Status GetElem(SqList L, int i, ElemType &e)
{                              // 获取顺序表第i个元素值
    if (i < 1 || i > L.length) // 判断i值是否合理，若不合理，返回ERROR
        return ERROR;
    e = L.elem[i - 1]; // elem[i-1]单元存储第i个数据元素
    return OK;
}

int LocateElem(SqList L, ElemType e)
{ // 在顺序表中查找值为e的数据元素，返回其序号
    for (int i = 0; i < L.length; i++)
        if (L.elem[i] == e)
            return i + 1; // 查找成功，返回序号i+1
    return 0;             // 查找失败，返回0
}

Status ListInsert(SqList &L, int i, ElemType e)
{                                      // 在顺序表L中第i个位置插入新的元素e，i值的合法范围是 1<=i<=L.length+1
    if ((i < 1) || (i > L.length + 1)) // i值不合法
        return ERROR;
    if (L.length == MAXSIZE) // 当前存储空间已满
        return ERROR;
    for (int j = L.length - 1; j >= i - 1; j--)
        L.elem[j + 1] = L.elem[j]; // 插入位置及之后的元素后移
    L.elem[i - 1] = e;             // 将新元素e放入第i个位置
    L.length++;                    // 表长加1
    return OK;
}

Status ListDelete(SqList &L, int i)
{                              // 在顺序表L中删除第i个元素，i值的合法范围是 1<=i<=L.length
    if (i < 1 || i > L.length) // i值不合法
        return ERROR;
    for (int j = i; j <= L.length - 1; j++)
        L.elem[j - 1] = L.elem[j]; // 被删除元素之后的元素前移
    --L.length;                    // 表长减1
    return OK;
}

Status ListPrint(SqList L)
{ // 遍历顺序表
    for (int i = 0; i < L.length; i++)
        std::cout << L.elem[i] << "\t";
    std::cout << "共" << L.length << "个元素" << std::endl;
    return OK;
}
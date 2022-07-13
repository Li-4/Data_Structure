//----- 顺序表的存储结构 -----
#define MAXSIZE 100 // 顺序表可能达到的最大长度
typedef struct
{
    ElemType *elem; // 存储空间的基地址
    int length;     // 当前长度
} SqList;           // 顺序表的结构类型为SqList

// 构造一个空的顺序表L
Status InitList(SqList &L);

// 顺序表的取值
Status GetElem(SqList L, int i, ElemType &e);

// 在顺序表中查找值为e的数据元素，返回其序号
int LocateElem(SqList L, ElemType e);

// 在顺序表L中第i个位置插入新的元素e，i值的合法范围是 1<=i<=L.length+1
Status ListInsert(SqList &L, int i, ElemType e);

// 在顺序表L中删除第i个元素，i值的合法范围是 1<=i<=L.length
Status ListDelete(SqList &L, int i);

// 遍历顺序表
Status ListPrint(SqList L);
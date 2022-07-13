ADT List{  
&ensp;&ensp;数据对象：$D=\{a_i|a_i\in ElemSet,i=1,2,…,n,n\ge 0\}$  
&ensp;&ensp;数据关系：$R=\{<a_{i-1},a_i>|a_{i-1},a_i\in D,i=2,…,n\}$  
&ensp;&ensp;基本操作：  
&emsp;&emsp;InitList(&L)  
&emsp;&emsp;&emsp;操作结果：构造一个空的线性表L。  
&emsp;&emsp;DesttoyList(&L)  
&emsp;&emsp;&emsp;初始条件：线性表L已存在。  
&emsp;&emsp;&emsp;操作结果：销毁线性表L。  
&emsp;&emsp;ClearList(&L)  
&emsp;&emsp;&emsp;初始条件：线性表L已存在。  
&emsp;&emsp;&emsp;操作结果：将L重置为空表。  
&emsp;&emsp;ListEmpty(L)  
&emsp;&emsp;&emsp;初始条件：线性表L已存在。  
&emsp;&emsp;&emsp;操作结果：若L为空表，则返回true，否则返回false。  
&emsp;&emsp;ListLength(L)  
&emsp;&emsp;&emsp;初始条件：线性表L已存在。  
&emsp;&emsp;&emsp;操作结果：返回L中数据元素个数。  
&emsp;&emsp;GetElem(L,i,&e)  
&emsp;&emsp;&emsp;初始条件：线性表L已存在，且$1\le i\le ListLength(L)$。  
&emsp;&emsp;&emsp;操作结果：用e返回L中第i个数据元素的值。  
&emsp;&emsp;LocateElem(L,e)  
&emsp;&emsp;&emsp;初始条件：线性表L已存在。  
&emsp;&emsp;&emsp;操作结果：返回L中第1个值与e相同的元素在L中的位置。若这样的位置不存在，则返回值为0。  
&emsp;&emsp;PriorElem(L,cur_e,&pre_e)  
&emsp;&emsp;&emsp;初始条件：线性表L已存在。  
&emsp;&emsp;&emsp;操作结果：若cur_e是L的数据元素，且不是第一个，则用pre_e返回其前驱，否则操作失败，pre_e无定义。  
&emsp;&emsp;NextElem(L,cur_e,&next_e)  
&emsp;&emsp;&emsp;初始条件：线性表L已存在。  
&emsp;&emsp;&emsp;操作结果：若cur_e是L的数据元素，且不是最后一个，则用next_e返回其后继，否则操作失败，next_e无定义。  
&emsp;&emsp;ListInsert(&L,i,e)  
&emsp;&emsp;&emsp;初始条件：线性表L已存在，且$1\le i \le ListLength(L)+1$。  
&emsp;&emsp;&emsp;操作结果：在L中第i个位置之前插入新的数据元素e，L的长度加1。  
&emsp;&emsp;ListDelete(&L,i)  
&emsp;&emsp;&emsp;初始条件：线性表L已存在且非空，且$1\le i \le ListLength(L)$。  
&emsp;&emsp;&emsp;操作结果：删除L的第i个数据元素，L的长度减1。  
&emsp;&emsp;TraverseList(L)  
&emsp;&emsp;&emsp;初始条件：线性表L已存在。  
&emsp;&emsp;&emsp;操作结果：对线性表L进行遍历，在遍历过程中对L的每个结点访问一次。  
}ADT List

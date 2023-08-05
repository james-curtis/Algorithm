#include<stdio.h>
#include "a.cpp"
#include<malloc.h>
//typedef int DataType;
//typedef struct linknode
//{
//	DataType data;
//	struct linknode *next;
//}LinkList;
//LinkList *head;
//head=(LinkList*)malloc(sizeof(LinkList));
void Menu()
{
    printf("\n         顺序表的各种操作");
    printf("\n========================================");
    printf("\n|       1————建立顺序表la（头插法）    |");
    printf("\n|       2————建立顺序表la（尾插法）    |");
//	printf("\n|       3————求顺序表的长度            |");
    printf("\n|       4————按位置查找元素            |");
    printf("\n|       5————按元素值查找其在表中的位置|");
    printf("\n|       6————插入元素                  |");
    printf("\n|       7————删除元素                  |");
    printf("\n|       8————建立顺序表lb（头插法）    |");
    printf("\n|       9————建立顺序表lb（尾插法）    |");
    printf("\n|       3————合并la,lb为链表lc        |");
    printf("\n|       0————返回                      |");
    printf("\n========================================");
    printf("\n请输入菜单号(0-10):\n");
}
int main()
{
    LinkList L,lb;
    DataType x;
    int n,i,len;
    int ch2;
    do
    {
        Menu();
        scanf("%d",&ch2);
        //getchar();
        switch(ch2)
        {
            case 1:
                InitList();
                printf("请输入线性表的个数：");
                scanf("%d",&n);
                CreateListH(&L,n);
                printf("建立的线性表la为：");
                DispList(&L);
                break;
            case 2:
                InitList();
                printf("请输入线性表的个数：");
                scanf("%d",&n);
                CreateList(&L,n);
                printf("建立的线性表la为：");
                DispList(&L);
                break;
//			case 3:
//				len=LengthList(&L);
//				printf("当前线性表的长度为：%d\n",len);
//				if(len==0)
//					printf("当前线性表为空!");
//				else
//					printf("当前线性表不为空!");
//				break;
            case 4:
                printf("请输入要查看表中元素位置(从1开始)：");
                scanf("%d",&i);
                SearchList(&L,i);
                DispList(&L);
//				if(se)
//					printf("当前线性表第%d个元素的值为：%d",i,se);
//				else
//					printf("输入的位置错误！");
                break;
            case 5:
                printf("请输入要查找的元素的值为：");
                scanf("%d",&x);
                Locate(&L,x);
//				loc=Locate(&L,x);
//				if(loc<lengthList(&L))
//					printf("查找元素值为%d的位置为:%d",x,loc);
//				else
//					printf("该表中无此元素！");
                DispList(&L);
                break;
            case 6:
                printf("请输入要插入的位置：");
                scanf("%d",&i);
                printf("请输入要插入位置的元素值:");
                scanf("%d",&x);
                InsList(&L,i,x);
//				if(InsList(&L,i,x))
//				{
//					printf("已成功在第%d的位置插入%d，插入后的线性表为：\n",i,x);
//					DispList(&L);
//				}
//				else
//					printf("输入插入的参数错误！");
                DispList(&L);
                break;
            case 7:
                printf("请输入要删除元素的位置：");
                scanf("%d",&i);
                DelList(&L,i);
//				if(DelList(&L,i))
//				{
//					printf("已成功在第%d的位置上删除%d,删除后的线性表为：\n",i,x);
//					DispList(&L);
//				}
//				else
//					printf("\n输入删除的参数错误！");
                DispList(&L);
                break;
            case 8:
                InitList();
                printf("请输入线性表的个数：");
                scanf("%d",&n);
                CreateListH(&L,n);
                printf("建立的线性表lb为：");
                DispList(&L);
                break;
            case 9:
                InitList();
                printf("请输入线性表的个数：");
                scanf("%d",&n);
                CreateList(&L,n);
                printf("建立的线性表lb为：");
                DispList(&L);
                break;
            case 3:
                Bridge(&L,&lb);
                break;
            case 0:
                printf("成功退出");
                break;
            default:
                printf("输入有误,请输入0~10进行选择！");
        }
//		if(ch2!='0')
//		{
//			printf("\n按回车键继续，按任意键返回主菜单！\n");
//			//getchar();
//			a=getchar();
//			if(a!='\xA')
//			{
//				getchar();ch1='n';
//			}
//		}
    }while(ch2);
}

//LinkList *InitList()
//
//void CreateListH(LinkList *head,int n)
//
//void CreateList(LinkList *head,int n)
//
//int LengthList(LinkList *head)
//
//void Locate(LinkList *head,DataType x)
//
//void SearchList(LinkList *head,int i)
//
//void InsList(LinkList *head,int i,DataType x)
//
//void DelList(LinkList *head,int i)
//
//void DispList(LinkList *head)

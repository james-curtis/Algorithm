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
    printf("\n         ˳���ĸ��ֲ���");
    printf("\n========================================");
    printf("\n|       1������������˳���la��ͷ�巨��    |");
    printf("\n|       2������������˳���la��β�巨��    |");
//	printf("\n|       3����������˳���ĳ���            |");
    printf("\n|       4����������λ�ò���Ԫ��            |");
    printf("\n|       5����������Ԫ��ֵ�������ڱ��е�λ��|");
    printf("\n|       6������������Ԫ��                  |");
    printf("\n|       7��������ɾ��Ԫ��                  |");
    printf("\n|       8������������˳���lb��ͷ�巨��    |");
    printf("\n|       9������������˳���lb��β�巨��    |");
    printf("\n|       3���������ϲ�la,lbΪ����lc        |");
    printf("\n|       0������������                      |");
    printf("\n========================================");
    printf("\n������˵���(0-10):\n");
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
                printf("���������Ա�ĸ�����");
                scanf("%d",&n);
                CreateListH(&L,n);
                printf("���������Ա�laΪ��");
                DispList(&L);
                break;
            case 2:
                InitList();
                printf("���������Ա�ĸ�����");
                scanf("%d",&n);
                CreateList(&L,n);
                printf("���������Ա�laΪ��");
                DispList(&L);
                break;
//			case 3:
//				len=LengthList(&L);
//				printf("��ǰ���Ա�ĳ���Ϊ��%d\n",len);
//				if(len==0)
//					printf("��ǰ���Ա�Ϊ��!");
//				else
//					printf("��ǰ���Ա�Ϊ��!");
//				break;
            case 4:
                printf("������Ҫ�鿴����Ԫ��λ��(��1��ʼ)��");
                scanf("%d",&i);
                SearchList(&L,i);
                DispList(&L);
//				if(se)
//					printf("��ǰ���Ա��%d��Ԫ�ص�ֵΪ��%d",i,se);
//				else
//					printf("�����λ�ô���");
                break;
            case 5:
                printf("������Ҫ���ҵ�Ԫ�ص�ֵΪ��");
                scanf("%d",&x);
                Locate(&L,x);
//				loc=Locate(&L,x);
//				if(loc<lengthList(&L))
//					printf("����Ԫ��ֵΪ%d��λ��Ϊ:%d",x,loc);
//				else
//					printf("�ñ����޴�Ԫ�أ�");
                DispList(&L);
                break;
            case 6:
                printf("������Ҫ�����λ�ã�");
                scanf("%d",&i);
                printf("������Ҫ����λ�õ�Ԫ��ֵ:");
                scanf("%d",&x);
                InsList(&L,i,x);
//				if(InsList(&L,i,x))
//				{
//					printf("�ѳɹ��ڵ�%d��λ�ò���%d�����������Ա�Ϊ��\n",i,x);
//					DispList(&L);
//				}
//				else
//					printf("�������Ĳ�������");
                DispList(&L);
                break;
            case 7:
                printf("������Ҫɾ��Ԫ�ص�λ�ã�");
                scanf("%d",&i);
                DelList(&L,i);
//				if(DelList(&L,i))
//				{
//					printf("�ѳɹ��ڵ�%d��λ����ɾ��%d,ɾ��������Ա�Ϊ��\n",i,x);
//					DispList(&L);
//				}
//				else
//					printf("\n����ɾ���Ĳ�������");
                DispList(&L);
                break;
            case 8:
                InitList();
                printf("���������Ա�ĸ�����");
                scanf("%d",&n);
                CreateListH(&L,n);
                printf("���������Ա�lbΪ��");
                DispList(&L);
                break;
            case 9:
                InitList();
                printf("���������Ա�ĸ�����");
                scanf("%d",&n);
                CreateList(&L,n);
                printf("���������Ա�lbΪ��");
                DispList(&L);
                break;
            case 3:
                Bridge(&L,&lb);
                break;
            case 0:
                printf("�ɹ��˳�");
                break;
            default:
                printf("��������,������0~10����ѡ��");
        }
//		if(ch2!='0')
//		{
//			printf("\n���س�����������������������˵���\n");
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

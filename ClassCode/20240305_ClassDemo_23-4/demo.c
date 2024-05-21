#include <stdio.h>

struct Point
{
	int x, y;//��Ա���� 
	/* 
	void show()//��Ա���� //error:C�нṹ����û�г�Ա���� 
	{
		printf("The point is (%d,%d).\n", x, y);
	}
	*/
};

struct EmptyStruct//�սṹ(û���κγ�Ա�Ľṹ����)
{
};

void test1(int a)//��ֵ���� 
{
	printf("a = %d\n", a);
}

void test2(int *a)//��ָ�봫�� 
{
	printf("*a = %d\n", *a);
}

void show1(struct Point a)//��ֵ���� 
{
	printf("(%d,%d)\n", a.x, a.y);
}

void show2(struct Point *a)//��ָ�봫�� 
{
	printf("(%d,%d) , (%d,%d)\n", (*a).x, (*a).y, a->x, a->y);
}

int main()
{
	int a;//���ͱ��� 
	a = 1;
	printf("a = %d , &a = 0x%x , sizeof(a) = %d bytes\n", a, &a, sizeof(a));
	
	int array[3];//��������
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	printf("The array is: ");
	for(int i = 0; i <= 2; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	
	int *p;//����ָ��
	p = &a;
	*p = 2; //�ȼ���: a = 2; 
	printf("a = %d , &a = 0x%x , p = 0x%x , *p = %d\n", a, &a, p, *p);
	
	test1(a);//��ֵ����
	test2(&a);//��ָ�봫��
	
	printf("------------------\n");
	
	
	struct Point p1, p2;//�ṹ����
	//Point p1, p2;//�ṹ����//error: C�ж���ṹ����ʱ�����йؼ���struct 
	p1.x = 1;//��Ա������(�������)".", ͨ��������������ʽṹ�����ĳ�Ա���� 
	p1.y = 2;
	p2.x = 3;
	p2.y = 4;
	//x = 1;//error:��Ա�������ܶ������ڣ�����������ĳһ������Ľṹ����
	printf("p1 = (%d,%d) , &p1 = 0x%x , sizeof(p1) = %d bytes\n", p1.x, p1.y, &p1, sizeof(p1));
	printf("p2 = (%d,%d) , &p2 = 0x%x , sizeof(p2) = %d bytes\n", p2.x, p2.y, &p2, sizeof(p2));
	
	struct EmptyStruct es;//�սṹ(û���κγ�Ա�Ľṹ����) 
	printf("&es = 0x%x , sizeof(es) = %d bytes\n", &es, sizeof(es));
	
	printf("The size of EmptyStruct in C language is %d bytes.\n", sizeof(struct EmptyStruct));
	
	struct Point ptArray[3];//�ṹ����
	ptArray[0].x = 1;
	ptArray[0].y = 2;
	ptArray[1].x = 3;
	ptArray[1].y = 4;
	ptArray[2].x = 5;
	ptArray[2].y = 6;	
	printf("The point array is: ");
	for(int i = 0; i <= 2; i++)
	{
		printf("(%d,%d) ", ptArray[i].x, ptArray[i].y);
	}
	printf("\n");
	
	struct Point *sp;//�ṹָ��
	sp = &p1;
	(*sp).x = 3;//��Ա������(�������)".", ͨ��������������ʽṹָ����ָ��Ľṹ�����ĳ�Ա���� 
	(*sp).y = 4;
	printf("p1 = (%d,%d) , p1 = (%d,%d)\n", p1.x, p1.y, (*sp).x, (*sp).y);
	
	sp = &p2;
	sp->x = 5;//��Ա������(��ͷ������)".", ͨ����ͷ�����������ʽṹָ����ָ��Ľṹ�����ĳ�Ա���� 
	sp->y = 6;
	printf("p2 = (%d,%d) , p2 = (%d,%d)\n", p2.x, p2.y, sp->x, sp->y);
	
	show1(p1);//��ֵ����
	show2(&p1);//��ָ�봫��
	
	return 0;
} 

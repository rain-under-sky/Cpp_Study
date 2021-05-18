#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct Student
{
	char id[10],name[10];
	float Chinese,math,English;
	float average;
	struct Student *next;
};
void menu(struct Student *head);//�˵� 
void LoadFile(struct Student **head);//��ȡ�ļ� 
void freelist(struct Student *head); //������� 
void printfAllScore(struct Student *head);//��ӡ���гɼ� 
void searchFail(struct Student *head);//���ҹҿ�ѧ����Ϣ����� 
void sortid(struct Student *head);//��ѧ������ 
void sortAverage(struct Student *head); //��ƽ��������
void averageScore(struct Student *head); //����ƽ����
void saveFile(struct Student *head); //���浽�ļ�

int main()
{
	struct Student* head;
    LoadFile(&head);
    while(1)
    {
    	system("cls");
    	menu(head);
    }

}
void menu(struct Student *head)
{
	char commend;
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
	"1.�鿴ȫ��ѧ����Ϣ",
	"2.�鿴�ҿ�ѧ����Ϣ",
	"3.��ѧ������",
	"4.��ƽ��������",
	"5.�������ƽ����",
	"6.���浱ǰ����",
	"0.�˳�");
	commend=getch();
	switch(commend)
	{
		case '1':
			system("cls");
			printfAllScore(head);
			break;
		case '2':
			system("cls");
			searchFail(head);
			break;
		case '3':
			system("cls");
			sortid(head);
			break;
		case '4':
			system("cls");
			sortAverage(head);
			break;
		case '5':
			system("cls");
			averageScore(head);
			break;
		case '6':
			system("cls");
			saveFile(head);
			break;
		case '0':
			system("cls");
			break;
		default:
			printf("�����ָ������������");
			freelist(head); 
			getch();
			break; 
	} 
} 
void freelist(struct Student *head)
{
	struct Student *q;
	head=head->next;
    while(head!=NULL)
    {
        q=head;
        head=head->next;
        free(q);
    }
} 
void LoadFile(struct Student **head) {
    FILE* fp;
    struct Student *p,*q;
    if ((fp = fopen("111.txt", "r")) == NULL) {
        printf("û�гɹ����ļ�");
        exit(0);
    }
    *head = (struct Student*)malloc(sizeof(struct Student));
    q = *head;
    while (!feof(fp)) {
        p=(struct Student*)malloc(sizeof(struct Student));
        fscanf(fp, "%s %s %f %f %f\n",
            p->id,
            p->name,
            &p->Chinese,
            &p->math,
            &p->English);
        p->average = (p->Chinese + p->math + p->English) / 3;
        q->next = p;
        q = p;
    }
    p->next = NULL;

    fclose(fp);
    printf("��ȡ�ļ���ϣ������������");
    getch();
}
void printfAllScore(struct Student *head)
{
	struct Student *p;
	p=(struct Student*)malloc(sizeof(struct Student));
	p=head->next;
	printf("%10s%10s%6s%6s%6s%8s\n","ѧ��","����","����","��ѧ","Ӣ��","ƽ����");
	while(p)
	{
 		printf("%10s%10s%6g%6g%6g%8.2f\n",
        p->id,
        p->name,
        p->Chinese,
        p->math,
        p->English,
        p->average);
        p=p->next;
	}
	printf("�����������");
	getch(); 
}
void sortid(struct Student *head)
{
    struct Student* p, * q, * s;
    struct Student* prep = head, * preq = head->next, * pres = NULL;
    for (p = head->next; p != NULL; p = p->next)
    {
        s = p;
        preq = p;
        for (q = p->next; q != NULL; q = q->next)
        {
            if (strcmp(q->id, s->id) == -1) {
                pres = preq;
                s = q;
            }
            preq = q;
        }
        if (s != p)
        {
            prep->next = s;
            pres->next = p;
            q = s->next;
            s->next = p->next;
            p->next = q;
        }
        p = s;
        prep = p;
    }
    printfAllScore(head);
} 
void searchFail(struct Student *head)
{
	printf("%10s%10s%6s%6s%6s%8s\n","ѧ��","����","����","��ѧ","Ӣ��","ƽ����");
	head=head->next;
	while(head)
	{
		if(head->Chinese<60||head->math<60||head->English<60)
		{
				printf("%10s%10s%6g%6g%6g%8.2f\n",
 				head->id,
 				head->name,
 				head->Chinese,
        		head->math,
        		head->English,
        		head->average);
		}
		head=head->next;
	}
	getch();
} 
void sortAverage(struct Student *head)
{
    struct Student* p, * q, * s;
    struct Student* prep = head, * preq = head->next, * pres = NULL;
    for (p = head->next; p != NULL; p = p->next)
    {
        s = p;
        preq = p;
        for (q = p->next; q != NULL; q = q->next)
        {
            if (q->average<p->average) {
                pres = preq;
                s = q;
            }
            preq = q;
        }
        if (s != p)
        {
            prep->next = s;
            pres->next = p;
            q = s->next;
            s->next = p->next;
            p->next = q;
        }
        p = s;
        prep = p;
    }
    printfAllScore(head);
}
void averageScore(struct Student *head)
{
	float AChinese=0,Amath=0,AEnglish=0;
	int n=-1;
	struct Student *p,*q;
	for(q=head;q!=NULL;q=q->next)
	n++;
	for(p=head->next;p!=NULL;p=p->next)
	{
		AChinese+=p->Chinese;
		Amath+=p->math;
		AEnglish+=p->English;
	}
	printf("���ģ�%.2f\n",AChinese/n);
	printf("��ѧ��%.2f\n",Amath/n);
	printf("Ӣ�%.2f\n",AEnglish/n);
	getch();
	
}
/*
void saveFile(struct Student *head)
{
	    FILE* fp;
    if ((fp = fopen("222.txt", "w")) == NULL) {
        printf("û�гɹ����ļ�");
        exit(0);
    }
    head = head->next;
    while (head)
	 {
        fprintf(fp, "%s %s %g %g %g\n",
            head->id,
            head->name,
            head->Chinese,
            head->math,
            head->English);
        head = head->next;
    }
    fclose(fp);
    printf("6\n�������");
    getch();
}*/

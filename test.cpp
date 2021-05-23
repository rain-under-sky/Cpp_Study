worker* way(worker *head)						//排序函数
{
    worker *p=NULL,*p1=NULL,*p2=NULL,*p3=NULL;
    int num=0,i,j,k,min,num_1;
    worker* temp=NULL;
    p =p1= head;
    if (head != NULL)							//判断是文件是否存在
    {
        while (1)
        {
            cout << "请选择排序方式：1：总工资排序 2：基本工资排序" << endl;
            cin >> num_1;
            if(num_1==1||num_1==2)											//选择排序方式
            {
                if(num_1==1)												//总工资排序
                {
                    while (p != NULL)										//计算总人数
                    {
                        p = p->next;
                        num++;
                    }
                    p2 = new worker[num];									//新建数组
                    if (!p2)
                    {
                        cout << "创建内存失败" << endl;
                    }
                    for(int i=0;i<num;i++)									//把链表的数据拷贝到数组中
                    {
                        *(p2 + i) = *p1;
                        p1=p1->next;
                    }
                    temp = new worker[1];
                    for (int i = 0; i < num - 1; i++)							//给数据升序
                    {
                        for (int j = 0; j < num - i - 1; j++)
                        {
                            if ((p2+j)->all_wage > (p2+j+1)->all_wage)
                            {
                                copy(temp,p2+j);
                                copy(p2+j, p2+j+1);
                                copy(p2+j+1, temp);
                            }
                        }
                    }
                    p1 = head;
                    for(int i=num-1;i>=0;i--)								//把数组中的数据按降序拷贝到链表
                    {
                        copy(p1, p2+i);
                        //*p1=*(p2 + i);
                        p1 = p1->next;
                    }
                    p1=head;
                    delete[]p2;												//释放创建数组空间
                    cout << "总工资排序成功" << endl;
                    break;
                }
                else														//基本工资排序
                {
                    while (p != NULL)										//计算总人数
                    {
                        p = p->next;
                        num++;
                    }
                    p2 = new worker[num];									//新建数组
                    if (!p2)
                    {
                        cout << "创建内存失败" << endl;
                    }
                    for (int i = 0; i < num; i++)							//把链表的数据拷贝到数组中
                    {
                        *(p2 + i) = *p1;
                        p1 = p1->next;
                    }
                    temp = new worker[1];
                    for (int i = 0; i < num - 1; i++)							//给数据升序
                    {
                        for (int j = 0; j < num - i - 1; j++)
                        {
                            if ((p2 + j)->basis_wage> (p2 + j + 1)->basis_wage)
                            {
                                copy(temp, p2 + j);
                                copy(p2 + j, p2 + j + 1);
                                copy(p2 + j + 1, temp);
                            }
                        }
                    }
                    p1 = head;
                    for (int i = num - 1; i >= 0; i--)									//把数组中的数据按降序拷贝到链表
                    {
                        copy(p1, p2 + i);
                        //*p1=*(p2 + i);
                        p1 = p1->next;
                    }

                    p1 = head;
                    cout << "基本工资排序成功" << endl;
                    break;
                }

            }
            else
            {
                cout << "输入有误，请重新输入" << endl;
            }
        }
    }
    else
    {
        cout << "文件不存在" << endl;
    }
    system("pause");
    system("cls");
    return p1;
}
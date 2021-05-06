#include <iostream>
using namespace std;
void vertical(int S, int E, int N, int D, int M, int O, int R, int Y);
/*
    S	E	N	D
  +	M	O	R	E
─────────────
M	O	N	E	Y
 */
int main()
{
    int S, E, N, D, M, O, R, Y;
    int number1, number2, number3;
    for (S = 1; S <= 9; S++)
    {
        for (E = 0; E <= 9; E++)
        {
            if (S == E)//判断S不等于E
                continue;
            for (N = 0; N <= 9; N++)
            {
                if ((S == N) || (E == N))//判断N不等于S，E
                    continue;
                for (D = 0; D <= 9; D++)
                {
                    if ((D == N) || (D == E) || (D == S))//判断D不等于N，E，S
                        continue;
                    for (M = 1; M <= 9; M++)
                    {
                        if ((M == D) || (M == N) || (M == E) || (M == S))//判断M不等于D，N，E，S
                            continue;
                        for (O = 0; O <= 9; O++)
                        {
                            if ((O == M) || (O == D) || (O == N) || (O == E) || (O == S))//判断O不等于M,D,N,E,S
                            continue;
                            for (R = 0; R <= 9; R++)
                            {
                                if ((R == O) || (R == M) || (R == D) || (R == N) || (R == E) || (R == S))//判断R不等于O，M，D，N，E，S
                                    continue;
                                number1 = (S * 1000) + (E * 100) + (N * 10) + D;
                                number2 = (M * 1000) + (O * 100) + (R * 10) + E;
                                Y = ((D + E) % 10);
                                if ((Y == S) || (Y == E) || (Y == N) || (Y == D) || (Y == M) || (Y == O) || (Y == R))//判断Y不等于S，E，N，D，M，O，R
                                    continue;
                                number3 = (M * 10000) + (O * 1000) + (N * 100) + (E * 10) + Y;
                                if (number3 == number1 + number2)
                                {
                                    vertical(S, E, N, D, M, O, R, Y);//调用函数vertical
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    system("pause");
    return 0;
}

void vertical(int S, int E, int N, int D, int M, int O, int R, int Y)//定义一个函数
{
    cout << "  " << S << E << N << D << endl;
    cout << "+ " << M << O << R << E << endl;
    cout << "─────────" << endl;
    cout << "=" << M << O << N << E << Y << endl;
}


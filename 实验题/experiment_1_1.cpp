/*
        S I X
    S E V E N
  + S E V E N
  ------------
  T W E N T Y
*/

#include <iostream>
using namespace std;
void vertical(int S, int I, int X, int E, int V, int N, int T, int W,int Y);


int main(){
    int S,I,X,E,V,N,T,W,Y;
    int number1,number2,number3;
    for (S = 0;S <= 9;S++){
        for(I = 0;S <= 9;S++){
            if(S == I)
                continue;
            for(X = 0;X <= 9;X++){
                if((X == S)||(X == I))
                    continue;
                for(E = 0;E <= 9;E++){
                    if((E == S)||(E == I)||(E == X))
                        continue;
                    for(V = 0;V <= 9;V++){
                        if((V == S)||(V == I)||(V == X)||(V == E))
                            continue;
                        for(N = 0;N <= 9;N++){
                            if((N == S)||(N == I)||(N == X)||(N == E)||(N == V))
                                continue;
                            for(T = 0;T <= 9;T++){
                                if((T == S)||(T == I)||(T == X)||(T == E)||(T == V)||(T == N))
                                    continue;
                                for(W = 0;W <= 9;W++){
                                    if((W == S)||(W == I)||(W == X)||(W == E)||(W == V)||(W == N)||(W == T))
                                        continue;

                                        number1 = S*100 + I*10 + X;
                                        number2 = S*10000 + E*1000 + V*100 +E*10 + N;
                                        Y = (X + N + N) % 10;
                                        if((Y == S)||(Y == I)||(Y == X)||(Y == E)||(Y == V)||(Y == N)||(Y == T)||(Y == W))
                                            continue;
                                        number3 = T*100000 + W*10000 + E*1000 + N*100 + T*10 + Y;
                                        if(number1 + number2 + number2 == number3){
                                            vertical(S,I,X,E,V,N,T,W,Y);
                                        }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}

void vertical(int S, int I, int X, int E, int V, int N, int T, int W,int Y)//定义一个函数
{
    cout <<"  "<<"  "<<"  "<< S << I << X <<endl;
    cout <<" +  "<< S << E << V << E << N <<endl;
    cout <<"  "<< S << E << V << E << N <<endl;
    cout << "──────────────────────────────────────" <<endl;
    cout << " = " << T << W << E << N << T << Y <<endl;
}

/* Пусть дан массив с n элементами
Хотим ответить, встречается ли в нём x
*/

#include <bits/stdc++.h>

using namespace std;

// 1-й метод: постоянная проверка середины
// Сложность O(log n), так как уменьшаем размер вдвое постоянно
void solve1(){
    vector<int> array;

    int x;
    int n;
    int a = 0, b = n-1;

    while (a <= b)
    {
        int k = (a+b)/2;
        if (array[k] == x){
            // Найден x
        }
        // сдвигаем границы
        if(array[k] < x) a = k+1;
        else b = k-1;
    }

}

// 2-й метод: прыжками
void solve2(){
    vector<int> array;
    int k = 0;
    int n;
    int x;
    for (int b = n/2; b >= 1; b/=2){
        while(k + b < n && array[k+b] <= x) k += b;
    }
    if (array[k] == x){
        // Нашли элемент
    }
}

/* Бинарный поиск по ответу: поиск границы, а не проверка существования конкретного значения */
bool valid(int sol){
    // Если решение, то окей
}

void solve3(){
    int x = -1;
    int z;
    for (int b = z; b >= 1; b /= 2){
        while (!valid(x+b)) x += b;
    }
    int k = x+1;
}


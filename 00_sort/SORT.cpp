//
// Created by hw on 18-5-2.
//

#include "SORT.h"

/********************** bubble sort **************************
 * 1. 比较相邻的两个数据，如果第二个数小，就交换位置。
 * 2. 从后向前两两比较，一直到比较最前两个数据。最终最小数被交换到起始的位置，这样第一个最小数的位置就排好了。
 * 3. 继续重复上述过程，依次将第2.3...n-1个最小数排好位置。
 ************************************************************/
void SORT::bubble() {
    cout << "this is bubble sort:" << endl;

    cout << "ori: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl << "*******************" << endl;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int tmp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = tmp;
            }
            for (int k = 0; k < 10; k++) {
                cout << a[k] << " ";
            }
            cout << endl;
        }
        cout << "****** " << i << " turn *****" << endl;
    }
}

/********************** selection sort ***********************
 * 1. 在长度为N的无序数组中，第一次遍历n-1个数，找到最小的数值与第一个元素交换；
 * 2. 第二次遍历n-2个数，找到最小的数值与第二个元素交换；
 * 。。。
 * 3. 第n-1次遍历，找到最小的数值与第n-1个元素交换，排序完成。
 ************************************************************/
void SORT::selection() {
    cout << "this is selection sort: " << endl;
    cout << "ori: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl << "*******************" << endl;

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            int min = a[i];
            int location = i;
            if (a[j] < min) {
                min = a[j];
                location = j;
            }
            a[location] = a[i];
            a[i] = min;

            for (int k = 0; k < 10; k++) {
                cout << a[k] << " ";
            }
            cout << endl;
        }
        cout << "****** " << i << " turn *****" << endl;
    }
}

/********************** insertion sort ***********************
 * 在要排序的一组数中，假定前n-1个数已经排好序，现在将第n个数插到前面的
 * 有序数列中，使得这n个数也是排好顺序的。如此反复循环，直到全部排好顺序。
 ************************************************************/
void SORT::insertion() {
    cout << "this is insertion sort: " << endl;
    cout << "ori: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl << "*******************" << endl;

    for (int i = 0; i < 10; i++) {
        for (int j = i; j > 0; j--) {
            if (a[j] < a[j - 1]) {
                int tmp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = tmp;
            } else {
                break;
            }
            for (int k = 0; k < 10; k++) {
                cout << a[k] << " ";
            }
            cout << endl;
        }

        cout << "****** " << i << " turn *****" << endl;
    }

}

/********************** insertion sort ***********************
 * 在要排序的一组数中，假定前n-1个数已经排好序，现在将第n个数插到前面的
 * 有序数列中，使得这n个数也是排好顺序的。如此反复循环，直到全部排好顺序。
 ************************************************************/
void SORT::shell(){

}
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void SelectionSort(vector<int> & ivector) {
	int temp = 0;
	int mixnum = 0;//标记最小数下标
	for (int i = 0; i < ivector.size()-1; i++) {  //注意要-1
		mixnum = i;
		for (int j = i+1; j < ivector.size(); j++) {
			if (ivector[mixnum] > ivector[j]) {
				mixnum = j;
			}
		}
		temp = ivector[i];
		ivector[i] = ivector[mixnum];
		ivector[mixnum] = temp;
	}
	return;
}

void SelectionSort2(vector<int> & ivector) {
	int temp = 0;
	for (int i = 0; i < ivector.size() - 1; i++) {  //注意要-1
		for (int j = i + 1; j < ivector.size(); j++) {
			if (ivector[i] > ivector[j]) {
				temp = ivector[i];
				ivector[i] = ivector[j];
				ivector[j] = temp;
			}
		}
	}
	return;
}

void BubbleSort(vector<int> & ivector) {
	int temp = 0;
	for (int i = 0; i < ivector.size()-1; i++) { //-1
		for (int j = 0; j < ivector.size()-1-i; j++) {
			if (ivector[j] > ivector[j+1]) {
				temp = ivector[j];
				ivector[j] = ivector[j+1];
				ivector[j+1] = temp;
			}
		}
	}
	return;
}

void InsertionSort(vector<int> & ivector) {
	int j = 0;
	int v = 0;
	for (int i = 1; i < ivector.size(); i++) {
		v = ivector[i];
		j = i - 1;
		while ((j >= 0) && (ivector[j] > v)) { //不知道具体循环多少次时使用while
			ivector[j + 1] = ivector[j];  //会改变原来 i 位置的值，所以前面用 v 表示
			j = j - 1;	//和上一步一起表示大于的位置向后移
		}
		ivector[j + 1] = v;  // j 在 while 里最后一下 -1 了，这里 j+1 就表示要插入的位置
	}
}

void ShellSort(vector<int> & ivector) {

}

int main() {
	vector<int> narray1 = { 5, 8, 6, 64, 4, 64, 1, 23, 15 };
	vector<int> narray2 = { 5, 8, 6, 64, 4, 64, 1, 23, 15 };
	SelectionSort(narray1);
	//BubbleSort(narray2);
	InsertionSort(narray2);
	for (int i = 0; i < narray1.size(); i++) {
		cout << narray1[i] << "\t" << narray2[i]<< endl;
	}
	return 0;
}


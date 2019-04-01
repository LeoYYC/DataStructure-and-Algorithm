#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void SelectionSort(vector<int> & ivector) {
	int temp = 0;
	int mixnum = 0;//�����С���±�
	for (int i = 0; i < ivector.size()-1; i++) {  //ע��Ҫ-1
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
	for (int i = 0; i < ivector.size() - 1; i++) {  //ע��Ҫ-1
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
		while ((j >= 0) && (ivector[j] > v)) { //��֪������ѭ�����ٴ�ʱʹ��while
			ivector[j + 1] = ivector[j];  //��ı�ԭ�� i λ�õ�ֵ������ǰ���� v ��ʾ
			j = j - 1;	//����һ��һ���ʾ���ڵ�λ�������
		}
		ivector[j + 1] = v;  // j �� while �����һ�� -1 �ˣ����� j+1 �ͱ�ʾҪ�����λ��
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


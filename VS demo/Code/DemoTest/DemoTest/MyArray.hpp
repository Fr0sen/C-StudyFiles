#pragma once
#include <iostream>
#include <string>
using namespace std;
template<class T>
class MyArray {
public:
	MyArray(int capacity) {
		//cout << "MyArray�вι�����ã�" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];//��������
	}

	//β�巨
	void Push_Back(const T& val) {
		//�ж������Ƿ���ڴ�С��
		if (this->m_Capacity == this->m_Size) {
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;//���������С
	}

	//βɾ��
	void Pop_Back() {
		//���û����ʲ������һ��Ԫ��,��Ϊβɾ ���߼�ɾ��
		if (this->m_Size == 0) {
			return;
		}
		this->m_Size--; 

	}
	//ͨ���±귽ʽ���������е�Ԫ��
	//����һ�����Ԫ�أ�����ֵ��T
	T& operator[](int index) {  //�����������ֵ�޸ģ��ͼ�����  �磺a[2] = 3;
		return this->pAddress[index];
	}

	//������������
	int getCapacity() {
		return this->m_Capacity;
	}
	int getSize() {
		return this->m_Size;
	}

	//��������
	MyArray(const MyArray& arr) {
		//cout << "MyArray�вι�����ã�" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		//���
		this->pAddress = new T[arr.m_Capacity];
		//��arr�е����ݶ���������
		for (int i = 0; i < this->m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	//opeartor = ��ֹǳ��������

	MyArray& operator=(const MyArray& arr) {

		//cout << "OP = ���ã�" << endl;

		//���ж�ԭ�������ͷ������ݣ�����У����ͷŸɾ�
		if (this->pAddress != NULL) {
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//���

		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this; 
	}

	//��������
	~MyArray() {
		//cout << "MyArray�����������ã�" << endl;
		if (this->pAddress != NULL) {
			delete[] this->pAddress;  //ɾ������
			this->pAddress = NULL;
		}
	}

private:
	T* pAddress;
	int m_Capacity;
	int m_Size;
};
#pragma once
#include <iostream>
#include <string>
using namespace std;
template<class T>
class MyArray {
public:
	MyArray(int capacity) {
		//cout << "MyArray有参构造调用！" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];//开辟容量
	}

	//尾插法
	void Push_Back(const T& val) {
		//判断容量是否等于大小了
		if (this->m_Capacity == this->m_Size) {
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;//更新数组大小
	}

	//尾删法
	void Pop_Back() {
		//让用户访问不到最后一个元素,即为尾删 ，逻辑删除
		if (this->m_Size == 0) {
			return;
		}
		this->m_Size--; 

	}
	//通过下标方式访问数组中的元素
	//重载一下这个元素，返回值是T
	T& operator[](int index) {  //如果还想做赋值修改，就加引用  如：a[2] = 3;
		return this->pAddress[index];
	}

	//返回数组容量
	int getCapacity() {
		return this->m_Capacity;
	}
	int getSize() {
		return this->m_Size;
	}

	//拷贝构造
	MyArray(const MyArray& arr) {
		//cout << "MyArray有参构造调用！" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;

		//深拷贝
		this->pAddress = new T[arr.m_Capacity];
		//将arr中的数据都拷贝过来
		for (int i = 0; i < this->m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	//opeartor = 防止浅拷贝问题

	MyArray& operator=(const MyArray& arr) {

		//cout << "OP = 调用！" << endl;

		//先判断原来堆区释放有数据，如果有，先释放干净
		if (this->pAddress != NULL) {
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//深拷贝

		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this; 
	}

	//析构函数
	~MyArray() {
		//cout << "MyArray析构函数调用！" << endl;
		if (this->pAddress != NULL) {
			delete[] this->pAddress;  //删除数组
			this->pAddress = NULL;
		}
	}

private:
	T* pAddress;
	int m_Capacity;
	int m_Size;
};
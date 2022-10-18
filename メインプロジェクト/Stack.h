#pragma once
#include"DoublyLinkedList.h"

template<typename Type>
class Stack
{
public:
	Stack();
	Stack(const Stack& obj) = default;
	~Stack();

	/**
	 * @brief データの数を取得します
	 * @return データの数
	 */
	uint32_t GetSize();

	/**
	 * @brief 先頭に要素を追加します
	 * @return 追加の成否
	 */
	bool Push();

	/**
	 * @brief 先頭の要素を取り出します
	 * @param[out] 取り出した要素の格納先
	 * @return スタックが空の場合falseを戻します
	 */
	bool Pop(Type& destination);

private:
	/** @brief データを格納するリスト */
	DoublyLinkedList<Type> list;
};

#include"Stack.inl"

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
	uint32_t GetSize()const;

	/**
	 * @brief 末尾に要素を追加します
	 * @return 追加の成否
	 */
	bool Push(const Type& data);

	/**
	 * @brief 末尾の要素を取り出します
	 * @param[out] 取り出した要素の格納先
	 * @return スタックが空の場合は何も取り出されずfalseを戻します
	 */
	bool Pop(Type& destination);

private:
	/** @brief データを格納するリスト */
	DoublyLinkedList<Type> list;
};

#include"Stack.inl"

#pragma once
#include"DoublyLinkedList.h"

template<typename Type>
class Queue
{
public:
	Queue();
	Queue(const Queue& obj) = default;
	~Queue();

	/**
	 * @brief データの数を取得します
	 * @return データの数
	 */
	uint32_t GetSize()const;

	/**
	 * @brief 先頭に要素を追加します
	 * @return 追加の成否
	 */
	bool Push(const Type& data);

	/**
	 * @brief 先頭の要素を取り出します
	 * @param[out] 取り出した要素の格納先
	 * @return キューが空の場合falseを戻します
	 */
	bool Pop(Type& destination);

private:
	/** @brief データを格納するリスト */
	DoublyLinkedList<Type> list;
};

#include"Queue.inl"

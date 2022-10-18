#pragma once
#include"Stack.h"

template<typename Type>
Stack<Type>::Stack()
{
}

template<typename Type>
Stack<Type>::~Stack()
{
}

template<typename Type>
inline uint32_t Stack<Type>::GetSize()
{
	return 0;
}

template<typename Type>
inline bool Stack<Type>::Push()
{
	return false;
}

template<typename Type>
inline bool Stack<Type>::Pop(Type& destination)
{
	return false;
}

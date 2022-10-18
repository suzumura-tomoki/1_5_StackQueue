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
	 * @brief �f�[�^�̐����擾���܂�
	 * @return �f�[�^�̐�
	 */
	uint32_t GetSize();

	/**
	 * @brief �擪�ɗv�f��ǉ����܂�
	 * @return �ǉ��̐���
	 */
	bool Push();

	/**
	 * @brief �擪�̗v�f�����o���܂�
	 * @param[out] ���o�����v�f�̊i�[��
	 * @return �X�^�b�N����̏ꍇfalse��߂��܂�
	 */
	bool Pop(Type& destination);

private:
	/** @brief �f�[�^���i�[���郊�X�g */
	DoublyLinkedList<Type> list;
};

#include"Stack.inl"

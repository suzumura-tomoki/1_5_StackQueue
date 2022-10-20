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
	uint32_t GetSize()const;

	/**
	 * @brief �����ɗv�f��ǉ����܂�
	 * @return �ǉ��̐���
	 */
	bool Push(const Type& data);

	/**
	 * @brief �����̗v�f�����o���܂�
	 * @param[out] ���o�����v�f�̊i�[��
	 * @return �X�^�b�N����̏ꍇ�͉������o���ꂸfalse��߂��܂�
	 */
	bool Pop(Type& destination);

private:
	/** @brief �f�[�^���i�[���郊�X�g */
	DoublyLinkedList<Type> list;
};

#include"Stack.inl"

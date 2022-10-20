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
	 * @brief �擪�̗v�f�����o���܂�
	 * @param[out] ���o�����v�f�̊i�[��
	 * @return �L���[����̏ꍇ�͉������o���ꂸfalse��߂��܂�
	 */
	bool Pop(Type& destination);

private:
	/** @brief �f�[�^���i�[���郊�X�g */
	DoublyLinkedList<Type> list;
};

#include"Queue.inl"

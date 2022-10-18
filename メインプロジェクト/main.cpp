#include<fstream>
#include"main.h"

int main() {

	std::ifstream ifsScoreFile;
	ifsScoreFile.open("Scores.txt");

	if (!ifsScoreFile) {
		printf("�t�@�C�����J���܂���ł���");
		getchar();
		return 1;
	}

	DoublyLinkedList<ResultData> list;
	DoublyLinkedList<ResultData>::Iterator it;

	//�X�R�A�ǂݍ���
	while (ifsScoreFile.eof() == false)
	{
		ResultData data{};

		//�t�@�C���̓ǂݎ��
		char readCharacter;
		while (true)
		{
			ifsScoreFile.get(readCharacter);

			//�t�@�C���I�[�̉��s�𖳎�
			if (ifsScoreFile.eof())
				break;

			data.score += readCharacter;

			if (readCharacter == ' ')
				break;
			if (readCharacter == '�@')
				break;
		}

		while (true)
		{
			ifsScoreFile.get(readCharacter);

			//�t�@�C���I�[�̉��s�𖳎�
			if (ifsScoreFile.eof())
				break;

			data.name += readCharacter;

			if (readCharacter == '\n')
				break;
		}

		//�ǂݎ�����f�[�^�̑}��
		it = list.GetEnd();
		list.Insert(it, data);
	}

	ifsScoreFile.close();

	//�ǂݍ��񂾒l���o��
	const DoublyLinkedList<ResultData>::Iterator end = list.GetEnd();
	for (it = list.GetBegin(); it != end; it++) {
		printf(it->score.c_str());
		printf(it->name.c_str());
		printf("\n");
	}

	printf("\nENTER�L�[�������ƏI�����܂�");
	getchar();
	return 0;
}
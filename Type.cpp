/* ----- < ������ ���ĵ� > ----- */
//
//
//
//
//
/* --- < ���� ��ȯ( Type Conversion ) > --- */

/*
< ����( Type ) > : ��ü�� ��� ������ ���� ������ �� �ִ� ������ ����
	#. ��ü = �־��� Ÿ���� ���� �����ϴ� �޸� ����
	#. �� = �־��� Ÿ������ �޸� ������ ��Ʈ ������ �ؼ��� ��
	#. ���� = ��ü�� �̸�
	#. < ����( declaration ) > : ��ü�� �̸��� �����ϴ� ����
	#. < ����( definition ) > : ��ü�� �޸� ������ �Ҵ��ϴ� ������ ����
�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
| ��ǻ���� �޸� ������ �׻� ��Ʈ������ �Ǿ� �ִ�. � Ÿ���� ���� �����ϴ��� ��ǻ�Ϳ���|
| ��Ʈȭ �Ǿ� �ֱ� ������ Ÿ���� ���ٸ� �� ���� �������� ��ǻ�Ͱ� �� �� ����.				|
�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
*/

//#include <iostream>		// < Title : default >
//
//int main()
//{
//	int myInt = 1;
//	std::string myStr = myInt;
//// #. ���� �ٸ� ������ ������ �� ����.
//
//	long long myLong = myInt;
//// #. 4byte�� myInt�� 8byte�� myLong�� �����Ͽ���.
//// #. �� ��ü�� �ٸ� type������ ���������� �������� ������� Ȯ���� �� �ִ�.
//// #. �̷��� ���� ���� ��ȯ�̶�� �θ���.
////		=> ũ�Ⱑ ���� �Ϳ��� ū ������ ��ȯ�� �����ϰ� ��ȯ�ȴ�.
////		=> ��ġ ���� ���ſ� ���� ���� ū �ſ� �Ű� ��Ƶ� �����帣�� �ʴ� �� ó��
//}

//#include <iostream>		// < Title : ��� ��ȯ( narrow conversion ) >
//
//int main()
//{
//	int myInt = 1024;
//	char myChar = myInt;
//	int value = 1.6;
//// #. 4byte ������ 1byte ���Ŀ� ������ ��� �������� �ս��� �߻��� �� �ִ�.
//// #. ū ���� ������ �ִ� ���� ���� ���� �������� �Ѿ�鼭 �߻��� �� �ִ� �����̴�.
//// #. �Ǽ��� ������ ������ ��� �Ҽ��� �Ʒ��� ���� �߷�������.
//
//	std::cout << myChar << " : " << value << std::endl;
//}

/* < �Ͻ��� ����ȯ( implicit conversion ) > */

/*
�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
| �⺻������ ���� ��ȯ�� ��Ģ�� '���� �ս��� �ּ�ȭ'�� �� �ִ� �������� �����Ѵٴ� ���̴�.|
| ���� �ս��� ���� ������ ū ������ ���� ������ �̵��� �� �߻��ϴ� ���� �⺻������ ������ |
| �Ǽ������� �߻��Ѵ�.																	  |
�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
< �Ͻ��� ����ȯ > : �����Ϸ��� �ڵ����� �ϳ��� �⺻ �ڷ����� �ٸ� �ڷ������� ��ȯ
	#. < ���� �°�( numeric promotion ) > : �� �ڷ����� ���� �� ū ������ �ڷ����� ������ ��ȯ
		=> ���� ��ȯ�� �Ǿ �����Ͱ� �״�� �����ȴ�.
	#. < ���� ��ȯ( numeric conversion ) > : �� �ڷ����� ���� �� ���� ������ �ڷ����� ������ ��ȯ
		=> ���� ��ȯ���� ���� �����Ͱ� �սǵ� ���� �ִ�.
*/

//#include <iostream>		// < Title : default >
//
//int main()
//{
//	float myFloat = 3;
//// #. int������ ���ͷ� 3�� 3.0f�� �Ͻ��� ����ȯ�� �Ͽ� myFloat�� �����Ѵ�.
//
//	double myDouble = 3;
//// #. int������ ���ͷ� 3�� 3.0���� �Ͻ��� ����ȯ�� �Ͽ� myDouble�� �����Ѵ�.
//}

//#include <iostream>		// < Title : ���� �°�( numeric promotion ) >
//
//int main()
//{
//	double d(0.12f);
//// #. float������ ���ͷ� 0.12f���� �� ū ������ �ڷ����� ������ ��ȯ�Ͽ� �����Ѵ�.
//
//	int i;
//	char c = 1;
//	i = c;
//// #. char������ ���ͷ� 1�� �� ū ������ �ڷ����� ������ ��ȯ�Ͽ� �����Ѵ�.
//
//	std::cout << d << " : " << i << std::endl;
//}

//#include <iostream>		// < Title : ���� ��ȯ( numeric conversion ) >
//
//int main()
//{
//	double d = 3;
//// #. ���� 3�� �Ǽ� d�� ����Ǳ� ���� ���� ��ȯ�̶�� �Ͻ��� ����ȯ�� ����ȴ�.
//
//	short s = 2;
//// #. 4byte�� int���� ���ͷ� 2�� 2byte�� short���� ���� s�� ����Ǳ� ���� ���� ��ȯ�� ����ȴ�.
//}

/* < ����� ����ȯ( explicit conversion ) > */

/*
< ����� ����ȯ > : ���α׷��Ӱ� ���� �����ϴ� ����ȯ���� Type Cast��� �θ���.
	#. ��ȯ �Ϸ��� ���� �տ�'(����)'�� �ٿ��� ��������� ǥ���Ѵ�.
	#. ū ���Ŀ��� ���� �������� ��ȯ�ϸ� ��������� ũ�� ������ ���� �߷� ������.
	#. ��������� ǥ���ص� �Ұ����� ĳ������ �ִ�.
*/

//#include <iostream>		// < Title : default >
//
//int main()
//{
//	int myInt = 1000;
//	unsigned char myChar = myInt;
//
//	std::cout << myInt << " : " << int(myChar) << std::endl;
//// #. char������ ���ڸ� ����� ����ȯ�� ���� ���� ���·� ����Ͽ���.
//// #. int�������� 1000�̶�� ���� 2������ 0011 1110 1000�ε�
//// #. char������ �ִ� 255�� ���� ��� ������ 1byte�� �ش��ϴ� 1110 1000�� ����� �� �ִ�.
//}

//#include <iostream>		// < Title : C-style >
//
//int main()
//{
//	int A = 10;
//	int B = 4;
//
//	float myFloat = A / B;
//// #. [10 / 4]�� ����Ͽ� 2��� ���� �����ϰ�, �Ͻ��� ����ȯ���� 2.0f��� ���� ������ �����Ѵ�.
//
//	myFloat = (float)A / B;
//// #. A�� ��������� ������ �ٲٸ� A/B����� float�������� ����Ǿ� 2.5f��� ���� ������ �����Ѵ�.
//// #. C-style cast�� ������Ÿ�ӿ� �˻���� �����Ƿ� ����� �� �ִ�.
//
//	std::cout << myFloat << std::endl;
//}

//#include <iostream>		// < Title : static_cast >
//
//int main()
//{
//	char myChar = 'a';
//
//	std::cout << static_cast<int>(myChar) << std::endl;
//// #. static_cast�� �ϳ��� �ڷ����� �ٸ� �ڷ������� ��ȯ�ϴ� �� ���� ���� ����̴�.
//
//	int A = 10;
//	int B = 4;
//	float myFloat = static_cast<float>(A) / B;
//// #. ������ Ÿ�ӿ� ���� �˻縦 �ϱ� ������ �������� ������ ������ �� �ִ�.
//}

/* --- < ��Ī( Alias ) > --- */

/*
�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
| std::vector<std::string>�� ���� type�� �Է��ϱ� �� ����� �� �ſ� ������ ��Ȳ�� �ִ�.|
| ��Ī�̶�� ����� ����ϸ� �̷��� �� �Է��� ª�� ���� �� �ִ�.						   |
�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�
< typedef > : typedef �������� ��Ī;
	=> typedef std::pair<int, std::string> Pair;
< using > : using ��Ī = ��������;
	=> using Music = std::vector<int, std::vector<int>>;
*/

//#include <iostream>		// < Title : typedef >
//
//typedef unsigned int uInt;
//
//int main()
//{
//	uInt myInt = 1;
//// #. unsigned int��� ���� �̸��� uInt�� �ٲپ� ����Ͽ���.
//}

//#include <iostream>		// < Title : using >
//
//using uInt = unsigned int;
//
//int main()
//{
//	uInt myInt = 1;
//// #. unsigned int��� ���� �̸��� uInt�� �ٲپ� ����Ͽ���.
//}

/* --- < ������( Enumeration Type ) > --- */

/*
< ������ > : ����Ÿ������ ���ο� ������ �����Ͽ�, ������ ������ ǥ���� �� �ִ�.
	#. ���������� ���� ����
	#. ����� ����ȯ�� ���� ������ ��ȯ�� ����
	#. �ݴ�� ���������� ��������� ���������� ��ȯ�� ����
	#. �������� ����� �ؼ�
*/

//#include <iostream>		// < Title : default >
//
//enum AttackType
//{	// #. Phsycals = 0, Magical = 1, Fixed = 2 �̷��� �ڵ����� 0 ���� ������ �����ȴ�.
//	Phsycal, Magical, Fixed
//};
//
//int main()
//{
//	AttackType shortSword{ Phsycal };
//
//// #. shortSword ��ü�� ����� ��( Phsycal )�� ����ġ ���̺�� ��Ī�Ͽ� �˸´� ���̺� ����
//	switch (shortSword)
//	{
//	case Phsycal:
//		std::cout << "���� ������ 3�� ������." << std::endl;
//		break;
//	case Magical:
//		std::cout << "���� ������ 100�� ������." << std::endl;
//		break;
//	case Fixed:
//		std::cout << "���� ������ 30�� ������." << std::endl;
//		break;
//	default:
//		std::cout << "������!!!" << std::endl;
//		break;
//	}
//}

//#include <iostream>		// < Title : Color >
//
//// #. ���� �̸��� ����� �����ϰ� �� ���� �ȿ� 16���� ���� �����Ѵ�.
//enum Color
//{
//	White = 0xFFFFFF,
//	Magenta = 0xFF00FF,
//	Pink = 0xFFC0CB
//};
//
//int main()
//{
//	Color wall{ Pink };
//
//	switch (wall)
//	{
//	case White:
//		std::cout << "��� ĥ�� �Ѵ�." << std::endl;
//		break;
//	case Magenta:
//		std::cout << "���� ĥ�� �Ѵ�." << std::endl;
//		break;
//	case Pink:
//		std::cout << "��Ȥ�� ĥ�� �Ѵ�." << std::endl;
//		break;
//	default:
//		std::cout << "ȸ�� ĥ�� �Ѵ�." << std::endl;
//		break;
//	}
//}

//#include <iostream>		// < Title : Flag >
//
//// #. 2������ Flag�� ���� �� �ֵ��� ���� �����Ѵ�.
//enum QuestFlag
//{
//	None = 0,
//	Q1 = 1, Q2 = 2, Q3 = 4, Q4 = 8, Q5 = 16
//};
//
//int main()
//{	// #. ������� ����Ʈ Ŭ���� ���¸� Ȯ���ϱ� ���� ������ �����Ѵ�.
//	int QuestComplete{ None };
//	// QuestComplete = 0000
//
//	// #. ����ڰ� ����Ʈ 1�� Ŭ���� ���� �� Q1�� �����Ѵ�.
//	QuestComplete = Q1;
//	// QuestComplete = 0000 | 0001 ( 0001 )
//
//// #. ����ڰ� ����Ʈ 1�� Ŭ���� �� ���� ����Ʈ 3�� Ŭ���� �Ͽ����� ǥ���Ѵ�.
//	QuestComplete = QuestFlag(QuestComplete | Q3);
//	// QuestComplete = 0001 | 0100 ( 0101 )
//
//// #. ����ڰ� ����Ʈ 1, 3�� Ŭ���� �� ���� ����Ʈ 4�� Ŭ���� �Ͽ����� ǥ���Ѵ�.
//	QuestComplete = QuestFlag(QuestComplete | Q4);
//	// QuestComplete = 0101 | 1000 ( 1101 )
//
//// #. ����ڰ� �����z 1�� 3�� Ŭ���� �Ͽ��� ��� �̺�Ʈ�� �߻���Ų��.
//	if (QuestComplete & Q1 && QuestComplete & Q3)
//	{	// 1101 & 0001 && 1101 & 0100
//		std::cout << "�� �� ���̱� ������..." << std::endl;
//	}
//}

/* --- < ����ü( Structure ) > --- */

/*
< ����ü > : �پ��� type�� �ϳ��� ī�װ��� ���� �� �ִ�.
*/

//#include <iostream>		// < Title : default >
//
//// #. ���� �����ִ� ������ �ϳ��� ����ó�� ���� �� �ִ�.
//struct Status
//{
//	int HP; int MP; int POWER; int MAGIC;
//};
//int main()
//{
//	// #. warrior �̶�� �̸��� ��ü�� Status ����ü�� ��� ���Ҹ� ������ �ִ�.
//	Status warrior{ 100,0,10,0 };
//
//	// #. ����ü ��ü�� ���� �����Ϸ��� '.'���� ��� ��� ������ ���� �ؾ� �Ѵ�.
//	warrior.HP = 999;
//	warrior.MP = 5;
//	warrior.POWER = 32;
//	warrior.MAGIC = 1;
//
//	// #. �迭 ������ε� ������ �ʱ�ȭ�� �̿��Ͽ� ������ �����ϴ�.
//	warrior = { 100000,10,99,3 };
//}

//#include <iostream>		// < Title : memory >
//
//// RAM �޸𸮿� 1Byte �����ϱ� ���� ����ü
//struct OneByte
//{
//	char mychar;
//};
//// RAM �޸𸮿� 5Byte �����ϱ� ���� ����ü
//struct FiveByte
//{
//	// �⺻������ �޸��� ������ 4Byte ������ �����
//	//  #. ������ char �� 1Byte�� ������ ��� 3Byte �� �� ������ �����
//	//	#. �� �ڿ� int 4Byte �� ���� �Ǿ� �� �������� ���ļ� 8Byte�� ����ȴ�.
//	char mychar;
//	int myint;
//};
//// �Ͻ������� �޸��� ���� ������ 1Byte�� �ٲ� �� ����
//#pragma pack(push,1)
//struct FiveByte2
//{
//	char mychar;
//	int myint;
//};
//// �ٲ� ���� ������ �����·� ���� ���´�.
//#pragma pack(pop)
//int main()
//{
//	std::cout << sizeof(OneByte) << std::endl;
//	std::cout << sizeof(FiveByte) << std::endl;
//	std::cout << sizeof(FiveByte2) << std::endl;
//}

/* --- < ����ü( Union ) > --- */

/*
< ����ü > : ������ ������� ������ �޸𸮸� �����Ѵ�.
	#. �޸𸮸� �����ϱ� ���� ����̴�.
*/

//#include <iostream>
//
//// �޸𸮸� �����ϱ� ���� ����ü ������ ������� �޸𸮸� ������
//union myUni
//{	// ���Ͽ� ���� ������ ���� �ٸ� Ÿ���� ���� �� �ִ�.
//	int i;
//	float f;
//	char c;
//};
//int main()
//{
//	// ����ü type�� ��ü�� ���� �� ���� ū ũ���� type�� �޸� ������ �Ҵ� �޴´�.
//	myUni u{};
//	// '.'���� �̿��Ͽ� ��� ���� ���� ����
//	u.i = 98;
//	std::cout << u.f << ", " << u.f << ", " << u.c << std::endl;
//	std::cout << sizeof(myUni) << std::endl;
//}
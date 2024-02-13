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

/* ----- < �迭 > ----- */
//
//
//
//
//
/* --- < �迭( Array ) > --- */

/*
< �迭 > : ������ ������ ���� ���� �� ������ �� �ִ� ���
	#. ���� ������[ũ��];
	#. ������[�ε���] = ��;
	#. ������ �ڿ� ���ȣ[]�� �ٿ� �ְ� ũ�⸦ �����ϸ� �迭�� ������ �����ϴ�.
		#. []��ȣ�� ÷��( subscript )��� �θ���.
	#. ���� �������ų� ����� ���� ������ �ڿ� ���ȣ�� �ε���( ���� )�� ������ ��� �Ѵ�.
	#. �ε����� 0�� �������� ����Ѵ�.

< �迭�� ũ�� ���� > : �迭 ÷�ڴ� �پ��� ���·� ������ �����ϴ�.
	#. �ٸ�, �迭�� ������ �� ũ��� ����� �����ϴ�.
*/

//#include <iostream>		// < Title : default >
//
//int main()
//{
//	// #. ������ type�� ���� ���� �� ������ �� �ִ�.
//	int arr[5];
//
//	// #. �ε���[] ���� �� ���� ������ �� �ִ�.
//	arr[0] = 1; arr[1] = 2; arr[2] = 3; arr[3] = 4; arr[4] = 5;
//
//	for (int i = 0; i < 5; i++)
//	{
//		std::cout << arr[i] << " ";
//	}
//}

//#include <iostream>		// < Title : ÷�� ���� >
//
//enum Order { Friend = 10 };
//
//int main()
//{	// #1. ���ͷ��� �迭 ÷�ڷ� �Է��Ͽ� �迭�� ������ �� �ִ�.
//	int arr1[5]{};
//
//	// #2. ��� �� �������� �迭 ÷�ڷ� �Է��Ͽ� �迭�� ������ �� �ִ�.
//	int arr2[Friend]{};
//	
//	int x{ 1 };
//	int arr3[x];
//// #3. ������ �迭 ÷�ڷ� �ԷµǾ� �迭�� ������ �� ����!
//// #3-1. ������ ���������� ����� ��, �� ��Ÿ�ӿ� ������ �޸� ������ �Ҵ�Ǹ� ���� ����ȴ�.
//// #3-2. �׷��� �迭�� ������Ÿ�ӿ� �̸� �غ��ϴ� ���̱� ������ ������ Ÿ�� ����� �ʿ��ϴ�.
//
//	// #4. ǥ������ �迭 ÷�ڷ� �Է��Ͽ� �迭�� ������ �� �ִ�.
//	int arr4[3 * 3]{};
//}

//#include <iostream>		// < Title : ����ü�� �迭 >
//
//struct Point2D
//{
//	double x;
//	double y;
//};
//int main()
//{	// #. Point2D type �� pt �̸��� ���� �迭 ����
//	Point2D pt[3]
//	{	// #. �� �ε���[] ���� x���� y���� �ʱ�ȭ
//		{1.0, 1.0},
//		{2.0, 2.0},
//		{3.0, 3.0}
//	};
//
//	// ����ü �迭�� '.'���� ���� ��� ������ ���� ����
//	pt[0].x = 1.5;
//	pt[1].y = 5.1;
//
//	std::cout << pt[0].x << ", " << pt[0].y << std::endl;
//	std::cout << pt[1].x << ", " << pt[1].y << std::endl;
//}

//#include <iostream>		// < Title : ������ ������ 1���� �迭 >
//
//int main()
//{	// #. 1���� �迭�� 15ũ���� �迭�� �������.
//	int myArray[15]{
//		0,0,1,0,0,
//		0,1,1,1,0,
//		1,1,1,1,1
//	};
//
//	// #. �迭�� ���ۺ��� ������ ���Ҹ� ����Ѵ�.
//	for (int i = 0; i < 15; i++)
//	{
//		std::cout << myArray[i] << " ";
//		if ((i + 1) % 5 == 0)
//		{	// #. ��, 5�� ����� �������� 0�� ������ �ٹٲ��� ���ش�.
//			std::cout << std::endl;
//		}
//	}
//}

/* ----- < �迭 > ----- */
//
//
//
//
//
/* --- < 2���� �迭( 2-Dimensional Array ) > --- */

/*
< 2���� �迭 > : �迭�� �迭�̶�� �������� �迭 �ڿ� �ٽ� �迭�� �ٿ��� [][]ǥ���Ѵ�.
	#. ũ�⸦ ������ ���� [��][��]�� ���� �����Ѵ�.
		=> ����( �� )�� ���� ������ �Ʒ��� ���� ���� ��
		=> ����( �� )�� ���� ������ ������ ���� ���� ��
*/

//#include <iostream>		// < Title : default >
//
//int main()
//{
//	// #. 3���� �迭�� ����� �� �迭�� ������ �迭�� �����Ѵ�.
//	int arr[3][5]
//	{	// #. ������ �迭���� 5���� ���Ұ� �ִ� �迭�� ����� �迭�̴�.
//		{0,0,1,0,0},
//		{0,1,1,1,0},
//		{1,1,1,1,1}
//	};
//
//	// #. ���� �� �迭�� 0���� �Ʒ��� 2�� �迭���� ��ȸ�Ѵ�.
//	for (int i = 0; i < 3; i++)
//	{	// #. ���� �� �迭�� 0���� ������ 4�� �迭���� ��ȸ�Ѵ�.
//		for (int j = 0; j < 5; j++)
//		{	// #. i�� j���� ����� ���Ҹ� ����Ѵ�.
//			std::cout << arr[i][j] << " ";
//		}
//		std::cout << std::endl;
//	}
//}

//#include <iostream>		// < Title : std::array >
//#include <array>
//
//int main()
//{	// #. ���Ұ� 3���� �迭�� ����µ� �� �迭�� Ÿ���� std::array<int, 5>�̴�.
//	std::array<std::array<int, 5>, 3> arr{
//		0,0,1,0,0,
//		0,1,1,1,0,
//		1,1,1,1,1
//	};
//	// #. ���� �� �迭�� 0���� �Ʒ��� 2�� �迭���� ��ȸ�Ѵ�. 
//	for (int i = 0; i < 3; i++)
//	{	// #. ���� �� �迭�� 0���� ������ 4�� �迭���� ��ȸ�Ѵ�.
//		for (int j = 0; j < 5; j++)
//		{	// #. i�� j���� ����� ���Ҹ� ����Ѵ�.
//			std::cout << arr[i][j] << " ";
//		}	std::cout << std::endl;
//	}
//}

//#include <iostream>		// < Title : std::vector >
//#include <vector>
//
//int main()
//{	// #. �����ڸ� �̿��Ͽ� ���� �迭 3ĭ�� �Ҵ��ϰ� �� ������ ���� �迭�� �Ҵ��Ѵ�.
//	std::vector<std::vector<int>> vec(3, std::vector<int>(5));
//
//	vec[0] = { 0,0,1,0,0 };
//	vec[1] = { 0,1,1,1,0 };
//	vec[2] = { 1,1,1,1,1 };
//
//	// #. ���� �� �迭�� 0���� �Ʒ��� 2�� �迭���� ��ȸ�Ѵ�.
//	for (int i = 0; i < 3; i++)
//	{	// #. ���� �� �迭�� 0���� ������ 4�� �迭���� ��Ⱥ�Ѵ�.
//		for (int j = 0; j < 5; j++)
//		{	// #. i�� j���� ����� ���Ҹ� ����Ѵ�.
//			std::cout << vec[i][j] << " ";
//		}	std::cout << std::endl;
//	}
//}

/* --- < ������( L_Value )�� ������( R_Value ) > --- */

/*
< L_Value > : ������ �� �ִ� �Ǹ��� ��ü
	#. ������ �ڵ带 �Ѿ�� lvalue�� �������� �ʴ´�.
	#. �ַ� ������ ��Ī�Ѵ�.
	#. rvalue�� lvalue�� ��ȯ�� �� ����.

< R_Value > : ������ �� ���� ������ ��ü
	#. ���� �� �̿ܿ��� �������� �ʴ� �ӽ� ���̴�.
	#. ���ͷ�, ���, ����ĵ��� ��Ī�Ѵ�.
	#. lvalue�� rvalue�� ��ȯ�� �� �ִ�.

< �迭�� �̸��� L_Value�� �ƴϴ� > : �迭 �̸��� �޸��� ��ġ�� ������ ���̴�.
	#. �迭 ÷�ڸ� �̿��Ͽ� Ư���� ������ �����ϰ� ���� �� lvalue�� �ȴ�.
*/

//#include <iostream>		// < Title : default >
//
//int main()
//{
//	int arrayOne[5]{ 1,2,3,4,5 };
//	int arrayTwo[5]{};
//
//	arrayTwo[0] = arrayOne[0];
//// #. arrayTwo�迭�� 0��° ���ҿ� arrayOne�迭�� 0��° ���Ҹ� �����Ѵ�.
//
//	arrayTwo = arrayOne;
//// #. �迭 �̸��� �޸��� ��ġ�� ������ ���̱� ������ ���� ������ �� ����.
//// #. arrayOne�� ��� ���Ҹ� arrayTwo�� �����Ϸ��� �� ���� ���� ������ ��� �Ѵ�.
//}

/* --- < ���ڿ�( Character Array, String ) > --- */

/*
< ���ڿ� > : ���ڵ�� �̷���� ����
	#. ����( Character ) + �迭( Array )
	#. ���� ���ͷ� : ���� ����ǥ�� �ѷ� �ο� �ִ�. 'a'
	#. ���ڿ� ���ͷ� : ū ����ǥ�� �ѷ� �ο� �ִ�. "Hello"
*/

//#include <iostream>		// < Title : default >
//
//int main()
//{	// #. ���ڿ��� �� ���ھ�('')�Է� ���� ���� �ΰ��� �־�߸� �Ѵ�.
//	char c[6]{ 'R','i','v','e','r','\0' };
//	c[0] = 'M'; c[1] = 'o'; c[2] = 'n'; c[3] = 'e'; c[4] = 'y'; c[5] = '\0';
//
//	// #. ���ڿ� ���ͷ�("")���� \0 �ΰ��� ���ԵǾ� �ִ�.
//	char std[6]{ "River" };
//	std::cout << c << std::endl;
//	std::cout << std << std::endl;
//}

//#include <iostream>		// < Title : std::cin >
//
//struct Student
//{
//	char name[10];
//	int num;
//	int score;
//};
//int main()
//{
//	Student tom;
//	std::cout << "Input : ";
//	std::cin >> tom.name >> tom.num >> tom.score;
//// #. std::cin�� �����̽���, ���ͷ� ���ڿ��� �����Ͽ� �Է¹޴´�.
//
//	std::cout << tom.name << std::endl;
//	std::cout << tom.num << std::endl;
//	std::cout << tom.score << std::endl;
//}

//#include <iostream>		// < Title : �ּ� >
//
//int main()
//{
//	char myText[20]{ "Greetings!" };
//
//// #. ���ڿ��� ��� �޸� ������ �Ҵ� �޴´�.
//// #. �����Ϸ��� �� �޸� ������ �����Ͽ� �ش� ���ڿ��� ������ش�.
//	std::cout << myText << " : " << &myText << std::endl;
//	std::cout << "Greetings!" << " : " << &"Greetings!" << std::endl;
//}

//#include <iostream>		// < Title : ������ >
//
//int main()
//{
//	char nameOne[10]{ "River" };
//	char* pointer{ nameOne };
//
//// #. �迭�� �̸��� �ش� �迭�� ù��° ���� �ּҰ��� ����Ų��.
//// #. �׷��Ƿ� nameOne�� &nameOne[0]�� ��� ����� ����.
//	std::cout << nameOne << " : " << &nameOne << " : " << &nameOne[0] << std::endl;
//
//// #. pointer�� nameOne�� �ּҰ��� �����Ѵ�. ���ڿ��� �ּҰ��� ����� ���ڿ��� ����� �ش�.
//	std::cout << pointer << " : " << &pointer << " : " << (pointer + 0) << std::endl;
//
//// #. nameOne�� ���� �迭�� ũ�⸦, nameOne[0]�� ���� �迭�� ù��° �޸� ������ ũ�⸦,
//// #. &nameOne�� �Ҵ�� �޸� ������ ũ�⸦, &nameOne[0]�� ������ �޸� ������ ũ�⸦ ����Ѵ�.
//	std::cout << sizeof nameOne << " : " << sizeof nameOne[0] << " : " 
//		<< sizeof & nameOne << " : " << sizeof & nameOne[0] << std::endl;
//}

//#include <iostream>		// < Title : const char* >
//
//int main()
//{
//	const char* name = "River";
//// #. "River"�� ����� �� �� �޸� ������ �Ҵ�޴´�.
//// #. name�� �� �޸� ������ ����Ų��.
//// #. "River"�� rvalue( ���� ��ü )�̱� ������ �ش� ������ ������ ��������.
//// #. ������ �Ϲ� �����Ͱ� �ƴ� ��� �����ͷ� �����Ѿ� �Ѵ�.
//	
//	std::cout << name << " : " << (void*)name << std::endl;
//}

/* --- < ���ڿ� ��Ʈ��( String Stream ) > --- */

/*
< stream > : ������� �߻�ȭ�ؼ� ��Ÿ���� �ش�.

< sstream( string ) > : ���ڿ��κ��� �Է��� �޴´�.
	#. ostring stream : ���ڿ� ������ �����Ͽ� ������ �� ����Ѵ�.
	#. string stream : ���ڿ����� ���� ���ϴ� �ڷ����� �����͸� ������ �� ����Ѵ�.
	#. istring stream : ���ڿ� ������ parsing�� �� ����Ѵ�.
		#. parsing : �Ϸ��� ���ڿ��� �ǹ��ִ� token( ���� �м��� ���� )���� �����ϰ� �װ͵�� �̷���� Parse tree�� ����� ����

< istream( input ) > : ����ڷκ��� �Է� �޴´�.

< ifstream( file ) > : ���Ϸκ��� �Է� �޴´�.
*/

//#include <iostream>		// < Title : ostringstream >
//#include <sstream>
//
//int main()
//{	// #. �پ��� ������ �������� �ϳ��� ��ü�� ������ �� �ִ�.
//	int number{ 1 };
//	char name[]{ "River" };
//	float average{ 90.1f };
//
//// #. ostringstreamŬ������ ��ü oss�� ����� �� �ȿ� ������ ���ڿ��� ������ �ش�.
//	std::ostringstream oss;
//	oss << number << "�� �л� " << name << "�� ��� " << average << "�Դϴ�.";
//
//// #. str()�Լ��� �̿��Ͽ� ��ü �ȿ� �ִ� ���� ���ڿ��� ����� �� �ִ�.
//	std::cout << oss.str() << std::endl;
//}

//#include <iostream>		// < Title : stringstream >
//#include <sstream>
//#include <string>
//
//int main()
//{
//	int n;
//	std::stringstream ss;
//	ss.str("12 345 6789 0 -12 a");
//// #. stringstreamŬ������ ��ü ss�� �����.
//// #. str()�Լ��� ����� ���ڿ��� ���� �ִ´�.
//
//	for (int i = 0; i < 5; i++)
//	{	// #. ���ڿ� �� int�������� ��ȯ�Ǵ� ���ڸ� int �������� ������.
//		ss >> n;
//		std::cout << n << std::endl;
//	}
//}

//#include <iostream>		// < Title : istringstream >
//#include <sstream>
//
//int main()
//{	// #. istringstreamŬ������ ��ü iss�� �����.
//	std::istringstream iss("test 123 123hah ahha");
//	std::string str1, str2, str3;
//	int num;
//
//	std::cout << iss.str() << std::endl;
//	
//// #. �����̽���, ������ �����Ͽ� �� ������ �����Ѵ�.
//	iss >> str1 >> num >> str2 >> str3;
//	std::cout << str1 << " : " << str2 << " : " << str3 << " : " << num;
//}
/* ----- < 복잡한 형식들 > ----- */
//
//
//
//
//
/* --- < 형식 변환( Type Conversion ) > --- */

/*
< 형식( Type ) > : 객체의 사용 가능한 값과 적용할 수 있는 연산을 정의
	#. 객체 = 주어진 타입의 값을 저장하는 메모리 공간
	#. 값 = 주어진 타입으로 메모리 공간의 비트 집합을 해석한 것
	#. 변수 = 객체의 이름
	#. < 선언( declaration ) > : 객체의 이름을 지정하는 구분
	#. < 정의( definition ) > : 객체의 메모리 공간을 할당하는 일종의 선언
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
| 컴퓨터의 메모리 공간은 항상 비트구조로 되어 있다. 어떤 타입의 값을 저장하더라도 컴퓨터에는|
| 비트화 되어 있기 때문에 타입이 없다면 그 값이 무엇인지 컴퓨터가 알 수 없다.				|
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
*/

//#include <iostream>		// < Title : default >
//
//int main()
//{
//	int myInt = 1;
//	std::string myStr = myInt;
//// #. 서로 다른 형식은 저장할 수 없다.
//
//	long long myLong = myInt;
//// #. 4byte인 myInt를 8byte인 myLong에 대입하였다.
//// #. 두 객체는 다른 type이지만 정상적으로 컴파일이 진행됨을 확인할 수 있다.
//// #. 이러한 것을 형식 변환이라고 부른다.
////		=> 크기가 작은 것에서 큰 것으로 변환은 안전하게 변환된다.
////		=> 마치 작은 물컵에 담은 물은 큰 컵에 옮겨 담아도 넘쳐흐르지 않는 것 처럼
//}

//#include <iostream>		// < Title : 축소 변환( narrow conversion ) >
//
//int main()
//{
//	int myInt = 1024;
//	char myChar = myInt;
//	int value = 1.6;
//// #. 4byte 형식을 1byte 형식에 저장할 경우 데이터의 손실이 발생할 수 있다.
//// #. 큰 저장 공간에 있는 값이 작은 저장 공간으로 넘어가면서 발생할 수 있는 문제이다.
//// #. 실수를 정수에 저장할 경우 소수점 아래가 전부 잘려나간다.
//
//	std::cout << myChar << " : " << value << std::endl;
//}

/* < 암시적 형변환( implicit conversion ) > */

/*
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
| 기본적으로 형식 변환의 원칙은 '정보 손실을 최소화'할 수 있는 방향으로 수행한다는 것이다.|
| 정보 손실은 저장 공간이 큰 값에서 작은 값으로 이동할 때 발생하는 것이 기본이지만 정수와 |
| 실수에서도 발생한다.																	  |
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
< 암시적 형변환 > : 컴파일러가 자동으로 하나의 기본 자료형을 다른 자료형으로 변환
	#. < 숫자 승격( numeric promotion ) > : 한 자료형의 값이 더 큰 유사한 자료형의 값으로 변환
		=> 형식 변환이 되어도 데이터가 그대로 보존된다.
	#. < 숫자 변환( numeric conversion ) > : 한 자료형의 값이 더 작은 유사한 자료형의 값으로 변환
		=> 형식 변환으로 인해 데이터가 손실될 수도 있다.
*/

//#include <iostream>		// < Title : default >
//
//int main()
//{
//	float myFloat = 3;
//// #. int형식의 리터럴 3을 3.0f로 암시적 형변환을 하여 myFloat에 저장한다.
//
//	double myDouble = 3;
//// #. int형식의 리터럴 3을 3.0으로 암시적 형변환을 하여 myDouble에 저장한다.
//}

//#include <iostream>		// < Title : 숫자 승격( numeric promotion ) >
//
//int main()
//{
//	double d(0.12f);
//// #. float형식의 리터럴 0.12f값을 더 큰 유사한 자료형의 값으로 변환하여 저장한다.
//
//	int i;
//	char c = 1;
//	i = c;
//// #. char형식의 리터럴 1을 더 큰 유사한 자료형의 값으로 변환하여 저장한다.
//
//	std::cout << d << " : " << i << std::endl;
//}

//#include <iostream>		// < Title : 숫자 변환( numeric conversion ) >
//
//int main()
//{
//	double d = 3;
//// #. 정수 3이 실수 d에 저장되기 위해 숫자 변환이라는 암시적 형변환이 진행된다.
//
//	short s = 2;
//// #. 4byte의 int형식 리터럴 2가 2byte의 short형식 변수 s에 저장되기 위해 숫자 변환이 진행된다.
//}

/* < 명시적 형변환( explicit conversion ) > */

/*
< 명시적 형변환 > : 프로그래머가 직접 지정하는 형변환으로 Type Cast라고 부른다.
	#. 변환 하려는 형식 앞에'(형식)'을 붙여서 명시적으로 표현한다.
	#. 큰 형식에서 작은 형식으로 변환하면 저장공간의 크기 때문에 값이 잘려 나간다.
	#. 명시적으로 표기해도 불가능한 캐스팅이 있다.
*/

//#include <iostream>		// < Title : default >
//
//int main()
//{
//	int myInt = 1000;
//	unsigned char myChar = myInt;
//
//	std::cout << myInt << " : " << int(myChar) << std::endl;
//// #. char형식의 문자를 명시적 형변환을 통해 정수 형태로 출력하였다.
//// #. int형식으로 1000이라는 값은 2진수로 0011 1110 1000인데
//// #. char형식은 최대 255의 값을 담기 때문에 1byte에 해당하는 1110 1000만 출력할 수 있다.
//}

//#include <iostream>		// < Title : C-style >
//
//int main()
//{
//	int A = 10;
//	int B = 4;
//
//	float myFloat = A / B;
//// #. [10 / 4]를 계산하여 2라는 값을 생성하고, 암시적 형변환으로 2.0f라는 값을 변수에 저장한다.
//
//	myFloat = (float)A / B;
//// #. A를 명시적으로 형식을 바꾸면 A/B계산이 float형식으로 진행되어 2.5f라는 값을 변수에 저장한다.
//// #. C-style cast는 컴파일타임에 검사되지 않으므로 오용될 수 있다.
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
//// #. static_cast는 하나의 자료형을 다른 자료형으로 변환하는 데 가장 좋은 방법이다.
//
//	int A = 10;
//	int B = 4;
//	float myFloat = static_cast<float>(A) / B;
//// #. 컴파일 타임에 형식 검사를 하기 때문에 부주의한 오류를 예방할 수 있다.
//}

/* --- < 별칭( Alias ) > --- */

/*
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
| std::vector<std::string>과 같이 type을 입력하기 길어서 사용할 때 매우 귀찮은 상황이 있다.|
| 별칭이라는 기능을 사용하면 이러한 긴 입력을 짧게 줄일 수 있다.						   |
ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
< typedef > : typedef 기존형식 별칭;
	=> typedef std::pair<int, std::string> Pair;
< using > : using 별칭 = 기존형식;
	=> using Music = std::vector<int, std::vector<int>>;
*/

//#include <iostream>		// < Title : typedef >
//
//typedef unsigned int uInt;
//
//int main()
//{
//	uInt myInt = 1;
//// #. unsigned int라는 형식 이름을 uInt로 바꾸어 사용하였다.
//}

//#include <iostream>		// < Title : using >
//
//using uInt = unsigned int;
//
//int main()
//{
//	uInt myInt = 1;
//// #. unsigned int라는 형식 이름을 uInt로 바꾸어 사용하였다.
//}

/* --- < 열거형( Enumeration Type ) > --- */

/*
< 열거형 > : 집합타입으로 새로운 형식을 정의하여, 유한한 집합을 표현할 수 있다.
	#. 내부적으로 정수 형식
	#. 명시적 형변환을 통해 정수로 변환이 가능
	#. 반대로 정수형에서 명시적으로 열거형으로 변환이 가능
	#. 열거형은 상수로 해석
*/

//#include <iostream>		// < Title : default >
//
//enum AttackType
//{	// #. Phsycals = 0, Magical = 1, Fixed = 2 이렇게 자동으로 0 부터 정수가 배정된다.
//	Phsycal, Magical, Fixed
//};
//
//int main()
//{
//	AttackType shortSword{ Phsycal };
//
//// #. shortSword 객체에 저장된 값( Phsycal )을 스위치 레이블과 매칭하여 알맞는 레이블 실행
//	switch (shortSword)
//	{
//	case Phsycal:
//		std::cout << "물리 데미지 3을 입혔다." << std::endl;
//		break;
//	case Magical:
//		std::cout << "마법 데미지 100을 입혔다." << std::endl;
//		break;
//	case Fixed:
//		std::cout << "고정 데미지 30을 입혔다." << std::endl;
//		break;
//	default:
//		std::cout << "빗나감!!!" << std::endl;
//		break;
//	}
//}

//#include <iostream>		// < Title : Color >
//
//// #. 원소 이름을 색깔로 지정하고 각 원소 안에 16진수 값을 배정한다.
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
//		std::cout << "흰색 칠을 한다." << std::endl;
//		break;
//	case Magenta:
//		std::cout << "갈색 칠을 한다." << std::endl;
//		break;
//	case Pink:
//		std::cout << "분혹색 칠을 한다." << std::endl;
//		break;
//	default:
//		std::cout << "회색 칠을 한다." << std::endl;
//		break;
//	}
//}

//#include <iostream>		// < Title : Flag >
//
//// #. 2진수로 Flag를 세울 수 있도록 값을 지정한다.
//enum QuestFlag
//{
//	None = 0,
//	Q1 = 1, Q2 = 2, Q3 = 4, Q4 = 8, Q5 = 16
//};
//
//int main()
//{	// #. 사용자의 퀘스트 클리어 상태를 확인하기 위해 변수를 선언한다.
//	int QuestComplete{ None };
//	// QuestComplete = 0000
//
//	// #. 사용자가 퀘스트 1을 클리어 했을 때 Q1을 배정한다.
//	QuestComplete = Q1;
//	// QuestComplete = 0000 | 0001 ( 0001 )
//
//// #. 사용자가 퀘스트 1을 클리어 한 이후 퀘스트 3을 클리어 하였음을 표현한다.
//	QuestComplete = QuestFlag(QuestComplete | Q3);
//	// QuestComplete = 0001 | 0100 ( 0101 )
//
//// #. 사용자가 퀘스트 1, 3을 클리어 한 이후 퀘스트 4를 클리어 하였음을 표현한다.
//	QuestComplete = QuestFlag(QuestComplete | Q4);
//	// QuestComplete = 0101 | 1000 ( 1101 )
//
//// #. 사용자가 퀘스틑 1과 3을 클리어 하였을 경우 이벤트를 발생시킨다.
//	if (QuestComplete & Q1 && QuestComplete & Q3)
//	{	// 1101 & 0001 && 1101 & 0100
//		std::cout << "둘 다 참이기 때문에..." << std::endl;
//	}
//}

/* --- < 구조체( Structure ) > --- */

/*
< 구조체 > : 다양한 type을 하나의 카테고리로 묶을 수 있다.
*/

//#include <iostream>		// < Title : default >
//
//// #. 서로 관련있는 정보를 하나의 형식처럼 묶을 수 있다.
//struct Status
//{
//	int HP; int MP; int POWER; int MAGIC;
//};
//int main()
//{
//	// #. warrior 이라는 이름의 객체는 Status 구조체의 모든 원소를 가지고 있다.
//	Status warrior{ 100,0,10,0 };
//
//	// #. 구조체 객체에 값을 대입하려면 '.'점을 찍어 멤버 변수에 접근 해야 한다.
//	warrior.HP = 999;
//	warrior.MP = 5;
//	warrior.POWER = 32;
//	warrior.MAGIC = 1;
//
//	// #. 배열 방식으로도 유니폼 초기화를 이용하여 대입이 가능하다.
//	warrior = { 100000,10,99,3 };
//}

//#include <iostream>		// < Title : memory >
//
//// RAM 메모리에 1Byte 전달하기 위한 구조체
//struct OneByte
//{
//	char mychar;
//};
//// RAM 메모리에 5Byte 전달하기 위한 구조체
//struct FiveByte
//{
//	// 기본적으로 메모리의 저장은 4Byte 단위로 저장됨
//	//  #. 때문에 char 로 1Byte를 저장할 경우 3Byte 의 빈 공간이 생기고
//	//	#. 이 뒤에 int 4Byte 가 저장 되어 빈 공간까지 합쳐서 8Byte가 저장된다.
//	char mychar;
//	int myint;
//};
//// 일시적으로 메모리의 저장 단위를 1Byte로 바꿀 수 있음
//#pragma pack(push,1)
//struct FiveByte2
//{
//	char mychar;
//	int myint;
//};
//// 바꾼 저장 단위를 원상태로 돌려 놓는다.
//#pragma pack(pop)
//int main()
//{
//	std::cout << sizeof(OneByte) << std::endl;
//	std::cout << sizeof(FiveByte) << std::endl;
//	std::cout << sizeof(FiveByte2) << std::endl;
//}

/* --- < 공용체( Union ) > --- */

/*
< 공용체 > : 내부의 멤버들이 동일한 메모리를 공유한다.
	#. 메모리를 절약하기 위한 방식이다.
*/

//#include <iostream>
//
//// 메모리를 절약하기 위해 공용체 내부의 멤버들이 메모리를 공유함
//union myUni
//{	// 유니온 내부 변수는 서로 다른 타입이 묶일 수 있다.
//	int i;
//	float f;
//	char c;
//};
//int main()
//{
//	// 공용체 type의 객체는 원소 중 가장 큰 크기의 type의 메모리 공간을 할당 받는다.
//	myUni u{};
//	// '.'점을 이용하여 멤버 변수 값을 대입
//	u.i = 98;
//	std::cout << u.f << ", " << u.f << ", " << u.c << std::endl;
//	std::cout << sizeof(myUni) << std::endl;
//}
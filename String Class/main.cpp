#include <iostream>
#include "String.h"

int main()
{
	// 1. 문자열 리터럴로 객체 생성
	String s1("test");
	std::cout << "1. 문자열 리터럴로 객체 생성 : " << s1 << std::endl;

	// 2. 지정한 길이만큼 생성
	String s2(10);

	String s3("case");

	// 3. 다른 문자열 객체를 복사
	String s4(s1);
	std::cout << "3. 다른 문자열 객체를 복사   : " << s4 << std::endl;


	/* ---------------------------------------------------- */

	std::cout << "-----------------------------------------" << std::endl;

	 // 1. 두 문자열을 이어 붙여서 새로운 문자열 생성
	String s5(s1 + s3);
	std::cout << "1. 두 문자열을 이어 붙여서 새로운 문자열 생성	          : " << s1 + s3 << std::endl;

	// 2. str2 문자열 값을 str1에 배정
	s1 = s3;
	std::cout << "2. str2 문자열 값을 str1에 배정				  : " << s1 << std::endl;

	// 3. str1에 str1 + str2 문자열을 배정
	s1 += s3;
	std::cout << "3. str1에 str1 + str2 문자열을 배정			  : " << s1 << std::endl;

	// 4. 배열 첨자 []를 통해 해당 문자 변경하기
	//String s5("hello");
	//s5[0] = 'a';
	//std::cout << s5 << std::endl;

	// 5. 배열 첨자 []를 이용하여 특정 문자 가져오기 (상수 표현)
	char c = s1[0];
	std::cout << "5. 배열 첨자 []를 이용하여 특정 문자 가져오기 (상수 표현) : " << c << std::endl;
}
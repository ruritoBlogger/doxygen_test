/**
 * @file main.cpp
 * @brief Doxygenはいいぞ。
 * @author るりと
 * @date 2019/12/22
 */

#include "test.h"
#include "iostream"

/**
 * @brief main関数
 */
int main()
{
    Test test = Test();
    test.setPrivateNumber( 3 );
    
    std::cout << "値を一つ入力しよう！ :";
    int num;
    std::cin >> num;

    if( test.activate( num ) ) std::cout << "testの値は" << num << "やよ〜" << std::endl;
    else std::cout << "testの値は" << num << "じゃないやよ〜" << std::endl;
}

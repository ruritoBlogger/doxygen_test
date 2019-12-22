/**
 * @file test.cpp
 * @brief Doxygenはいいぞ。
 * @author るりと
 * @date 2019/12/22
 */

#include "test.h"

/**
 * @brief 引数と当たりの数が同じかどうかを判断している関数
 * @param number 予想された数字
 * @return 引数が当たりと同じかどうか
 */
bool Test::activate( int number )
{
    return M_private_number == number;
}

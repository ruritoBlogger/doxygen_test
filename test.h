/**
 * @file test.h
 * @brief Doxygenはいいぞ。
 * @author るりと
 * @date 2019/12/22
 */

/**
 * @brief test用のクラス<br>
 *        数当てゲームのコード<br>
 */

class Test
{
    private:
        /** 正解の数字 */
        int M_private_number;

    public:
       
        /** コンストラクタ */
        Test()
        { };

        /**
         * @brief 正解の数字を確認するための関数
         * @return 正解の数字
         */
        int getPrivateNumber()
        {
            return M_private_number;
        }

        /**
         * @brief 正解の数字を設定するための関数
         * @param number 新しく設定する正解の数字
         */
        void setPrivateNumber( int number )
        {
            M_private_number = number;
        }

        bool activate( int number );
};


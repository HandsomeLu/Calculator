#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <QMainWindow>

namespace Ui {
        class calculator;
}

class calculator : public QMainWindow
{
        Q_OBJECT

public:
        explicit calculator(QWidget *parent = 0);
        ~calculator();

        private slots:
        void digitClicked();         //点击数字输出
		void equalClicked();		//点击等于号输出
        void lateradderOperatorClicked();   //点击后添加加减操作
        void latermulOperatorClicked();     //点击后添加乘除操作
        void pointClicked();          //点击后添加小数点操作
        void change();         //改变正负号
        void DELClicked();      //删除一位内容
        void clearALL();      //清零
        void unaryfunction();      //代数函数运算
        void Adsclicked();      //取绝对值运算
        void MCclicked();     //memory clean
        void MRclicked();    //memory read
        void Maddclicked();    //memory add
        void Msubclicked();     //memory subtraction
        //    void sinOperatorClicked();
        //    void arcsinOperatorClicked();
        //    void cosOperatorClicked();
        //    void arccosOperatorClicked();
        //    void tanOperatorClicked();
        //    void arctanOperatorClicked();
        //    void leftOperatorClicked();
        //    void rightOperatorClicked();
        //    void sqrtClicked();
        //    void squareClicked();
        //    void adderOperatorClicked();
        //    void multipliedOperatorClicked();
        //    void subtractionOperatorClicked();
        //   void divisionOperatorClicked();

private:
        Ui::calculator *ui;

        double getPi();   //返回pi值
        void abortOperation();    //报错函数
        bool Calculate(double rightOperand, const QString &pendingOperator);   //执行计算操作的函数

        double SumSoFar;    //加法累计
        double FactorSoFar;    //乘法累计
        double sumInMemory;   //存储变量
        const double pi = 3.14159265358979;

        QString pendingAdditiveOperator;   //加减类运算符
        QString pendingMultiplicativeOperator;  //乘除类运算符

        bool waitingForOperand;  //是否在等待输入下一个操作数

};

#endif // CALCULATOR_H

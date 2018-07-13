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
        void digitClicked();         //����������
		void equalClicked();		//������ں����
        void lateradderOperatorClicked();   //�������ӼӼ�����
        void latermulOperatorClicked();     //�������ӳ˳�����
        void pointClicked();          //��������С�������
        void change();         //�ı�������
        void DELClicked();      //ɾ��һλ����
        void clearALL();      //����
        void unaryfunction();      //������������
        void Adsclicked();      //ȡ����ֵ����
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

        double getPi();   //����piֵ
        void abortOperation();    //������
        bool Calculate(double rightOperand, const QString &pendingOperator);   //ִ�м�������ĺ���

        double SumSoFar;    //�ӷ��ۼ�
        double FactorSoFar;    //�˷��ۼ�
        double sumInMemory;   //�洢����
        const double pi = 3.14159265358979;

        QString pendingAdditiveOperator;   //�Ӽ��������
        QString pendingMultiplicativeOperator;  //�˳��������

        bool waitingForOperand;  //�Ƿ��ڵȴ�������һ��������

};

#endif // CALCULATOR_H

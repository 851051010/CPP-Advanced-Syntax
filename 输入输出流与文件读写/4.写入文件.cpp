#include <fstream>

using namespace std;

int main()
{
	// ʹ��Ĭ�Ϲ��캯���������������
	ofstream myOut;
	// ����open�������ļ���Ҳ����ָ���򿪷�ʽ
	myOut.open("D:\\test.txt");
	// д���ļ�
	// ʹ�ò����д
	myOut << "Hello,MmeSweet~" << endl;
	// ʹ��put����
	myOut.put('A').put('\n').put('B');
	// ʹ�� write ����
	char c1[] = "\n�����Ǹ������ӣ�";
	myOut.write(c1, strlen(c1));
	// �ر��ļ�
	myOut.close();
	
	// ʹ���вι��캯�����ڹ��캯����ָ���ļ�
	// ��������ʱָ���ļ����ļ������ڴ�״̬������Ҫ����open����
	// ����ios::app �ᱣ����ǰ�����ݣ�Ҳ���Բ���
	ofstream myOut1("D:\\test.txt",ios::app);  
	myOut1 << "TaoSweet~~" << endl;  //д��

	myOut1.close(); //�ر�


	return 0;
}
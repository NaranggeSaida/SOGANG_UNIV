class Str {
private:
    char* str; //string�� �� ����
    int len; //string�� �� ������ ����
public:
    Str(int leng); //string�� ũ�⸦ leng���� ������
    Str(char* neyong); //string�� ������ neyong���� ������
    ~Str(); //�Ҹ���
    int length(void); //string�� �� ������ ���̸� ��ȯ���ִ� �Լ�
    char* contents(void); //string�� �� ������ ��ȯ���ִ� �Լ�
    int compare(class Str& a); //a�� �ִ� ����� strcmp���ִ� �Լ�
    int compare(char* a); //a�� �ִ� ����� strcmp���ִ� �Լ�
    void operator=(char* a); //string�� ������ �������ִ� �Լ�
    void operator=(class Str& a); //Str�� ������ �������ִ� �Լ�
};
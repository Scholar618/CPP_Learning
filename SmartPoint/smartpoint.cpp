#include "smartpoint.h"
void test1() 
{
	smartptr<int> ptr1;
	smartptr<double> ptr2;
	smartptr<bool> ptr3;
}

int main()
{
	// test1();
	
	{
	// std::unique_ptr<Entity> entity = new Entity(); // ����
	// std::unique_ptr<Entity> entity(new Entity()); // ��ָͨ��ʹ�÷���
		std::unique_ptr<Entity> entity = std::make_unique<Entity>(); // ���ʹ������
	// std::unique_ptr<Entity> e0 = entity; // ����

		std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
		std::weak_ptr<Entity> e0 = sharedEntity; // �������Ӽ�����
		entity->Print();
	}


	return 0;
}
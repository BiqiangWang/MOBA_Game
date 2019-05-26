#include "UnitManager.h"

UnitManager * UnitManager::m_manager = NULL;

//�ڹ��캯���ĳ�ʼ���б��г�ʼ������
UnitManager::UnitManager() : m_unitVector() { }

UnitManager * UnitManager::getInstance() {
	if (m_manager == NULL) {
		m_manager = new UnitManager();
	}
	return m_manager;
}

void UnitManager::freeInstance(void) {
	if (m_manager != NULL) {
		delete m_manager;
		m_manager = NULL;
	}
}
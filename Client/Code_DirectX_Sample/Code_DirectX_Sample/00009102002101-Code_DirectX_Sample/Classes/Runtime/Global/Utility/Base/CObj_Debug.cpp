#include "CObj_Debug.h"
#include "../Mesh/CMesh.h"
#include "../Material/CMat.h"

CObj_Debug::CObj_Debug(const std::string& a_rPath_Effect)
	:
	CObj_Render(a_rPath_Effect)
{
	// Do Something
}

void CObj_Debug::Init(void)
{
	CObj_Render::Init();
	m_pMesh = this->CreateMesh(this->GetMat()->GetPath_Effect());

	this->AddChild(m_pMesh);
}

CMesh* CObj_Debug::CreateMesh(const std::string& a_rPath_Effect)
{
	return nullptr;
}

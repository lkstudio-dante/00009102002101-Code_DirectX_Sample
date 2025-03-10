#pragma once

#include "../../Define/KCDefine+DirectX_Abs.h"
#include "../Base/CObj.h"

/**
* 재질
*/
class CMat : public CObj
{
public:			// public 함수

	/** 생성자 */
	CMat(const std::string& a_rPath_Effect);

	/** 패스를 순회한다 */
	void EnumeratePasses(int a_nIdx_Technique, 
		const std::function<void(ID3D10EffectPass*)>& a_rCallback);

	/** 이펙트 경로 프로퍼티 */
	GETTER_PROPERTY_WITH_INIT(std::string, Path_Effect, m_oPath_Effect, "");

	/** 이펙트 프로퍼티 */
	GETTER_PROPERTY_WITH_INIT(ID3D10Effect*, Effect, m_pEffect, nullptr);

	/** 입력 레이아웃 프로퍼티 */
	GETTER_PROPERTY_WITH_INIT(ID3D10InputLayout*, InputLayout, m_pInputLayout, nullptr);

public:			// public 접근 함수

	/** 색상을 변경한다 */
	void SetColor(const std::string& a_rKey, const D3DXCOLOR& a_rstColor);

	/** 벡터를 변경한다 */
	void SetVec(const std::string& a_rKey, const D3DXVECTOR4& a_rstVec);

	/** 행렬을 변경한다 */
	void SetMatrix(const std::string& a_rKey, const D3DXMATRIXA16& a_rstMatrix);

	/** 쉐이더 리소스 뷰를 변경한다 */
	void SetView_SR(const std::string& a_rKey, ID3D10ShaderResourceView* a_pView_SR);
};

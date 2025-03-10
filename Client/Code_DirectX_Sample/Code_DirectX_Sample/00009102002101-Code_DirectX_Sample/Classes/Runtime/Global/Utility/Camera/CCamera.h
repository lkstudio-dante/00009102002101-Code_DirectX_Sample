#pragma once

#include "../../Define/KCDefine+DirectX_Abs.h"
#include "../Base/CObj_D3D.h"

/**
* 카메라
*/
class CCamera : public CObj_D3D
{
public:			// public 함수

	/** 생성자 */
	CCamera(void);

	/** FOV 프로퍼티 */
	GETTER_SETTER_PROPERTY_WITH_INIT(float, FOV, m_fFOV, 0.0f);

	/** 근 평면 프로퍼티 */
	GETTER_SETTER_PROPERTY_WITH_INIT(float, Plane_Near, m_fPlane_Near, 0.1f);

	/** 원 평면 프로퍼티 */
	GETTER_SETTER_PROPERTY_WITH_INIT(float, Plane_Far, m_fPlane_Far, 25000.0f);

	/** 뷰포트 프로퍼티 */
	GETTER_SETTER_PROPERTY(D3D10_VIEWPORT, Viewport, m_stViewport);

public:			// public 접근 함수

	/** 거리를 반환한다 */
	float GetDistance(void) const;

	/** 뷰 행렬을 반환한다 */
	virtual D3DXMATRIXA16 GetMatrix_View(void) const;

	/** 투영 행렬을 반환한다 */
	virtual D3DXMATRIXA16 GetMatrix_Projection(void) const;
};

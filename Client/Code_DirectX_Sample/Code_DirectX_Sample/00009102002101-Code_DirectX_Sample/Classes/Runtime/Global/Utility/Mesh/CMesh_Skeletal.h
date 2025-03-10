#pragma once

#include "../../Define/KCDefine+DirectX_Abs.h"
#include "../Base/CObj_Render.h"

/**
* 스켈레톤 메쉬
*/
class CMesh_Skeletal : public CObj_Render
{
public:			// public 함수

	/** 생성자 */
	CMesh_Skeletal(const std::string& a_rPath_Mesh, 
		const std::string& a_rPath_Effect);

	/** 생성자 */
	CMesh_Skeletal(const STInfo_SkeletalMesh& a_rstInfo_SkeletalMesh, 
		const std::string& a_rPath_Effect);

	/** 스켈레톤 메쉬 정보 프로퍼티 */
	GETTER_PROPERTY(STInfo_SkeletalMesh, Info_SkeletalMesh, m_stInfo_SkeletalMesh);

protected:			// protected 함수

	/** 상태를 갱신한다 */
	virtual void Update(float a_fTime_Delta) override;

	/** 객체를 그린다 */
	virtual void Render(ID3D10Device* a_pDevice, ID3D10EffectPass* a_pPass) override;

private:			// private 함수

	/** 본 상태를 갱신한다 */
	void OnUpdateState_Bone(LPD3DXFRAME a_pstXFrame, 
		const D3DXMATRIXA16& a_rstMatrix_Parent);

	/** 메쉬 컨테이너를 그린다 */
	void OnRender_MeshContainer(ID3D10Device* a_pDevice,
		ID3D10EffectPass* a_pPass, LPD3DXMESHCONTAINER a_pstMeshContainer);
};

#pragma once
#include "Component.h"

enum class PROJECTION_TYPE
{
	PERSPECTIVE,			// ���� ����
	ORTHOGRAPHIC,		// ���� ���� - ���ٹ� x 
};

class Camera : public Component
{
public:
	Camera();
	virtual	~Camera();

	virtual void	FinalUpdate() override;
	void			Render();

private:
	PROJECTION_TYPE _type = PROJECTION_TYPE::PERSPECTIVE;

	float _near = 1.f;
	float _far = 1000.f;
	float _fov = XM_PI / 4.f;
	float _scale = 1.f;

	Matrix _matView = {};			// View ���
	Matrix _matProjection = {};		// Projection ���

public:
	// �ӽ� ����
	static Matrix S_MatView;
	static Matrix S_MatProjection;
};

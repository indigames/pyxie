///////////////////////////////////////////////////////////////
//Pyxie game engine
//
//  Copyright Kiharu Shishikura 2019. All rights reserved.
///////////////////////////////////////////////////////////////
#pragma once

#include "pyxieUtilities.h"
#include "pyxieDrawable.h"
#include "pyxieFigurestruct.h"

namespace pyxie
{
	class pyxieFigure;
	class PYXIE_EXPORT pyxieCamera : public pyxieDrawable
	{
	public:
		enum Mode
		{
			Mode_FlyThru,	// Camera moves through the world
			Mode_LookAt,	// Camera looks at a single point
		};

	private:
		pyxieFigure*	parent;
		FigureCamera*	figureCamera;

		Mode		mMode;				// Camera mode
		float		mPan;				// Mode_FlyThru���[�h�̎��̂x����]
		float		mTilt;				// Mode_FlyThru���[�h�̎��̂w����]
		float		mDist;				// Mode_LookAt���[�h�̎��̃^�[�Q�b�g����̋���
		Vec3		mTarget;			// Mode_LookAt���[�h�̃^�[�Q�b�g���W

		Vec2		screenScale;
		Vec2		screenOffset;
		float		screenRadian;

	public:
		pyxieCamera(const char* name);
		pyxieCamera(pyxieFigure* figure, FigureCamera* figureCam);
		pyxieCamera(pyxieCamera* org);
		~pyxieCamera();

		void Clone(bool afterFinishBuild);
		void Build() {}
		void Initialize() {}
		RESOURCETYPE ResourceType() { return CAMERATYPE; }

		//����p
		inline float GetFieldOfView() const { return figureCamera->fov; }
		inline void SetFieldOfView(float val) { figureCamera->fov = val; }

		//�A�X�y�N�g��
		float GetAspectRate();
		void SetAspectRate(float val);

		//���s���e�J�����̃T�C�Y
		//VirtualScreenWidth/2�̃T�C�Y�Ńt���X�N���[���J�����ɂȂ�
		inline float GetOrthoWidth() const { return figureCamera->magX; }
		inline void SetOrthoWidth(float val) { figureCamera->magX = val; }

		//�j�A�N���b�v�v���[��
		inline float GetNearPlane() const { return figureCamera->nearclip; }
		inline void SetNearPlane(float val) { figureCamera->nearclip = val; }

		//�t�@�[�N���b�v�v���[��
		inline float GetFarPlane() const { return figureCamera->farclip; }
		inline void SetFarPlane(float val) { figureCamera->farclip = val; }

		//�J�������[�h
		inline Mode GetMode() const { return mMode; }
		inline void SetMode(Mode mode) { mMode = mode; }

		//�x����]
		void SetPan(float pan);
		float GetPan() const;

		//�w����]
		void SetTilt(float tilt);
		float GetTilt() const;

		//�^�[�Q�b�g����̋���(Mode_LookAt���[�h�p)
		inline void SetDistance(float dist) { mDist = dist; }
		inline float GetDistance() const { return mDist; }

		//�^�[�Q�b�g���W(Mode_LookAt���[�h�p)
		inline void SetTarget(const Vec3 &tar) { mTarget = tar; }
		inline Vec3 GetTarget() const { return mTarget; }

		/**@brief �^�[�Q�b�g�𒆐S�ɂ��ăJ��������]����(Mode_LookAt���[�h�p)
		 * @param speed::x x������̉�]���x(�P��radian)
		 * @param speed::y y������̉�]���x
		 * @param speed::z z������̉�]���x  */
		void RotateAroundTarget(const Vec3 &speed);

		//���s���e�J����
		inline void SetOrthographicProjection(bool enable) { figureCamera->isOrtho = (uint32_t)enable; }
		inline bool IsOrthographicProjection() { return (bool)figureCamera->isOrtho; }

		void	Step(float elapsedTime);

		//�J������L���ɂ���
		void	Render();

		//�e�p�J����
		void	RenderShadowView(pyxieCamera* viewCam);

		//�v���W�F�N�V�����s����v�Z���ĕԂ�
		Mat4& GetProjectionMatrix(Mat4& out);

		//�t�r���[�s����v�Z���ĕԂ��i�r���[�s�񂪕K�v�Ȃ�inverse()�Łj
		Mat4& GetViewInverseMatrix(Mat4& out) const;

		//�X�N���[���}�g���b�N�X���v�Z���ĕԂ�
		Mat4& GetScreenMatrix(Mat4& out);

		void	SetScreenScale(Vec2& v) { screenScale = v; }
		void	SetScreenOffset(Vec2& v) { screenOffset = v; }
		void	SetScreenRadian(float r) { screenRadian = r; }
		const Vec2&	GetScreenScale() const { return screenScale; }
		const Vec2&	GetScreenOffset() const { return screenOffset; }
		float	GetScreenRadian() const { return screenRadian; }
	};

}
#pragma once

#include <nusys.h>

#include "math.hpp"
#include "dynlist.hpp"
#include "pad.hpp"

// -------------------------------------------------------------------------- //

class TCamera
{
    public:

    TCamera(TDynList2 * list);
    ~TCamera() = default;

    void render();
    void setPad(TPad * pad) {mPad = pad;}
    void setTarget(const TVec3<f32> * target) {mTarget = target;}
    void setPosition(const TVec3<f32> & target) { mPosition.set(target.x(), target.y(), target.z()); }
    void setMode(bool mode) {mExternallyControlled = mode;}

    void setAngle(u16 angle) {mAngle = angle;}
    u16 const & getAngle() {return mAngle;}

    float getFOV() {return mFov;}
    void setFOV(float fovy) {mFov = fovy;}

    void jumpToTarget();

    Mtx mProjectionMtx{};
    Mtx mFViewMtx{};
    Mtx mIdentityMtx{};

    Mtx mBgProjMtx{};
    Mtx mViewBgMtx{};

    LookAt mLookAtMtx[2];
    Hilite mHilite[2];

    float mFov{44.0f};
    TDynList2 * mDynList{nullptr};

    static bool checkVisible(const TVec3F & pos);

    private:

    static TCamera * sCamera;
    TVec3F mForward;

    TVec3<f32> mPosition{};
    TVec3<f32> mRotation{};
    TVec3<f32> mScale{};
    
    TMtx44 mPosMtx{};
    TMtx44 mRotMtx{};
    TMtx44 mScaleMtx{};

    Mtx mFPosMtx{};
    Mtx mFRotMtx{};
    Mtx mFScaleMtx{};

    const TVec3<f32> * mTarget{};

    TMtx44 mViewMtx{};
    TVec3<f32> mOldPos{};

    TPad * mPad{nullptr};
    u16 mPersp{0};
    u16 mAngle{0};
    f32 mDistance{0.0f};

    bool mExternallyControlled;
};

// -------------------------------------------------------------------------- //
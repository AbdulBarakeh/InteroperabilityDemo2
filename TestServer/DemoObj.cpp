// DemoObj.cpp : Implementation of CDemoObj

#include "pch.h"
#include "DemoObj.h"


// CDemoObj



extern "C" STDMETHODIMP CDemoObj::Add(LONG arg1, LONG arg2, LONG* result)
{
    // TODO: Add your implementation code here
    *result = arg1 + arg2;
    return S_OK;
}


extern "C" STDMETHODIMP CDemoObj::Sub(LONG arg1, LONG arg2, LONG* result)
{
    // TODO: Add your implementation code here
    *result = arg1 - arg2;
    return S_OK;
}



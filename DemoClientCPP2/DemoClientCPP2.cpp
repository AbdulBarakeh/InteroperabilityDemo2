// DemoClientCPP2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include "stdafx.h"
#include "COMerrorUtility.h"						// Help filen for COM errors
#include "..\TestServer\TestServer_i.h"  		// Define the interface
#include "..\TestServer\TestServer_i.c"		// Define the GUIDs

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	// Declare HRESULT and a pointer to the ATLCalculator interface
	HRESULT		hr;
	IDemoObj* pIDemoObj;
	long		ReturnValue;

	// Intilize COM
	hr = CoInitialize(0);

	// Use the SUCCEEDED macro and see if we can get a pointer 
	// to the interface
	if (SUCCEEDED(hr))
	{
		hr = CoCreateInstance(CLSID_DemoObj, NULL, CLSCTX_INPROC_SERVER,
			IID_IDemoObj, (void**)&pIDemoObj);
		//		LIBID_KPUCalcServerLib, (void**) &pICalculator);  // To provoke an error uncomment this line 

				// If succeeded then call the Add method, if it fails
				// then display an appropriate message to the user.
		if (SUCCEEDED(hr))
		{
			hr = pIDemoObj->Add(2, 3, &ReturnValue);
			cout << "The answer for 2 + 3 is: " << ReturnValue << endl;
		}
		else
		{
			ShowErrorMessage(hr);
		}

		// If succeeded then call the Add method again, this time with an offset on, if it fails
		// then display an appropriate message to the user.
		if (SUCCEEDED(hr))
		{
			hr = pIDemoObj->Add(2, 3, &ReturnValue);
			cout << "The answer for 2 + 3 is: " << ReturnValue << endl;
		}
		else
		{
			ShowErrorMessage(hr);
		}

		// If succeeded then call the Sub method, if it fails
		// then display an appropriate message to the user.
		if (SUCCEEDED(hr))
		{
			hr = pIDemoObj->Sub(3, 2, &ReturnValue);
			cout << "The answer for 3 - 2 is: " << ReturnValue << endl;
		}
		else
		{
			ShowErrorMessage(hr);
		}

		// If succeeded then call the Sub method again, this time with an offset on, if it fails
		// then display an appropriate message to the user.
		if (SUCCEEDED(hr))
		{
			hr = pIDemoObj->Sub(3, 2, &ReturnValue);
			cout << "The answer for 3 - 2 is: " << ReturnValue << endl;
			string dummy;
			getline(cin, dummy);
		}
		else
		{
			ShowErrorMessage(hr);
		}

		// Release the interface
		if (pIDemoObj != NULL)
			hr = pIDemoObj->Release();
	}
	else
	{
		ShowErrorMessage(hr);
	}
	// Uninitialize COM
	CoUninitialize();

	return 0;
}


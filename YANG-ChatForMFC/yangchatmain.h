﻿#pragma once
#include "afxdialogex.h"


// yangchatmain 对话框

class yangchatmain : public CDialogEx
{
	DECLARE_DYNAMIC(yangchatmain)

public:
	yangchatmain(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~yangchatmain();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CString UTF8ToUnicode25(char* UTF8);
};

#pragma once
#include "afxdialogex.h"


// TEXT_LXB 对话框

class TEXT_LXB : public CDialogEx
{
	DECLARE_DYNAMIC(TEXT_LXB)

public:
	TEXT_LXB(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~TEXT_LXB();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_LXB };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};

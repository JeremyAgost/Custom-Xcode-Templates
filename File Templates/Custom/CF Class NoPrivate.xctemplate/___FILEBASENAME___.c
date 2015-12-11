//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#include "___FILEBASENAME___.h"
#include "CFRuntime.h"	// Private CoreFoundation header that you will have to provide

struct ___VARIABLE_productName___Class {

	CFRuntimeBase base;

	/*
	 * Private members go here.
	 */

};

static const CFRuntimeClass _k___VARIABLE_productName___Class;

static void
_Init(CFTypeRef cf)
{
	/*
	 * Custom init routine goes here.
	 */
}

static CFStringRef
_CopyFormattingDesc(CFTypeRef cf, CFDictionaryRef formatOpts)
{
	___VARIABLE_productName___Ref obj = (___VARIABLE_productName___Ref)cf;
	return CFStringCreateWithFormat(kCFAllocatorDefault, formatOpts,
									CFSTR("<%s %p>"), _k___VARIABLE_productName___Class.className, obj);
}

static CFStringRef
_CopyDebugDesc(CFTypeRef cf)
{
	return _CopyFormattingDesc(cf, NULL);
}

static void
_Finalize(CFTypeRef cf)
{
	___VARIABLE_productName___Ref obj = (___VARIABLE_productName___Ref)cf;
	/*
	 * Release owned members here.
	 */
}

static CFTypeID
_k___VARIABLE_productName___TypeID = _kCFRuntimeNotATypeID;

static const CFRuntimeClass
_k___VARIABLE_productName___Class = {
	.version = 0,
	.className = "___VARIABLE_productName___",
	.init = _Init,
	.copy = NULL,
	.finalize = _Finalize,
	.equal = NULL,
	.hash = NULL,
	.copyFormattingDesc = _CopyFormattingDesc,
	.copyDebugDesc = _CopyDebugDesc,
	.reclaim = NULL,
};

void
____VARIABLE_productName___ClassInitialize(void)
{
	_k___VARIABLE_productName___TypeID = _CFRuntimeRegisterClass(&_k___VARIABLE_productName___Class);
	assert(_k___VARIABLE_productName___TypeID != _kCFRuntimeNotATypeID);
}

struct ___VARIABLE_productName___Class *
____VARIABLE_productName___CreateEmpty(void)
{
	CFIndex extraSize = sizeof(struct ___VARIABLE_productName___Class) - sizeof(CFRuntimeBase);
	struct ___VARIABLE_productName___Class * instance = (struct ___VARIABLE_productName___Class *)_CFRuntimeCreateInstance(kCFAllocatorDefault, _k___VARIABLE_productName___TypeID, extraSize, NULL);
	return instance;
}

CFTypeID
___VARIABLE_productName___GetTypeID(void)
{
	return _k___VARIABLE_productName___TypeID;
}

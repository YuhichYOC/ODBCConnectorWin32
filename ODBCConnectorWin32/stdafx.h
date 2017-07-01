// stdafx.h : 標準のシステム インクルード ファイルのインクルード ファイル、または
// 参照回数が多く、かつあまり変更されない、プロジェクト専用のインクルード ファイル
// を記述します。
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

// TODO: プログラムに必要な追加ヘッダーをここで参照してください

#include <codecvt>
#include <iostream>
#include <locale>
#include <memory>
#include <string>

#include <Windows.h>

#include <Shlwapi.h>
#pragma comment (lib, "shlwapi.lib")

#include <sql.h>
#include <sqlext.h>
#pragma comment (lib, "odbc32.lib")

using namespace std;
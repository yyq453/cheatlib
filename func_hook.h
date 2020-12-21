/*
    function hook moudle header
    Copyright (C) 2020  iTruth

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301
    USA
*/

#ifndef FUNC_HOOK_H
#define FUNC_HOOK_H

#include <windows.h>

#include "cheatlib.h"

PFuncHookInfo FuncHook(LPVOID pOrigAddr, LPVOID pHookFuncAddr);
void FuncUnhook(PFuncHookInfo ptInfo);

#endif


/**
########################################################################
#
# Copyright (c) 2025 xx.com, Inc. All Rights Reserved
#
########################################################################
# Author : xuechengyun
# E-mail : xuechengyun@gmail.com
# Date   : 2025/05/16 13:14:54
# Desc   :
########################################################################
*/
#pragma once

#define EXPAND(...) __VA_ARGS__

#define HAS_PAREN(x) CHECK_HAS_PAREN(HAS_PAREN_PROBE x)
#define HAS_PAREN_PROBE(...)
#define NOT_0 1
#define NOT_01 0
#define CHECK_HAS_PAREN(...) NOT_0##__VA_OPT__(1)

#define IIF(c) IIF_IMPL(c)
#define IIF_IMPL(c) IIF_ ## c
#define IIF_0(t, f) f
#define IIF_1(t, f) t

#define UNWRAP_PAREN(arg) IIF(HAS_PAREN(arg))(EXPAND arg, arg)

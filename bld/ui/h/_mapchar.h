/****************************************************************************
*
*                            Open Watcom Project
*
* Copyright (c) 2002-2020 The Open Watcom Contributors. All Rights Reserved.
*    Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
*
*  ========================================================================
*
*    This file contains Original Code and/or Modifications of Original
*    Code as defined in and that are subject to the Sybase Open Watcom
*    Public License version 1.0 (the 'License'). You may not use this file
*    except in compliance with the License. BY USING THIS FILE YOU AGREE TO
*    ALL TERMS AND CONDITIONS OF THE LICENSE. A copy of the License is
*    provided with the Original Code and Modifications, and is also
*    available at www.sybase.com/developer/opensource.
*
*    The Original Code and all software distributed under the License are
*    distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
*    EXPRESS OR IMPLIED, AND SYBASE AND ALL CONTRIBUTORS HEREBY DISCLAIM
*    ALL SUCH WARRANTIES, INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF
*    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR
*    NON-INFRINGEMENT. Please see the License for the specific language
*    governing rights and limitations under the License.
*
*  ========================================================================
*
* Description:  pick file with UI special characters id mapping data definition
*
****************************************************************************/


/*    enum                  linux           others          dbcs    charmap datamap */
pick( UI_RADIO_LEFT,        '(',            '(',            '(',    0xC6,   0x00,0x00,0x01,0x02,0x02,0x04,0x04,0x04, 0x04,0x02,0x02,0x01,0x00,0x00,0x00,0x00 )
pick( UI_RADIO_RIGHT,       ')',            ')',            ')',    0xEA,   0x00,0x00,0x00,0x80,0x80,0x40,0x40,0x40, 0x40,0x80,0x80,0x00,0x00,0x00,0x00,0x00 )
pick( UI_RADIO_FULL,        '*',            '*',            '*',    0xC7,   0x00,0xfe,0x01,0x00,0x7c,0xfe,0xfe,0xfe, 0xfe,0x7c,0x00,0x01,0xfe,0x00,0x00,0x00 )
pick( UI_RADIO_EMPTY,       ' ',            ' ',            ' ',    0xD0,   0x00,0xfe,0x01,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x01,0xfe,0x00,0x00,0x00 )
pick( UI_CHECKBOX_LEFT,     '[',            '[',            '[',    0xD1,   0x00,0x07,0x04,0x04,0x04,0x04,0x04,0x04, 0x04,0x04,0x04,0x04,0x07,0x00,0x00,0x00 )
pick( UI_CHECKBOX_RIGHT,    ']',            ']',            ']',    0xEB,   0x00,0xc0,0x40,0x40,0x40,0x40,0x40,0x40, 0x40,0x40,0x40,0x40,0xc0,0x00,0x00,0x00 )
pick( UI_CHECKBOX_FULL,     'X',            'X',            'X',    0xD2,   0x00,0xff,0x00,0xc6,0xee,0x7c,0x38,0x38, 0x7c,0xee,0xc6,0x00,0xff,0x00,0x00,0x00 )
pick( UI_CHECKBOX_EMPTY,    ' ',            ' ',            ' ',    0xD3,   0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0xff,0x00,0x00,0x00 )
pick( UI_BOX_TOP_LEFT,      UI_ULCORNER,    '\xc9',         '\x01', 0xD4,   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 )
pick( UI_BOX_TOP_RIGHT,     UI_URCORNER,    '\xbb',         '\x02', 0xCB,   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 )
pick( UI_BOX_BOTTOM_RIGHT,  UI_LRCORNER,    '\xbc',         '\x04', 0xCA,   0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0, 0xf0,0xf0,0xf0,0x00,0x00,0x00,0x00,0x00 )
pick( UI_BOX_BOTTOM_LEFT,   UI_LLCORNER,    '\xc8',         '\x03', 0xDE,   0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07, 0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00 )
pick( UI_BOX_TOP_LINE,      UI_DHLINE,      '\xcd',         '\x06', 0xCC,   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 )
pick( UI_BOX_RIGHT_LINE,    UI_DVLINE,      '\xba',         '\x05', 0xBA,   0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0, 0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0,0xf0 )
pick( UI_BOX_BOTTOM_LINE,   UI_DHLINE,      '\xcd',         '\x06', 0xCE,   0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff, 0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00 )
pick( UI_BOX_LEFT_LINE,     UI_DVLINE,      '\xba',         '\x05', 0xCF,   0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07, 0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07 )
pick( UI_SHADOW_BOTTOM,     UI_UBLOCK,      '\xdf',         ' ',    0xDF,   0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 )
pick( UI_SHADOW_B_LEFT,     ' ',            ' ',            ' ',    0xDC,   0x3f,0x3f,0x3f,0x3f,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 )
pick( UI_SHADOW_RIGHT,      UI_DBLOCK,      '\xdc',         ' ',    0xFD,   0x00,0x00,0x00,0xe0,0xe0,0xe0,0xe0,0xe0, 0xe0,0xe0,0xe0,0xe0,0xe0,0xe0,0xe0,0xe0 )
pick( UI_SHADOW_B_RIGHT,    UI_UBLOCK,      '\xdf',         ' ',    0xF5,   0xe0,0xe0,0xe0,0xe0,0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 )
#ifndef MAPCHARS
pick( UI_SBOX_TOP_LEFT,     UI_ULCORNER,    '\xda',         '\x01', ,       , , , , , , , , , , , , , , , )
pick( UI_SBOX_TOP_RIGHT,    UI_URCORNER,    '\xbf',         '\x02', ,       , , , , , , , , , , , , , , , )
pick( UI_SBOX_BOTTOM_RIGHT, UI_LRCORNER,    '\xd9',         '\x04', ,       , , , , , , , , , , , , , , , )
pick( UI_SBOX_BOTTOM_LEFT,  UI_LLCORNER,    '\xc0',         '\x03', ,       , , , , , , , , , , , , , , , )
pick( UI_SBOX_TOP_LINE,     UI_HLINE,       '\xc4',         '\x06', ,       , , , , , , , , , , , , , , , )
pick( UI_SBOX_RIGHT_LINE,   UI_VLINE,       '\xb3',         '\x05', ,       , , , , , , , , , , , , , , , )
pick( UI_SBOX_BOTTOM_LINE,  UI_HLINE,       '\xc4',         '\x06', ,       , , , , , , , , , , , , , , , )
pick( UI_SBOX_LEFT_LINE,    UI_VLINE,       '\xb3',         '\x05', ,       , , , , , , , , , , , , , , , )
pick( UI_SBOX_LEFT_TACK,    UI_LTEE,        '\xc3',         '\x19', ,       , , , , , , , , , , , , , , , )
pick( UI_SBOX_RIGHT_TACK,   UI_RTEE,        '\xb4',         '\x17', ,       , , , , , , , , , , , , , , , )
pick( UI_SBOX_HORIZ_LINE,   UI_HLINE,       '\xc4',         '\x06', ,       , , , , , , , , , , , , , , , )
pick( UI_ARROW_DOWN,        UI_DARROW,      PC_arrowdown,   '\x07', ,       , , , , , , , , , , , , , , , )
pick( UI_POPUP_MARK,        UI_RPOINT,      PC_triangright, '>',    ,       , , , , , , , , , , , , , , , )
pick( UI_CHECK_MARK,        UI_ROOT,        (char)(unsigned char)PC_radical, 'X',  ,       , , , , , , , , , , , , , , , )
#endif

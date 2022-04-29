/* Copyright (c) 2014-2015, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*---------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = "1.0"
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_NT35521_WXGA_VIDEO_H_
#define _PANEL_NT35521_WXGA_VIDEO_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/
static struct panel_config nt35521_wxga_video_panel_data = {
	"qcom,mdss_dsi_nt35521_wxga_video", "dsi:0:", "qcom,mdss-dsi-panel",
	10, 0, "DISPLAY_1", 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, NULL
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution nt35521_wxga_video_panel_res = {
	800, 1280, 44, 55, 11, 0, 14, 15, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel color information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info nt35521_wxga_video_color = {
	24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel on/off command information                                          */
/*---------------------------------------------------------------------------*/
static char nt35521_wxga_video_on_cmd0[] = {
	0x05, 0x00, 0x29, 0xC0,
	0xFF, 0xAA, 0x55, 0xA5,
	0x80, 0xFF, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd1[] = {
	0x03, 0x00, 0x29, 0xC0,
	0x6F, 0x11, 0x00, 0xFF,
};

static char nt35521_wxga_video_on_cmd2[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xF7, 0x20, 0x00, 0xFF,
};

static char nt35521_wxga_video_on_cmd3[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x6F, 0x06, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd4[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xF7, 0xA0, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd5[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x6F, 0x19, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd6[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xF7, 0x12, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd7[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x6F, 0x08, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd8[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xFA, 0x40, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd9[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x6F, 0x11, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd10[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xF3, 0x01, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd11[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xF0, 0x55, 0xAA, 0x52,
	0x08, 0x00, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd12[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xC8, 0x80, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd13[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB1, 0x6C, 0x01, 0xFF,
};

static char nt35521_wxga_video_on_cmd14[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xB6, 0x08, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd15[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x6F, 0x02, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd16[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xB8, 0x08, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd17[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xBB, 0x74, 0x44, 0xFF,
};

static char nt35521_wxga_video_on_cmd18[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xBC, 0x00, 0x00, 0xFF,
};

static char nt35521_wxga_video_on_cmd19[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xBD, 0x02, 0xB0, 0x0C,
	0x0A, 0x00, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd20[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xF0, 0x55, 0xAA, 0x52,
	0x08, 0x01, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd21[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB0, 0x05, 0x05, 0xFF,
};

static char nt35521_wxga_video_on_cmd22[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB1, 0x05, 0x05, 0xFF,
};

static char nt35521_wxga_video_on_cmd23[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xBC, 0x90, 0x01, 0xFF,
};

static char nt35521_wxga_video_on_cmd24[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xBD, 0x90, 0x01, 0xFF,
};

static char nt35521_wxga_video_on_cmd25[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xCA, 0x00, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd26[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xC0, 0x04, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd27[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xB2, 0x00, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd28[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xBE, 0x29, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd29[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB3, 0x37, 0x37, 0xFF,
};

static char nt35521_wxga_video_on_cmd30[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB4, 0x19, 0x19, 0xFF,
};

static char nt35521_wxga_video_on_cmd31[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB9, 0x44, 0x44, 0xFF,
};

static char nt35521_wxga_video_on_cmd32[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xBA, 0x24, 0x24, 0xFF,
};

static char nt35521_wxga_video_on_cmd33[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xF0, 0x55, 0xAA, 0x52,
	0x08, 0x02, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd34[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xEE, 0x01, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd35[] = {
	0x05, 0x00, 0x29, 0xC0,
	0xEF, 0x09, 0x06, 0x15,
	0x18, 0xFF, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd36[] = {
	0x07, 0x00, 0x29, 0xC0,
	0xB0, 0x00, 0x00, 0x00,
	0x25, 0x00, 0x43, 0xFF,
};

static char nt35521_wxga_video_on_cmd37[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x6F, 0x06, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd38[] = {
	0x07, 0x00, 0x29, 0xC0,
	0xB0, 0x00, 0x54, 0x00,
	0x68, 0x00, 0xA0, 0xFF,
};

static char nt35521_wxga_video_on_cmd39[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x6F, 0x0C, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd40[] = {
	0x05, 0x00, 0x29, 0xC0,
	0xB0, 0x00, 0xC0, 0x01,
	0x00, 0xFF, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd41[] = {
	0x07, 0x00, 0x29, 0xC0,
	0xB1, 0x01, 0x30, 0x01,
	0x78, 0x01, 0xAE, 0xFF,
};

static char nt35521_wxga_video_on_cmd42[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x6F, 0x06, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd43[] = {
	0x07, 0x00, 0x29, 0xC0,
	0xB1, 0x02, 0x08, 0x02,
	0x52, 0x02, 0x54, 0xFF,
};

static char nt35521_wxga_video_on_cmd44[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x6F, 0x0C, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd45[] = {
	0x05, 0x00, 0x29, 0xC0,
	0xB1, 0x02, 0x99, 0x02,
	0xF0, 0xFF, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd46[] = {
	0x07, 0x00, 0x29, 0xC0,
	0xB2, 0x03, 0x20, 0x03,
	0x56, 0x03, 0x76, 0xFF,
};

static char nt35521_wxga_video_on_cmd47[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x6F, 0x06, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd48[] = {
	0x07, 0x00, 0x29, 0xC0,
	0xB2, 0x03, 0x93, 0x03,
	0xA4, 0x03, 0xB9, 0xFF,
};

static char nt35521_wxga_video_on_cmd49[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x6F, 0x0C, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd50[] = {
	0x05, 0x00, 0x29, 0xC0,
	0xB2, 0x03, 0xC9, 0x03,
	0xE3, 0xFF, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd51[] = {
	0x05, 0x00, 0x29, 0xC0,
	0xB3, 0x03, 0xFC, 0x03,
	0xFF, 0xFF, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd52[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xF0, 0x55, 0xAA, 0x52,
	0x08, 0x06, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd53[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB0, 0x00, 0x10, 0xFF,
};

static char nt35521_wxga_video_on_cmd54[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB1, 0x12, 0x14, 0xFF,
};

static char nt35521_wxga_video_on_cmd55[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB2, 0x16, 0x18, 0xFF,
};

static char nt35521_wxga_video_on_cmd56[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB3, 0x1A, 0x29, 0xFF,
};

static char nt35521_wxga_video_on_cmd57[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB4, 0x2A, 0x08, 0xFF,
};

static char nt35521_wxga_video_on_cmd58[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB5, 0x31, 0x31, 0xFF,
};

static char nt35521_wxga_video_on_cmd59[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB6, 0x31, 0x31, 0xFF,
};

static char nt35521_wxga_video_on_cmd60[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB7, 0x31, 0x31, 0xFF,
};

static char nt35521_wxga_video_on_cmd61[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB8, 0x31, 0x0A, 0xFF,
};

static char nt35521_wxga_video_on_cmd62[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB9, 0x31, 0x31, 0xFF,
};

static char nt35521_wxga_video_on_cmd63[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xBA, 0x31, 0x31, 0xFF,
};

static char nt35521_wxga_video_on_cmd64[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xBB, 0x0B, 0x31, 0xFF,
};

static char nt35521_wxga_video_on_cmd65[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xBC, 0x31, 0x31, 0xFF,
};

static char nt35521_wxga_video_on_cmd66[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xBD, 0x31, 0x31, 0xFF,
};

static char nt35521_wxga_video_on_cmd67[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xBE, 0x31, 0x31, 0xFF,
};

static char nt35521_wxga_video_on_cmd68[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xBF, 0x09, 0x2A, 0xFF,
};

static char nt35521_wxga_video_on_cmd69[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xC0, 0x29, 0x1B, 0xFF,
};

static char nt35521_wxga_video_on_cmd70[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xC1, 0x19, 0x17, 0xFF,
};

static char nt35521_wxga_video_on_cmd71[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xC2, 0x15, 0x13, 0xFF,
};

static char nt35521_wxga_video_on_cmd72[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xC3, 0x11, 0x01, 0xFF,
};

static char nt35521_wxga_video_on_cmd73[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xE5, 0x31, 0x31, 0xFF,
};

static char nt35521_wxga_video_on_cmd74[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xC4, 0x09, 0x1B, 0xFF,
};

static char nt35521_wxga_video_on_cmd75[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xC5, 0x19, 0x17, 0xFF,
};

static char nt35521_wxga_video_on_cmd76[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xC6, 0x15, 0x13, 0xFF,
};

static char nt35521_wxga_video_on_cmd77[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xC7, 0x11, 0x29, 0xFF,
};

static char nt35521_wxga_video_on_cmd78[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xC8, 0x2A, 0x01, 0xFF,
};

static char nt35521_wxga_video_on_cmd79[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xC9, 0x31, 0x31, 0xFF,
};

static char nt35521_wxga_video_on_cmd80[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xCA, 0x31, 0x31, 0xFF,
};

static char nt35521_wxga_video_on_cmd81[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xCB, 0x31, 0x31, 0xFF,
};

static char nt35521_wxga_video_on_cmd82[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xCC, 0x31, 0x0B, 0xFF,
};

static char nt35521_wxga_video_on_cmd83[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xCD, 0x31, 0x31, 0xFF,
};

static char nt35521_wxga_video_on_cmd84[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xCE, 0x31, 0x31, 0xFF,
};

static char nt35521_wxga_video_on_cmd85[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xCF, 0x0A, 0x31, 0xFF,
};

static char nt35521_wxga_video_on_cmd86[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xD0, 0x31, 0x31, 0xFF,
};

static char nt35521_wxga_video_on_cmd87[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xD1, 0x31, 0x31, 0xFF,
};

static char nt35521_wxga_video_on_cmd88[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xD2, 0x31, 0x31, 0xFF,
};

static char nt35521_wxga_video_on_cmd89[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xD3, 0x00, 0x2A, 0xFF,
};

static char nt35521_wxga_video_on_cmd90[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xD4, 0x29, 0x10, 0xFF,
};

static char nt35521_wxga_video_on_cmd91[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xD5, 0x12, 0x14, 0xFF,
};

static char nt35521_wxga_video_on_cmd92[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xD6, 0x16, 0x18, 0xFF,
};

static char nt35521_wxga_video_on_cmd93[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xD7, 0x1A, 0x08, 0xFF,
};

static char nt35521_wxga_video_on_cmd94[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xE6, 0x31, 0x31, 0xFF,
};

static char nt35521_wxga_video_on_cmd95[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xD8, 0x00, 0x00, 0x00,
	0x54, 0x00, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd96[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xD9, 0x00, 0x15, 0x00,
	0x00, 0x00, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd97[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xE7, 0x00, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd98[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xF0, 0x55, 0xAA, 0x52,
	0x08, 0x03, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd99[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB0, 0x20, 0x00, 0xFF,
};

static char nt35521_wxga_video_on_cmd100[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB1, 0x20, 0x00, 0xFF,
};

static char nt35521_wxga_video_on_cmd101[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xB2, 0x05, 0x00, 0x00,
	0x00, 0x00, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd102[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xB6, 0x05, 0x00, 0x00,
	0x00, 0x00, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd103[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xB7, 0x05, 0x00, 0x00,
	0x00, 0x00, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd104[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xBA, 0x57, 0x00, 0x00,
	0x00, 0x00, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd105[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xBB, 0x57, 0x00, 0x00,
	0x00, 0x00, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd106[] = {
	0x05, 0x00, 0x29, 0xC0,
	0xC0, 0x00, 0x00, 0x00,
	0x00, 0xFF, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd107[] = {
	0x05, 0x00, 0x29, 0xC0,
	0xC1, 0x00, 0x00, 0x00,
	0x00, 0xFF, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd108[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xC4, 0x60, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd109[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xC5, 0x40, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd110[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xF0, 0x55, 0xAA, 0x52,
	0x08, 0x05, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd111[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xBD, 0x03, 0x01, 0x03,
	0x03, 0x03, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd112[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB0, 0x17, 0x06, 0xFF,
};

static char nt35521_wxga_video_on_cmd113[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB1, 0x17, 0x06, 0xFF,
};

static char nt35521_wxga_video_on_cmd114[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB2, 0x17, 0x06, 0xFF,
};

static char nt35521_wxga_video_on_cmd115[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB3, 0x17, 0x06, 0xFF,
};

static char nt35521_wxga_video_on_cmd116[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB4, 0x17, 0x06, 0xFF,
};

static char nt35521_wxga_video_on_cmd117[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xB5, 0x17, 0x06, 0xFF,
};

static char nt35521_wxga_video_on_cmd118[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xB8, 0x00, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd119[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xB9, 0x00, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd120[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xBA, 0x00, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd121[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xBB, 0x02, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd122[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xBC, 0x00, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd123[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xC0, 0x07, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd124[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xC4, 0x80, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd125[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xC5, 0xA4, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd126[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xC8, 0x05, 0x30, 0xFF,
};

static char nt35521_wxga_video_on_cmd127[] = {
	0x03, 0x00, 0x29, 0xC0,
	0xC9, 0x01, 0x31, 0xFF,
};

static char nt35521_wxga_video_on_cmd128[] = {
	0x04, 0x00, 0x29, 0xC0,
	0xCC, 0x00, 0x00, 0x3C,
};

static char nt35521_wxga_video_on_cmd129[] = {
	0x04, 0x00, 0x29, 0xC0,
	0xCD, 0x00, 0x00, 0x3C,
};

static char nt35521_wxga_video_on_cmd130[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xD1, 0x00, 0x04, 0xFD,
	0x07, 0x10, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd131[] = {
	0x06, 0x00, 0x29, 0xC0,
	0xD2, 0x00, 0x05, 0x02,
	0x07, 0x10, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd132[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xE5, 0x06, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd133[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xE6, 0x06, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd134[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xE7, 0x06, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd135[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xE8, 0x06, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd136[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xE9, 0x06, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd137[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xEA, 0x06, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd138[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xED, 0x30, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd139[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x6F, 0x11, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd140[] = {
	0x02, 0x00, 0x29, 0xC0,
	0xF3, 0x01, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd141[] = {
	0x02, 0x00, 0x29, 0xC0,
	0x35, 0x00, 0xFF, 0xFF,
};

static char nt35521_wxga_video_on_cmd142[] = {
	0x11, 0x00, 0x05, 0x80
};

static char nt35521_wxga_video_on_cmd143[] = {
	0x29, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd nt35521_wxga_video_on_command[] = {
	{0xc, nt35521_wxga_video_on_cmd0, 0x00},
	{0x8, nt35521_wxga_video_on_cmd1, 0x00},
	{0x8, nt35521_wxga_video_on_cmd2, 0x00},
	{0x8, nt35521_wxga_video_on_cmd3, 0x00},
	{0x8, nt35521_wxga_video_on_cmd4, 0x00},
	{0x8, nt35521_wxga_video_on_cmd5, 0x00},
	{0x8, nt35521_wxga_video_on_cmd6, 0x00},
	{0x8, nt35521_wxga_video_on_cmd7, 0x00},
	{0x8, nt35521_wxga_video_on_cmd8, 0x00},
	{0x8, nt35521_wxga_video_on_cmd9, 0x00},
	{0x8, nt35521_wxga_video_on_cmd10, 0x00},
	{0xc, nt35521_wxga_video_on_cmd11, 0x00},
	{0x8, nt35521_wxga_video_on_cmd12, 0x00},
	{0x8, nt35521_wxga_video_on_cmd13, 0x00},
	{0x8, nt35521_wxga_video_on_cmd14, 0x00},
	{0x8, nt35521_wxga_video_on_cmd15, 0x00},
	{0x8, nt35521_wxga_video_on_cmd16, 0x00},
	{0x8, nt35521_wxga_video_on_cmd17, 0x00},
	{0x8, nt35521_wxga_video_on_cmd18, 0x00},
	{0xc, nt35521_wxga_video_on_cmd19, 0x00},
	{0xc, nt35521_wxga_video_on_cmd20, 0x00},
	{0x8, nt35521_wxga_video_on_cmd21, 0x00},
	{0x8, nt35521_wxga_video_on_cmd22, 0x00},
	{0x8, nt35521_wxga_video_on_cmd23, 0x00},
	{0x8, nt35521_wxga_video_on_cmd24, 0x00},
	{0x8, nt35521_wxga_video_on_cmd25, 0x00},
	{0x8, nt35521_wxga_video_on_cmd26, 0x00},
	{0x8, nt35521_wxga_video_on_cmd27, 0x00},
	{0x8, nt35521_wxga_video_on_cmd28, 0x00},
	{0x8, nt35521_wxga_video_on_cmd29, 0x00},
	{0x8, nt35521_wxga_video_on_cmd30, 0x00},
	{0x8, nt35521_wxga_video_on_cmd31, 0x00},
	{0x8, nt35521_wxga_video_on_cmd32, 0x00},
	{0xc, nt35521_wxga_video_on_cmd33, 0x00},
	{0x8, nt35521_wxga_video_on_cmd34, 0x00},
	{0xc, nt35521_wxga_video_on_cmd35, 0x00},
	{0xc, nt35521_wxga_video_on_cmd36, 0x00},
	{0x8, nt35521_wxga_video_on_cmd37, 0x00},
	{0xc, nt35521_wxga_video_on_cmd38, 0x00},
	{0x8, nt35521_wxga_video_on_cmd39, 0x00},
	{0xc, nt35521_wxga_video_on_cmd40, 0x00},
	{0xc, nt35521_wxga_video_on_cmd41, 0x00},
	{0x8, nt35521_wxga_video_on_cmd42, 0x00},
	{0xc, nt35521_wxga_video_on_cmd43, 0x00},
	{0x8, nt35521_wxga_video_on_cmd44, 0x00},
	{0xc, nt35521_wxga_video_on_cmd45, 0x00},
	{0xc, nt35521_wxga_video_on_cmd46, 0x00},
	{0x8, nt35521_wxga_video_on_cmd47, 0x00},
	{0xc, nt35521_wxga_video_on_cmd48, 0x00},
	{0x8, nt35521_wxga_video_on_cmd49, 0x00},
	{0xc, nt35521_wxga_video_on_cmd50, 0x00},
	{0xc, nt35521_wxga_video_on_cmd51, 0x00},
	{0xc, nt35521_wxga_video_on_cmd52, 0x00},
	{0x8, nt35521_wxga_video_on_cmd53, 0x00},
	{0x8, nt35521_wxga_video_on_cmd54, 0x00},
	{0x8, nt35521_wxga_video_on_cmd55, 0x00},
	{0x8, nt35521_wxga_video_on_cmd56, 0x00},
	{0x8, nt35521_wxga_video_on_cmd57, 0x00},
	{0x8, nt35521_wxga_video_on_cmd58, 0x00},
	{0x8, nt35521_wxga_video_on_cmd59, 0x00},
	{0x8, nt35521_wxga_video_on_cmd60, 0x00},
	{0x8, nt35521_wxga_video_on_cmd61, 0x00},
	{0x8, nt35521_wxga_video_on_cmd62, 0x00},
	{0x8, nt35521_wxga_video_on_cmd63, 0x00},
	{0x8, nt35521_wxga_video_on_cmd64, 0x00},
	{0x8, nt35521_wxga_video_on_cmd65, 0x00},
	{0x8, nt35521_wxga_video_on_cmd66, 0x00},
	{0x8, nt35521_wxga_video_on_cmd67, 0x00},
	{0x8, nt35521_wxga_video_on_cmd68, 0x00},
	{0x8, nt35521_wxga_video_on_cmd69, 0x00},
	{0x8, nt35521_wxga_video_on_cmd70, 0x00},
	{0x8, nt35521_wxga_video_on_cmd71, 0x00},
	{0x8, nt35521_wxga_video_on_cmd72, 0x00},
	{0x8, nt35521_wxga_video_on_cmd73, 0x00},
	{0x8, nt35521_wxga_video_on_cmd74, 0x00},
	{0x8, nt35521_wxga_video_on_cmd75, 0x00},
	{0x8, nt35521_wxga_video_on_cmd76, 0x00},
	{0x8, nt35521_wxga_video_on_cmd77, 0x00},
	{0x8, nt35521_wxga_video_on_cmd78, 0x00},
	{0x8, nt35521_wxga_video_on_cmd79, 0x00},
	{0x8, nt35521_wxga_video_on_cmd80, 0x00},
	{0x8, nt35521_wxga_video_on_cmd81, 0x00},
	{0x8, nt35521_wxga_video_on_cmd82, 0x00},
	{0x8, nt35521_wxga_video_on_cmd83, 0x00},
	{0x8, nt35521_wxga_video_on_cmd84, 0x00},
	{0x8, nt35521_wxga_video_on_cmd85, 0x00},
	{0x8, nt35521_wxga_video_on_cmd86, 0x00},
	{0x8, nt35521_wxga_video_on_cmd87, 0x00},
	{0x8, nt35521_wxga_video_on_cmd88, 0x00},
	{0x8, nt35521_wxga_video_on_cmd89, 0x00},
	{0x8, nt35521_wxga_video_on_cmd90, 0x00},
	{0x8, nt35521_wxga_video_on_cmd91, 0x00},
	{0x8, nt35521_wxga_video_on_cmd92, 0x00},
	{0x8, nt35521_wxga_video_on_cmd93, 0x00},
	{0x8, nt35521_wxga_video_on_cmd94, 0x00},
	{0xc, nt35521_wxga_video_on_cmd95, 0x00},
	{0xc, nt35521_wxga_video_on_cmd96, 0x00},
	{0x8, nt35521_wxga_video_on_cmd97, 0x00},
	{0xc, nt35521_wxga_video_on_cmd98, 0x00},
	{0x8, nt35521_wxga_video_on_cmd99, 0x00},
	{0x8, nt35521_wxga_video_on_cmd100, 0x00},
	{0xc, nt35521_wxga_video_on_cmd101, 0x00},
	{0xc, nt35521_wxga_video_on_cmd102, 0x00},
	{0xc, nt35521_wxga_video_on_cmd103, 0x00},
	{0xc, nt35521_wxga_video_on_cmd104, 0x00},
	{0xc, nt35521_wxga_video_on_cmd105, 0x00},
	{0xc, nt35521_wxga_video_on_cmd106, 0x00},
	{0xc, nt35521_wxga_video_on_cmd107, 0x00},
	{0x8, nt35521_wxga_video_on_cmd108, 0x00},
	{0x8, nt35521_wxga_video_on_cmd109, 0x00},
	{0xc, nt35521_wxga_video_on_cmd110, 0x00},
	{0xc, nt35521_wxga_video_on_cmd111, 0x00},
	{0x8, nt35521_wxga_video_on_cmd112, 0x00},
	{0x8, nt35521_wxga_video_on_cmd113, 0x00},
	{0x8, nt35521_wxga_video_on_cmd114, 0x00},
	{0x8, nt35521_wxga_video_on_cmd115, 0x00},
	{0x8, nt35521_wxga_video_on_cmd116, 0x00},
	{0x8, nt35521_wxga_video_on_cmd117, 0x00},
	{0x8, nt35521_wxga_video_on_cmd118, 0x00},
	{0x8, nt35521_wxga_video_on_cmd119, 0x00},
	{0x8, nt35521_wxga_video_on_cmd120, 0x00},
	{0x8, nt35521_wxga_video_on_cmd121, 0x00},
	{0x8, nt35521_wxga_video_on_cmd122, 0x00},
	{0x8, nt35521_wxga_video_on_cmd123, 0x00},
	{0x8, nt35521_wxga_video_on_cmd124, 0x00},
	{0x8, nt35521_wxga_video_on_cmd125, 0x00},
	{0x8, nt35521_wxga_video_on_cmd126, 0x00},
	{0x8, nt35521_wxga_video_on_cmd127, 0x00},
	{0x8, nt35521_wxga_video_on_cmd128, 0x00},
	{0x8, nt35521_wxga_video_on_cmd129, 0x00},
	{0xc, nt35521_wxga_video_on_cmd130, 0x00},
	{0xc, nt35521_wxga_video_on_cmd131, 0x00},
	{0x8, nt35521_wxga_video_on_cmd132, 0x00},
	{0x8, nt35521_wxga_video_on_cmd133, 0x00},
	{0x8, nt35521_wxga_video_on_cmd134, 0x00},
	{0x8, nt35521_wxga_video_on_cmd135, 0x00},
	{0x8, nt35521_wxga_video_on_cmd136, 0x00},
	{0x8, nt35521_wxga_video_on_cmd137, 0x00},
	{0x8, nt35521_wxga_video_on_cmd138, 0x00},
	{0x8, nt35521_wxga_video_on_cmd139, 0x00},
	{0x8, nt35521_wxga_video_on_cmd140, 0x00},
	{0x8, nt35521_wxga_video_on_cmd141, 0x00},
	{0x4, nt35521_wxga_video_on_cmd142, 0x00},
	{0x4, nt35521_wxga_video_on_cmd143, 0x00}
};

#define NT35521_WXGA_VIDEO_ON_COMMAND 144


static char nt35521_wxga_videooff_cmd0[] = {
	0x28, 0x00, 0x05, 0x80
};

static char nt35521_wxga_videooff_cmd1[] = {
	0x10, 0x00, 0x05, 0x80
};

static struct mipi_dsi_cmd nt35521_wxga_video_off_command[] = {
	{0x4, nt35521_wxga_videooff_cmd0, 0x32},
	{0x4, nt35521_wxga_videooff_cmd1, 0x78}
};

#define NT35521_WXGA_VIDEO_OFF_COMMAND 2


static struct command_state nt35521_wxga_video_state = {
	0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/
static struct commandpanel_info nt35521_wxga_video_command_panel = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/
static struct videopanel_info nt35521_wxga_video_video_panel = {
	1, 0, 0, 0, 1, 1, 2, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane configuration                                                        */
/*---------------------------------------------------------------------------*/
static struct lane_configuration nt35521_wxga_video_lane_config = {
	4, 0, 1, 1, 1, 1, 0
};

/*---------------------------------------------------------------------------*/
/* Panel timing                                                              */
/*---------------------------------------------------------------------------*/
static const uint32_t nt35521_wxga_video_timings[] = {
	0x93, 0x1F, 0x17, 0x00, 0x2F, 0x2E, 0x1C, 0x21, 0x26, 0x03, 0x04, 0x00
};

static struct panel_timing nt35521_wxga_video_timing_info = {
	0, 4, 0x20, 0x2D
};

/*---------------------------------------------------------------------------*/
/* Panel reset sequence                                                      */
/*---------------------------------------------------------------------------*/
static struct panel_reset_sequence nt35521_wxga_video_reset_seq = {
	{1, 0, 1, }, {20, 1, 20, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight setting                                                         */
/*---------------------------------------------------------------------------*/
static struct backlight nt35521_wxga_video_backlight = {
	0, 1, 255, 2, 0, "PMIC_8941"
};

#endif /*_PANEL_NT35521_WXGA_VIDEO_H_*/

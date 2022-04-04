/*
 *  This file is part of x48, an emulator of the HP-48sx Calculator.
 *  Copyright (C) 1994  Eddie C. Dost  (ecd@dressler.de)
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

/* $Log: hp48char.h,v $
 * Revision 1.3  1995/01/11  18:20:01  ecd
 * major update to support HP48 G/GX
 *
 * Revision 1.2  1994/12/07  20:16:41  ecd
 * added comment at top of file
 *
 * Revision 1.2  1994/12/07  20:16:41  ecd
 * added comment at top of file
 *
 * Revision 1.1  1994/12/07  10:16:15  ecd
 * Initial revision
 *
 *
 * $Id: hp48char.h,v 1.3 1995/01/11 18:20:01 ecd Exp ecd $
 */
#ifndef _HP48CHAR_H
#define _HP48CHAR_H	1

typedef struct trans_tbl_t {
  unsigned char  hp48_char;
  char          *trans;
} trans_tbl_t;

#ifndef DEFINE_TRANS_TABLE
extern trans_tbl_t hp48_trans_tbl[256];
#else
trans_tbl_t hp48_trans_tbl[256] =
{
  { 0, (char*)"\\0" },
  { 1, (char*)"\\001" },
  { 2, (char*)"\\002" },
  { 3, (char*)"\\003" },
  { 4, (char*)"\\004" },
  { 5, (char*)"\\005" },
  { 6, (char*)"\\006" },
  { 7, (char*)"\\007" },
  { 8, (char*)"\\b" },
  { 9, (char*)"\\t" },
  { 10, (char*)"\\n" },
  { 11, (char*)"\\011" },
  { 12, (char*)"\\f" },
  { 13, (char*)"\\r" },
  { 14, (char*)"\\014" },
  { 15, (char*)"\\015" },
  { 16, (char*)"\\016" },
  { 17, (char*)"\\017" },
  { 18, (char*)"\\018" },
  { 19, (char*)"\\019" },
  { 20, (char*)"\\020" },
  { 21, (char*)"\\021" },
  { 22, (char*)"\\022" },
  { 23, (char*)"\\023" },
  { 24, (char*)"\\024" },
  { 25, (char*)"\\025" },
  { 26, (char*)"\\026" },
  { 27, (char*)"\\027" },
  { 28, (char*)"\\028" },
  { 29, (char*)"\\029" },
  { 30, (char*)"\\030" },
  { 31, (char*)"\\031" },
  { ' ', 0 },
  { '!', 0 },
  { '"', 0 },
  { '#', 0 },
  { '$', 0 },
  { '%', 0 },
  { '&', 0 },
  { '\'', 0 },
  { '(', 0 },
  { ')', 0 },
  { '*', 0 },
  { '+', 0 },
  { ',', 0 },
  { '-', 0 },
  { '.', 0 },
  { '/', 0 },
  { '0', 0 },
  { '1', 0 },
  { '2', 0 },
  { '3', 0 },
  { '4', 0 },
  { '5', 0 },
  { '6', 0 },
  { '7', 0 },
  { '8', 0 },
  { '9', 0 },
  { ':', 0 },
  { ';', 0 },
  { '<', 0 },
  { '=', 0 },
  { '>', 0 },
  { '?', 0 },
  { '@', 0 },
  { 'A', 0 },
  { 'B', 0 },
  { 'C', 0 },
  { 'D', 0 },
  { 'E', 0 },
  { 'F', 0 },
  { 'G', 0 },
  { 'H', 0 },
  { 'I', 0 },
  { 'J', 0 },
  { 'K', 0 },
  { 'L', 0 },
  { 'M', 0 },
  { 'N', 0 },
  { 'O', 0 },
  { 'P', 0 },
  { 'Q', 0 },
  { 'R', 0 },
  { 'S', 0 },
  { 'T', 0 },
  { 'U', 0 },
  { 'V', 0 },
  { 'W', 0 },
  { 'X', 0 },
  { 'Y', 0 },
  { 'Z', 0 },
  { '[', 0 },
  { '\\', 0 },
  { ']', 0 },
  { '^', 0 },
  { '_', 0 },
  { '`', 0 },
  { 'a', 0 },
  { 'b', 0 },
  { 'c', 0 },
  { 'd', 0 },
  { 'e', 0 },
  { 'f', 0 },
  { 'g', 0 },
  { 'h', 0 },
  { 'i', 0 },
  { 'j', 0 },
  { 'k', 0 },
  { 'l', 0 },
  { 'm', 0 },
  { 'n', 0 },
  { 'o', 0 },
  { 'p', 0 },
  { 'q', 0 },
  { 'r', 0 },
  { 's', 0 },
  { 't', 0 },
  { 'u', 0 },
  { 'v', 0 },
  { 'w', 0 },
  { 'x', 0 },
  { 'y', 0 },
  { 'z', 0 },
  { '{', 0 },
  { '|', 0 },
  { '}', 0 },
  { '~', 0 },
  { 127, (char*)"\\127" },
  { 128, (char*)"\\<)" },
  { 129, (char*)"\\x-" },
  { 130, (char*)"\\.V" },
  { 131, (char*)"\\v/" },
  { 132, (char*)"\\.S" },
  { 133, (char*)"\\GS" },
  { 134, (char*)"\\|>" },
  { 135, (char*)"\\pi" },
  { 136, (char*)"\\.d" },
  { 137, (char*)"\\<=" },
  { 138, (char*)"\\>=" },
  { 139, (char*)"\\=/" },
  { 140, (char*)"\\Ga" },
  { 141, (char*)"\\->" },
  { 142, (char*)"\\<-" },
  { 143, (char*)"\\|v" },
  { 144, (char*)"\\|^" },
  { 145, (char*)"\\Gg" },
  { 146, (char*)"\\Gd" },
  { 147, (char*)"\\Ge" },
  { 148, (char*)"\\Gn" },
  { 149, (char*)"\\Gh" },
  { 150, (char*)"\\Gl" },
  { 151, (char*)"\\Gr" },
  { 152, (char*)"\\Gs" },
  { 153, (char*)"\\Gt" },
  { 154, (char*)"\\Gw" },
  { 155, (char*)"\\GD" },
  { 156, (char*)"\\PI" },
  { 157, (char*)"\\GW" },
  { 158, (char*)"\\[]" },
  { 159, (char*)"\\oo" },
  { 160, (char*)"\\160" },
  { 161, (char*)"\\161" },
  { 162, (char*)"\\162" },
  { 163, (char*)"\\163" },
  { 164, (char*)"\\164" },
  { 165, (char*)"\\165" },
  { 166, (char*)"\\166" },
  { 167, (char*)"\\167" },
  { 168, (char*)"\\168" },
  { 169, (char*)"\\169" },
  { 170, (char*)"\\170" },
  { 171, (char*)"\\<<" },
  { 172, (char*)"\\172" },
  { 173, (char*)"\\173" },
  { 174, (char*)"\\174" },
  { 175, (char*)"\\175" },
  { 176, (char*)"\\^o" },
  { 177, (char*)"\\177" },
  { 178, (char*)"\\178" },
  { 179, (char*)"\\179" },
  { 180, (char*)"\\180" },
  { 181, (char*)"\\Gm" },
  { 182, (char*)"\\182" },
  { 183, (char*)"\\183" },
  { 184, (char*)"\\184" },
  { 185, (char*)"\\185" },
  { 186, (char*)"\\186" },
  { 187, (char*)"\\>>" },
  { 188, (char*)"\\188" },
  { 189, (char*)"\\189" },
  { 190, (char*)"\\190" },
  { 191, (char*)"\\191" },
  { 192, (char*)"\\192" },
  { 193, (char*)"\\193" },
  { 194, (char*)"\\194" },
  { 195, (char*)"\\195" },
  { 196, (char*)"\\196" },
  { 197, (char*)"\\197" },
  { 198, (char*)"\\198" },
  { 199, (char*)"\\199" },
  { 200, (char*)"\\200" },
  { 201, (char*)"\\201" },
  { 202, (char*)"\\202" },
  { 203, (char*)"\\203" },
  { 204, (char*)"\\204" },
  { 205, (char*)"\\205" },
  { 206, (char*)"\\206" },
  { 207, (char*)"\\207" },
  { 208, (char*)"\\208" },
  { 209, (char*)"\\209" },
  { 210, (char*)"\\210" },
  { 211, (char*)"\\211" },
  { 212, (char*)"\\212" },
  { 213, (char*)"\\213" },
  { 214, (char*)"\\214" },
  { 215, (char*)"\\.x" },
  { 216, (char*)"\\O/" },
  { 217, (char*)"\\217" },
  { 218, (char*)"\\218" },
  { 219, (char*)"\\219" },
  { 220, (char*)"\\220" },
  { 221, (char*)"\\221" },
  { 222, (char*)"\\222" },
  { 223, (char*)"\\223" },
  { 224, (char*)"\\224" },
  { 225, (char*)"\\225" },
  { 226, (char*)"\\226" },
  { 227, (char*)"\\227" },
  { 228, (char*)"\\228" },
  { 229, (char*)"\\229" },
  { 230, (char*)"\\230" },
  { 231, (char*)"\\231" },
  { 232, (char*)"\\232" },
  { 233, (char*)"\\233" },
  { 234, (char*)"\\234" },
  { 235, (char*)"\\235" },
  { 236, (char*)"\\236" },
  { 237, (char*)"\\237" },
  { 238, (char*)"\\238" },
  { 239, (char*)"\\239" },
  { 240, (char*)"\\240" },
  { 241, (char*)"\\241" },
  { 242, (char*)"\\242" },
  { 243, (char*)"\\243" },
  { 244, (char*)"\\244" },
  { 245, (char*)"\\245" },
  { 246, (char*)"\\246" },
  { 247, (char*)"\\:-" },
  { 248, (char*)"\\248" },
  { 249, (char*)"\\249" },
  { 250, (char*)"\\250" },
  { 251, (char*)"\\251" },
  { 252, (char*)"\\252" },
  { 253, (char*)"\\253" },
  { 254, (char*)"\\254" },
  { 255, (char*)"\\255" }
};
#endif /* DEFINE_TRANS_TABLE */

#endif /* !_HP48CHAR_H */

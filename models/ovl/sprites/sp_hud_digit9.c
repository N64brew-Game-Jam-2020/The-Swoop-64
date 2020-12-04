#include "sp_hud_digit9.h"

static Gfx hud_digit90_C_dummy_aligner[] = { gsSPEndDisplayList() };

u16 hud_digit90_sp[] = {
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x3cad, 0x3cad, 0x3cad, 0x3cad, 0x3cad, 0x3cad, 0x3cad, 0x3cad, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x3cad, 0x3cad, 0x3cad, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x3cad, 0x3cad, 0x3cad, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x3cad, 0x3cad, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x3cad, 0x3cad, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x3cad, 0x3cad, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x3cad, 0x3cad, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x3cad, 0x3cad, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x3cad, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x3cad, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x6f35, 0x3cad, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x3cad, 0x877b, 0x6f35, 0x877b, 0x6f35, 0x877b, 0x6f35, 0x877b, 0x6f35, 0x877b, 0x6f35, 0x877b, 0x6f35, 0x877b, 0x6f35, 0x877b, 0x3cad, 0x3cad, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x3cad, 0x6f35, 0x877b, 0x6f35, 0x877b, 0x6f35, 0x877b, 0x6f35, 0x3cad, 0x3cad, 0x877b, 0x6f35, 0x877b, 0x6f35, 0x877b, 0x6f35, 0x877b, 0x3cad, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x3cad, 0x877b, 0xb6fb, 0x877b, 0xb6fb, 0x877b, 0xb6fb, 0x877b, 0x3cad, 0x3cad, 0xb6fb, 0x877b, 0xb6fb, 0x877b, 0xb6fb, 0x877b, 0xb6fb, 0x3cad, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x3cad, 0xb6fb, 0x877b, 0xb6fb, 0x877b, 0xb6fb, 0x877b, 0xb6fb, 0x877b, 0xb6fb, 0x877b, 0xb6fb, 0x877b, 0xb6fb, 0x877b, 0xb6fb, 0x877b, 0x3cad, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x3cad, 0xc73b, 0xb6fb, 0xc73b, 0xb6fb, 0xc73b, 0xb6fb, 0xc73b, 0xb6fb, 0xc73b, 0xb6fb, 0xc73b, 0xb6fb, 0xc73b, 0xb6fb, 0xc73b, 0xb6fb, 0x3cad, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x3cad, 0x3cad, 0xc73b, 0xb6fb, 0xc73b, 0xb6fb, 0xc73b, 0xb6fb, 0xc73b, 0xb6fb, 0xc73b, 0xb6fb, 0xc73b, 0xb6fb, 0xc73b, 0xb6fb, 0xc73b, 0x3cad, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x1155, 0x3cad, 0x3cad, 0xc73b, 0xc73b, 0xc73b, 0xc73b, 0xc73b, 0xc73b, 0xc73b, 0xc73b, 0xc73b, 0xc73b, 0xc73b, 0xc73b, 0xc73b, 0x3cad, 0x3cad, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x1155, 0x1155, 0x3cad, 0x3cad, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xc73b, 0x3cad, 0x1155, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x1155, 0x1155, 0x3cad, 0x3cad, 0xc73b, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x3cad, 0x3cad, 0x1155, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x1155, 0x3cad, 0x3cad, 0x3cad, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xb6fb, 0x3cad, 0x1155, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x3cad, 0xb6fb, 0xc73b, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xc73b, 0x3cad, 0x3cad, 0x1155, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x3cad, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x3cad, 0x3cad, 0x1155, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x3cad, 0xb6fb, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xc73b, 0x3cad, 0x3cad, 0x1155, 0x1155, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x3cad, 0x3cad, 0xc73b, 0xffff, 0xffff, 0xffff, 0xffff, 0xb6fb, 0x3cad, 0x3cad, 0x1155, 0x1155, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x1155, 0x3cad, 0x3cad, 0xc73b, 0xffff, 0xffff, 0x3cad, 0x3cad, 0x3cad, 0x1155, 0x1155, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x1155, 0x1155, 0x3cad, 0x3cad, 0x3cad, 0x3cad, 0x3cad, 0x1155, 0x1155, 0x1155, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1155, 0x1155, 0x1155, 0x1155, 0x1155, 0x1155, 0x1155, 0x1155, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1155, 0x1155, 0x1155, 0x1155, 0x1155, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 

};




Bitmap hud_digit9_bitmaps[] = {
	{hud_digit9BLOCKSIZEW, hud_digit9BLOCKSIZEW, 0, 0, hud_digit90_sp, hud_digit9BLOCKSIZEH, 0},
};

Gfx hud_digit9_dl[NUM_DL(NUM_hud_digit9_BMS)];

Sprite hud_digit9_sprite = {
	0, 0, /* Position: x,y */
	hud_digit9IMAGEW, hud_digit9IMAGEH, /* Sprite size in texels (x,y) */
	hud_digit9SCALEX, hud_digit9SCALEY, /* Sprite Scale: x,y */
	0, 0, /* Sprite Explosion Spacing: x,y */
	hud_digit9MODE, /* Sprite Attributes */
	0x1234, /* Sprite Depth: Z */
	255, 255, 255, 255, /* Sprite Coloration: RGBA */
	0, 0, NULL, /* Color LookUp Table: start_index, length, address */
	0, 1, /* Sprite Bitmap index: start index, step increment */
	NUM_hud_digit9_BMS, /* Number of bitmaps */
	NUM_DL(NUM_hud_digit9_BMS), /* Number of display list locations allocated */
	hud_digit9BLOCKSIZEH, hud_digit9BLOCKSIZEH, /* Sprite Bitmap Height: Used_height, physical height */
	G_IM_FMT_RGBA, /* Sprite Bitmap Format */
	G_IM_SIZ_16b, /* Sprite Bitmap Texel Size */
	hud_digit9_bitmaps, /* Pointer to bitmaps */
	hud_digit9_dl, /* Display list memory */
	NULL, /* next_dl pointer */
};

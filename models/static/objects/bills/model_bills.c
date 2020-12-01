#include <ultra64.h>

Lights1 bills_bills_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx bills_dollah_ci4_aligner[] = {gsSPEndDisplayList()};
u8 bills_dollah_ci4[] = {
	0x0, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0, 0x22, 0x3, 
	0x0, 0x40, 0x44, 0x4, 0x0, 0x30, 0x11, 0x13, 0x44, 
	0x44, 0x55, 0x46, 0x76, 0x31, 0x22, 0x14, 0x48, 0x45, 
	0x33, 0x54, 0x94, 0x41, 0x11, 0x14, 0x48, 0x45, 0x33, 
	0x54, 0x94, 0x41, 0x22, 0x13, 0x7A, 0x75, 0x35, 0x54, 
	0x94, 0x31, 0x11, 0x3, 0x44, 0x45, 0x33, 0x54, 0x44, 
	0x30, 0x22, 0x0, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x22, 
	0x0, 0xB, 0xB, 0xBB, 0xBB, 0xB0, 0x0, 0x11, 0xC, 
	0x0, 0xC0, 0x0, 0xC0, 0xC0, 0xC0, 0x22, 0x0, 0x0, 
	0xC0, 0x0, 0xC0, 0xC0, 0x0, 0x11, 0x0, 0xC, 0xCC, 
	0xCC, 0xCC, 0xC0, 0x0, 0x22, 0x0, 0xC, 0xCC, 0x0, 
	0xCC, 0xC0, 0x0, 0x11, 0xC, 0xC, 0xCC, 0x0, 0xCC, 
	0xC0, 0xC0, 0x22, 0x0, 0x1, 0x11, 0x11, 0x11, 0x10, 
	0x0, 0x11, 
};

Gfx bills_dollah_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 bills_dollah_ci4_pal_rgba16[] = {
	0x4B, 0xB, 0x64, 0x11, 0x53, 0x8D, 0x6C, 0x13, 0xAE, 
	0x21, 0x32, 0x49, 0x4D, 0x8F, 0x86, 0xDD, 0x33, 0x4B, 
	0x1B, 0x83, 0x44, 0x8F, 0x85, 0x59, 0x6C, 0x53, 
};

Vtx bills_Bills_mesh_vtx_0[20] = {
	{{{269, 89, -137},0, {-17, 238},{0x49, 0x49, 0xB7, 0xFF}}},
	{{{-269, 89, -137},0, {432, 238},{0xB7, 0x49, 0xB7, 0xFF}}},
	{{{-269, 89, 137},0, {432, -14},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{269, 89, 137},0, {-17, -14},{0x49, 0x49, 0x49, 0xFF}}},
	{{{269, -2, 137},0, {469, 14},{0x49, 0xB7, 0x49, 0xFF}}},
	{{{269, 89, 137},0, {469, 491},{0x49, 0x49, 0x49, 0xFF}}},
	{{{-269, 89, 137},0, {484, 491},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{-269, -2, 137},0, {484, 14},{0xB7, 0xB7, 0x49, 0xFF}}},
	{{{-269, 89, -137},0, {493, 491},{0xB7, 0x49, 0xB7, 0xFF}}},
	{{{-269, -2, -137},0, {493, 14},{0xB7, 0xB7, 0xB7, 0xFF}}},
	{{{-269, -2, -137},0, {-15, 496},{0xB7, 0xB7, 0xB7, 0xFF}}},
	{{{269, -2, -137},0, {428, 496},{0x49, 0xB7, 0xB7, 0xFF}}},
	{{{269, -2, 137},0, {428, 275},{0x49, 0xB7, 0x49, 0xFF}}},
	{{{-269, -2, 137},0, {-15, 275},{0xB7, 0xB7, 0x49, 0xFF}}},
	{{{269, -2, -137},0, {485, 16},{0x49, 0xB7, 0xB7, 0xFF}}},
	{{{269, 89, 137},0, {493, 493},{0x49, 0x49, 0x49, 0xFF}}},
	{{{269, -2, 137},0, {493, 16},{0x49, 0xB7, 0x49, 0xFF}}},
	{{{269, 89, -137},0, {485, 493},{0x49, 0x49, 0xB7, 0xFF}}},
	{{{-269, -2, -137},0, {469, 16},{0xB7, 0xB7, 0xB7, 0xFF}}},
	{{{-269, 89, -137},0, {469, 493},{0xB7, 0x49, 0xB7, 0xFF}}},
};

Gfx bills_Bills_mesh_tri_0[] = {
	gsSPVertex(bills_Bills_mesh_vtx_0 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSPVertex(bills_Bills_mesh_vtx_0 + 14, 6, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_bills_bills_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, bills_dollah_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 12),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 8, bills_dollah_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 1, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 30, 60),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 1, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 60),
	gsSPSetLights1(bills_bills_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_bills_bills_f3d[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};


Gfx bills_Bills_mesh[] = {
	gsSPDisplayList(mat_bills_bills_f3d),
	gsSPDisplayList(bills_Bills_mesh_tri_0),
	gsSPDisplayList(mat_revert_bills_bills_f3d),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};



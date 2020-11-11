#include <ultra64.h>

Lights1 basket_basket_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 basket_basket_f3d_002_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx basket_basket_ci4_aligner[] = {gsSPEndDisplayList()};
u8 basket_basket_ci4[] = {
	0x1, 0x23, 0x23, 0x23, 0x42, 0x22, 0x22, 0x24, 0x10, 
	0x32, 0x32, 0x32, 0x22, 0x22, 0x22, 0x22, 0x1, 0x21, 
	0x13, 0x23, 0x22, 0x22, 0x22, 0x22, 0x10, 0x11, 0x32, 
	0x32, 0x22, 0x22, 0x22, 0x22, 0x1, 0x13, 0x23, 0x23, 
	0x22, 0x22, 0x22, 0x22, 0x10, 0x11, 0x32, 0x32, 0x44, 
	0x44, 0x44, 0x44, 0x1, 0x21, 0x13, 0x23, 0x22, 0x22, 
	0x22, 0x22, 0x10, 0x32, 0x32, 0x32, 0x22, 0x22, 0x22, 
	0x22, 0x1, 0x23, 0x23, 0x23, 0x22, 0x22, 0x22, 0x22, 
	0x10, 0x32, 0x32, 0x32, 0x22, 0x22, 0x22, 0x22, 0x1, 
	0x23, 0x23, 0x23, 0x42, 0x22, 0x22, 0x24, 0x10, 0x32, 
	0x32, 0x32, 0x33, 0x33, 0x33, 0x33, 0x1, 0x23, 0x23, 
	0x23, 0x33, 0x33, 0x33, 0x33, 0x10, 0x32, 0x32, 0x32, 
	0x33, 0x33, 0x33, 0x33, 0x1, 0x23, 0x23, 0x23, 0x33, 
	0x33, 0x33, 0x33, 0x10, 0x32, 0x32, 0x32, 0x33, 0x33, 
	0x33, 0x33, 
};

Gfx basket_basket_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 basket_basket_ci4_pal_rgba16[] = {
	0xCB, 0x9D, 0xA1, 0x8D, 0xD4, 0xD9, 0xC4, 0x53, 0x8A, 
	0xCD, 
};

Gfx basket_basket_ci4_copy_aligner[] = {gsSPEndDisplayList()};
u8 basket_basket_ci4_copy[] = {
	0x1, 0x23, 0x23, 0x23, 0x42, 0x22, 0x22, 0x24, 0x10, 
	0x32, 0x32, 0x32, 0x22, 0x22, 0x22, 0x22, 0x1, 0x21, 
	0x13, 0x23, 0x22, 0x22, 0x22, 0x22, 0x10, 0x11, 0x32, 
	0x32, 0x22, 0x22, 0x22, 0x22, 0x1, 0x13, 0x23, 0x23, 
	0x22, 0x22, 0x22, 0x22, 0x10, 0x11, 0x32, 0x32, 0x44, 
	0x44, 0x44, 0x44, 0x1, 0x21, 0x13, 0x23, 0x22, 0x22, 
	0x22, 0x22, 0x10, 0x32, 0x32, 0x32, 0x22, 0x22, 0x22, 
	0x22, 0x1, 0x23, 0x23, 0x23, 0x22, 0x22, 0x22, 0x22, 
	0x10, 0x32, 0x32, 0x32, 0x22, 0x22, 0x22, 0x22, 0x1, 
	0x23, 0x23, 0x23, 0x42, 0x22, 0x22, 0x24, 0x10, 0x32, 
	0x32, 0x32, 0x33, 0x33, 0x33, 0x33, 0x1, 0x23, 0x23, 
	0x23, 0x33, 0x33, 0x33, 0x33, 0x10, 0x32, 0x32, 0x32, 
	0x33, 0x33, 0x33, 0x33, 0x1, 0x23, 0x23, 0x23, 0x33, 
	0x33, 0x33, 0x33, 0x10, 0x32, 0x32, 0x32, 0x33, 0x33, 
	0x33, 0x33, 
};

Gfx basket_basket_ci4_pal_rgba16_copy_aligner[] = {gsSPEndDisplayList()};
u8 basket_basket_ci4_pal_rgba16_copy[] = {
	0xCB, 0x9D, 0xA1, 0x8D, 0xD4, 0xD9, 0xC4, 0x53, 0x8A, 
	0xCD, 
};

Vtx basket_Basket_mesh_vtx_0[30] = {
	{{{22, 388, -147},0, {358, 440},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{22, 154, -147},0, {301, 440},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-22, 154, -147},0, {301, 470},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-22, 388, -147},0, {358, 470},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{-22, 388, 147},0, {429, 470},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{22, 388, 147},0, {429, 440},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{-22, 154, 147},0, {485, 470},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{22, 154, 147},0, {485, 440},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{213, 219, -144},0, {253, -11},{0x4D, 0x43, 0xB5, 0xFF}}},
	{{{-213, 219, -144},0, {253, 333},{0xB3, 0x43, 0xB5, 0xFF}}},
	{{{-213, 219, 144},0, {493, 333},{0xB3, 0x43, 0x4B, 0xFF}}},
	{{{213, 219, 144},0, {493, -11},{0x4D, 0x43, 0x4B, 0xFF}}},
	{{{186, -6, 126},0, {168, -4},{0x45, 0xB0, 0x46, 0xFF}}},
	{{{213, 219, 144},0, {-8, -2},{0x4D, 0x43, 0x4B, 0xFF}}},
	{{{-213, 219, 144},0, {-8, 262},{0xB3, 0x43, 0x4B, 0xFF}}},
	{{{-186, -6, 126},0, {170, 256},{0xBB, 0xB0, 0x46, 0xFF}}},
	{{{-186, -6, 126},0, {170, 256},{0xBB, 0xB0, 0x46, 0xFF}}},
	{{{-213, 219, 144},0, {-8, 262},{0xB3, 0x43, 0x4B, 0xFF}}},
	{{{-213, 219, -144},0, {-8, 486},{0xB3, 0x43, 0xB5, 0xFF}}},
	{{{-186, -6, -126},0, {168, 485},{0xBB, 0xB0, 0xBA, 0xFF}}},
	{{{-186, -6, -126},0, {480, 309},{0xBB, 0xB0, 0xBA, 0xFF}}},
	{{{186, -6, -126},0, {480, 11},{0x45, 0xB0, 0xBA, 0xFF}}},
	{{{186, -6, 126},0, {271, 11},{0x45, 0xB0, 0x46, 0xFF}}},
	{{{-186, -6, 126},0, {271, 309},{0xBB, 0xB0, 0x46, 0xFF}}},
	{{{186, -6, -126},0, {170, 256},{0x45, 0xB0, 0xBA, 0xFF}}},
	{{{213, 219, 144},0, {-8, 486},{0x4D, 0x43, 0x4B, 0xFF}}},
	{{{186, -6, 126},0, {168, 485},{0x45, 0xB0, 0x46, 0xFF}}},
	{{{213, 219, -144},0, {-8, 262},{0x4D, 0x43, 0xB5, 0xFF}}},
	{{{-186, -6, -126},0, {168, -4},{0xBB, 0xB0, 0xBA, 0xFF}}},
	{{{-213, 219, -144},0, {-8, -2},{0xB3, 0x43, 0xB5, 0xFF}}},
};

Gfx basket_Basket_mesh_tri_0[] = {
	gsSPVertex(basket_Basket_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 0, 3, 0),
	gsSP1Triangle(4, 5, 0, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(basket_Basket_mesh_vtx_0 + 16, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 11, 8, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSPEndDisplayList(),
};Vtx basket_Basket_mesh_vtx_1[8] = {
	{{{22, 383, -145},0, {358, 440},{0x0, 0xA6, 0x5A, 0xFF}}},
	{{{-22, 152, -145},0, {301, 470},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{22, 152, -145},0, {301, 440},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-22, 383, -145},0, {358, 470},{0x0, 0xA6, 0x5A, 0xFF}}},
	{{{-22, 383, 145},0, {429, 470},{0x0, 0xA6, 0xA6, 0xFF}}},
	{{{22, 383, 145},0, {429, 440},{0x0, 0xA6, 0xA6, 0xFF}}},
	{{{-22, 152, 145},0, {485, 470},{0x0, 0x0, 0x81, 0xFF}}},
	{{{22, 152, 145},0, {485, 440},{0x0, 0x0, 0x81, 0xFF}}},
};

Gfx basket_Basket_mesh_tri_1[] = {
	gsSPVertex(basket_Basket_mesh_vtx_1 + 0, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 0, 5, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSPEndDisplayList(),
};


Gfx mat_basket_basket_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, basket_basket_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 4),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 8, basket_basket_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 1, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 30, 60),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 1, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 60),
	gsSPSetLights1(basket_basket_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_basket_basket_f3d[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};


Gfx mat_basket_basket_f3d_002[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, basket_basket_ci4_pal_rgba16_copy),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 4),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 8, basket_basket_ci4_copy),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 1, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 30, 60),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 1, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 60),
	gsSPSetLights1(basket_basket_f3d_002_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_basket_basket_f3d_002[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};


Gfx basket_Basket_mesh[] = {
	gsSPDisplayList(mat_basket_basket_f3d),
	gsSPDisplayList(basket_Basket_mesh_tri_0),
	gsSPDisplayList(mat_revert_basket_basket_f3d),
	gsSPDisplayList(mat_basket_basket_f3d_002),
	gsSPDisplayList(basket_Basket_mesh_tri_1),
	gsSPDisplayList(mat_revert_basket_basket_f3d_002),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};




#include <ultra64.h>

Lights1 chair_Table_f3d_lights = gdSPDefLights1(
	0x29, 0x1D, 0x10,
	0x53, 0x3B, 0x20, 0x28, 0x28, 0x28);

Vtx chair_Chair_mesh_vtx_0[98] = {
	{{{-150, 12, 209},0, {368, 112},{0x27, 0xC6, 0x6A, 0xFF}}},
	{{{-190, 498, 206},0, {624, 116},{0xFC, 0x6B, 0x44, 0xFF}}},
	{{{-192, 12, 209},0, {368, -16},{0xA7, 0x1, 0x5A, 0xFF}}},
	{{{-150, 12, 209},0, {265, 375},{0x27, 0xC6, 0x6A, 0xFF}}},
	{{{181, 12, -209},0, {272, 375},{0xE2, 0xC7, 0x92, 0xFF}}},
	{{{181, 12, 209},0, {272, 368},{0xE2, 0xC7, 0x6E, 0xFF}}},
	{{{-150, 12, -209},0, {368, 112},{0x27, 0xC6, 0x96, 0xFF}}},
	{{{-192, 12, -209},0, {368, -16},{0xA7, 0x1, 0xA6, 0xFF}}},
	{{{-190, 498, -206},0, {624, 116},{0xFC, 0x6B, 0xBC, 0xFF}}},
	{{{-192, 12, -164},0, {262, 379},{0x9A, 0xBB, 0x1F, 0xFF}}},
	{{{-150, 12, -209},0, {272, 368},{0x27, 0xC6, 0x96, 0xFF}}},
	{{{181, 12, -209},0, {271, 376},{0xE2, 0xC7, 0x92, 0xFF}}},
	{{{-150, 12, 209},0, {272, 368},{0x27, 0xC6, 0x6A, 0xFF}}},
	{{{-150, 12, -209},0, {368, 176},{0x27, 0xC6, 0x96, 0xFF}}},
	{{{-151, 28, -207},0, {556, 115},{0x6C, 0x35, 0xD7, 0xFF}}},
	{{{-190, 498, 206},0, {748, 372},{0xFC, 0x6B, 0x44, 0xFF}}},
	{{{-151, 28, 207},0, {782, 372},{0x6C, 0x35, 0x29, 0xFF}}},
	{{{-151, 28, -207},0, {779, 341},{0x6C, 0x35, 0xD7, 0xFF}}},
	{{{-151, 28, -207},0, {748, 341},{0x6C, 0x35, 0xD7, 0xFF}}},
	{{{-190, 498, -206},0, {790, 329},{0xFC, 0x6B, 0xBC, 0xFF}}},
	{{{-150, 12, 209},0, {240, 368},{0x27, 0xC6, 0x6A, 0xFF}}},
	{{{-192, 12, 164},0, {176, 432},{0x9A, 0xBB, 0xE1, 0xFF}}},
	{{{-192, 12, -164},0, {229, 390},{0x9A, 0xBB, 0x1F, 0xFF}}},
	{{{-150, -387, -209},0, {368, 48},{0x74, 0x0, 0xCD, 0xFF}}},
	{{{-192, -387, -209},0, {368, -16},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-192, 12, -209},0, {368, -16},{0xA7, 0x1, 0xA6, 0xFF}}},
	{{{-150, 12, -209},0, {368, 48},{0x27, 0xC6, 0x96, 0xFF}}},
	{{{-192, -387, 164},0, {176, 304},{0xD1, 0x0, 0x8A, 0xFF}}},
	{{{-192, 12, 164},0, {176, 304},{0x9A, 0xBB, 0xE1, 0xFF}}},
	{{{-150, 12, 209},0, {176, 240},{0x27, 0xC6, 0x6A, 0xFF}}},
	{{{-150, -387, 209},0, {176, 240},{0x74, 0x0, 0x33, 0xFF}}},
	{{{181, -387, -209},0, {368, 48},{0x8C, 0x1, 0xCD, 0xFF}}},
	{{{221, 34, -206},0, {368, -16},{0x49, 0x4B, 0xB9, 0xFF}}},
	{{{223, -387, -209},0, {368, -16},{0x59, 0x1, 0xA6, 0xFF}}},
	{{{181, 12, -209},0, {368, 48},{0xE2, 0xC7, 0x92, 0xFF}}},
	{{{223, -387, 164},0, {176, 304},{0x2F, 0x0, 0x8A, 0xFF}}},
	{{{181, 12, 209},0, {176, 240},{0xE2, 0xC7, 0x6E, 0xFF}}},
	{{{223, 12, 164},0, {176, 304},{0x69, 0xBF, 0xE2, 0xFF}}},
	{{{181, -387, 209},0, {176, 240},{0x8C, 0x1, 0x33, 0xFF}}},
	{{{-150, -387, 209},0, {368, 48},{0x74, 0x0, 0x33, 0xFF}}},
	{{{-192, 12, 209},0, {368, -16},{0xA7, 0x1, 0x5A, 0xFF}}},
	{{{-192, -387, 209},0, {368, -16},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-150, 12, 209},0, {368, 48},{0x27, 0xC6, 0x6A, 0xFF}}},
	{{{223, -387, 209},0, {368, 1008},{0x59, 0x1, 0x5A, 0xFF}}},
	{{{223, 12, 164},0, {368, 944},{0x69, 0xBF, 0xE2, 0xFF}}},
	{{{221, 34, 206},0, {368, 1008},{0x49, 0x4B, 0x47, 0xFF}}},
	{{{223, -387, 164},0, {368, 944},{0x2F, 0x0, 0x8A, 0xFF}}},
	{{{181, -387, 209},0, {368, 48},{0x8C, 0x1, 0x33, 0xFF}}},
	{{{221, 34, 206},0, {368, -16},{0x49, 0x4B, 0x47, 0xFF}}},
	{{{181, 12, 209},0, {368, 48},{0xE2, 0xC7, 0x6E, 0xFF}}},
	{{{223, -387, 209},0, {368, -16},{0x59, 0x1, 0x5A, 0xFF}}},
	{{{-192, -387, -164},0, {176, 304},{0xD1, 0x0, 0x76, 0xFF}}},
	{{{-150, 12, -209},0, {176, 240},{0x27, 0xC6, 0x96, 0xFF}}},
	{{{-192, 12, -164},0, {176, 304},{0x9A, 0xBB, 0x1F, 0xFF}}},
	{{{-150, -387, -209},0, {176, 240},{0x74, 0x0, 0xCD, 0xFF}}},
	{{{223, -387, -164},0, {176, 304},{0x2F, 0x0, 0x76, 0xFF}}},
	{{{181, 12, -209},0, {176, 240},{0xE2, 0xC7, 0x92, 0xFF}}},
	{{{181, -387, -209},0, {176, 240},{0x8C, 0x1, 0xCD, 0xFF}}},
	{{{223, 12, -164},0, {176, 304},{0x69, 0xBF, 0x1E, 0xFF}}},
	{{{-150, 12, 209},0, {368, 161},{0x27, 0xC6, 0x6A, 0xFF}}},
	{{{181, 12, 209},0, {368, 176},{0xE2, 0xC7, 0x6E, 0xFF}}},
	{{{221, 34, 206},0, {624, 116},{0x49, 0x4B, 0x47, 0xFF}}},
	{{{-151, 28, 207},0, {556, 115},{0x6C, 0x35, 0x29, 0xFF}}},
	{{{-150, 12, 209},0, {368, 161},{0x27, 0xC6, 0x6A, 0xFF}}},
	{{{-151, 28, 207},0, {556, 115},{0x6C, 0x35, 0x29, 0xFF}}},
	{{{-190, 498, 206},0, {624, 116},{0xFC, 0x6B, 0x44, 0xFF}}},
	{{{-190, 498, -206},0, {624, 1008},{0xFC, 0x6B, 0xBC, 0xFF}}},
	{{{-192, 12, -209},0, {368, 1008},{0xA7, 0x1, 0xA6, 0xFF}}},
	{{{-192, 12, -164},0, {368, 944},{0x9A, 0xBB, 0x1F, 0xFF}}},
	{{{-192, -387, -209},0, {368, 1008},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-192, -387, -164},0, {368, 944},{0xD1, 0x0, 0x76, 0xFF}}},
	{{{-192, -387, 209},0, {368, 1008},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-192, 12, 164},0, {368, 944},{0x9A, 0xBB, 0xE1, 0xFF}}},
	{{{-192, -387, 164},0, {368, 944},{0xD1, 0x0, 0x8A, 0xFF}}},
	{{{-192, 12, 209},0, {368, 1008},{0xA7, 0x1, 0x5A, 0xFF}}},
	{{{-190, 498, 206},0, {624, 1008},{0xFC, 0x6B, 0x44, 0xFF}}},
	{{{-190, 498, -206},0, {624, 966},{0xFC, 0x6B, 0xBC, 0xFF}}},
	{{{-192, 12, -164},0, {438, 926},{0x9A, 0xBB, 0x1F, 0xFF}}},
	{{{-150, 12, -209},0, {368, 161},{0x27, 0xC6, 0x96, 0xFF}}},
	{{{-151, 28, -207},0, {556, 115},{0x6C, 0x35, 0xD7, 0xFF}}},
	{{{221, 34, -206},0, {624, 116},{0x49, 0x4B, 0xB9, 0xFF}}},
	{{{181, 12, -209},0, {368, 176},{0xE2, 0xC7, 0x92, 0xFF}}},
	{{{223, -387, -209},0, {368, 1008},{0x59, 0x1, 0xA6, 0xFF}}},
	{{{221, 34, -206},0, {368, 1008},{0x49, 0x4B, 0xB9, 0xFF}}},
	{{{223, 12, -164},0, {368, 944},{0x69, 0xBF, 0x1E, 0xFF}}},
	{{{223, -387, -164},0, {368, 944},{0x2F, 0x0, 0x76, 0xFF}}},
	{{{221, 34, 206},0, {748, 372},{0x49, 0x4B, 0x47, 0xFF}}},
	{{{221, 34, -206},0, {779, 341},{0x49, 0x4B, 0xB9, 0xFF}}},
	{{{-151, 28, -207},0, {782, 341},{0x6C, 0x35, 0xD7, 0xFF}}},
	{{{-151, 28, 207},0, {782, 372},{0x6C, 0x35, 0x29, 0xFF}}},
	{{{181, 12, 209},0, {240, 368},{0xE2, 0xC7, 0x6E, 0xFF}}},
	{{{181, 12, -209},0, {229, 390},{0xE2, 0xC7, 0x92, 0xFF}}},
	{{{223, 12, -164},0, {185, 432},{0x69, 0xBF, 0x1E, 0xFF}}},
	{{{223, 12, 164},0, {176, 432},{0x69, 0xBF, 0xE2, 0xFF}}},
	{{{223, 12, 164},0, {368, 944},{0x69, 0xBF, 0xE2, 0xFF}}},
	{{{223, 12, -164},0, {438, 926},{0x69, 0xBF, 0x1E, 0xFF}}},
	{{{221, 34, -206},0, {624, 966},{0x49, 0x4B, 0xB9, 0xFF}}},
	{{{221, 34, 206},0, {624, 1008},{0x49, 0x4B, 0x47, 0xFF}}},
};

Gfx chair_Chair_mesh_tri_0[] = {
	gsSPVertex(chair_Chair_mesh_vtx_0 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(9, 4, 12, 0),
	gsSP1Triangle(13, 8, 14, 0),
	gsSPVertex(chair_Chair_mesh_vtx_0 + 15, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 4, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(chair_Chair_mesh_vtx_0 + 31, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(chair_Chair_mesh_vtx_0 + 47, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(chair_Chair_mesh_vtx_0 + 63, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 9, 11, 0),
	gsSP1Triangle(9, 12, 13, 0),
	gsSP1Triangle(9, 13, 14, 0),
	gsSPVertex(chair_Chair_mesh_vtx_0 + 78, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(chair_Chair_mesh_vtx_0 + 94, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_chair_Table_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(chair_Table_f3d_lights),
	gsSPEndDisplayList(),
};


Gfx chair_Chair_mesh[] = {
	gsSPDisplayList(mat_chair_Table_f3d),
	gsSPDisplayList(chair_Chair_mesh_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};




#include <ultra64.h>

Lights1 apple_apple_lights = gdSPDefLights1(
	0x46, 0x13, 0xE,
	0x8D, 0x26, 0x1C, 0x28, 0x28, 0x28);

Lights1 apple_stem_lights = gdSPDefLights1(
	0x25, 0x10, 0x9,
	0x4B, 0x20, 0x13, 0x28, 0x28, 0x28);

Vtx apple_Apple_mesh_vtx_0[51] = {
	{{{-111, 286, -157},0, {312, 686},{0xC2, 0x42, 0xA6, 0xFF}}},
	{{{-183, 286, 57},0, {126, 686},{0x96, 0x3C, 0x24, 0xFF}}},
	{{{-72, 344, 0},0, {170, 605},{0xE8, 0x7D, 0x1, 0xFF}}},
	{{{182, 286, 62},0, {685, 686},{0x6B, 0x3A, 0x25, 0xFF}}},
	{{{115, 286, -154},0, {499, 686},{0x44, 0x3B, 0xA6, 0xFF}}},
	{{{58, 344, -42},0, {543, 605},{0x13, 0x7D, 0xF0, 0xFF}}},
	{{{0, 43, 0},0, {822, 1008},{0xF7, 0x81, 0x0, 0xFF}}},
	{{{118, -7, 0},0, {775, 927},{0x35, 0x8C, 0x0, 0xFF}}},
	{{{-35, -2, 106},0, {868, 927},{0xF2, 0x8B, 0x2F, 0xFF}}},
	{{{-1, 68, 190},0, {868, 847},{0x2, 0xD0, 0x76, 0xFF}}},
	{{{180, 68, 59},0, {682, 847},{0x6F, 0xD2, 0x29, 0xFF}}},
	{{{-2, 286, 192},0, {822, 766},{0xFE, 0x3B, 0x71, 0xFF}}},
	{{{182, 286, 62},0, {636, 766},{0x6B, 0x3A, 0x25, 0xFF}}},
	{{{112, 68, -153},0, {495, 847},{0x47, 0xCF, 0xA2, 0xFF}}},
	{{{118, -7, 0},0, {636, 927},{0x35, 0x8C, 0x0, 0xFF}}},
	{{{115, 286, -154},0, {449, 766},{0x44, 0x3B, 0xA6, 0xFF}}},
	{{{112, 68, -153},0, {495, 847},{0x47, 0xCF, 0xA2, 0xFF}}},
	{{{-123, 102, -171},0, {309, 820},{0xB8, 0xDE, 0x9D, 0xFF}}},
	{{{115, 286, -154},0, {449, 766},{0x44, 0x3B, 0xA6, 0xFF}}},
	{{{-35, -2, -106},0, {403, 927},{0xF2, 0x8C, 0xCE, 0xFF}}},
	{{{118, -7, 0},0, {496, 927},{0x35, 0x8C, 0x0, 0xFF}}},
	{{{0, 43, 0},0, {449, 1008},{0xF7, 0x81, 0x0, 0xFF}}},
	{{{-111, 286, -157},0, {312, 686},{0xC2, 0x42, 0xA6, 0xFF}}},
	{{{-183, 286, 57},0, {170, 766},{0x96, 0x3C, 0x24, 0xFF}}},
	{{{-181, 68, 58},0, {123, 847},{0x90, 0xD2, 0x27, 0xFF}}},
	{{{-112, -2, 0},0, {217, 927},{0xD1, 0x8A, 0xF9, 0xFF}}},
	{{{-35, -2, -106},0, {310, 927},{0xF2, 0x8C, 0xCE, 0xFF}}},
	{{{0, 43, 0},0, {263, 1008},{0xF7, 0x81, 0x0, 0xFF}}},
	{{{-2, 286, 192},0, {31, 766},{0xFE, 0x3B, 0x71, 0xFF}}},
	{{{-1, 68, 190},0, {-16, 847},{0x2, 0xD0, 0x76, 0xFF}}},
	{{{-35, -2, 106},0, {31, 927},{0xF2, 0x8B, 0x2F, 0xFF}}},
	{{{-112, -2, 0},0, {124, 927},{0xD1, 0x8A, 0xF9, 0xFF}}},
	{{{0, 43, 0},0, {77, 1008},{0xF7, 0x81, 0x0, 0xFF}}},
	{{{-35, -2, 106},0, {31, 927},{0xF2, 0x8B, 0x2F, 0xFF}}},
	{{{-112, -2, 0},0, {124, 927},{0xD1, 0x8A, 0xF9, 0xFF}}},
	{{{-2, 286, 192},0, {871, 686},{0xFE, 0x3B, 0x71, 0xFF}}},
	{{{182, 286, 62},0, {685, 686},{0x6B, 0x3A, 0x25, 0xFF}}},
	{{{21, 343, 65},0, {775, 605},{0x5, 0x7D, 0x14, 0xFF}}},
	{{{58, 344, -42},0, {682, 605},{0x13, 0x7D, 0xF0, 0xFF}}},
	{{{0, 299, 0},0, {729, 524},{0x5, 0x7E, 0x10, 0xFF}}},
	{{{-183, 286, 57},0, {1008, 686},{0x96, 0x3C, 0x24, 0xFF}}},
	{{{-72, 344, 0},0, {961, 605},{0xE8, 0x7D, 0x1, 0xFF}}},
	{{{21, 343, 65},0, {868, 605},{0x5, 0x7D, 0x14, 0xFF}}},
	{{{0, 299, 0},0, {915, 524},{0x5, 0x7E, 0x10, 0xFF}}},
	{{{115, 286, -154},0, {499, 686},{0x44, 0x3B, 0xA6, 0xFF}}},
	{{{-111, 286, -157},0, {312, 686},{0xC2, 0x42, 0xA6, 0xFF}}},
	{{{58, 344, -42},0, {403, 605},{0x13, 0x7D, 0xF0, 0xFF}}},
	{{{-72, 344, 0},0, {310, 605},{0xE8, 0x7D, 0x1, 0xFF}}},
	{{{58, 344, -42},0, {403, 605},{0x13, 0x7D, 0xF0, 0xFF}}},
	{{{-72, 344, 0},0, {310, 605},{0xE8, 0x7D, 0x1, 0xFF}}},
	{{{0, 299, 0},0, {356, 524},{0x5, 0x7E, 0x10, 0xFF}}},
};

Gfx apple_Apple_mesh_tri_0[] = {
	gsSPVertex(apple_Apple_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(7, 10, 9, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(10, 13, 12, 0),
	gsSP1Triangle(10, 14, 13, 0),
	gsSP1Triangle(13, 15, 12, 0),
	gsSPVertex(apple_Apple_mesh_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(2, 1, 6, 0),
	gsSP1Triangle(1, 7, 6, 0),
	gsSP1Triangle(1, 8, 7, 0),
	gsSP1Triangle(9, 8, 1, 0),
	gsSP1Triangle(10, 9, 1, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(7, 8, 12, 0),
	gsSP1Triangle(8, 13, 12, 0),
	gsSP1Triangle(14, 13, 8, 0),
	gsSP1Triangle(15, 14, 8, 0),
	gsSPVertex(apple_Apple_mesh_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(8, 3, 9, 0),
	gsSP1Triangle(9, 3, 10, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(apple_Apple_mesh_vtx_0 + 48, 3, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSPEndDisplayList(),
};Vtx apple_Apple_mesh_vtx_1[4] = {
	{{{8, 418, 1},0, {-16, 1008},{0x8B, 0x9, 0xCF, 0xFF}}},
	{{{0, 299, 0},0, {-16, 1008},{0xF3, 0x82, 0xFA, 0xFF}}},
	{{{12, 412, 21},0, {-16, 1008},{0xF3, 0xEA, 0x7C, 0xFF}}},
	{{{15, 417, -4},0, {-16, 1008},{0x26, 0xF7, 0x87, 0xFF}}},
};

Gfx apple_Apple_mesh_tri_1[] = {
	gsSPVertex(apple_Apple_mesh_vtx_1 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_apple_apple[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(apple_apple_lights),
	gsSPEndDisplayList(),
};


Gfx mat_apple_stem[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(apple_stem_lights),
	gsSPEndDisplayList(),
};


Gfx apple_Apple_mesh[] = {
	gsSPDisplayList(mat_apple_apple),
	gsSPDisplayList(apple_Apple_mesh_tri_0),
	gsSPDisplayList(mat_apple_stem),
	gsSPDisplayList(apple_Apple_mesh_tri_1),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};




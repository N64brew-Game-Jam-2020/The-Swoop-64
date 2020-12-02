#include <ultra64.h>

Lights1 lunchtable_metal_f3d_lights = gdSPDefLights1(
	0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Lights1 lunchtable_plastic_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 lunchtable_tableleg_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx lunchtable_tableleg_ia8_aligner[] = {gsSPEndDisplayList()};
u8 lunchtable_tableleg_ia8[] = {
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 
	0xF, 0xF, 0xF, 0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 0xF, 
	0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 0xF, 0xF, 
	0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0xF, 0xF, 0xF, 0xF, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 
	0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0xF, 0xF, 0xF, 0xF, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 
	0xF, 0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 
	0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 
	0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 
	0xF, 0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0xF, 0xF, 0x0, 0x0, 0xF, 0xF, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 
	0xF, 0x0, 0x0, 0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 
	0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0xF, 0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 
	0xF, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0xF, 0xF, 0xF, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 
	0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 
	0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0xF, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 
	0xF, 0xF, 0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0x0, 0x0, 0x0, 0x0, 0x0, 0xF, 0xF, 0xF, 0xF, 
	0xF, 0xF, 0x0, 0x0, 0x0, 0x0, 0x0, 
};

Vtx lunchtable_Table_mesh_vtx_0[34] = {
	{{{0, 92, -213},0, {1008, 496},{0x0, 0xB2, 0x9B, 0xFF}}},
	{{{0, 101, -213},0, {1008, -16},{0x0, 0x4E, 0x9B, 0xFF}}},
	{{{184, 101, -106},0, {837, -16},{0x57, 0x4D, 0xCD, 0xFF}}},
	{{{184, 92, -106},0, {837, 496},{0x57, 0xB3, 0xCD, 0xFF}}},
	{{{184, 101, 106},0, {667, -16},{0x57, 0x4D, 0x33, 0xFF}}},
	{{{184, 92, 106},0, {667, 496},{0x57, 0xB3, 0x33, 0xFF}}},
	{{{0, 101, 213},0, {496, -16},{0x0, 0x4E, 0x65, 0xFF}}},
	{{{0, 92, 213},0, {496, 496},{0x0, 0xB2, 0x65, 0xFF}}},
	{{{-184, 101, 106},0, {325, -16},{0xA9, 0x4D, 0x33, 0xFF}}},
	{{{-184, 92, 106},0, {325, 496},{0xA9, 0xB3, 0x33, 0xFF}}},
	{{{-184, 101, -106},0, {155, -16},{0xA9, 0x4D, 0xCD, 0xFF}}},
	{{{-184, 92, -106},0, {155, 496},{0xA9, 0xB3, 0xCD, 0xFF}}},
	{{{0, 101, -213},0, {-16, -16},{0x0, 0x4E, 0x9B, 0xFF}}},
	{{{0, 92, -213},0, {-16, 496},{0x0, 0xB2, 0x9B, 0xFF}}},
	{{{0, 93, -17},0, {1008, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, 107, -17},0, {1008, -16},{0x0, 0x4E, 0x9B, 0xFF}}},
	{{{15, 107, -9},0, {837, -16},{0x57, 0x4D, 0xCD, 0xFF}}},
	{{{15, 93, -9},0, {837, 496},{0x6E, 0x0, 0xC1, 0xFF}}},
	{{{15, 107, 9},0, {667, -16},{0x57, 0x4D, 0x33, 0xFF}}},
	{{{15, 93, 9},0, {667, 496},{0x6E, 0x0, 0x3F, 0xFF}}},
	{{{0, 107, 17},0, {496, -16},{0x0, 0x4E, 0x65, 0xFF}}},
	{{{0, 93, 17},0, {496, 496},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-15, 107, 9},0, {325, -16},{0xA9, 0x4D, 0x33, 0xFF}}},
	{{{-15, 93, 9},0, {325, 496},{0x92, 0x0, 0x3F, 0xFF}}},
	{{{-15, 107, -9},0, {155, -16},{0xA9, 0x4D, 0xCD, 0xFF}}},
	{{{-15, 93, -9},0, {155, 496},{0x92, 0x0, 0xC1, 0xFF}}},
	{{{0, 107, -17},0, {-16, -16},{0x0, 0x4E, 0x9B, 0xFF}}},
	{{{0, 93, -17},0, {-16, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{15, 107, 9},0, {453, 875},{0x57, 0x4D, 0x33, 0xFF}}},
	{{{15, 107, -9},0, {453, 629},{0x57, 0x4D, 0xCD, 0xFF}}},
	{{{0, 107, -17},0, {240, 506},{0x0, 0x4E, 0x9B, 0xFF}}},
	{{{-15, 107, 9},0, {27, 875},{0xA9, 0x4D, 0x33, 0xFF}}},
	{{{-15, 107, -9},0, {27, 629},{0xA9, 0x4D, 0xCD, 0xFF}}},
	{{{0, 107, 17},0, {240, 998},{0x0, 0x4E, 0x65, 0xFF}}},
};

Gfx lunchtable_Table_mesh_tri_0[] = {
	gsSPVertex(lunchtable_Table_mesh_vtx_0 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSPVertex(lunchtable_Table_mesh_vtx_0 + 14, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(11, 10, 12, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSPVertex(lunchtable_Table_mesh_vtx_0 + 28, 6, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(3, 5, 0, 0),
	gsSPEndDisplayList(),
};Vtx lunchtable_Table_mesh_vtx_1[12] = {
	{{{184, 101, 106},0, {453, 875},{0x57, 0x4D, 0x33, 0xFF}}},
	{{{184, 101, -106},0, {453, 629},{0x57, 0x4D, 0xCD, 0xFF}}},
	{{{0, 101, -213},0, {240, 506},{0x0, 0x4E, 0x9B, 0xFF}}},
	{{{-184, 101, 106},0, {27, 875},{0xA9, 0x4D, 0x33, 0xFF}}},
	{{{-184, 101, -106},0, {27, 629},{0xA9, 0x4D, 0xCD, 0xFF}}},
	{{{0, 101, 213},0, {240, 998},{0x0, 0x4E, 0x65, 0xFF}}},
	{{{-184, 92, -106},0, {539, 629},{0xA9, 0xB3, 0xCD, 0xFF}}},
	{{{0, 92, -213},0, {752, 506},{0x0, 0xB2, 0x9B, 0xFF}}},
	{{{184, 92, -106},0, {965, 629},{0x57, 0xB3, 0xCD, 0xFF}}},
	{{{0, 92, 213},0, {752, 998},{0x0, 0xB2, 0x65, 0xFF}}},
	{{{184, 92, 106},0, {965, 875},{0x57, 0xB3, 0x33, 0xFF}}},
	{{{-184, 92, 106},0, {539, 875},{0xA9, 0xB3, 0x33, 0xFF}}},
};

Gfx lunchtable_Table_mesh_tri_1[] = {
	gsSPVertex(lunchtable_Table_mesh_vtx_1 + 0, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(3, 5, 0, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(8, 9, 6, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(9, 11, 6, 0),
	gsSPEndDisplayList(),
};Vtx lunchtable_Table_mesh_vtx_2[16] = {
	{{{-67, -115, 2},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{67, -115, 2},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{67, 89, 2},0, {-16, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-67, 89, 2},0, {1008, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-67, -115, -2},0, {1008, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-67, 89, -2},0, {1008, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{67, 89, -2},0, {-16, -16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{67, -115, -2},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{2, -115, 67},0, {1008, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{2, -115, -67},0, {-16, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{2, 89, -67},0, {-16, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{2, 89, 67},0, {1008, -16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-2, -115, 67},0, {1008, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-2, 89, 67},0, {1008, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-2, 89, -67},0, {-16, -16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-2, -115, -67},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
};

Gfx lunchtable_Table_mesh_tri_2[] = {
	gsSPVertex(lunchtable_Table_mesh_vtx_2 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPEndDisplayList(),
};


Gfx mat_lunchtable_metal_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(lunchtable_metal_f3d_lights),
	gsSPEndDisplayList(),
};


Gfx mat_lunchtable_plastic_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(lunchtable_plastic_f3d_lights),
	gsSPEndDisplayList(),
};


Gfx mat_lunchtable_tableleg_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b, 32, lunchtable_tableleg_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(lunchtable_tableleg_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_lunchtable_tableleg_f3d[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};


Gfx lunchtable_Table_mesh[] = {
	gsSPDisplayList(mat_lunchtable_metal_f3d),
	gsSPDisplayList(lunchtable_Table_mesh_tri_0),
	gsSPDisplayList(mat_lunchtable_plastic_f3d),
	gsSPDisplayList(lunchtable_Table_mesh_tri_1),
	gsSPDisplayList(mat_lunchtable_tableleg_f3d),
	gsSPDisplayList(lunchtable_Table_mesh_tri_2),
	gsSPDisplayList(mat_revert_lunchtable_tableleg_f3d),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};




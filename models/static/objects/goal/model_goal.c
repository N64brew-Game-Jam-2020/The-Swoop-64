#include <ultra64.h>

Lights1 goal_goal_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 goal_net_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx goal_net_ia8_aligner[] = {gsSPEndDisplayList()};
u8 goal_net_ia8[] = {
	0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 
	0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 
	0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 
	0x0, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 
	0xFF, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 
	0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0xFF, 
	0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 0x0, 0xFF, 
	0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 
	0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 
	0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 
	0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 0xFF, 
	0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 
	0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 
	0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0x0, 0xFF, 0x0, 
	0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0xFF, 
	0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 0xFF, 
	0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 
	0x0, 0x0, 0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 0xFF, 
	0x0, 0x0, 0x0, 0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 
	0xFF, 0x0, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 0xFF, 
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 
	0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0x0, 0xFF, 0x0, 
	0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 
	0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 
	0x0, 0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 0xFF, 
	0x0, 0x0, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 
	0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 
	0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0x0, 
	0xFF, 0x0, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 
	0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 
	0xFF, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 
	0x0, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0x0, 
	0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 0xFF, 0x0, 0x0, 
	0x0, 0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 0xFF, 0xFF, 
	0x0, 0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 0xFF, 
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 
	0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0xFF, 
	0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0x0, 
	0xFF, 0x0, 0x0, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 
	0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 
	0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 
	0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 
	0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 
	0x0, 0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 0xFF, 0xFF, 
	0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 
	0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0xFF, 
	0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 0xFF, 
	0x0, 0x0, 0x0, 0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 
	0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 
	0x0, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 0xFF, 
	0x0, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 
	0x0, 0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 0xFF, 0xFF, 
	0x0, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0x0, 
	0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0x0, 
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0xFF, 
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 
	0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 
	0x0, 0x0, 0x0, 0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 
	0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 
	0xFF, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 
	0xFF, 0x0, 0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 
	0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0x0, 0xFF, 
	0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 0xFF, 0x0, 0x0, 
	0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0xFF, 
	0x0, 0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 0xFF, 
	0x0, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 
	0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0x0, 
	0x0, 0x0, 0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 0x0, 
	0xFF, 0x0, 0x0, 0x0, 0x0, 0xFF, 0x0, 0x0, 0x0, 
	0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 
	0xFF, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 
	0xFF, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0xFF, 0x0, 0x0, 
	0xFF, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 
	0xFF, 0xFF, 0x0, 0x0, 0x0, 0x0, 0xFF, 0x0, 0x0, 
	0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 
	0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 
	0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0x0, 
	0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 
	0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 0xFF, 
	0x0, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 
	0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 
	0xFF, 0x0, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 
	0x0, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0x0, 
	0xFF, 0x0, 0x0, 0x0, 0x0, 0xFF, 0x0, 0x0, 0x0, 
	0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 0xFF, 0x0, 0x0, 
	0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0x0, 0xFF, 
	0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 
	0xFF, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 
	0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 0xFF, 
	0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 
	0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 
	0xFF, 0xFF, 0x0, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 
	0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 
	0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 0x0, 
	0xFF, 0xFF, 0x0, 0x0, 0x0, 0xFF, 0xFF, 0x0, 0x0, 
	0x0, 0xFF, 0xFF, 0xFF, 0x0, 0x0, 0xFF, 0xFF, 0x0, 
	0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 0xFF, 
	0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 0xFF, 0x0, 
	0xFF, 0x0, 0x0, 0xFF, 0x0, 0xFF, 0x0, 0x0, 0x0, 
	0xFF, 0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 0xFF, 0x0, 
	0x0, 0x0, 0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 0xFF, 
	0x0, 0x0, 0x0, 0x0, 0xFF, 0x0, 0x0, 0x0, 0x0, 
	0xFF, 0x0, 0x0, 0x0, 0x0, 0x0, 0xFF, 
};

Vtx goal_Goal_mesh_vtx_0[176] = {
	{{{-93, 61, 31},0, {624, 1008},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{-101, 61, 31},0, {624, 1008},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{-101, 53, 31},0, {624, 752},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-93, 53, 31},0, {624, 752},{0x27, 0xD9, 0x73, 0xFF}}},
	{{{-93, -41, 31},0, {624, 752},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-101, -41, 31},0, {624, 752},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-93, -46, 31},0, {624, 752},{0x49, 0xB7, 0x49, 0xFF}}},
	{{{-101, -46, 31},0, {624, 752},{0xB7, 0xB7, 0x49, 0xFF}}},
	{{{-101, -46, 27},0, {624, 496},{0xB7, 0xB7, 0xB7, 0xFF}}},
	{{{-93, -46, 27},0, {624, 496},{0x49, 0xB7, 0xB7, 0xFF}}},
	{{{-93, -41, 27},0, {624, 496},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-101, -41, 27},0, {624, 496},{0xC2, 0x0, 0x91, 0xFF}}},
	{{{-101, -46, 31},0, {880, 496},{0xB7, 0xB7, 0x49, 0xFF}}},
	{{{-101, -41, 31},0, {880, 496},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-93, 53, 27},0, {624, 496},{0x5F, 0xB8, 0xD4, 0xFF}}},
	{{{0, 53, 27},0, {496, 496},{0x0, 0xA6, 0xA6, 0xFF}}},
	{{{-93, 53, 27},0, {624, 496},{0x5F, 0xB8, 0xD4, 0xFF}}},
	{{{0, 61, 27},0, {496, 240},{0x0, 0x46, 0x96, 0xFF}}},
	{{{0, 53, 27},0, {496, 496},{0x0, 0xA6, 0xA6, 0xFF}}},
	{{{-93, 61, 27},0, {624, 240},{0x1D, 0x6F, 0xCA, 0xFF}}},
	{{{-85, 17, -27},0, {624, 240},{0x43, 0x59, 0x3D, 0xFF}}},
	{{{-85, 8, -27},0, {624, 496},{0x38, 0xC2, 0x60, 0xFF}}},
	{{{-92, 8, -27},0, {624, 496},{0xC2, 0xD3, 0x65, 0xFF}}},
	{{{-101, 53, 27},0, {624, 496},{0x87, 0xE2, 0xE9, 0xFF}}},
	{{{-101, -41, 27},0, {624, 496},{0xC2, 0x0, 0x91, 0xFF}}},
	{{{-92, 17, -27},0, {624, 240},{0x9F, 0x49, 0xDB, 0xFF}}},
	{{{-101, 61, 27},0, {624, 240},{0xAE, 0x5A, 0xDC, 0xFF}}},
	{{{-101, 53, 31},0, {880, 496},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-101, -41, 31},0, {880, 496},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{-101, 61, 31},0, {880, 240},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{0, 61, 31},0, {496, 1008},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{-93, 61, 31},0, {624, 1008},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{-93, 53, 31},0, {624, 752},{0x27, 0xD9, 0x73, 0xFF}}},
	{{{0, 53, 31},0, {496, 752},{0x0, 0xA6, 0x5A, 0xFF}}},
	{{{0, 53, 27},0, {496, 496},{0x0, 0xA6, 0xA6, 0xFF}}},
	{{{93, 53, 31},0, {624, 752},{0xD9, 0xD9, 0x73, 0xFF}}},
	{{{93, 53, 27},0, {624, 496},{0xA1, 0xB8, 0xD4, 0xFF}}},
	{{{0, 61, 27},0, {496, 240},{0x0, 0x46, 0x96, 0xFF}}},
	{{{93, 61, 27},0, {624, 240},{0xE3, 0x6F, 0xCA, 0xFF}}},
	{{{0, 61, 31},0, {496, -16},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{-93, 61, 27},0, {624, 240},{0x1D, 0x6F, 0xCA, 0xFF}}},
	{{{-93, 61, 31},0, {624, -16},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{-101, 61, 31},0, {624, -16},{0xB7, 0x49, 0x49, 0xFF}}},
	{{{-101, 61, 27},0, {624, 240},{0xAE, 0x5A, 0xDC, 0xFF}}},
	{{{-92, 17, -27},0, {624, 240},{0x9F, 0x49, 0xDB, 0xFF}}},
	{{{-85, 17, -27},0, {624, 240},{0x43, 0x59, 0x3D, 0xFF}}},
	{{{-92, 17, -31},0, {624, -16},{0xB7, 0x49, 0xB7, 0xFF}}},
	{{{-92, 17, -27},0, {624, 240},{0x9F, 0x49, 0xDB, 0xFF}}},
	{{{-85, 17, -27},0, {624, 240},{0x43, 0x59, 0x3D, 0xFF}}},
	{{{-85, 17, -31},0, {624, -16},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{0, 17, -31},0, {496, -16},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{0, 17, -27},0, {496, 240},{0x0, 0x12, 0x7E, 0xFF}}},
	{{{-85, 8, -27},0, {624, 496},{0x38, 0xC2, 0x60, 0xFF}}},
	{{{0, 8, -27},0, {496, 496},{0x0, 0xA6, 0x5A, 0xFF}}},
	{{{-85, 8, -31},0, {624, 752},{0x34, 0xCC, 0x98, 0xFF}}},
	{{{-85, -41, -27},0, {624, 496},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-92, -41, -27},0, {624, 496},{0xCA, 0x0, 0x73, 0xFF}}},
	{{{-92, 8, -27},0, {624, 496},{0xC2, 0xD3, 0x65, 0xFF}}},
	{{{-92, -41, -31},0, {880, 496},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-92, 8, -31},0, {880, 496},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-92, 17, -31},0, {880, 240},{0xB7, 0x49, 0xB7, 0xFF}}},
	{{{-92, -46, -31},0, {880, 496},{0xB7, 0xB7, 0xB7, 0xFF}}},
	{{{-92, -46, -31},0, {880, 496},{0xB7, 0xB7, 0xB7, 0xFF}}},
	{{{-92, -46, -27},0, {624, 496},{0xB7, 0xB7, 0x49, 0xFF}}},
	{{{-92, -41, -27},0, {624, 496},{0xCA, 0x0, 0x73, 0xFF}}},
	{{{-85, -41, -27},0, {624, 496},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-85, -46, -27},0, {624, 496},{0x49, 0xB7, 0x49, 0xFF}}},
	{{{-85, -46, -31},0, {624, 752},{0x49, 0xB7, 0xB7, 0xFF}}},
	{{{-92, -46, -31},0, {624, 752},{0xB7, 0xB7, 0xB7, 0xFF}}},
	{{{-92, -41, -31},0, {624, 752},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-85, -41, -31},0, {624, 752},{0x72, 0x0, 0xC7, 0xFF}}},
	{{{-92, 8, -31},0, {624, 752},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{-85, 8, -31},0, {624, 752},{0x34, 0xCC, 0x98, 0xFF}}},
	{{{-85, 17, -31},0, {624, 1008},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{-92, 17, -31},0, {624, 1008},{0xB7, 0x49, 0xB7, 0xFF}}},
	{{{0, 17, -31},0, {496, 1008},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{0, 8, -31},0, {496, 752},{0x0, 0xA6, 0xA6, 0xFF}}},
	{{{85, 17, -31},0, {624, 1008},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{85, 17, -31},0, {624, 1008},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{85, 8, -31},0, {624, 752},{0xCC, 0xCC, 0x98, 0xFF}}},
	{{{0, 8, -31},0, {496, 752},{0x0, 0xA6, 0xA6, 0xFF}}},
	{{{92, 8, -31},0, {624, 752},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{92, 17, -31},0, {624, 1008},{0x49, 0x49, 0xB7, 0xFF}}},
	{{{92, -41, -31},0, {624, 752},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{85, -41, -31},0, {624, 752},{0x8E, 0x0, 0xC7, 0xFF}}},
	{{{85, -46, -31},0, {624, 752},{0xB7, 0xB7, 0xB7, 0xFF}}},
	{{{92, -46, -31},0, {624, 752},{0x49, 0xB7, 0xB7, 0xFF}}},
	{{{92, -46, -27},0, {624, 496},{0x49, 0xB7, 0x49, 0xFF}}},
	{{{85, -46, -27},0, {624, 496},{0xB7, 0xB7, 0x49, 0xFF}}},
	{{{85, -41, -27},0, {624, 496},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{92, -41, -27},0, {624, 496},{0x36, 0x0, 0x73, 0xFF}}},
	{{{92, -46, -31},0, {880, 496},{0x49, 0xB7, 0xB7, 0xFF}}},
	{{{92, -41, -31},0, {880, 496},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{92, 8, -27},0, {624, 496},{0x3E, 0xD3, 0x65, 0xFF}}},
	{{{92, 8, -27},0, {624, 496},{0x3E, 0xD3, 0x65, 0xFF}}},
	{{{92, -41, -31},0, {880, 496},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{92, 8, -31},0, {880, 496},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{92, 17, -27},0, {624, 240},{0x61, 0x49, 0xDB, 0xFF}}},
	{{{92, 17, -31},0, {880, 240},{0x49, 0x49, 0xB7, 0xFF}}},
	{{{101, 53, 27},0, {624, 496},{0x79, 0xE2, 0xE9, 0xFF}}},
	{{{101, 61, 27},0, {624, 240},{0x52, 0x5A, 0xDC, 0xFF}}},
	{{{93, 61, 27},0, {624, 240},{0xE3, 0x6F, 0xCA, 0xFF}}},
	{{{85, 17, -27},0, {624, 240},{0xBD, 0x59, 0x3D, 0xFF}}},
	{{{92, 17, -31},0, {624, -16},{0x49, 0x49, 0xB7, 0xFF}}},
	{{{85, 17, -31},0, {624, -16},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{0, 17, -31},0, {496, -16},{0x0, 0x5A, 0xA6, 0xFF}}},
	{{{0, 17, -27},0, {496, 240},{0x0, 0x12, 0x7E, 0xFF}}},
	{{{85, 8, -27},0, {624, 496},{0xC8, 0xC2, 0x60, 0xFF}}},
	{{{0, 8, -27},0, {496, 496},{0x0, 0xA6, 0x5A, 0xFF}}},
	{{{85, 8, -31},0, {624, 752},{0xCC, 0xCC, 0x98, 0xFF}}},
	{{{85, 8, -31},0, {624, 752},{0xCC, 0xCC, 0x98, 0xFF}}},
	{{{0, 8, -27},0, {496, 496},{0x0, 0xA6, 0x5A, 0xFF}}},
	{{{0, 8, -31},0, {496, 752},{0x0, 0xA6, 0xA6, 0xFF}}},
	{{{-85, 8, -31},0, {624, 752},{0x34, 0xCC, 0x98, 0xFF}}},
	{{{85, -41, -27},0, {624, 496},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{85, 8, -27},0, {624, 496},{0xC8, 0xC2, 0x60, 0xFF}}},
	{{{85, -41, -31},0, {624, 752},{0x8E, 0x0, 0xC7, 0xFF}}},
	{{{85, -46, -27},0, {624, 496},{0xB7, 0xB7, 0x49, 0xFF}}},
	{{{85, -46, -31},0, {624, 752},{0xB7, 0xB7, 0xB7, 0xFF}}},
	{{{92, -41, -27},0, {624, 496},{0x36, 0x0, 0x73, 0xFF}}},
	{{{92, 8, -27},0, {624, 496},{0x3E, 0xD3, 0x65, 0xFF}}},
	{{{93, 53, 27},0, {624, 496},{0xA1, 0xB8, 0xD4, 0xFF}}},
	{{{101, 53, 27},0, {624, 496},{0x79, 0xE2, 0xE9, 0xFF}}},
	{{{101, -41, 27},0, {624, 496},{0x3E, 0x0, 0x91, 0xFF}}},
	{{{101, -41, 31},0, {880, 496},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{101, 53, 31},0, {880, 496},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{101, 61, 27},0, {624, 240},{0x52, 0x5A, 0xDC, 0xFF}}},
	{{{101, 53, 31},0, {880, 496},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{101, 53, 27},0, {624, 496},{0x79, 0xE2, 0xE9, 0xFF}}},
	{{{101, 61, 31},0, {880, 240},{0x49, 0x49, 0x49, 0xFF}}},
	{{{101, -46, 31},0, {880, 496},{0x49, 0xB7, 0x49, 0xFF}}},
	{{{101, -41, 27},0, {624, 496},{0x3E, 0x0, 0x91, 0xFF}}},
	{{{101, -41, 31},0, {880, 496},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{101, -46, 27},0, {624, 496},{0x49, 0xB7, 0xB7, 0xFF}}},
	{{{93, -41, 27},0, {624, 496},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{93, -46, 27},0, {624, 496},{0xB7, 0xB7, 0xB7, 0xFF}}},
	{{{93, -46, 31},0, {624, 752},{0xB7, 0xB7, 0x49, 0xFF}}},
	{{{101, -46, 31},0, {624, 752},{0x49, 0xB7, 0x49, 0xFF}}},
	{{{101, -41, 31},0, {624, 752},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{93, -41, 31},0, {624, 752},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{93, 53, 31},0, {624, 752},{0xD9, 0xD9, 0x73, 0xFF}}},
	{{{101, 53, 31},0, {624, 752},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{101, 53, 31},0, {624, 752},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{93, 61, 31},0, {624, 1008},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{93, 53, 31},0, {624, 752},{0xD9, 0xD9, 0x73, 0xFF}}},
	{{{101, 61, 31},0, {624, 1008},{0x49, 0x49, 0x49, 0xFF}}},
	{{{0, 53, 31},0, {496, 752},{0x0, 0xA6, 0x5A, 0xFF}}},
	{{{0, 61, 31},0, {496, 1008},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{85, 17, -27},0, {624, 240},{0xBD, 0x59, 0x3D, 0xFF}}},
	{{{93, 53, 27},0, {624, 496},{0xA1, 0xB8, 0xD4, 0xFF}}},
	{{{93, 61, 27},0, {624, 240},{0xE3, 0x6F, 0xCA, 0xFF}}},
	{{{85, 8, -27},0, {624, 496},{0xC8, 0xC2, 0x60, 0xFF}}},
	{{{-85, -41, -27},0, {624, 496},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-85, -41, -31},0, {624, 752},{0x72, 0x0, 0xC7, 0xFF}}},
	{{{-85, 8, -31},0, {624, 752},{0x34, 0xCC, 0x98, 0xFF}}},
	{{{-85, -46, -27},0, {624, 496},{0x49, 0xB7, 0x49, 0xFF}}},
	{{{-85, -46, -31},0, {624, 752},{0x49, 0xB7, 0xB7, 0xFF}}},
	{{{-93, 53, 31},0, {624, 752},{0x27, 0xD9, 0x73, 0xFF}}},
	{{{-93, -41, 31},0, {624, 752},{0x5A, 0x0, 0x5A, 0xFF}}},
	{{{-93, -41, 27},0, {624, 496},{0x5A, 0x0, 0xA6, 0xFF}}},
	{{{-93, -46, 27},0, {624, 496},{0x49, 0xB7, 0xB7, 0xFF}}},
	{{{-93, -46, 31},0, {624, 752},{0x49, 0xB7, 0x49, 0xFF}}},
	{{{0, 61, 31},0, {496, -16},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{93, 61, 31},0, {624, -16},{0x0, 0x5A, 0x5A, 0xFF}}},
	{{{93, 61, 27},0, {624, 240},{0xE3, 0x6F, 0xCA, 0xFF}}},
	{{{101, 61, 31},0, {624, -16},{0x49, 0x49, 0x49, 0xFF}}},
	{{{101, 61, 27},0, {624, 240},{0x52, 0x5A, 0xDC, 0xFF}}},
	{{{101, -41, 27},0, {624, 496},{0x3E, 0x0, 0x91, 0xFF}}},
	{{{93, -41, 27},0, {624, 496},{0xA6, 0x0, 0xA6, 0xFF}}},
	{{{93, 53, 27},0, {624, 496},{0xA1, 0xB8, 0xD4, 0xFF}}},
	{{{93, 53, 31},0, {624, 752},{0xD9, 0xD9, 0x73, 0xFF}}},
	{{{93, -41, 31},0, {624, 752},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{93, -46, 27},0, {624, 496},{0xB7, 0xB7, 0xB7, 0xFF}}},
	{{{93, -46, 27},0, {624, 496},{0xB7, 0xB7, 0xB7, 0xFF}}},
	{{{93, -46, 31},0, {624, 752},{0xB7, 0xB7, 0x49, 0xFF}}},
	{{{93, -41, 31},0, {624, 752},{0xA6, 0x0, 0x5A, 0xFF}}},
};

Gfx goal_Goal_mesh_tri_0[] = {
	gsSPVertex(goal_Goal_mesh_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(2, 5, 4, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(10, 8, 11, 0),
	gsSP1Triangle(11, 8, 12, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(14, 10, 11, 0),
	gsSP1Triangle(3, 10, 14, 0),
	gsSP1Triangle(3, 14, 15, 0),
	gsSPVertex(goal_Goal_mesh_vtx_0 + 16, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 0, 5, 0),
	gsSP1Triangle(0, 6, 5, 0),
	gsSP1Triangle(0, 7, 6, 0),
	gsSP1Triangle(0, 8, 7, 0),
	gsSP1Triangle(7, 9, 6, 0),
	gsSP1Triangle(7, 10, 9, 0),
	gsSP1Triangle(11, 10, 7, 0),
	gsSP1Triangle(7, 12, 11, 0),
	gsSP1Triangle(11, 13, 10, 0),
	gsSPVertex(goal_Goal_mesh_vtx_0 + 30, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(7, 6, 4, 0),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(10, 9, 7, 0),
	gsSP1Triangle(10, 11, 9, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(10, 13, 12, 0),
	gsSP1Triangle(14, 13, 10, 0),
	gsSP1Triangle(14, 10, 15, 0),
	gsSPVertex(goal_Goal_mesh_vtx_0 + 46, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 3, 2, 0),
	gsSP1Triangle(4, 2, 5, 0),
	gsSP1Triangle(5, 2, 6, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(9, 8, 6, 0),
	gsSP1Triangle(10, 9, 6, 0),
	gsSP1Triangle(10, 6, 11, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(1, 13, 11, 0),
	gsSP1Triangle(1, 14, 13, 0),
	gsSP1Triangle(15, 10, 12, 0),
	gsSPVertex(goal_Goal_mesh_vtx_0 + 62, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(1, 5, 4, 0),
	gsSP1Triangle(1, 6, 5, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(5, 7, 8, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(9, 12, 11, 0),
	gsSP1Triangle(13, 10, 11, 0),
	gsSP1Triangle(13, 14, 10, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(goal_Goal_mesh_vtx_0 + 78, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(1, 3, 5, 0),
	gsSP1Triangle(1, 5, 6, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(5, 8, 7, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(7, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(11, 9, 12, 0),
	gsSP1Triangle(12, 9, 13, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 12, 14, 0),
	gsSPVertex(goal_Goal_mesh_vtx_0 + 94, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(2, 4, 3, 0),
	gsSP1Triangle(3, 5, 0, 0),
	gsSP1Triangle(3, 6, 5, 0),
	gsSP1Triangle(3, 7, 6, 0),
	gsSP1Triangle(3, 8, 7, 0),
	gsSP1Triangle(8, 3, 9, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(8, 11, 12, 0),
	gsSP1Triangle(13, 8, 12, 0),
	gsSP1Triangle(13, 12, 14, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSPVertex(goal_Goal_mesh_vtx_0 + 110, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(0, 4, 5, 0),
	gsSP1Triangle(0, 6, 4, 0),
	gsSP1Triangle(6, 7, 4, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(5, 4, 9, 0),
	gsSP1Triangle(5, 9, 10, 0),
	gsSP1Triangle(10, 11, 5, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(13, 11, 12, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(14, 12, 15, 0),
	gsSPVertex(goal_Goal_mesh_vtx_0 + 126, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(7, 8, 5, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(7, 10, 9, 0),
	gsSP1Triangle(7, 11, 10, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(14, 12, 15, 0),
	gsSPVertex(goal_Goal_mesh_vtx_0 + 142, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 2, 1, 0),
	gsSP1Triangle(4, 1, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 9, 7, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(13, 11, 10, 0),
	gsSP1Triangle(13, 14, 11, 0),
	gsSPVertex(goal_Goal_mesh_vtx_0 + 157, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(8, 7, 6, 0),
	gsSP1Triangle(8, 9, 7, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(11, 13, 12, 0),
	gsSP1Triangle(11, 14, 13, 0),
	gsSP1Triangle(15, 14, 11, 0),
	gsSPVertex(goal_Goal_mesh_vtx_0 + 173, 3, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSPEndDisplayList(),
};Vtx goal_Goal_mesh_vtx_1[23] = {
	{{{-101, 53, 27},0, {624, 496},{0x87, 0xE2, 0xE9, 0xFF}}},
	{{{-101, -41, 27},0, {624, 496},{0xC2, 0x0, 0x91, 0xFF}}},
	{{{-101, -41, 31},0, {880, 496},{0xA6, 0x0, 0x5A, 0xFF}}},
	{{{92, 8, -27},0, {-1211, -1213},{0x3E, 0xD3, 0x65, 0xFF}}},
	{{{101, -41, 27},0, {2217, 2207},{0x3E, 0x0, 0x91, 0xFF}}},
	{{{101, 53, 27},0, {-1221, 2213},{0x79, 0xE2, 0xE9, 0xFF}}},
	{{{92, -41, -27},0, {2217, -1213},{0x36, 0x0, 0x73, 0xFF}}},
	{{{-92, 8, -27},0, {-1211, -1219},{0xC2, 0xD3, 0x65, 0xFF}}},
	{{{-101, -41, 27},0, {2217, 2206},{0xC2, 0x0, 0x91, 0xFF}}},
	{{{-92, -41, -27},0, {2217, -1219},{0xCA, 0x0, 0x73, 0xFF}}},
	{{{-101, 53, 27},0, {-1221, 2213},{0x87, 0xE2, 0xE9, 0xFF}}},
	{{{0, 61, 27},0, {-1822, 492},{0x0, 0x46, 0x96, 0xFF}}},
	{{{-93, 61, 27},0, {-1822, 2810},{0x1D, 0x6F, 0xCA, 0xFF}}},
	{{{-85, 17, -27},0, {2814, 2819},{0x43, 0x59, 0x3D, 0xFF}}},
	{{{0, 17, -27},0, {2814, 492},{0x0, 0x12, 0x7E, 0xFF}}},
	{{{85, 17, -27},0, {2814, -1823},{0xBD, 0x59, 0x3D, 0xFF}}},
	{{{85, 17, -27},0, {2814, -1823},{0xBD, 0x59, 0x3D, 0xFF}}},
	{{{93, 61, 27},0, {-1822, -1825},{0xE3, 0x6F, 0xCA, 0xFF}}},
	{{{0, 61, 27},0, {-1822, 492},{0x0, 0x46, 0x96, 0xFF}}},
	{{{-85, 8, -31},0, {2278, 2265},{0x34, 0xCC, 0x98, 0xFF}}},
	{{{85, -41, -31},0, {-1286, -1262},{0x8E, 0x0, 0xC7, 0xFF}}},
	{{{85, 8, -31},0, {-1286, 2265},{0xCC, 0xCC, 0x98, 0xFF}}},
	{{{-85, -41, -31},0, {2278, -1262},{0x72, 0x0, 0xC7, 0xFF}}},
};

Gfx goal_Goal_mesh_tri_1[] = {
	gsSPVertex(goal_Goal_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 6, 4, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(7, 10, 8, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSP1Triangle(14, 15, 11, 0),
	gsSPVertex(goal_Goal_mesh_vtx_1 + 16, 7, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 6, 4, 0),
	gsSPEndDisplayList(),
};


Gfx mat_goal_goal_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(goal_goal_f3d_lights),
	gsSPEndDisplayList(),
};


Gfx mat_goal_net_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b, 32, goal_net_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(goal_net_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_goal_net_f3d[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};


Gfx goal_Goal_mesh[] = {
	gsSPDisplayList(mat_goal_goal_f3d),
	gsSPDisplayList(goal_Goal_mesh_tri_0),
	gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
	gsSPDisplayList(mat_goal_net_f3d),
	gsSPDisplayList(goal_Goal_mesh_tri_1),
	gsSPDisplayList(mat_revert_goal_net_f3d),
	gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};




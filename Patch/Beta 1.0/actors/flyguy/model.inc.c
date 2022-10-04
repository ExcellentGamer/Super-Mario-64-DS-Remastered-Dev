Lights1 flyguy_propbody_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 flyguy_prophelice_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx flyguy_propeller_heyho_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 flyguy_propeller_heyho_rgba32[] = "actors/flyguy/propeller_heyho.rgba32";

Gfx flyguy_propeller_rgba32_aligner[] = {gsSPEndDisplayList()};
u8 flyguy_propeller_rgba32[] = "actors/flyguy/propeller.rgba32";

Vtx flyguy_000_offset_001_mesh_layer_1_vtx_0[198] = {
	{{{117, 70, -80},0, {58, 700},{0x14, 0x4E, 0x9E, 0xFF}}},
	{{{37, 104, 0},0, {2, 508},{0xF1, 0x7E, 0x0, 0xFF}}},
	{{{117, 70, 80},0, {8, 700},{0x14, 0x4E, 0x62, 0xFF}}},
	{{{161, 68, -78},0, {32, 808},{0x1F, 0x37, 0x92, 0xFF}}},
	{{{157, -5, -101},0, {506, 808},{0x14, 0xF6, 0x83, 0xFF}}},
	{{{117, 70, -80},0, {64, 732},{0x14, 0x4E, 0x9E, 0xFF}}},
	{{{112, 1, -100},0, {484, 732},{0x15, 0xFB, 0x83, 0xFF}}},
	{{{107, -62, -71},0, {748, 730},{0xA, 0xA9, 0xA4, 0xFF}}},
	{{{152, -98, -50},0, {942, 808},{0x9, 0x90, 0xC4, 0xFF}}},
	{{{105, -97, 0},0, {954, 732},{0xFB, 0x81, 0x0, 0xFF}}},
	{{{152, -98, 50},0, {942, 808},{0x9, 0x90, 0x3C, 0xFF}}},
	{{{107, -62, 71},0, {748, 730},{0xA, 0xA9, 0x5C, 0xFF}}},
	{{{157, -5, 101},0, {506, 808},{0x14, 0xF6, 0x7D, 0xFF}}},
	{{{112, 1, 100},0, {484, 732},{0x15, 0xFB, 0x7D, 0xFF}}},
	{{{117, 70, 80},0, {64, 732},{0x14, 0x4E, 0x62, 0xFF}}},
	{{{161, 68, 78},0, {32, 808},{0x1F, 0x37, 0x6E, 0xFF}}},
	{{{2, 0, 136},0, {508, 576},{0x8A, 0x2, 0xD1, 0xFF}}},
	{{{16, -22, 159},0, {554, 612},{0xDA, 0xA5, 0x50, 0xFF}}},
	{{{16, 20, 159},0, {386, 608},{0xDB, 0x5A, 0x52, 0xFF}}},
	{{{96, 0, 106},0, {484, 654},{0x3C, 0xFB, 0x70, 0xFF}}},
	{{{88, -42, 92},0, {638, 642},{0x26, 0xC2, 0x68, 0xFF}}},
	{{{112, 1, 100},0, {484, 700},{0x15, 0xFB, 0x7D, 0xFF}}},
	{{{107, -62, 71},0, {748, 696},{0xA, 0xA9, 0x5C, 0xFF}}},
	{{{33, -72, 88},0, {830, 506},{0xD7, 0xB1, 0x5B, 0xFF}}},
	{{{105, -97, 0},0, {954, 698},{0xFB, 0x81, 0x0, 0xFF}}},
	{{{34, -106, 0},0, {986, 504},{0xE2, 0x85, 0x0, 0xFF}}},
	{{{23, -98, 0},0, {984, 452},{0xE7, 0x83, 0x0, 0xFF}}},
	{{{23, -69, 73},0, {818, 452},{0xD8, 0xA5, 0x50, 0xFF}}},
	{{{31, 0, 107},0, {518, 514},{0xCA, 0x0, 0x73, 0xFF}}},
	{{{23, 0, 96},0, {518, 452},{0xCF, 0xFF, 0x75, 0xFF}}},
	{{{32, 70, 89},0, {144, 518},{0xD3, 0x4D, 0x5A, 0xFF}}},
	{{{23, 67, 78},0, {88, 452},{0xDA, 0x57, 0x55, 0xFF}}},
	{{{23, 67, 78},0, {88, 452},{0xDA, 0x57, 0x55, 0xFF}}},
	{{{32, 70, 89},0, {144, 518},{0xD3, 0x4D, 0x5A, 0xFF}}},
	{{{23, 96, 0},0, {4, 452},{0xEF, 0x7E, 0x0, 0xFF}}},
	{{{37, 104, 0},0, {2, 512},{0xF1, 0x7E, 0x0, 0xFF}}},
	{{{117, 70, 80},0, {64, 702},{0x14, 0x4E, 0x62, 0xFF}}},
	{{{90, 42, 95},0, {212, 630},{0x17, 0x2F, 0x74, 0xFF}}},
	{{{112, 1, 100},0, {484, 700},{0x15, 0xFB, 0x7D, 0xFF}}},
	{{{96, 0, 106},0, {484, 654},{0x3C, 0xFB, 0x70, 0xFF}}},
	{{{16, 20, 159},0, {386, 608},{0xDB, 0x5A, 0x52, 0xFF}}},
	{{{32, 70, -89},0, {144, 518},{0xD3, 0x4E, 0xA6, 0xFF}}},
	{{{23, 67, -78},0, {88, 452},{0xDA, 0x57, 0xAB, 0xFF}}},
	{{{31, 0, -107},0, {518, 514},{0xCB, 0xFF, 0x8C, 0xFF}}},
	{{{23, 0, -96},0, {518, 452},{0xCF, 0xFE, 0x8B, 0xFF}}},
	{{{33, -72, -88},0, {830, 506},{0xD7, 0xB1, 0xA5, 0xFF}}},
	{{{23, -69, -73},0, {818, 452},{0xD8, 0xA5, 0xB1, 0xFF}}},
	{{{34, -106, 0},0, {986, 504},{0xE2, 0x85, 0x0, 0xFF}}},
	{{{105, -97, 0},0, {954, 698},{0xFB, 0x81, 0x0, 0xFF}}},
	{{{34, -106, 0},0, {986, 504},{0xE2, 0x85, 0x0, 0xFF}}},
	{{{33, -72, -88},0, {830, 506},{0xD7, 0xB1, 0xA5, 0xFF}}},
	{{{107, -62, -71},0, {748, 696},{0xA, 0xA9, 0xA4, 0xFF}}},
	{{{88, -42, -92},0, {638, 642},{0x26, 0xC2, 0x98, 0xFF}}},
	{{{112, 1, -100},0, {484, 700},{0x15, 0xFB, 0x83, 0xFF}}},
	{{{96, 0, -106},0, {484, 654},{0x38, 0xFB, 0x8E, 0xFF}}},
	{{{12, -22, -155},0, {554, 612},{0xD6, 0xA4, 0xB3, 0xFF}}},
	{{{12, 20, -155},0, {386, 608},{0xD6, 0x5B, 0xB1, 0xFF}}},
	{{{-1, 0, -131},0, {508, 576},{0x8F, 0x2, 0x3A, 0xFF}}},
	{{{90, 42, -95},0, {212, 630},{0x16, 0x2F, 0x8C, 0xFF}}},
	{{{117, 70, -80},0, {64, 698},{0x14, 0x4E, 0x9E, 0xFF}}},
	{{{32, 70, -89},0, {144, 518},{0xD3, 0x4E, 0xA6, 0xFF}}},
	{{{37, 104, 0},0, {2, 512},{0xF1, 0x7E, 0x0, 0xFF}}},
	{{{23, -69, -73},0, {818, 452},{0xD8, 0xA5, 0xB1, 0xFF}}},
	{{{23, -98, 0},0, {984, 452},{0xE7, 0x83, 0x0, 0xFF}}},
	{{{93, 131, 0},0, {1908, 182},{0xF2, 0x7E, 0x0, 0xFF}}},
	{{{116, 113, 66},0, {1284, 248},{0xFD, 0x5F, 0x55, 0xFF}}},
	{{{150, 130, 0},0, {1842, 438},{0x18, 0x7D, 0x0, 0xFF}}},
	{{{171, 103, 66},0, {1220, 496},{0x29, 0x55, 0x55, 0xFF}}},
	{{{206, 109, 0},0, {1778, 686},{0x43, 0x6C, 0x0, 0xFF}}},
	{{{216, 90, 42},0, {1394, 708},{0x5A, 0x44, 0x3B, 0xFF}}},
	{{{93, 131, 0},0, {1960, 678},{0xF2, 0x7E, 0x0, 0xFF}}},
	{{{116, 113, -66},0, {1934, 718},{0xFC, 0x5F, 0xAB, 0xFF}}},
	{{{69, 115, -50},0, {1982, 754},{0xBF, 0x55, 0xBC, 0xFF}}},
	{{{109, 73, -85},0, {1934, 778},{0xF1, 0x33, 0x8D, 0xFF}}},
	{{{171, 103, -66},0, {1872, 716},{0x29, 0x55, 0xAB, 0xFF}}},
	{{{166, 63, -84},0, {1872, 778},{0x25, 0x2E, 0x8F, 0xFF}}},
	{{{216, 90, -42},0, {1824, 740},{0x5A, 0x44, 0xC5, 0xFF}}},
	{{{217, 56, -54},0, {1816, 778},{0x5D, 0x21, 0xAF, 0xFF}}},
	{{{235, 61, 0},0, {1798, 778},{0x7B, 0x1E, 0x0, 0xFF}}},
	{{{228, 85, 0},0, {1810, 748},{0x71, 0x3B, 0x0, 0xFF}}},
	{{{206, 109, 0},0, {1838, 692},{0x43, 0x6C, 0x0, 0xFF}}},
	{{{228, 85, 0},0, {1810, 748},{0x71, 0x3B, 0x0, 0xFF}}},
	{{{216, 90, -42},0, {1824, 740},{0x5A, 0x44, 0xC5, 0xFF}}},
	{{{216, 90, 42},0, {1824, 740},{0x5A, 0x44, 0x3B, 0xFF}}},
	{{{235, 61, 0},0, {1798, 778},{0x7B, 0x1E, 0x0, 0xFF}}},
	{{{217, 56, 54},0, {1816, 778},{0x5C, 0x21, 0x51, 0xFF}}},
	{{{166, 63, 84},0, {1872, 778},{0x25, 0x2E, 0x71, 0xFF}}},
	{{{171, 103, 66},0, {1872, 716},{0x29, 0x55, 0x55, 0xFF}}},
	{{{116, 113, 66},0, {1934, 718},{0xFD, 0x5F, 0x55, 0xFF}}},
	{{{109, 73, 85},0, {1934, 778},{0xF2, 0x33, 0x74, 0xFF}}},
	{{{69, 115, 50},0, {1982, 754},{0xBF, 0x55, 0x44, 0xFF}}},
	{{{93, 131, 0},0, {1960, 678},{0xF2, 0x7E, 0x0, 0xFF}}},
	{{{59, 88, 50},0, {1988, 778},{0xA2, 0x25, 0x4D, 0xFF}}},
	{{{44, 96, 0},0, {2006, 778},{0x93, 0x42, 0x0, 0xFF}}},
	{{{62, 122, 0},0, {1992, 752},{0xB6, 0x67, 0x0, 0xFF}}},
	{{{69, 115, -50},0, {1982, 754},{0xBF, 0x55, 0xBC, 0xFF}}},
	{{{59, 88, -50},0, {1988, 778},{0xA2, 0x25, 0xB3, 0xFF}}},
	{{{44, 96, 0},0, {2006, 778},{0x93, 0x42, 0x0, 0xFF}}},
	{{{69, 115, -50},0, {1982, 754},{0xBF, 0x55, 0xBC, 0xFF}}},
	{{{109, 73, -85},0, {1934, 778},{0xF1, 0x33, 0x8D, 0xFF}}},
	{{{93, 131, 0},0, {1906, 182},{0xF2, 0x7E, 0x0, 0xFF}}},
	{{{150, 130, 0},0, {1840, 438},{0x18, 0x7D, 0x0, 0xFF}}},
	{{{116, 113, -66},0, {1284, 248},{0xFC, 0x5F, 0xAB, 0xFF}}},
	{{{171, 103, -66},0, {1220, 496},{0x29, 0x55, 0xAB, 0xFF}}},
	{{{206, 109, 0},0, {1778, 686},{0x43, 0x6C, 0x0, 0xFF}}},
	{{{216, 90, -42},0, {1394, 708},{0x5A, 0x44, 0xC5, 0xFF}}},
	{{{69, 115, 50},0, {2018, 48},{0xBF, 0x55, 0x44, 0xFF}}},
	{{{93, 131, 0},0, {1520, 166},{0xF2, 0x7E, 0x0, 0xFF}}},
	{{{62, 122, 0},0, {1520, 14},{0xB6, 0x67, 0x0, 0xFF}}},
	{{{69, 115, -50},0, {1020, 48},{0xBF, 0x55, 0xBC, 0xFF}}},
	{{{161, 68, -78},0, {32, 842},{0x1F, 0x37, 0x92, 0xFF}}},
	{{{211, 80, 0},0, {-4, 948},{0x5F, 0x55, 0x0, 0xFF}}},
	{{{204, 53, -67},0, {72, 934},{0x4B, 0x40, 0xB0, 0xFF}}},
	{{{249, 22, 0},0, {150, 948},{0x76, 0x2E, 0x0, 0xFF}}},
	{{{204, 53, 67},0, {72, 934},{0x4B, 0x40, 0x50, 0xFF}}},
	{{{161, 68, 78},0, {32, 842},{0x1F, 0x37, 0x6E, 0xFF}}},
	{{{157, -5, 101},0, {506, 842},{0x14, 0xF6, 0x7D, 0xFF}}},
	{{{215, -32, 77},0, {694, 950},{0x3C, 0xE8, 0x6E, 0xFF}}},
	{{{152, -98, 50},0, {942, 842},{0x9, 0x90, 0x3C, 0xFF}}},
	{{{184, -84, 42},0, {868, 904},{0xA, 0x97, 0x47, 0xFF}}},
	{{{184, -84, -42},0, {868, 904},{0xA, 0x97, 0xB9, 0xFF}}},
	{{{152, -98, -50},0, {942, 842},{0x9, 0x90, 0xC4, 0xFF}}},
	{{{215, -32, -77},0, {694, 950},{0x3C, 0xE8, 0x92, 0xFF}}},
	{{{157, -5, -101},0, {506, 842},{0x14, 0xF6, 0x83, 0xFF}}},
	{{{252, -36, -39},0, {618, 1000},{0x73, 0xFE, 0xC9, 0xFF}}},
	{{{232, -140, -15},0, {958, 980},{0x3B, 0xA5, 0xBE, 0xFF}}},
	{{{232, -140, -15},0, {958, 980},{0x3B, 0xA5, 0xBE, 0xFF}}},
	{{{252, -36, -39},0, {618, 1000},{0x73, 0xFE, 0xC9, 0xFF}}},
	{{{249, -97, 0},0, {862, 1000},{0x7B, 0xE2, 0x0, 0xFF}}},
	{{{252, -36, 39},0, {618, 1000},{0x73, 0xFE, 0x37, 0xFF}}},
	{{{249, 22, 0},0, {150, 948},{0x76, 0x2E, 0x0, 0xFF}}},
	{{{204, 53, -67},0, {72, 934},{0x4B, 0x40, 0xB0, 0xFF}}},
	{{{204, 53, 67},0, {72, 934},{0x4B, 0x40, 0x50, 0xFF}}},
	{{{215, -32, 77},0, {694, 950},{0x3C, 0xE8, 0x6E, 0xFF}}},
	{{{232, -140, 15},0, {958, 980},{0x3B, 0xA5, 0x42, 0xFF}}},
	{{{184, -84, 42},0, {868, 904},{0xA, 0x97, 0x47, 0xFF}}},
	{{{214, -148, 0},0, {974, 944},{0xD2, 0x8A, 0x0, 0xFF}}},
	{{{184, -84, -42},0, {868, 904},{0xA, 0x97, 0xB9, 0xFF}}},
	{{{215, -32, -77},0, {694, 950},{0x3C, 0xE8, 0x92, 0xFF}}},
	{{{23, -98, 0},0, {984, 442},{0xE7, 0x83, 0x0, 0xFF}}},
	{{{-41, -78, -90},0, {768, -2},{0xB5, 0xBC, 0xB2, 0xFF}}},
	{{{23, -69, -73},0, {766, 442},{0xD8, 0xA5, 0xB1, 0xFF}}},
	{{{23, -98, 0},0, {984, 442},{0xE7, 0x83, 0x0, 0xFF}}},
	{{{-41, -118, 0},0, {986, -4},{0xB6, 0x99, 0x0, 0xFF}}},
	{{{-41, -78, -90},0, {768, -2},{0xB5, 0xBC, 0xB2, 0xFF}}},
	{{{-41, -78, 90},0, {768, -2},{0xB5, 0xBC, 0x4E, 0xFF}}},
	{{{23, -69, 73},0, {766, 442},{0xD8, 0xA5, 0x50, 0xFF}}},
	{{{-41, 0, 114},0, {524, 0},{0xB1, 0x0, 0x64, 0xFF}}},
	{{{23, 0, 96},0, {528, 442},{0xCF, 0xFF, 0x75, 0xFF}}},
	{{{-41, 83, 87},0, {284, 0},{0xB5, 0x48, 0x49, 0xFF}}},
	{{{23, 67, 78},0, {282, 442},{0xDA, 0x57, 0x55, 0xFF}}},
	{{{23, 96, 0},0, {2, 442},{0xEF, 0x7E, 0x0, 0xFF}}},
	{{{-41, 113, 0},0, {4, 0},{0xB0, 0x63, 0x0, 0xFF}}},
	{{{-41, 83, -87},0, {284, 0},{0xB5, 0x48, 0xB7, 0xFF}}},
	{{{23, 67, -78},0, {282, 442},{0xDA, 0x57, 0xAB, 0xFF}}},
	{{{23, 0, -96},0, {528, 442},{0xCF, 0xFE, 0x8B, 0xFF}}},
	{{{-41, 0, -114},0, {524, 0},{0xB1, 0x0, 0x9C, 0xFF}}},
	{{{23, -69, -73},0, {766, 442},{0xD8, 0xA5, 0xB1, 0xFF}}},
	{{{-41, 0, -114},0, {1060, 772},{0xB1, 0x0, 0x9C, 0xFF}}},
	{{{-41, -78, -90},0, {1060, 772},{0xB5, 0xBC, 0xB2, 0xFF}}},
	{{{-12, 6, 0},0, {1182, 772},{0x81, 0xFE, 0x0, 0xFF}}},
	{{{-41, -118, 0},0, {1060, 772},{0xB6, 0x99, 0x0, 0xFF}}},
	{{{-41, -78, 90},0, {1060, 772},{0xB5, 0xBC, 0x4E, 0xFF}}},
	{{{-41, 0, 114},0, {1060, 772},{0xB1, 0x0, 0x64, 0xFF}}},
	{{{-41, 83, 87},0, {1060, 772},{0xB5, 0x48, 0x49, 0xFF}}},
	{{{-41, 113, 0},0, {1060, 772},{0xB0, 0x63, 0x0, 0xFF}}},
	{{{-41, 83, -87},0, {1060, 772},{0xB5, 0x48, 0xB7, 0xFF}}},
	{{{16, 20, 159},0, {844, 1002},{0xDB, 0x5A, 0x52, 0xFF}}},
	{{{90, 42, 95},0, {786, 926},{0x17, 0x2F, 0x74, 0xFF}}},
	{{{44, 0, 107},0, {892, 884},{0x9C, 0x3, 0x4E, 0xFF}}},
	{{{32, 70, 89},0, {764, 876},{0xD3, 0x4D, 0x5A, 0xFF}}},
	{{{31, 0, 107},0, {892, 874},{0xCA, 0x0, 0x73, 0xFF}}},
	{{{33, -72, 88},0, {980, 876},{0xD7, 0xB1, 0x5B, 0xFF}}},
	{{{88, -42, 92},0, {950, 924},{0x26, 0xC2, 0x68, 0xFF}}},
	{{{16, -22, 159},0, {918, 1002},{0xDA, 0xA5, 0x50, 0xFF}}},
	{{{44, 0, 107},0, {892, 884},{0x9C, 0x3, 0x4E, 0xFF}}},
	{{{88, -42, 92},0, {950, 924},{0x26, 0xC2, 0x68, 0xFF}}},
	{{{2, 0, 136},0, {884, 950},{0x8A, 0x2, 0xD1, 0xFF}}},
	{{{16, 20, 159},0, {844, 1002},{0xDB, 0x5A, 0x52, 0xFF}}},
	{{{90, 42, -95},0, {786, 926},{0x16, 0x2F, 0x8C, 0xFF}}},
	{{{44, 0, -107},0, {892, 884},{0x96, 0x4, 0xBA, 0xFF}}},
	{{{32, 70, -89},0, {764, 876},{0xD3, 0x4E, 0xA6, 0xFF}}},
	{{{12, 20, -155},0, {844, 1002},{0xD6, 0x5B, 0xB1, 0xFF}}},
	{{{-1, 0, -131},0, {884, 950},{0x8F, 0x2, 0x3A, 0xFF}}},
	{{{12, -22, -155},0, {918, 1002},{0xD6, 0xA4, 0xB3, 0xFF}}},
	{{{88, -42, -92},0, {950, 924},{0x26, 0xC2, 0x98, 0xFF}}},
	{{{33, -72, -88},0, {980, 876},{0xD7, 0xB1, 0xA5, 0xFF}}},
	{{{31, 0, -107},0, {892, 874},{0xCB, 0xFF, 0x8C, 0xFF}}},
	{{{223, -28, 16},0, {2002, 984},{0x22, 0xBB, 0x65, 0xFF}}},
	{{{223, -28, -16},0, {2000, 980},{0x22, 0xBC, 0x9A, 0xFF}}},
	{{{302, -12, 0},0, {1748, 982},{0x7F, 0x6, 0x0, 0xFF}}},
	{{{223, 6, 0},0, {2002, 982},{0x1C, 0x7C, 0x0, 0xFF}}},
	{{{289, -12, 18},0, {1904, 984},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{289, -30, 0},0, {1904, 982},{0x0, 0x81, 0x0, 0xFF}}},
	{{{305, -12, 0},0, {1740, 982},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{274, -12, 0},0, {1982, 982},{0x81, 0x0, 0x0, 0xFF}}},
	{{{289, 6, 0},0, {1904, 982},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{289, -12, -18},0, {1902, 980},{0x0, 0x0, 0x81, 0xFF}}},
};

Gfx flyguy_000_offset_001_mesh_layer_1_tri_0[] = {
	gsSPVertex(flyguy_000_offset_001_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(6, 4, 7, 0),
	gsSP1Triangle(8, 7, 4, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(13, 12, 14, 0),
	gsSP1Triangle(15, 14, 12, 0),
	gsSPVertex(flyguy_000_offset_001_mesh_layer_1_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(7, 6, 4, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(7, 10, 9, 0),
	gsSP1Triangle(10, 7, 11, 0),
	gsSP1Triangle(12, 11, 7, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSPVertex(flyguy_000_offset_001_mesh_layer_1_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(3, 1, 4, 0),
	gsSP1Triangle(5, 4, 1, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 7, 5, 0),
	gsSP1Triangle(9, 2, 3, 0),
	gsSP1Triangle(2, 9, 10, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(13, 12, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(flyguy_000_offset_001_mesh_layer_1_vtx_0 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 3, 2, 0),
	gsSP1Triangle(4, 5, 3, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(7, 6, 4, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(8, 10, 6, 0),
	gsSP1Triangle(5, 6, 10, 0),
	gsSP1Triangle(5, 10, 11, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(13, 11, 12, 0),
	gsSP1Triangle(14, 1, 15, 0),
	gsSPVertex(flyguy_000_offset_001_mesh_layer_1_vtx_0 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(5, 4, 3, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 8, 7, 0),
	gsSP1Triangle(7, 10, 9, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(13, 11, 12, 0),
	gsSP1Triangle(13, 12, 14, 0),
	gsSP1Triangle(15, 14, 12, 0),
	gsSPVertex(flyguy_000_offset_001_mesh_layer_1_vtx_0 + 80, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(5, 3, 6, 0),
	gsSP1Triangle(7, 6, 3, 0),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(9, 6, 8, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(11, 10, 8, 0),
	gsSP1Triangle(10, 12, 9, 0),
	gsSP1Triangle(12, 10, 13, 0),
	gsSP1Triangle(14, 13, 10, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(flyguy_000_offset_001_mesh_layer_1_vtx_0 + 96, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(5, 8, 7, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(13, 12, 11, 0),
	gsSPVertex(flyguy_000_offset_001_mesh_layer_1_vtx_0 + 110, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(3, 1, 4, 0),
	gsSP1Triangle(5, 4, 1, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(7, 4, 6, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(11, 10, 8, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(13, 12, 11, 0),
	gsSP1Triangle(12, 13, 2, 0),
	gsSP1Triangle(0, 2, 13, 0),
	gsSP1Triangle(14, 12, 2, 0),
	gsSP1Triangle(14, 15, 12, 0),
	gsSPVertex(flyguy_000_offset_001_mesh_layer_1_vtx_0 + 126, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(3, 1, 4, 0),
	gsSP1Triangle(5, 4, 1, 0),
	gsSP1Triangle(3, 4, 6, 0),
	gsSP1Triangle(6, 7, 3, 0),
	gsSP1Triangle(8, 3, 7, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(0, 10, 11, 0),
	gsSP1Triangle(11, 12, 0, 0),
	gsSP1Triangle(10, 0, 8, 0),
	gsSP1Triangle(2, 8, 0, 0),
	gsSP1Triangle(8, 2, 3, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(flyguy_000_offset_001_mesh_layer_1_vtx_0 + 142, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 5, 4, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(7, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(9, 12, 11, 0),
	gsSP1Triangle(13, 11, 12, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSP1Triangle(14, 15, 2, 0),
	gsSPVertex(flyguy_000_offset_001_mesh_layer_1_vtx_0 + 158, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(4, 5, 2, 0),
	gsSP1Triangle(6, 2, 5, 0),
	gsSP1Triangle(6, 7, 2, 0),
	gsSP1Triangle(8, 2, 7, 0),
	gsSP1Triangle(2, 8, 0, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(14, 11, 13, 0),
	gsSP1Triangle(14, 15, 11, 0),
	gsSPVertex(flyguy_000_offset_001_mesh_layer_1_vtx_0 + 174, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(5, 8, 6, 0),
	gsSP1Triangle(9, 6, 8, 0),
	gsSP1Triangle(6, 9, 10, 0),
	gsSP1Triangle(10, 11, 6, 0),
	gsSP1Triangle(12, 6, 11, 0),
	gsSP1Triangle(6, 12, 13, 0),
	gsSP1Triangle(13, 7, 6, 0),
	gsSPVertex(flyguy_000_offset_001_mesh_layer_1_vtx_0 + 188, 10, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 4, 7, 0),
	gsSP1Triangle(8, 7, 4, 0),
	gsSP1Triangle(8, 4, 6, 0),
	gsSP1Triangle(6, 9, 8, 0),
	gsSP1Triangle(9, 6, 5, 0),
	gsSP1Triangle(9, 5, 7, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSPEndDisplayList(),
};

Vtx flyguy_000_offset_003_mesh_layer_1_vtx_0[16] = {
	{{{87, 22, 40},0, {1358, 982},{0x3A, 0x4C, 0x54, 0xFF}}},
	{{{114, 17, 4},0, {1372, 922},{0x6B, 0x45, 0x1, 0xFF}}},
	{{{-16, 40, 32},0, {1344, 948},{0xCB, 0x5F, 0x42, 0xFF}}},
	{{{-16, 40, -23},0, {1344, 882},{0xCB, 0x5F, 0xBE, 0xFF}}},
	{{{87, 22, -35},0, {1358, 866},{0x39, 0x4A, 0xAA, 0xFF}}},
	{{{87, 22, 40},0, {1380, 894},{0x3A, 0x4C, 0x54, 0xFF}}},
	{{{77, -11, 48},0, {1110, 894},{0x21, 0xD7, 0x74, 0xFF}}},
	{{{114, 17, 4},0, {1396, 864},{0x6B, 0x45, 0x1, 0xFF}}},
	{{{-16, 40, 32},0, {1370, 972},{0xCB, 0x5F, 0x42, 0xFF}}},
	{{{-35, -9, 37},0, {1030, 978},{0xA3, 0xD2, 0x49, 0xFF}}},
	{{{-16, 40, -23},0, {1370, 972},{0xCB, 0x5F, 0xBE, 0xFF}}},
	{{{-35, -9, -28},0, {1030, 978},{0xA2, 0xD3, 0xB7, 0xFF}}},
	{{{87, 22, -35},0, {1380, 894},{0x39, 0x4A, 0xAA, 0xFF}}},
	{{{77, -11, -42},0, {1110, 894},{0x1F, 0xD7, 0x8C, 0xFF}}},
	{{{118, -22, 5},0, {1042, 860},{0x74, 0xCD, 0x3, 0xFF}}},
	{{{86, -43, 4},0, {1062, 904},{0x1C, 0x84, 0x0, 0xFF}}},
};

Gfx flyguy_000_offset_003_mesh_layer_1_tri_0[] = {
	gsSPVertex(flyguy_000_offset_003_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(5, 8, 6, 0),
	gsSP1Triangle(9, 6, 8, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(13, 11, 12, 0),
	gsSP1Triangle(7, 13, 12, 0),
	gsSP1Triangle(7, 14, 13, 0),
	gsSP1Triangle(14, 7, 6, 0),
	gsSP1Triangle(14, 6, 15, 0),
	gsSP1Triangle(9, 15, 6, 0),
	gsSP1Triangle(9, 11, 15, 0),
	gsSP1Triangle(13, 15, 11, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSPEndDisplayList(),
};

Vtx flyguy_000_offset_004_mesh_layer_1_vtx_0[16] = {
	{{{114, 17, -4},0, {1372, 922},{0x6B, 0x45, 0xFF, 0xFF}}},
	{{{-16, 40, 23},0, {1344, 882},{0xCA, 0x5F, 0x40, 0xFF}}},
	{{{87, 22, 35},0, {1358, 866},{0x3A, 0x4B, 0x55, 0xFF}}},
	{{{-16, 40, -32},0, {1344, 948},{0xCC, 0x5E, 0xBD, 0xFF}}},
	{{{87, 22, -40},0, {1358, 982},{0x38, 0x4C, 0xAB, 0xFF}}},
	{{{87, 22, 35},0, {1380, 894},{0x3A, 0x4B, 0x55, 0xFF}}},
	{{{77, -11, 42},0, {1110, 894},{0x21, 0xD5, 0x73, 0xFF}}},
	{{{114, 17, -4},0, {1396, 864},{0x6B, 0x45, 0xFF, 0xFF}}},
	{{{-16, 40, 23},0, {1370, 972},{0xCA, 0x5F, 0x40, 0xFF}}},
	{{{-35, -9, 28},0, {1030, 978},{0xA2, 0xD2, 0x48, 0xFF}}},
	{{{-16, 40, -32},0, {1370, 972},{0xCC, 0x5E, 0xBD, 0xFF}}},
	{{{-35, -9, -37},0, {1030, 978},{0xA3, 0xD3, 0xB6, 0xFF}}},
	{{{87, 22, -40},0, {1380, 894},{0x38, 0x4C, 0xAB, 0xFF}}},
	{{{77, -11, -48},0, {1110, 894},{0x1F, 0xD8, 0x8B, 0xFF}}},
	{{{118, -22, -5},0, {1042, 860},{0x74, 0xCD, 0xFD, 0xFF}}},
	{{{86, -43, -4},0, {1062, 904},{0x1C, 0x84, 0x0, 0xFF}}},
};

Gfx flyguy_000_offset_004_mesh_layer_1_tri_0[] = {
	gsSPVertex(flyguy_000_offset_004_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(5, 8, 6, 0),
	gsSP1Triangle(9, 6, 8, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(11, 9, 10, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(13, 11, 12, 0),
	gsSP1Triangle(12, 7, 13, 0),
	gsSP1Triangle(7, 14, 13, 0),
	gsSP1Triangle(14, 7, 6, 0),
	gsSP1Triangle(14, 6, 15, 0),
	gsSP1Triangle(9, 15, 6, 0),
	gsSP1Triangle(9, 11, 15, 0),
	gsSP1Triangle(13, 15, 11, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSPEndDisplayList(),
};

Vtx flyguy_000_offset_005_mesh_layer_4_vtx_0[6] = {
	{{{39, -12, 15},0, {-408, 496},{0x6D, 0xBF, 0x0, 0xFF}}},
	{{{21, -43, -170},0, {1232, 1292},{0x6D, 0xBF, 0x0, 0xFF}}},
	{{{58, 18, -172},0, {1232, -300},{0x6D, 0xBF, 0x0, 0xFF}}},
	{{{39, -12, -15},0, {-408, 496},{0x67, 0x4A, 0x0, 0xFF}}},
	{{{21, 13, 170},0, {1232, -300},{0x67, 0x4A, 0x0, 0xFF}}},
	{{{58, -38, 172},0, {1232, 1292},{0x67, 0x4A, 0x0, 0xFF}}},
};

Gfx flyguy_000_offset_005_mesh_layer_4_tri_0[] = {
	gsSPVertex(flyguy_000_offset_005_mesh_layer_4_vtx_0 + 0, 6, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_flyguy_propbody[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b_LOAD_BLOCK, 1, flyguy_propeller_heyho_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 64),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 16, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0, G_TX_WRAP | G_TX_MIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPSetLights1(flyguy_propbody_lights),
	gsSPEndDisplayList(),
};

Gfx mat_flyguy_prophelice[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_32b_LOAD_BLOCK, 1, flyguy_propeller_rgba32),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_MIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 128),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_32b, 8, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 60),
	gsSPSetLights1(flyguy_prophelice_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_flyguy_prophelice[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx flyguy_000_offset_001_mesh_layer_1[] = {
	gsSPDisplayList(mat_flyguy_propbody),
	gsSPDisplayList(flyguy_000_offset_001_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx flyguy_000_offset_003_mesh_layer_1[] = {
	gsSPDisplayList(mat_flyguy_propbody),
	gsSPDisplayList(flyguy_000_offset_003_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx flyguy_000_offset_004_mesh_layer_1[] = {
	gsSPDisplayList(mat_flyguy_propbody),
	gsSPDisplayList(flyguy_000_offset_004_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx flyguy_000_offset_005_mesh_layer_4[] = {
	gsSPDisplayList(mat_flyguy_prophelice),
	gsSPDisplayList(flyguy_000_offset_005_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_flyguy_prophelice),
	gsSPEndDisplayList(),
};

Gfx flyguy_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};


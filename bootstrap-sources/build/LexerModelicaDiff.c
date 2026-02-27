#include "omc_simulation_settings.h"
#include "LexerModelicaDiff.h"
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT0,1,3) {&ErrorTypes_MessageType_SYNTAX__desc,}};
#define _OMC_LIT0 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "Additional syntax errors were suppressed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,41,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT2}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(287)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT3}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "Syntax error, unrecognized input: %s."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,37,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT5}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(286)),_OMC_LIT0,_OMC_LIT1,_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data " \f\n\r	\v"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,6,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,1,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
#define _OMC_LIT10_data "WHITESPACE"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT10,10,_OMC_LIT10_data);
#define _OMC_LIT10 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT10)
#define _OMC_LIT11_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT11,1,_OMC_LIT11_data);
#define _OMC_LIT11 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "\n["
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,2,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data ":"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,1,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "]: checkArray failed: arrayLength="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,34,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data " index="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,7,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
static _index_t _OMC_LIT16_dims[1] = {400};
static const modelica_integer _OMC_LIT16_data[] = {0, 0, 53, 54, 449, 448, 55, 56, 450, 453, 64, 453, 446, 453, 422, 453, 453, 453, 453, 453, 453, 56, 60, 62, 57, 453, 39, 426, 425, 0, 453, 453, 453, 44, 35, 48, 55, 60, 68, 62, 403, 402, 401, 69, 77, 409, 46, 79, 72, 453, 453, 453, 453, 425, 453, 453, 453, 453, 453, 93, 118, 453, 113, 0, 453, 453, 453, 453, 109, 453, 453, 453, 110, 113, 124, 453, 453, 453, 453, 453, 453, 0, 405, 103, 397, 405, 408, 395, 95, 389, 403, 387, 116, 384, 102, 392, 389, 387, 383, 386, 0, 383, 113, 383, 392, 376, 118, 0, 375, 388, 121, 378, 68, 126, 374, 388, 384, 368, 372, 122, 367, 453, 453, 146, 453, 162, 144, 166, 396, 395, 369, 0, 368, 378, 379, 361, 121, 369, 0, 374, 368, 370, 373, 0, 361, 371, 370, 365, 351, 367, 345, 0, 363, 133, 346, 359, 343, 347, 356, 0, 343, 350, 127, 341, 347, 142, 337, 344, 349, 339, 347, 340, 330, 344, 329, 334, 341, 340, 331, 332, 334, 352, 351, 350, 349, 320, 317, 325, 324, 315, 327, 312, 317, 312, 0, 145, 313, 322, 307, 312, 143, 319, 312, 0, 303, 304, 303, 310, 301, 298, 0, 305, 314, 302, 296, 292, 300, 309, 297, 299, 302, 297, 0, 288, 301, 302, 285, 300, 276, 0, 0, 0, 0, 294, 289, 288, 295, 0, 0, 0, 292, 156, 289, 288, 286, 283, 272, 272, 279, 283, 282, 272, 0, 0, 275, 264, 277, 280, 0, 0, 0, 261, 270, 0, 259, 263, 269, 270, 273, 270, 269, 267, 259, 266, 255, 255, 251, 0, 252, 245, 244, 243, 248, 259, 239, 239, 0, 252, 236, 254, 240, 252, 234, 250, 236, 0, 0, 238, 234, 222, 0, 245, 240, 225, 232, 223, 0, 0, 240, 235, 0, 0, 234, 0, 230, 228, 222, 216, 225, 220, 227, 218, 219, 210, 215, 225, 0, 215, 212, 0, 207, 222, 218, 0, 216, 0, 215, 202, 217, 203, 204, 201, 197, 0, 200, 203, 0, 0, 210, 201, 0, 198, 0, 0, 0, 189, 0, 190, 202, 200, 202, 195, 0, 185, 0, 188, 153, 152, 156, 164, 159, 0, 0, 0, 155, 0, 0, 161, 0, 159, 150, 0, 148, 154, 156, 131, 0, 91, 0, 39, 0, 0, 0, 453, 201, 207, 213, 218, 221, 225};
#if (defined(__clang__)  && __clang_major__ >= 17) || (defined(__GNUC__) && __GNUC__ >= 8)
static integer_array const _OMC_LIT16 = {
  1, _OMC_LIT16_dims, (void*) _OMC_LIT16_data, (modelica_boolean) 0
};
#else
/* handle joke compilers */
#define _OMC_LIT16 (base_array_t){1, _OMC_LIT16_dims, (void*) _OMC_LIT16_data, (modelica_boolean) 0}
#endif
static _index_t _OMC_LIT17_dims[1] = {508};
static const modelica_integer _OMC_LIT17_data[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 4, 7, 8, 27, 27, 7, 8, 3, 4, 11, 22, 22, 11, 22, 23, 22, 22, 35, 25, 23, 24, 25, 24, 35, 7, 8, 34, 22, 34, 24, 36, 37, 38, 36, 390, 37, 47, 47, 24, 40, 39, 113, 38, 60, 38, 40, 40, 38, 39, 45, 39, 49, 49, 39, 38, 44, 113, 44, 48, 39, 44, 44, 60, 61, 63, 45, 61, 48, 45, 69, 73, 74, 89, 74, 48, 388, 69, 73, 84, 75, 74, 75, 63, 89, 75, 69, 73, 84, 95, 74, 93, 93, 95, 103, 107, 111, 124, 103, 120, 103, 114, 114, 120, 163, 127, 137, 386, 93, 107, 111, 137, 127, 114, 163, 166, 124, 114, 126, 154, 126, 127, 128, 126, 128, 154, 196, 128, 201, 242, 385, 384, 201, 166, 383, 381, 380, 378, 375, 196, 371, 370, 369, 368, 367, 242, 395, 395, 395, 395, 395, 395, 396, 396, 396, 396, 396, 396, 397, 397, 397, 397, 397, 397, 398, 366, 398, 398, 398, 399, 364, 399, 400, 362, 400, 400, 361, 360, 359, 358, 356, 352, 350, 349, 346, 345, 343, 342, 341, 340, 339, 338, 337, 335, 333, 332, 331, 329, 328, 326, 325, 324, 323, 322, 321, 320, 319, 318, 317, 316, 315, 313, 310, 309, 306, 305, 304, 303, 302, 300, 299, 298, 295, 294, 293, 292, 291, 290, 289, 288, 286, 285, 284, 283, 282, 281, 280, 279, 277, 276, 275, 274, 273, 272, 271, 270, 269, 268, 267, 266, 265, 263, 262, 258, 257, 256, 255, 252, 251, 250, 249, 248, 247, 246, 245, 244, 243, 241, 237, 236, 235, 234, 229, 228, 227, 226, 225, 224, 222, 221, 220, 219, 218, 217, 216, 215, 214, 213, 212, 210, 209, 208, 207, 206, 205, 203, 202, 200, 199, 198, 197, 194, 193, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 176, 175, 174, 173, 172, 171, 170, 169, 168, 167, 165, 164, 162, 161, 159, 158, 157, 156, 155, 153, 151, 150, 149, 148, 147, 146, 145, 143, 142, 141, 140, 138, 136, 135, 134, 133, 131, 130, 129, 121, 119, 118, 117, 116, 115, 112, 110, 109, 106, 105, 104, 102, 100, 99, 98, 97, 96, 94, 92, 91, 90, 88, 87, 86, 85, 83, 54, 46, 43, 42, 41, 29, 28, 15, 13, 9, 6, 5, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394};
#if (defined(__clang__)  && __clang_major__ >= 17) || (defined(__GNUC__) && __GNUC__ >= 8)
static integer_array const _OMC_LIT17 = {
  1, _OMC_LIT17_dims, (void*) _OMC_LIT17_data, (modelica_boolean) 0
};
#else
/* handle joke compilers */
#define _OMC_LIT17 (base_array_t){1, _OMC_LIT17_dims, (void*) _OMC_LIT17_data, (modelica_boolean) 0}
#endif
static _index_t _OMC_LIT18_dims[1] = {400};
static const modelica_integer _OMC_LIT18_data[] = {394, 1, 395, 395, 396, 396, 397, 397, 394, 394, 394, 394, 394, 394, 398, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 399, 394, 394, 394, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 398, 400, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 394, 394, 394, 394, 394, 394, 394, 394, 394, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 394, 394, 394, 394, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 0, 394, 394, 394, 394, 394, 394};
#if (defined(__clang__)  && __clang_major__ >= 17) || (defined(__GNUC__) && __GNUC__ >= 8)
static integer_array const _OMC_LIT18 = {
  1, _OMC_LIT18_dims, (void*) _OMC_LIT18_data, (modelica_boolean) 0
};
#else
/* handle joke compilers */
#define _OMC_LIT18 (base_array_t){1, _OMC_LIT18_dims, (void*) _OMC_LIT18_data, (modelica_boolean) 0}
#endif
static _index_t _OMC_LIT19_dims[1] = {55};
static const modelica_integer _OMC_LIT19_data[] = {1, 1, 1, 1, 2, 2, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 4, 2, 2, 2, 5, 2, 4, 4, 2, 5, 2, 2, 6, 6, 4, 4, 4, 6, 4, 4, 4, 4, 4, 4, 6, 4, 4, 4, 6, 4, 4, 4, 6, 4, 4, 6, 4, 2, 2};
#if (defined(__clang__)  && __clang_major__ >= 17) || (defined(__GNUC__) && __GNUC__ >= 8)
static integer_array const _OMC_LIT19 = {
  1, _OMC_LIT19_dims, (void*) _OMC_LIT19_data, (modelica_boolean) 0
};
#else
/* handle joke compilers */
#define _OMC_LIT19 (base_array_t){1, _OMC_LIT19_dims, (void*) _OMC_LIT19_data, (modelica_boolean) 0}
#endif
static _index_t _OMC_LIT20_dims[1] = {395};
static const modelica_integer _OMC_LIT20_data[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 5, 7, 8, 10, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 100, 102, 103, 104, 104, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 141, 142, 144, 145, 146, 147, 148, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 167, 168, 168, 168, 169, 170, 172, 173, 174, 175, 176, 177, 178, 180, 181, 182, 183, 184, 186, 187, 188, 189, 190, 191, 192, 193, 195, 196, 197, 198, 199, 200, 201, 202, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 225, 226, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 238, 240, 241, 242, 243, 244, 245, 246, 247, 249, 250, 251, 252, 253, 254, 255, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 270, 271, 272, 273, 274, 275, 276, 278, 280, 282, 284, 285, 286, 287, 288, 290, 292, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 308, 310, 311, 312, 313, 314, 316, 318, 320, 321, 322, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 339, 340, 341, 342, 343, 344, 345, 346, 347, 349, 350, 351, 352, 353, 354, 355, 356, 357, 359, 361, 362, 363, 364, 366, 367, 368, 369, 370, 371, 373, 375, 376, 377, 379, 381, 382, 384, 385, 386, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 399, 400, 401, 403, 404, 405, 406, 408, 409, 411, 412, 413, 414, 415, 416, 417, 418, 420, 421, 422, 424, 426, 427, 428, 430, 431, 433, 435, 437, 438, 440, 441, 442, 443, 444, 445, 447, 448, 450, 451, 452, 453, 454, 455, 456, 458, 460, 462, 463, 465, 467, 468, 470, 471, 472, 474, 475, 476, 477, 478, 480, 481, 483, 484, 486, 488, 490, 490};
#if (defined(__clang__)  && __clang_major__ >= 17) || (defined(__GNUC__) && __GNUC__ >= 8)
static integer_array const _OMC_LIT20 = {
  1, _OMC_LIT20_dims, (void*) _OMC_LIT20_data, (modelica_boolean) 0
};
#else
/* handle joke compilers */
#define _OMC_LIT20 (base_array_t){1, _OMC_LIT20_dims, (void*) _OMC_LIT20_data, (modelica_boolean) 0}
#endif
static _index_t _OMC_LIT21_dims[1] = {489};
static const modelica_integer _OMC_LIT21_data[] = {115, 114, 1, 114, 2, 114, 114, 101, 114, 114, 64, 114, 65, 114, 85, 114, 87, 114, 72, 114, 86, 114, 97, 114, 94, 114, 100, 114, 75, 114, 76, 114, 90, 114, 71, 114, 91, 114, 98, 114, 66, 114, 67, 114, 93, 114, 98, 114, 98, 114, 98, 114, 98, 114, 98, 114, 98, 114, 98, 114, 98, 114, 98, 114, 98, 114, 98, 114, 98, 114, 98, 114, 98, 114, 98, 114, 98, 114, 68, 114, 69, 114, 109, 114, 110, 114, 109, 114, 113, 114, 112, 114, 105, 114, 106, 114, 104, 105, 114, 105, 114, 1, 2, 82, 80, 81, 83, 5, 84, 107, 111, 3, 100, 74, 73, 88, 89, 70, 92, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 34, 98, 98, 36, 98, 98, 98, 98, 98, 46, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 108, 102, 103, 99, 3, 4, 98, 7, 98, 98, 98, 98, 98, 98, 98, 15, 98, 98, 98, 98, 98, 21, 98, 98, 98, 98, 98, 98, 98, 98, 32, 98, 98, 98, 98, 98, 98, 98, 98, 42, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 5, 3, 98, 98, 98, 98, 98, 98, 98, 98, 98, 17, 98, 18, 98, 98, 98, 98, 98, 98, 98, 98, 31, 98, 98, 98, 98, 98, 98, 98, 40, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 77, 98, 98, 98, 98, 98, 98, 98, 56, 98, 57, 98, 58, 98, 59, 98, 98, 98, 98, 98, 9, 98, 63, 98, 10, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 29, 98, 30, 98, 98, 98, 98, 98, 38, 98, 39, 98, 41, 98, 98, 98, 43, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 60, 98, 98, 98, 98, 98, 98, 98, 98, 98, 19, 98, 98, 98, 98, 98, 98, 98, 98, 98, 35, 98, 78, 98, 98, 98, 98, 47, 98, 98, 98, 98, 98, 98, 52, 98, 53, 98, 98, 98, 62, 98, 96, 98, 98, 61, 98, 98, 98, 11, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 26, 98, 98, 98, 37, 98, 98, 98, 98, 48, 98, 98, 50, 98, 98, 98, 98, 98, 98, 98, 98, 13, 98, 98, 98, 14, 98, 20, 98, 98, 98, 23, 98, 98, 28, 98, 33, 98, 44, 98, 98, 45, 98, 98, 98, 98, 98, 98, 6, 98, 98, 12, 98, 98, 98, 98, 98, 98, 98, 49, 98, 51, 98, 54, 98, 98, 95, 98, 8, 98, 98, 16, 98, 98, 98, 25, 98, 98, 98, 98, 98, 22, 98, 98, 55, 98, 98, 24, 98, 79, 98, 27, 98};
#if (defined(__clang__)  && __clang_major__ >= 17) || (defined(__GNUC__) && __GNUC__ >= 8)
static integer_array const _OMC_LIT21 = {
  1, _OMC_LIT21_dims, (void*) _OMC_LIT21_data, (modelica_boolean) 0
};
#else
/* handle joke compilers */
#define _OMC_LIT21 (base_array_t){1, _OMC_LIT21_dims, (void*) _OMC_LIT21_data, (modelica_boolean) 0}
#endif
static _index_t _OMC_LIT22_dims[1] = {255};
static const modelica_integer _OMC_LIT22_data[] = {1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 6, 7, 6, 6, 6, 6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 18, 19, 20, 21, 22, 6, 6, 23, 23, 23, 23, 24, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 25, 26, 27, 28, 23, 1, 29, 30, 31, 32, 33, 34, 35, 36, 37, 23, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 6, 55, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
#if (defined(__clang__)  && __clang_major__ >= 17) || (defined(__GNUC__) && __GNUC__ >= 8)
static integer_array const _OMC_LIT22 = {
  1, _OMC_LIT22_dims, (void*) _OMC_LIT22_data, (modelica_boolean) 0
};
#else
/* handle joke compilers */
#define _OMC_LIT22 (base_array_t){1, _OMC_LIT22_dims, (void*) _OMC_LIT22_data, (modelica_boolean) 0}
#endif
static _index_t _OMC_LIT23_dims[1] = {508};
static const modelica_integer _OMC_LIT23_data[] = {10, 11, 12, 13, 11, 10, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 30, 31, 10, 32, 33, 34, 35, 36, 37, 38, 39, 30, 30, 40, 30, 41, 42, 43, 44, 45, 30, 46, 47, 48, 30, 30, 49, 30, 30, 30, 50, 51, 53, 53, 58, 58, 78, 79, 59, 59, 54, 54, 61, 65, 66, 61, 67, 71, 68, 69, 85, 76, 72, 73, 77, 74, 86, 60, 60, 83, 70, 84, 75, 87, 89, 91, 88, 393, 90, 115, 116, 75, 101, 96, 168, 92, 123, 93, 102, 103, 94, 97, 111, 98, 120, 121, 99, 95, 107, 169, 108, 117, 100, 109, 110, 124, 61, 125, 112, 61, 118, 113, 69, 127, 73, 138, 74, 119, 392, 126, 128, 132, 129, 75, 129, 64, 139, 130, 126, 128, 133, 147, 75, 143, 144, 148, 155, 161, 165, 123, 156, 179, 157, 170, 171, 180, 215, 127, 191, 391, 145, 162, 166, 192, 128, 172, 216, 219, 124, 173, 182, 206, 182, 128, 184, 183, 184, 207, 245, 185, 251, 283, 390, 389, 252, 220, 388, 387, 386, 385, 384, 246, 383, 382, 381, 380, 379, 284, 52, 52, 52, 52, 52, 52, 55, 55, 55, 55, 55, 55, 57, 57, 57, 57, 57, 57, 63, 378, 63, 63, 63, 82, 377, 82, 63, 376, 63, 63, 375, 374, 373, 372, 371, 370, 369, 368, 367, 366, 365, 364, 363, 362, 361, 360, 359, 358, 357, 356, 355, 354, 353, 352, 351, 350, 349, 348, 347, 346, 345, 344, 343, 342, 341, 340, 339, 338, 337, 336, 335, 334, 333, 332, 331, 330, 329, 328, 327, 326, 325, 324, 323, 322, 321, 320, 319, 318, 317, 316, 315, 314, 313, 312, 311, 310, 309, 308, 307, 306, 305, 304, 303, 302, 301, 300, 299, 298, 297, 296, 295, 294, 293, 292, 291, 290, 289, 288, 287, 286, 285, 282, 281, 280, 279, 278, 277, 276, 275, 274, 273, 272, 271, 270, 269, 268, 267, 266, 265, 264, 263, 262, 261, 260, 259, 258, 257, 256, 255, 254, 253, 250, 249, 248, 247, 244, 243, 242, 241, 240, 239, 238, 237, 236, 185, 185, 183, 183, 235, 234, 233, 232, 231, 230, 229, 228, 227, 226, 225, 224, 223, 222, 221, 218, 217, 214, 213, 212, 211, 210, 209, 208, 205, 204, 203, 202, 201, 200, 199, 198, 197, 196, 195, 194, 193, 190, 189, 188, 187, 186, 130, 130, 181, 178, 177, 176, 175, 174, 167, 164, 163, 160, 159, 158, 154, 153, 152, 151, 150, 149, 146, 142, 141, 140, 137, 136, 135, 134, 131, 122, 114, 106, 105, 104, 81, 80, 64, 62, 394, 56, 56, 9, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394, 394};
#if (defined(__clang__)  && __clang_major__ >= 17) || (defined(__GNUC__) && __GNUC__ >= 8)
static integer_array const _OMC_LIT23 = {
  1, _OMC_LIT23_dims, (void*) _OMC_LIT23_data, (modelica_boolean) 0
};
#else
/* handle joke compilers */
#define _OMC_LIT23 (base_array_t){1, _OMC_LIT23_dims, (void*) _OMC_LIT23_data, (modelica_boolean) 0}
#endif
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT24,0.0);
#define _OMC_LIT24 MMC_REFREALLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,0,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
#define _OMC_LIT26_data "[TOKEN:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT26,7,_OMC_LIT26_data);
#define _OMC_LIT26 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT26)
#define _OMC_LIT27_data " '"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT27,2,_OMC_LIT27_data);
#define _OMC_LIT27 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT27)
#define _OMC_LIT28_data "' ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT28,3,_OMC_LIT28_data);
#define _OMC_LIT28 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT28)
#define _OMC_LIT29_data "-"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT29,1,_OMC_LIT29_data);
#define _OMC_LIT29 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT29)
#define _OMC_LIT30_data ")]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT30,2,_OMC_LIT30_data);
#define _OMC_LIT30 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "<NoFile>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,8,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT32,10,3) {&LexerModelicaDiff_Token_TOKEN__desc,_OMC_LIT31,MMC_IMMEDIATE(MMC_TAGFIXNUM(1)),_OMC_LIT25,MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0)),MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT32 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "\nLexer unknown rule, action="
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,28,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data "<StringSource>"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,14,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#include "util/modelica.h"

#include "LexerModelicaDiff_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC void omc_LexerModelicaDiff_checkArrayModelica(threadData_t *threadData, integer_array _arr, modelica_integer _index, modelica_metatype _info);
PROTECTED_FUNCTION_STATIC void boxptr_LexerModelicaDiff_checkArrayModelica(threadData_t *threadData, modelica_metatype _arr, modelica_metatype _index, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_LexerModelicaDiff_checkArrayModelica,2,0) {(void*) boxptr_LexerModelicaDiff_checkArrayModelica,0}};
#define boxvar_LexerModelicaDiff_checkArrayModelica MMC_REFSTRUCTLIT(boxvar_lit_LexerModelicaDiff_checkArrayModelica)
PROTECTED_FUNCTION_STATIC void omc_LexerModelicaDiff_checkArray(threadData_t *threadData, modelica_metatype _arr, modelica_integer _index, modelica_metatype _info);
PROTECTED_FUNCTION_STATIC void boxptr_LexerModelicaDiff_checkArray(threadData_t *threadData, modelica_metatype _arr, modelica_metatype _index, modelica_metatype _info);
static const MMC_DEFSTRUCTLIT(boxvar_lit_LexerModelicaDiff_checkArray,2,0) {(void*) boxptr_LexerModelicaDiff_checkArray,0}};
#define boxvar_LexerModelicaDiff_checkArray MMC_REFSTRUCTLIT(boxvar_lit_LexerModelicaDiff_checkArray)
PROTECTED_FUNCTION_STATIC modelica_integer omc_LexerModelicaDiff_evalState(threadData_t *threadData, modelica_integer _cState, modelica_integer _c, modelica_integer *out_new_c);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_LexerModelicaDiff_evalState(threadData_t *threadData, modelica_metatype _cState, modelica_metatype _c, modelica_metatype *out_new_c);
static const MMC_DEFSTRUCTLIT(boxvar_lit_LexerModelicaDiff_evalState,2,0) {(void*) boxptr_LexerModelicaDiff_evalState,0}};
#define boxvar_LexerModelicaDiff_evalState MMC_REFSTRUCTLIT(boxvar_lit_LexerModelicaDiff_evalState)
PROTECTED_FUNCTION_STATIC modelica_integer omc_LexerModelicaDiff_findRule(threadData_t *threadData, modelica_string _fileContents, modelica_integer _currSt, modelica_integer _pos, modelica_integer _sPos, modelica_integer _mm_ePos, modelica_integer _linenr, modelica_integer _inBuffer, modelica_integer _inBkBuffer, modelica_metatype _inStates, modelica_integer *out_mm_currSt, modelica_integer *out_mm_pos, modelica_integer *out_mm_sPos, modelica_integer *out_mm_linenr, modelica_integer *out_buffer, modelica_integer *out_bkBuffer, modelica_metatype *out_states);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_LexerModelicaDiff_findRule(threadData_t *threadData, modelica_metatype _fileContents, modelica_metatype _currSt, modelica_metatype _pos, modelica_metatype _sPos, modelica_metatype _mm_ePos, modelica_metatype _linenr, modelica_metatype _inBuffer, modelica_metatype _inBkBuffer, modelica_metatype _inStates, modelica_metatype *out_mm_currSt, modelica_metatype *out_mm_pos, modelica_metatype *out_mm_sPos, modelica_metatype *out_mm_linenr, modelica_metatype *out_buffer, modelica_metatype *out_bkBuffer, modelica_metatype *out_states);
static const MMC_DEFSTRUCTLIT(boxvar_lit_LexerModelicaDiff_findRule,2,0) {(void*) boxptr_LexerModelicaDiff_findRule,0}};
#define boxvar_LexerModelicaDiff_findRule MMC_REFSTRUCTLIT(boxvar_lit_LexerModelicaDiff_findRule)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_LexerModelicaDiff_consume(threadData_t *threadData, modelica_integer _cp, modelica_metatype _tokens, modelica_string _fileContents, modelica_integer _startSt, modelica_integer _currSt, modelica_integer _pos, modelica_integer _sPos, modelica_integer _ePos, modelica_integer _linenr, modelica_integer _inLineNrStart, modelica_integer _inBuffer, modelica_metatype _inStates, modelica_string _fileName, modelica_metatype _inErrorTokens, modelica_integer *out_bkBuffer, modelica_integer *out_mm_startSt, modelica_integer *out_mm_currSt, modelica_integer *out_mm_pos, modelica_integer *out_mm_sPos, modelica_integer *out_mm_ePos, modelica_integer *out_mm_linenr, modelica_integer *out_lineNrStart, modelica_integer *out_buffer, modelica_metatype *out_states, modelica_metatype *out_errorTokens);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_LexerModelicaDiff_consume(threadData_t *threadData, modelica_metatype _cp, modelica_metatype _tokens, modelica_metatype _fileContents, modelica_metatype _startSt, modelica_metatype _currSt, modelica_metatype _pos, modelica_metatype _sPos, modelica_metatype _ePos, modelica_metatype _linenr, modelica_metatype _inLineNrStart, modelica_metatype _inBuffer, modelica_metatype _inStates, modelica_metatype _fileName, modelica_metatype _inErrorTokens, modelica_metatype *out_bkBuffer, modelica_metatype *out_mm_startSt, modelica_metatype *out_mm_currSt, modelica_metatype *out_mm_pos, modelica_metatype *out_mm_sPos, modelica_metatype *out_mm_ePos, modelica_metatype *out_mm_linenr, modelica_metatype *out_lineNrStart, modelica_metatype *out_buffer, modelica_metatype *out_states, modelica_metatype *out_errorTokens);
static const MMC_DEFSTRUCTLIT(boxvar_lit_LexerModelicaDiff_consume,2,0) {(void*) boxptr_LexerModelicaDiff_consume,0}};
#define boxvar_LexerModelicaDiff_consume MMC_REFSTRUCTLIT(boxvar_lit_LexerModelicaDiff_consume)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_LexerModelicaDiff_lex(threadData_t *threadData, modelica_string _fileName, modelica_string _contents, modelica_metatype *out_errorTokens);
static const MMC_DEFSTRUCTLIT(boxvar_lit_LexerModelicaDiff_lex,2,0) {(void*) boxptr_LexerModelicaDiff_lex,0}};
#define boxvar_LexerModelicaDiff_lex MMC_REFSTRUCTLIT(boxvar_lit_LexerModelicaDiff_lex)

DLLDirection
void omc_LexerModelicaDiff_reportErrors(threadData_t *threadData, modelica_metatype _tokens)
{
  modelica_integer _i;
  modelica_string _content = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _i = ((modelica_integer) 0);
  // _content has no default value.
  {
    modelica_metatype _t;
    for (tmpMeta1 = _tokens; !listEmpty(tmpMeta1); tmpMeta1=MMC_CDR(tmpMeta1))
    {
      _t = MMC_CAR(tmpMeta1);
      _i = ((modelica_integer) 1) + _i;

      if((_i > ((modelica_integer) 10)))
      {
        tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
        omc_Error_addMessage(threadData, _OMC_LIT4, tmpMeta2);
      }

      _content = omc_LexerModelicaDiff_tokenContent(threadData, _t);

      tmpMeta3 = mmc_mk_cons(omc_StringUtil_convertCharNonAsciiToHex(threadData, _content), MMC_REFSTRUCTLIT(mmc_nil));
      omc_Error_addSourceMessage(threadData, _OMC_LIT7, tmpMeta3, omc_LexerModelicaDiff_tokenSourceInfo(threadData, _t));
    }
  }

  if((!listEmpty(_tokens)))
  {
    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  return;
}

DLLDirection
modelica_boolean omc_LexerModelicaDiff_deleteWhitespaceFollowedByEqualNonWhitespace(threadData_t *threadData, modelica_metatype _inRest, modelica_metatype *out_result)
{
  modelica_boolean _b;
  modelica_metatype _result = NULL;
  modelica_metatype _head = NULL;
  modelica_integer _diff;
  modelica_metatype _t = NULL;
  modelica_integer _id;
  modelica_metatype _rest = NULL;
  modelica_boolean _foundWS;
  modelica_boolean _foundNL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_integer tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  // _result has no default value.
  // _head has no default value.
  // _diff has no default value.
  // _t has no default value.
  // _id has no default value.
  // _rest has no default value.
  _foundWS = 0 /* false */;
  _foundNL = 0 /* false */;
  _rest = _inRest;

  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _result = tmpMeta1;

  while(1)
  {
    if(!(!listEmpty(_rest))) break;
    /* Pattern-matching assignment */
    tmpMeta2 = listHead(_rest);
    tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 1));
    tmp4 = mmc_unbox_integer(tmpMeta3);
    tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
    tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 3));
    tmp7 = mmc_unbox_integer(tmpMeta6);
    _head = tmpMeta2;
    _diff = tmp4  /* pattern as ty=enumeration(Add, Delete, Equal) */;
    _t = tmpMeta5;
    _id = tmp7  /* pattern as ty=enumeration(_NO_TOKEN, ALGORITHM, AND, ANNOTATION, ASSIGN, BLOCK, BLOCK_COMMENT, BREAK, CLASS, COLON, COLONCOLON, COMMA, CONNECT, CONNECTOR, CONSTANT, CONSTRAINEDBY, DEFINEUNIT, DER, DISCRETE, DOT, EACH, ELSE, ELSEIF, ELSEWHEN, ENCAPSULATED, END, ENUMERATION, EQEQ, EQUALS, EQUATION, EXPANDABLE, EXTENDS, EXTERNAL, FALSE, FINAL, FLOW, FOR, FUNCTION, GREATER, GREATEREQ, IDENT, IF, IMPORT, IMPURE, IN, INITIAL, INNER, INPUT, LBRACE, LBRACK, LESS, LESSEQ, LESSGT, LINE_COMMENT, LOOP, LPAR, MINUS, MINUS_EW, MODEL, MODELICA, NEWLINE, NOT, OPERATOR, OPTIMIZATION, OR, OUTER, OUTPUT, OVERLOAD, PACKAGE, PARAMETER, PARTIAL, PLUS, PLUS_EW, POWER, POWER_EW, PROTECTED, PUBLIC, PURE, RBRACE, RBRACK, RECORD, REDECLARE, REPLACEABLE, RETURN, RPAR, SEMICOLON, SLASH, SLASH_EW, STAR, STAR_EW, STREAM, STRING, SUBTYPEOF, THEN, TRUE, TYPE, UNSIGNED_INTEGER, UNSIGNED_REAL, WHEN, WHILE, WHITESPACE, WITHIN) */;

    if(((modelica_integer)_diff != 2))
    {
      break;
    }

    _rest = listRest(_rest);

    if((((modelica_integer)_id == 101) && (!_foundWS)))
    {
      _foundWS = 1 /* true */;

      tmpMeta9 = mmc_mk_box2(0, mmc_mk_integer(3), _t);
      tmpMeta8 = mmc_mk_cons(tmpMeta9, _result);
      _result = tmpMeta8;
    }
    else
    {
      if(((modelica_integer)_id == 61))
      {
        _foundNL = 1 /* true */;

        break;
      }
      else
      {
        tmpMeta10 = mmc_mk_cons(_head, _result);
        _result = tmpMeta10;
      }
    }
  }

  if(((!_foundWS) || _foundNL))
  {
    _b = 0 /* false */;

    tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
    _result = tmpMeta11;

    goto _return;
  }

  { /* match expression */
    modelica_metatype tmp14_1;
    tmp14_1 = _rest;
    {
      volatile mmc_switch_type tmp14;
      int tmp15;
      tmp14 = 0;
      for (; tmp14 < 2; tmp14++) {
        switch (MMC_SWITCH_CAST(tmp14)) {
        case 0: {
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_integer tmp19;
          modelica_metatype tmpMeta20;
          if (listEmpty(tmp14_1)) goto tmp13_end;
          tmpMeta16 = MMC_CAR(tmp14_1);
          tmpMeta17 = MMC_CDR(tmp14_1);
          tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 1));
          tmp19 = mmc_unbox_integer(tmpMeta18);
          if (3 != tmp19) goto tmp13_end;
          tmpMeta20 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta16), 2));
          _t = tmpMeta20;
          /* Pattern matching succeeded */
          goto tmp13_done;
        }
        case 1: {
          modelica_metatype tmpMeta21;
          
          /* Pattern matching succeeded */
          _b = 0 /* false */;

          tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
          _result = tmpMeta21;

          goto _return;
          goto goto_12;
          goto tmp13_done;
        }
        }
        goto tmp13_end;
        tmp13_end: ;
      }
      goto goto_12;
      goto_12:;
      MMC_THROW_INTERNAL();
      goto tmp13_done;
      tmp13_done:;
    }
  }
  ;

  _b = 1 /* true */;

  {
    modelica_metatype _i;
    for (tmpMeta22 = _result; !listEmpty(tmpMeta22); tmpMeta22=MMC_CDR(tmpMeta22))
    {
      _i = MMC_CAR(tmpMeta22);
      tmpMeta23 = mmc_mk_cons(_i, _rest);
      _rest = tmpMeta23;
    }
  }

  _result = _rest;
  _return: OMC_LABEL_UNUSED
  if (out_result) { *out_result = _result; }
  return _b;
}
modelica_metatype boxptr_LexerModelicaDiff_deleteWhitespaceFollowedByEqualNonWhitespace(threadData_t *threadData, modelica_metatype _inRest, modelica_metatype *out_result)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_LexerModelicaDiff_deleteWhitespaceFollowedByEqualNonWhitespace(threadData, _inRest, out_result);
  out_b = mmc_mk_icon(_b);
  /* skip box _result; list<tuple<#enumeration(Add, Delete, Equal), LexerModelicaDiff.Token>> */
  return out_b;
}

DLLDirection
modelica_metatype omc_LexerModelicaDiff_blockCommentCanonical(threadData_t *threadData, modelica_metatype _t)
{
  modelica_metatype _lines = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _lines has no default value.
  {
    modelica_metatype __omcQ_24tmpVar3;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_string __omcQ_24tmpVar2;
    modelica_integer tmp4;
    modelica_metatype _s_loopVar = 0;
    modelica_metatype _s;
    _s_loopVar = omc_System_strtok(threadData, omc_LexerModelicaDiff_tokenContent(threadData, _t), _OMC_LIT9);
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar3 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar3;
    while(1) {
      tmp4 = 1;
      if (!listEmpty(_s_loopVar)) {
        _s = MMC_CAR(_s_loopVar);
        _s_loopVar = MMC_CDR(_s_loopVar);
        tmp4--;
      }
      if (tmp4 == 0) {
        __omcQ_24tmpVar2 = omc_System_trim(threadData, _s, _OMC_LIT8);
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar2,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp4 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar3;
  }
  _lines = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _lines;
}

DLLDirection
modelica_metatype omc_LexerModelicaDiff_tuple22(threadData_t *threadData, modelica_metatype _t)
{
  modelica_metatype _b = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _t;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
  _b = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _b;
}

DLLDirection
modelica_metatype omc_LexerModelicaDiff_tuple21(threadData_t *threadData, modelica_metatype _t)
{
  modelica_metatype _a = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _a has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _t;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 1));
  _a = tmpMeta2;
  _return: OMC_LABEL_UNUSED
  return _a;
}

DLLDirection
modelica_boolean omc_LexerModelicaDiff_isLineComment(threadData_t *threadData, modelica_metatype _t)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _t;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (54 != tmp7) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_LexerModelicaDiff_isLineComment(threadData_t *threadData, modelica_metatype _t)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_LexerModelicaDiff_isLineComment(threadData, _t);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_LexerModelicaDiff_isBlockComment(threadData_t *threadData, modelica_metatype _t)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _t;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_integer tmp7;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          tmp7 = mmc_unbox_integer(tmpMeta6);
          if (7 != tmp7) goto tmp3_end;
          
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_LexerModelicaDiff_isBlockComment(threadData_t *threadData, modelica_metatype _t)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_LexerModelicaDiff_isBlockComment(threadData, _t);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_metatype omc_LexerModelicaDiff_filterModelicaDiff(threadData_t *threadData, modelica_metatype _diffs, modelica_boolean _removeWhitespace)
{
  modelica_metatype _odiffs = NULL;
  modelica_metatype _addedLineComments = NULL;
  modelica_metatype _removedLineComments = NULL;
  modelica_metatype _addedBlockComments = NULL;
  modelica_metatype _removedBlockComments = NULL;
  modelica_metatype _simpleDiff = NULL;
  modelica_metatype _tmp = NULL;
  modelica_metatype _rest = NULL;
  modelica_boolean _lastIsNewline;
  modelica_integer _depth;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta53;
  modelica_metatype tmpMeta85;
  modelica_boolean tmp86_c0 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta408;
  modelica_metatype tmpMeta412;
  modelica_metatype tmpMeta416;
  modelica_metatype tmpMeta420;
  modelica_metatype tmpMeta424;
  modelica_metatype tmpMeta464;
  modelica_metatype tmpMeta[3] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _odiffs has no default value.
  // _addedLineComments has no default value.
  // _removedLineComments has no default value.
  // _addedBlockComments has no default value.
  // _removedBlockComments has no default value.
  // _simpleDiff has no default value.
  // _tmp has no default value.
  // _rest has no default value.
  // _lastIsNewline has no default value.
  // _depth has no default value.
  { /* match expression */
    modelica_metatype tmp3_1;
    tmp3_1 = _diffs;
    {
      volatile mmc_switch_type tmp3;
      int tmp4;
      tmp3 = 0;
      for (; tmp3 < 2; tmp3++) {
        switch (MMC_SWITCH_CAST(tmp3)) {
        case 0: {
          modelica_metatype tmpMeta5;
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          if (listEmpty(tmp3_1)) goto tmp2_end;
          tmpMeta5 = MMC_CAR(tmp3_1);
          tmpMeta6 = MMC_CDR(tmp3_1);
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
          tmp8 = mmc_unbox_integer(tmpMeta7);
          if (3 != tmp8) goto tmp2_end;
          if (!listEmpty(tmpMeta6)) goto tmp2_end;
          /* Pattern matching succeeded */
          _odiffs = _diffs;

          goto _return;
          goto tmp2_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          goto tmp2_done;
        }
        }
        goto tmp2_end;
        tmp2_end: ;
      }
      goto goto_1;
      goto_1:;
      MMC_THROW_INTERNAL();
      goto tmp2_done;
      tmp2_done:;
    }
  }
  ;

  {
    modelica_metatype __omcQ_24tmpVar5;
    modelica_metatype tmpMeta10;
    modelica_metatype tmpMeta11;
    modelica_metatype __omcQ_24tmpVar4;
    modelica_integer tmp32;
    modelica_metatype _e_loopVar = 0;
    modelica_boolean tmp33 = 0;
    modelica_metatype _e;
    _e_loopVar = _diffs;
    tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar5 = tmpMeta10; /* defaultValue */
    while(1) {
      tmp32 = 1;
      while (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        { /* match expression */
          modelica_metatype tmp36_1;
          tmp36_1 = _e;
          {
            volatile mmc_switch_type tmp36;
            int tmp37;
            tmp36 = 0;
            for (; tmp36 < 4; tmp36++) {
              switch (MMC_SWITCH_CAST(tmp36)) {
              case 0: {
                modelica_metatype tmpMeta38;
                modelica_integer tmp39;
                modelica_metatype tmpMeta40;
                modelica_metatype tmpMeta41;
                modelica_metatype tmpMeta42;
                modelica_metatype tmpMeta43;
                modelica_integer tmp44;
                tmpMeta38 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp36_1), 1));
                tmp39 = mmc_unbox_integer(tmpMeta38);
                if (1 != tmp39) goto tmp35_end;
                tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp36_1), 2));
                if (listEmpty(tmpMeta40)) goto tmp35_end;
                tmpMeta41 = MMC_CAR(tmpMeta40);
                tmpMeta42 = MMC_CDR(tmpMeta40);
                tmpMeta43 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta41), 3));
                tmp44 = mmc_unbox_integer(tmpMeta43);
                if (101 != tmp44) goto tmp35_end;
                if (!listEmpty(tmpMeta42)) goto tmp35_end;
                /* Pattern matching succeeded */
                tmp33 = (!_removeWhitespace);
                goto tmp35_done;
              }
              case 1: {
                modelica_metatype tmpMeta45;
                modelica_integer tmp46;
                modelica_metatype tmpMeta47;
                modelica_metatype tmpMeta48;
                modelica_metatype tmpMeta49;
                modelica_metatype tmpMeta50;
                modelica_integer tmp51;
                tmpMeta45 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp36_1), 1));
                tmp46 = mmc_unbox_integer(tmpMeta45);
                if (1 != tmp46) goto tmp35_end;
                tmpMeta47 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp36_1), 2));
                if (listEmpty(tmpMeta47)) goto tmp35_end;
                tmpMeta48 = MMC_CAR(tmpMeta47);
                tmpMeta49 = MMC_CDR(tmpMeta47);
                tmpMeta50 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta48), 3));
                tmp51 = mmc_unbox_integer(tmpMeta50);
                if (61 != tmp51) goto tmp35_end;
                if (!listEmpty(tmpMeta49)) goto tmp35_end;
                /* Pattern matching succeeded */
                tmp33 = (!_removeWhitespace);
                goto tmp35_done;
              }
              case 2: {
                modelica_metatype tmpMeta52;
                tmpMeta52 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp36_1), 2));
                if (!listEmpty(tmpMeta52)) goto tmp35_end;
                /* Pattern matching succeeded */
                tmp33 = 0 /* false */;
                goto tmp35_done;
              }
              case 3: {
                
                /* Pattern matching succeeded */
                tmp33 = 1 /* true */;
                goto tmp35_done;
              }
              }
              goto tmp35_end;
              tmp35_end: ;
            }
            goto goto_34;
            goto_34:;
            MMC_THROW_INTERNAL();
            goto tmp35_done;
            tmp35_done:;
          }
        }
        if (tmp33) {
          tmp32--;
          break;
        }
      }
      if (tmp32 == 0) {
        { /* match expression */
          modelica_metatype tmp14_1;
          tmp14_1 = _e;
          {
            modelica_metatype _ts = NULL;
            volatile mmc_switch_type tmp14;
            int tmp15;
            // _ts has no default value.
            tmp14 = 0;
            for (; tmp14 < 3; tmp14++) {
              switch (MMC_SWITCH_CAST(tmp14)) {
              case 0: {
                modelica_metatype tmpMeta16;
                modelica_integer tmp17;
                modelica_metatype tmpMeta18;
                modelica_metatype tmpMeta19;
                modelica_metatype tmpMeta20;
                modelica_metatype tmpMeta21;
                modelica_integer tmp22;
                modelica_metatype tmpMeta23;
                tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp14_1), 1));
                tmp17 = mmc_unbox_integer(tmpMeta16);
                if (2 != tmp17) goto tmp13_end;
                tmpMeta18 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp14_1), 2));
                if (listEmpty(tmpMeta18)) goto tmp13_end;
                tmpMeta19 = MMC_CAR(tmpMeta18);
                tmpMeta20 = MMC_CDR(tmpMeta18);
                tmpMeta21 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta19), 3));
                tmp22 = mmc_unbox_integer(tmpMeta21);
                if (101 != tmp22) goto tmp13_end;
                if (!listEmpty(tmpMeta20)) goto tmp13_end;
                _ts = tmpMeta18;
                /* Pattern matching succeeded */
                tmpMeta23 = mmc_mk_box2(0, mmc_mk_integer(3), _ts);
                tmpMeta11 = tmpMeta23;
                goto tmp13_done;
              }
              case 1: {
                modelica_metatype tmpMeta24;
                modelica_integer tmp25;
                modelica_metatype tmpMeta26;
                modelica_metatype tmpMeta27;
                modelica_metatype tmpMeta28;
                modelica_metatype tmpMeta29;
                modelica_integer tmp30;
                modelica_metatype tmpMeta31;
                tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp14_1), 1));
                tmp25 = mmc_unbox_integer(tmpMeta24);
                if (2 != tmp25) goto tmp13_end;
                tmpMeta26 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp14_1), 2));
                if (listEmpty(tmpMeta26)) goto tmp13_end;
                tmpMeta27 = MMC_CAR(tmpMeta26);
                tmpMeta28 = MMC_CDR(tmpMeta26);
                tmpMeta29 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta27), 3));
                tmp30 = mmc_unbox_integer(tmpMeta29);
                if (61 != tmp30) goto tmp13_end;
                if (!listEmpty(tmpMeta28)) goto tmp13_end;
                _ts = tmpMeta26;
                /* Pattern matching succeeded */
                tmpMeta31 = mmc_mk_box2(0, mmc_mk_integer(3), _ts);
                tmpMeta11 = tmpMeta31;
                goto tmp13_done;
              }
              case 2: {
                
                /* Pattern matching succeeded */
                tmpMeta11 = _e;
                goto tmp13_done;
              }
              }
              goto tmp13_end;
              tmp13_end: ;
            }
            goto goto_12;
            goto_12:;
            MMC_THROW_INTERNAL();
            goto tmp13_done;
            tmp13_done:;
          }
        }__omcQ_24tmpVar4 = tmpMeta11;
        __omcQ_24tmpVar5 = mmc_mk_cons(__omcQ_24tmpVar4,__omcQ_24tmpVar5);
      } else if (tmp32 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    tmpMeta9 = __omcQ_24tmpVar5;
  }
  _odiffs = tmpMeta9;

  {
    modelica_metatype __omcQ_24tmpVar13;
    modelica_metatype tmpMeta54;
    modelica_metatype tmpMeta55;
    modelica_metatype __omcQ_24tmpVar12;
    modelica_integer tmp84;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = _odiffs;
    tmpMeta54 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar13 = tmpMeta54; /* defaultValue */
    while(1) {
      tmp84 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp84--;
      }
      if (tmp84 == 0) {
        { /* match expression */
          modelica_metatype tmp58_1;
          tmp58_1 = _e;
          {
            modelica_metatype _ts = NULL;
            volatile mmc_switch_type tmp58;
            int tmp59;
            // _ts has no default value.
            tmp58 = 0;
            for (; tmp58 < 3; tmp58++) {
              switch (MMC_SWITCH_CAST(tmp58)) {
              case 0: {
                modelica_metatype tmpMeta60;
                modelica_integer tmp61;
                modelica_metatype tmpMeta62;
                modelica_metatype tmpMeta63;
                tmpMeta60 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp58_1), 1));
                tmp61 = mmc_unbox_integer(tmpMeta60);
                if (1 != tmp61) goto tmp57_end;
                tmpMeta62 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp58_1), 2));
                _ts = tmpMeta62;
                /* Pattern matching succeeded */
                {
                  modelica_metatype __omcQ_24tmpVar7;
                  modelica_metatype* tmp64;
                  modelica_metatype tmpMeta65;
                  modelica_metatype tmpMeta66;
                  modelica_metatype __omcQ_24tmpVar6;
                  modelica_integer tmp67;
                  modelica_metatype _t_loopVar = 0;
                  modelica_metatype _t;
                  _t_loopVar = _ts;
                  tmpMeta65 = MMC_REFSTRUCTLIT(mmc_nil);
                  __omcQ_24tmpVar7 = tmpMeta65; /* defaultValue */
                  tmp64 = &__omcQ_24tmpVar7;
                  while(1) {
                    tmp67 = 1;
                    if (!listEmpty(_t_loopVar)) {
                      _t = MMC_CAR(_t_loopVar);
                      _t_loopVar = MMC_CDR(_t_loopVar);
                      tmp67--;
                    }
                    if (tmp67 == 0) {
                      tmpMeta66 = mmc_mk_box2(0, mmc_mk_integer(1), _t);
                      __omcQ_24tmpVar6 = tmpMeta66;
                      *tmp64 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                      tmp64 = &MMC_CDR(*tmp64);
                    } else if (tmp67 == 1) {
                      break;
                    } else {
                      goto goto_56;
                    }
                  }
                  *tmp64 = mmc_mk_nil();
                  tmpMeta63 = __omcQ_24tmpVar7;
                }
                tmpMeta55 = tmpMeta63;
                goto tmp57_done;
              }
              case 1: {
                modelica_metatype tmpMeta68;
                modelica_integer tmp69;
                modelica_metatype tmpMeta70;
                modelica_metatype tmpMeta71;
                tmpMeta68 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp58_1), 1));
                tmp69 = mmc_unbox_integer(tmpMeta68);
                if (3 != tmp69) goto tmp57_end;
                tmpMeta70 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp58_1), 2));
                _ts = tmpMeta70;
                /* Pattern matching succeeded */
                {
                  modelica_metatype __omcQ_24tmpVar9;
                  modelica_metatype* tmp72;
                  modelica_metatype tmpMeta73;
                  modelica_metatype tmpMeta74;
                  modelica_metatype __omcQ_24tmpVar8;
                  modelica_integer tmp75;
                  modelica_metatype _t_loopVar = 0;
                  modelica_metatype _t;
                  _t_loopVar = _ts;
                  tmpMeta73 = MMC_REFSTRUCTLIT(mmc_nil);
                  __omcQ_24tmpVar9 = tmpMeta73; /* defaultValue */
                  tmp72 = &__omcQ_24tmpVar9;
                  while(1) {
                    tmp75 = 1;
                    if (!listEmpty(_t_loopVar)) {
                      _t = MMC_CAR(_t_loopVar);
                      _t_loopVar = MMC_CDR(_t_loopVar);
                      tmp75--;
                    }
                    if (tmp75 == 0) {
                      tmpMeta74 = mmc_mk_box2(0, mmc_mk_integer(3), _t);
                      __omcQ_24tmpVar8 = tmpMeta74;
                      *tmp72 = mmc_mk_cons(__omcQ_24tmpVar8,0);
                      tmp72 = &MMC_CDR(*tmp72);
                    } else if (tmp75 == 1) {
                      break;
                    } else {
                      goto goto_56;
                    }
                  }
                  *tmp72 = mmc_mk_nil();
                  tmpMeta71 = __omcQ_24tmpVar9;
                }
                tmpMeta55 = tmpMeta71;
                goto tmp57_done;
              }
              case 2: {
                modelica_metatype tmpMeta76;
                modelica_integer tmp77;
                modelica_metatype tmpMeta78;
                modelica_metatype tmpMeta79;
                tmpMeta76 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp58_1), 1));
                tmp77 = mmc_unbox_integer(tmpMeta76);
                if (2 != tmp77) goto tmp57_end;
                tmpMeta78 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp58_1), 2));
                _ts = tmpMeta78;
                /* Pattern matching succeeded */
                {
                  modelica_metatype __omcQ_24tmpVar11;
                  modelica_metatype* tmp80;
                  modelica_metatype tmpMeta81;
                  modelica_metatype tmpMeta82;
                  modelica_metatype __omcQ_24tmpVar10;
                  modelica_integer tmp83;
                  modelica_metatype _t_loopVar = 0;
                  modelica_metatype _t;
                  _t_loopVar = _ts;
                  tmpMeta81 = MMC_REFSTRUCTLIT(mmc_nil);
                  __omcQ_24tmpVar11 = tmpMeta81; /* defaultValue */
                  tmp80 = &__omcQ_24tmpVar11;
                  while(1) {
                    tmp83 = 1;
                    if (!listEmpty(_t_loopVar)) {
                      _t = MMC_CAR(_t_loopVar);
                      _t_loopVar = MMC_CDR(_t_loopVar);
                      tmp83--;
                    }
                    if (tmp83 == 0) {
                      tmpMeta82 = mmc_mk_box2(0, mmc_mk_integer(2), _t);
                      __omcQ_24tmpVar10 = tmpMeta82;
                      *tmp80 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                      tmp80 = &MMC_CDR(*tmp80);
                    } else if (tmp83 == 1) {
                      break;
                    } else {
                      goto goto_56;
                    }
                  }
                  *tmp80 = mmc_mk_nil();
                  tmpMeta79 = __omcQ_24tmpVar11;
                }
                tmpMeta55 = tmpMeta79;
                goto tmp57_done;
              }
              }
              goto tmp57_end;
              tmp57_end: ;
            }
            goto goto_56;
            goto_56:;
            MMC_THROW_INTERNAL();
            goto tmp57_done;
            tmp57_done:;
          }
        }__omcQ_24tmpVar12 = tmpMeta55;
        __omcQ_24tmpVar13 = listAppend(__omcQ_24tmpVar12, __omcQ_24tmpVar13);
      } else if (tmp84 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    tmpMeta53 = __omcQ_24tmpVar13;
  }
  _simpleDiff = tmpMeta53;

  tmpMeta85 = MMC_REFSTRUCTLIT(mmc_nil);
  _tmp = tmpMeta85;

  _lastIsNewline = 0 /* false */;

  _depth = ((modelica_integer) 2);

  while(1)
  {
    if(!(!listEmpty(_simpleDiff))) break;
    
    
    
    { /* match expression */
      modelica_metatype tmp89_1;
      tmp89_1 = _simpleDiff;
      {
        modelica_metatype _e = NULL;
        modelica_metatype _e1 = NULL;
        modelica_metatype _e2 = NULL;
        modelica_metatype _t = NULL;
        modelica_metatype _t1 = NULL;
        modelica_metatype _t2 = NULL;
        modelica_metatype _tk3 = NULL;
        modelica_metatype _tk4 = NULL;
        modelica_metatype _tk5 = NULL;
        modelica_integer _t3;
        modelica_integer _t4;
        modelica_integer _t5;
        modelica_integer _d1;
        modelica_integer _d2;
        modelica_integer _d3;
        modelica_integer _d4;
        modelica_integer _d5;
        volatile mmc_switch_type tmp89;
        int tmp90;
        // _e has no default value.
        // _e1 has no default value.
        // _e2 has no default value.
        // _t has no default value.
        // _t1 has no default value.
        // _t2 has no default value.
        // _tk3 has no default value.
        // _tk4 has no default value.
        // _tk5 has no default value.
        // _t3 has no default value.
        // _t4 has no default value.
        // _t5 has no default value.
        // _d1 has no default value.
        // _d2 has no default value.
        // _d3 has no default value.
        // _d4 has no default value.
        // _d5 has no default value.
        tmp89 = 0;
        for (; tmp89 < 17; tmp89++) {
          switch (MMC_SWITCH_CAST(tmp89)) {
          case 0: {
            modelica_metatype tmpMeta91;
            modelica_metatype tmpMeta92;
            modelica_metatype tmpMeta93;
            modelica_integer tmp94;
            modelica_metatype tmpMeta95;
            modelica_metatype tmpMeta96;
            modelica_metatype tmpMeta97;
            modelica_integer tmp98;
            modelica_metatype tmpMeta99;
            modelica_metatype tmpMeta100;
            modelica_integer tmp101;
            modelica_metatype tmpMeta102;
            modelica_metatype tmpMeta103;
            modelica_metatype tmpMeta104;
            modelica_integer tmp105;
            modelica_metatype tmpMeta106;
            modelica_metatype tmpMeta107;
            modelica_integer tmp108;
            modelica_metatype tmpMeta109;
            modelica_metatype tmpMeta110;
            modelica_metatype tmpMeta111;
            modelica_integer tmp112;
            modelica_metatype tmpMeta113;
            modelica_metatype tmpMeta114;
            modelica_metatype tmpMeta115;
            modelica_metatype tmpMeta116;
            modelica_metatype tmpMeta117;
            modelica_metatype tmpMeta118;
            if (listEmpty(tmp89_1)) goto tmp88_end;
            tmpMeta91 = MMC_CAR(tmp89_1);
            tmpMeta92 = MMC_CDR(tmp89_1);
            tmpMeta93 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta91), 1));
            tmp94 = mmc_unbox_integer(tmpMeta93);
            if (3 != tmp94) goto tmp88_end;
            if (listEmpty(tmpMeta92)) goto tmp88_end;
            tmpMeta95 = MMC_CAR(tmpMeta92);
            tmpMeta96 = MMC_CDR(tmpMeta92);
            tmpMeta97 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta95), 1));
            tmp98 = mmc_unbox_integer(tmpMeta97);
            if (2 != tmp98) goto tmp88_end;
            tmpMeta99 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta95), 2));
            tmpMeta100 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta99), 3));
            tmp101 = mmc_unbox_integer(tmpMeta100);
            if (61 != tmp101) goto tmp88_end;
            if (listEmpty(tmpMeta96)) goto tmp88_end;
            tmpMeta102 = MMC_CAR(tmpMeta96);
            tmpMeta103 = MMC_CDR(tmpMeta96);
            tmpMeta104 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta102), 1));
            tmp105 = mmc_unbox_integer(tmpMeta104);
            if (2 != tmp105) goto tmp88_end;
            tmpMeta106 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta102), 2));
            tmpMeta107 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta106), 3));
            tmp108 = mmc_unbox_integer(tmpMeta107);
            if (101 != tmp108) goto tmp88_end;
            if (listEmpty(tmpMeta103)) goto tmp88_end;
            tmpMeta109 = MMC_CAR(tmpMeta103);
            tmpMeta110 = MMC_CDR(tmpMeta103);
            tmpMeta111 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta109), 1));
            tmp112 = mmc_unbox_integer(tmpMeta111);
            if (3 != tmp112) goto tmp88_end;
            
            _e1 = tmpMeta91;
            _t1 = tmpMeta99;
            _t2 = tmpMeta106;
            _e2 = tmpMeta109;
            _rest = tmpMeta110;
            /* Pattern matching succeeded */
            tmpMeta115 = mmc_mk_box2(0, mmc_mk_integer(3), _t1);
            tmpMeta117 = mmc_mk_box2(0, mmc_mk_integer(3), _t2);
            tmpMeta118 = mmc_mk_cons(_e2, _rest);
            tmpMeta116 = mmc_mk_cons(tmpMeta117, tmpMeta118);
            tmpMeta114 = mmc_mk_cons(tmpMeta115, tmpMeta116);
            tmpMeta113 = mmc_mk_cons(_e1, tmpMeta114);
            tmp86_c0 = 0 /* false */;
            tmpMeta[0+1] = tmpMeta113;
            tmpMeta[0+2] = _tmp;
            goto tmp88_done;
          }
          case 1: {
            modelica_metatype tmpMeta119;
            modelica_metatype tmpMeta120;
            modelica_metatype tmpMeta121;
            modelica_integer tmp122;
            modelica_metatype tmpMeta123;
            modelica_metatype tmpMeta124;
            modelica_metatype tmpMeta125;
            modelica_integer tmp126;
            modelica_metatype tmpMeta127;
            modelica_metatype tmpMeta128;
            modelica_integer tmp129;
            modelica_metatype tmpMeta130;
            modelica_metatype tmpMeta131;
            modelica_metatype tmpMeta132;
            modelica_integer tmp133;
            modelica_metatype tmpMeta134;
            modelica_metatype tmpMeta135;
            modelica_metatype tmpMeta136;
            modelica_metatype tmpMeta137;
            if (listEmpty(tmp89_1)) goto tmp88_end;
            tmpMeta119 = MMC_CAR(tmp89_1);
            tmpMeta120 = MMC_CDR(tmp89_1);
            tmpMeta121 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta119), 1));
            tmp122 = mmc_unbox_integer(tmpMeta121);
            if (3 != tmp122) goto tmp88_end;
            if (listEmpty(tmpMeta120)) goto tmp88_end;
            tmpMeta123 = MMC_CAR(tmpMeta120);
            tmpMeta124 = MMC_CDR(tmpMeta120);
            tmpMeta125 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta123), 1));
            tmp126 = mmc_unbox_integer(tmpMeta125);
            if (2 != tmp126) goto tmp88_end;
            tmpMeta127 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta123), 2));
            tmpMeta128 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta127), 3));
            tmp129 = mmc_unbox_integer(tmpMeta128);
            if (101 != tmp129) goto tmp88_end;
            if (listEmpty(tmpMeta124)) goto tmp88_end;
            tmpMeta130 = MMC_CAR(tmpMeta124);
            tmpMeta131 = MMC_CDR(tmpMeta124);
            tmpMeta132 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta130), 1));
            tmp133 = mmc_unbox_integer(tmpMeta132);
            if (3 != tmp133) goto tmp88_end;
            
            _e1 = tmpMeta119;
            _t = tmpMeta127;
            _e2 = tmpMeta130;
            _rest = tmpMeta131;
            /* Pattern matching succeeded */
            tmpMeta136 = mmc_mk_box2(0, mmc_mk_integer(3), _t);
            tmpMeta137 = mmc_mk_cons(_e2, _rest);
            tmpMeta135 = mmc_mk_cons(tmpMeta136, tmpMeta137);
            tmpMeta134 = mmc_mk_cons(_e1, tmpMeta135);
            tmp86_c0 = 0 /* false */;
            tmpMeta[0+1] = tmpMeta134;
            tmpMeta[0+2] = _tmp;
            goto tmp88_done;
          }
          case 2: {
            modelica_metatype tmpMeta138;
            modelica_metatype tmpMeta139;
            modelica_metatype tmpMeta140;
            modelica_integer tmp141;
            modelica_metatype tmpMeta142;
            modelica_metatype tmpMeta143;
            modelica_integer tmp144;
            modelica_metatype tmpMeta145;
            if (listEmpty(tmp89_1)) goto tmp88_end;
            tmpMeta138 = MMC_CAR(tmp89_1);
            tmpMeta139 = MMC_CDR(tmp89_1);
            tmpMeta140 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta138), 1));
            tmp141 = mmc_unbox_integer(tmpMeta140);
            if (3 != tmp141) goto tmp88_end;
            tmpMeta142 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta138), 2));
            tmpMeta143 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta142), 3));
            tmp144 = mmc_unbox_integer(tmpMeta143);
            
            _e1 = tmpMeta138;
            _t3 = tmp144  /* pattern as ty=enumeration(_NO_TOKEN, ALGORITHM, AND, ANNOTATION, ASSIGN, BLOCK, BLOCK_COMMENT, BREAK, CLASS, COLON, COLONCOLON, COMMA, CONNECT, CONNECTOR, CONSTANT, CONSTRAINEDBY, DEFINEUNIT, DER, DISCRETE, DOT, EACH, ELSE, ELSEIF, ELSEWHEN, ENCAPSULATED, END, ENUMERATION, EQEQ, EQUALS, EQUATION, EXPANDABLE, EXTENDS, EXTERNAL, FALSE, FINAL, FLOW, FOR, FUNCTION, GREATER, GREATEREQ, IDENT, IF, IMPORT, IMPURE, IN, INITIAL, INNER, INPUT, LBRACE, LBRACK, LESS, LESSEQ, LESSGT, LINE_COMMENT, LOOP, LPAR, MINUS, MINUS_EW, MODEL, MODELICA, NEWLINE, NOT, OPERATOR, OPTIMIZATION, OR, OUTER, OUTPUT, OVERLOAD, PACKAGE, PARAMETER, PARTIAL, PLUS, PLUS_EW, POWER, POWER_EW, PROTECTED, PUBLIC, PURE, RBRACE, RBRACK, RECORD, REDECLARE, REPLACEABLE, RETURN, RPAR, SEMICOLON, SLASH, SLASH_EW, STAR, STAR_EW, STREAM, STRING, SUBTYPEOF, THEN, TRUE, TYPE, UNSIGNED_INTEGER, UNSIGNED_REAL, WHEN, WHILE, WHITESPACE, WITHIN) */;
            _rest = tmpMeta139;
            /* Pattern matching succeeded */
            /* Check guard condition after assignments */
            if (!((((modelica_integer)_t3 != 101) && ((modelica_integer)_t3 != 61)) && omc_LexerModelicaDiff_deleteWhitespaceFollowedByEqualNonWhitespace(threadData, _rest, NULL))) goto tmp88_end;
            omc_LexerModelicaDiff_deleteWhitespaceFollowedByEqualNonWhitespace(threadData, _rest ,&_rest);
            tmpMeta145 = mmc_mk_cons(_e1, _rest);
            tmp86_c0 = 0 /* false */;
            tmpMeta[0+1] = tmpMeta145;
            tmpMeta[0+2] = _tmp;
            goto tmp88_done;
          }
          case 3: {
            modelica_metatype tmpMeta146;
            modelica_metatype tmpMeta147;
            modelica_metatype tmpMeta148;
            modelica_integer tmp149;
            modelica_metatype tmpMeta150;
            modelica_metatype tmpMeta151;
            modelica_metatype tmpMeta152;
            modelica_metatype tmpMeta153;
            modelica_integer tmp154;
            modelica_metatype tmpMeta155;
            modelica_metatype tmpMeta156;
            modelica_integer tmp157;
            modelica_metatype tmpMeta158;
            modelica_metatype tmpMeta159;
            modelica_metatype tmpMeta160;
            modelica_integer tmp161;
            modelica_metatype tmpMeta162;
            modelica_metatype tmpMeta163;
            modelica_integer tmp164;
            modelica_metatype tmpMeta165;
            modelica_metatype tmpMeta166;
            modelica_metatype tmpMeta167;
            modelica_integer tmp168;
            modelica_metatype tmpMeta169;
            modelica_metatype tmpMeta170;
            modelica_integer tmp171;
            modelica_metatype tmpMeta172;
            modelica_metatype tmpMeta173;
            modelica_metatype tmpMeta174;
            modelica_integer tmp175;
            modelica_metatype tmpMeta176;
            modelica_metatype tmpMeta177;
            modelica_metatype tmpMeta178;
            if (listEmpty(tmp89_1)) goto tmp88_end;
            tmpMeta146 = MMC_CAR(tmp89_1);
            tmpMeta147 = MMC_CDR(tmp89_1);
            tmpMeta148 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta146), 1));
            tmp149 = mmc_unbox_integer(tmpMeta148);
            tmpMeta150 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta146), 2));
            if (listEmpty(tmpMeta147)) goto tmp88_end;
            tmpMeta151 = MMC_CAR(tmpMeta147);
            tmpMeta152 = MMC_CDR(tmpMeta147);
            tmpMeta153 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta151), 1));
            tmp154 = mmc_unbox_integer(tmpMeta153);
            if (1 != tmp154) goto tmp88_end;
            tmpMeta155 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta151), 2));
            tmpMeta156 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta155), 3));
            tmp157 = mmc_unbox_integer(tmpMeta156);
            if (listEmpty(tmpMeta152)) goto tmp88_end;
            tmpMeta158 = MMC_CAR(tmpMeta152);
            tmpMeta159 = MMC_CDR(tmpMeta152);
            tmpMeta160 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta158), 1));
            tmp161 = mmc_unbox_integer(tmpMeta160);
            if (1 != tmp161) goto tmp88_end;
            tmpMeta162 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta158), 2));
            tmpMeta163 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta162), 3));
            tmp164 = mmc_unbox_integer(tmpMeta163);
            if (listEmpty(tmpMeta159)) goto tmp88_end;
            tmpMeta165 = MMC_CAR(tmpMeta159);
            tmpMeta166 = MMC_CDR(tmpMeta159);
            tmpMeta167 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta165), 1));
            tmp168 = mmc_unbox_integer(tmpMeta167);
            if (1 != tmp168) goto tmp88_end;
            tmpMeta169 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta165), 2));
            tmpMeta170 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta169), 3));
            tmp171 = mmc_unbox_integer(tmpMeta170);
            if (listEmpty(tmpMeta166)) goto tmp88_end;
            tmpMeta172 = MMC_CAR(tmpMeta166);
            tmpMeta173 = MMC_CDR(tmpMeta166);
            tmpMeta174 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta172), 1));
            tmp175 = mmc_unbox_integer(tmpMeta174);
            tmpMeta176 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta172), 2));
            _d1 = tmp149  /* pattern as ty=enumeration(Add, Delete, Equal) */;
            _t1 = tmpMeta150;
            _t3 = tmp157  /* pattern as ty=enumeration(_NO_TOKEN, ALGORITHM, AND, ANNOTATION, ASSIGN, BLOCK, BLOCK_COMMENT, BREAK, CLASS, COLON, COLONCOLON, COMMA, CONNECT, CONNECTOR, CONSTANT, CONSTRAINEDBY, DEFINEUNIT, DER, DISCRETE, DOT, EACH, ELSE, ELSEIF, ELSEWHEN, ENCAPSULATED, END, ENUMERATION, EQEQ, EQUALS, EQUATION, EXPANDABLE, EXTENDS, EXTERNAL, FALSE, FINAL, FLOW, FOR, FUNCTION, GREATER, GREATEREQ, IDENT, IF, IMPORT, IMPURE, IN, INITIAL, INNER, INPUT, LBRACE, LBRACK, LESS, LESSEQ, LESSGT, LINE_COMMENT, LOOP, LPAR, MINUS, MINUS_EW, MODEL, MODELICA, NEWLINE, NOT, OPERATOR, OPTIMIZATION, OR, OUTER, OUTPUT, OVERLOAD, PACKAGE, PARAMETER, PARTIAL, PLUS, PLUS_EW, POWER, POWER_EW, PROTECTED, PUBLIC, PURE, RBRACE, RBRACK, RECORD, REDECLARE, REPLACEABLE, RETURN, RPAR, SEMICOLON, SLASH, SLASH_EW, STAR, STAR_EW, STREAM, STRING, SUBTYPEOF, THEN, TRUE, TYPE, UNSIGNED_INTEGER, UNSIGNED_REAL, WHEN, WHILE, WHITESPACE, WITHIN) */;
            _t4 = tmp164  /* pattern as ty=enumeration(_NO_TOKEN, ALGORITHM, AND, ANNOTATION, ASSIGN, BLOCK, BLOCK_COMMENT, BREAK, CLASS, COLON, COLONCOLON, COMMA, CONNECT, CONNECTOR, CONSTANT, CONSTRAINEDBY, DEFINEUNIT, DER, DISCRETE, DOT, EACH, ELSE, ELSEIF, ELSEWHEN, ENCAPSULATED, END, ENUMERATION, EQEQ, EQUALS, EQUATION, EXPANDABLE, EXTENDS, EXTERNAL, FALSE, FINAL, FLOW, FOR, FUNCTION, GREATER, GREATEREQ, IDENT, IF, IMPORT, IMPURE, IN, INITIAL, INNER, INPUT, LBRACE, LBRACK, LESS, LESSEQ, LESSGT, LINE_COMMENT, LOOP, LPAR, MINUS, MINUS_EW, MODEL, MODELICA, NEWLINE, NOT, OPERATOR, OPTIMIZATION, OR, OUTER, OUTPUT, OVERLOAD, PACKAGE, PARAMETER, PARTIAL, PLUS, PLUS_EW, POWER, POWER_EW, PROTECTED, PUBLIC, PURE, RBRACE, RBRACK, RECORD, REDECLARE, REPLACEABLE, RETURN, RPAR, SEMICOLON, SLASH, SLASH_EW, STAR, STAR_EW, STREAM, STRING, SUBTYPEOF, THEN, TRUE, TYPE, UNSIGNED_INTEGER, UNSIGNED_REAL, WHEN, WHILE, WHITESPACE, WITHIN) */;
            _t5 = tmp171  /* pattern as ty=enumeration(_NO_TOKEN, ALGORITHM, AND, ANNOTATION, ASSIGN, BLOCK, BLOCK_COMMENT, BREAK, CLASS, COLON, COLONCOLON, COMMA, CONNECT, CONNECTOR, CONSTANT, CONSTRAINEDBY, DEFINEUNIT, DER, DISCRETE, DOT, EACH, ELSE, ELSEIF, ELSEWHEN, ENCAPSULATED, END, ENUMERATION, EQEQ, EQUALS, EQUATION, EXPANDABLE, EXTENDS, EXTERNAL, FALSE, FINAL, FLOW, FOR, FUNCTION, GREATER, GREATEREQ, IDENT, IF, IMPORT, IMPURE, IN, INITIAL, INNER, INPUT, LBRACE, LBRACK, LESS, LESSEQ, LESSGT, LINE_COMMENT, LOOP, LPAR, MINUS, MINUS_EW, MODEL, MODELICA, NEWLINE, NOT, OPERATOR, OPTIMIZATION, OR, OUTER, OUTPUT, OVERLOAD, PACKAGE, PARAMETER, PARTIAL, PLUS, PLUS_EW, POWER, POWER_EW, PROTECTED, PUBLIC, PURE, RBRACE, RBRACK, RECORD, REDECLARE, REPLACEABLE, RETURN, RPAR, SEMICOLON, SLASH, SLASH_EW, STAR, STAR_EW, STREAM, STRING, SUBTYPEOF, THEN, TRUE, TYPE, UNSIGNED_INTEGER, UNSIGNED_REAL, WHEN, WHILE, WHITESPACE, WITHIN) */;
            _d2 = tmp175  /* pattern as ty=enumeration(Add, Delete, Equal) */;
            _t2 = tmpMeta176;
            _rest = tmpMeta173;
            /* Pattern matching succeeded */
            /* Check guard condition after assignments */
            if (!((((((((modelica_integer)_d1 == 1) && ((modelica_integer)_d2 == 2)) || (((modelica_integer)_d2 == 1) && ((modelica_integer)_d1 == 2))) && omc_LexerModelicaDiff_modelicaDiffTokenEq(threadData, _t1, _t2)) && (((modelica_integer)_t3 == 61) || ((modelica_integer)_t3 == 101))) && (((modelica_integer)_t4 == 61) || ((modelica_integer)_t4 == 101))) && (((modelica_integer)_t5 == 61) || ((modelica_integer)_t5 == 101)))) goto tmp88_end;
            tmpMeta178 = mmc_mk_box2(0, mmc_mk_integer(3), _t1);
            tmpMeta177 = mmc_mk_cons(tmpMeta178, _rest);
            tmp86_c0 = 0 /* false */;
            tmpMeta[0+1] = tmpMeta177;
            tmpMeta[0+2] = _tmp;
            goto tmp88_done;
          }
          case 4: {
            modelica_metatype tmpMeta179;
            modelica_metatype tmpMeta180;
            modelica_metatype tmpMeta181;
            modelica_integer tmp182;
            modelica_metatype tmpMeta183;
            modelica_metatype tmpMeta184;
            modelica_metatype tmpMeta185;
            modelica_metatype tmpMeta186;
            modelica_integer tmp187;
            modelica_metatype tmpMeta188;
            modelica_metatype tmpMeta189;
            modelica_integer tmp190;
            modelica_metatype tmpMeta191;
            modelica_metatype tmpMeta192;
            modelica_metatype tmpMeta193;
            modelica_integer tmp194;
            modelica_metatype tmpMeta195;
            modelica_metatype tmpMeta196;
            modelica_integer tmp197;
            modelica_metatype tmpMeta198;
            modelica_metatype tmpMeta199;
            modelica_metatype tmpMeta200;
            modelica_integer tmp201;
            modelica_metatype tmpMeta202;
            modelica_metatype tmpMeta203;
            modelica_metatype tmpMeta204;
            if (listEmpty(tmp89_1)) goto tmp88_end;
            tmpMeta179 = MMC_CAR(tmp89_1);
            tmpMeta180 = MMC_CDR(tmp89_1);
            tmpMeta181 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta179), 1));
            tmp182 = mmc_unbox_integer(tmpMeta181);
            tmpMeta183 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta179), 2));
            if (listEmpty(tmpMeta180)) goto tmp88_end;
            tmpMeta184 = MMC_CAR(tmpMeta180);
            tmpMeta185 = MMC_CDR(tmpMeta180);
            tmpMeta186 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta184), 1));
            tmp187 = mmc_unbox_integer(tmpMeta186);
            if (1 != tmp187) goto tmp88_end;
            tmpMeta188 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta184), 2));
            tmpMeta189 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta188), 3));
            tmp190 = mmc_unbox_integer(tmpMeta189);
            if (listEmpty(tmpMeta185)) goto tmp88_end;
            tmpMeta191 = MMC_CAR(tmpMeta185);
            tmpMeta192 = MMC_CDR(tmpMeta185);
            tmpMeta193 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta191), 1));
            tmp194 = mmc_unbox_integer(tmpMeta193);
            if (1 != tmp194) goto tmp88_end;
            tmpMeta195 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta191), 2));
            tmpMeta196 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta195), 3));
            tmp197 = mmc_unbox_integer(tmpMeta196);
            if (listEmpty(tmpMeta192)) goto tmp88_end;
            tmpMeta198 = MMC_CAR(tmpMeta192);
            tmpMeta199 = MMC_CDR(tmpMeta192);
            tmpMeta200 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta198), 1));
            tmp201 = mmc_unbox_integer(tmpMeta200);
            tmpMeta202 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta198), 2));
            _d1 = tmp182  /* pattern as ty=enumeration(Add, Delete, Equal) */;
            _t1 = tmpMeta183;
            _t3 = tmp190  /* pattern as ty=enumeration(_NO_TOKEN, ALGORITHM, AND, ANNOTATION, ASSIGN, BLOCK, BLOCK_COMMENT, BREAK, CLASS, COLON, COLONCOLON, COMMA, CONNECT, CONNECTOR, CONSTANT, CONSTRAINEDBY, DEFINEUNIT, DER, DISCRETE, DOT, EACH, ELSE, ELSEIF, ELSEWHEN, ENCAPSULATED, END, ENUMERATION, EQEQ, EQUALS, EQUATION, EXPANDABLE, EXTENDS, EXTERNAL, FALSE, FINAL, FLOW, FOR, FUNCTION, GREATER, GREATEREQ, IDENT, IF, IMPORT, IMPURE, IN, INITIAL, INNER, INPUT, LBRACE, LBRACK, LESS, LESSEQ, LESSGT, LINE_COMMENT, LOOP, LPAR, MINUS, MINUS_EW, MODEL, MODELICA, NEWLINE, NOT, OPERATOR, OPTIMIZATION, OR, OUTER, OUTPUT, OVERLOAD, PACKAGE, PARAMETER, PARTIAL, PLUS, PLUS_EW, POWER, POWER_EW, PROTECTED, PUBLIC, PURE, RBRACE, RBRACK, RECORD, REDECLARE, REPLACEABLE, RETURN, RPAR, SEMICOLON, SLASH, SLASH_EW, STAR, STAR_EW, STREAM, STRING, SUBTYPEOF, THEN, TRUE, TYPE, UNSIGNED_INTEGER, UNSIGNED_REAL, WHEN, WHILE, WHITESPACE, WITHIN) */;
            _t4 = tmp197  /* pattern as ty=enumeration(_NO_TOKEN, ALGORITHM, AND, ANNOTATION, ASSIGN, BLOCK, BLOCK_COMMENT, BREAK, CLASS, COLON, COLONCOLON, COMMA, CONNECT, CONNECTOR, CONSTANT, CONSTRAINEDBY, DEFINEUNIT, DER, DISCRETE, DOT, EACH, ELSE, ELSEIF, ELSEWHEN, ENCAPSULATED, END, ENUMERATION, EQEQ, EQUALS, EQUATION, EXPANDABLE, EXTENDS, EXTERNAL, FALSE, FINAL, FLOW, FOR, FUNCTION, GREATER, GREATEREQ, IDENT, IF, IMPORT, IMPURE, IN, INITIAL, INNER, INPUT, LBRACE, LBRACK, LESS, LESSEQ, LESSGT, LINE_COMMENT, LOOP, LPAR, MINUS, MINUS_EW, MODEL, MODELICA, NEWLINE, NOT, OPERATOR, OPTIMIZATION, OR, OUTER, OUTPUT, OVERLOAD, PACKAGE, PARAMETER, PARTIAL, PLUS, PLUS_EW, POWER, POWER_EW, PROTECTED, PUBLIC, PURE, RBRACE, RBRACK, RECORD, REDECLARE, REPLACEABLE, RETURN, RPAR, SEMICOLON, SLASH, SLASH_EW, STAR, STAR_EW, STREAM, STRING, SUBTYPEOF, THEN, TRUE, TYPE, UNSIGNED_INTEGER, UNSIGNED_REAL, WHEN, WHILE, WHITESPACE, WITHIN) */;
            _d2 = tmp201  /* pattern as ty=enumeration(Add, Delete, Equal) */;
            _t2 = tmpMeta202;
            _rest = tmpMeta199;
            /* Pattern matching succeeded */
            /* Check guard condition after assignments */
            if (!(((((((modelica_integer)_d1 == 1) && ((modelica_integer)_d2 == 2)) || (((modelica_integer)_d2 == 1) && ((modelica_integer)_d1 == 2))) && omc_LexerModelicaDiff_modelicaDiffTokenEq(threadData, _t1, _t2)) && (((modelica_integer)_t3 == 61) || ((modelica_integer)_t3 == 101))) && (((modelica_integer)_t4 == 61) || ((modelica_integer)_t4 == 101)))) goto tmp88_end;
            tmpMeta204 = mmc_mk_box2(0, mmc_mk_integer(3), _t1);
            tmpMeta203 = mmc_mk_cons(tmpMeta204, _rest);
            tmp86_c0 = 0 /* false */;
            tmpMeta[0+1] = tmpMeta203;
            tmpMeta[0+2] = _tmp;
            goto tmp88_done;
          }
          case 5: {
            modelica_metatype tmpMeta205;
            modelica_metatype tmpMeta206;
            modelica_metatype tmpMeta207;
            modelica_integer tmp208;
            modelica_metatype tmpMeta209;
            modelica_metatype tmpMeta210;
            modelica_metatype tmpMeta211;
            modelica_metatype tmpMeta212;
            modelica_integer tmp213;
            modelica_metatype tmpMeta214;
            modelica_metatype tmpMeta215;
            modelica_integer tmp216;
            modelica_metatype tmpMeta217;
            modelica_metatype tmpMeta218;
            modelica_metatype tmpMeta219;
            modelica_integer tmp220;
            modelica_metatype tmpMeta221;
            modelica_metatype tmpMeta222;
            modelica_metatype tmpMeta223;
            if (listEmpty(tmp89_1)) goto tmp88_end;
            tmpMeta205 = MMC_CAR(tmp89_1);
            tmpMeta206 = MMC_CDR(tmp89_1);
            tmpMeta207 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta205), 1));
            tmp208 = mmc_unbox_integer(tmpMeta207);
            tmpMeta209 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta205), 2));
            if (listEmpty(tmpMeta206)) goto tmp88_end;
            tmpMeta210 = MMC_CAR(tmpMeta206);
            tmpMeta211 = MMC_CDR(tmpMeta206);
            tmpMeta212 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta210), 1));
            tmp213 = mmc_unbox_integer(tmpMeta212);
            if (1 != tmp213) goto tmp88_end;
            tmpMeta214 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta210), 2));
            tmpMeta215 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta214), 3));
            tmp216 = mmc_unbox_integer(tmpMeta215);
            if (listEmpty(tmpMeta211)) goto tmp88_end;
            tmpMeta217 = MMC_CAR(tmpMeta211);
            tmpMeta218 = MMC_CDR(tmpMeta211);
            tmpMeta219 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta217), 1));
            tmp220 = mmc_unbox_integer(tmpMeta219);
            tmpMeta221 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta217), 2));
            _d1 = tmp208  /* pattern as ty=enumeration(Add, Delete, Equal) */;
            _t1 = tmpMeta209;
            _t3 = tmp216  /* pattern as ty=enumeration(_NO_TOKEN, ALGORITHM, AND, ANNOTATION, ASSIGN, BLOCK, BLOCK_COMMENT, BREAK, CLASS, COLON, COLONCOLON, COMMA, CONNECT, CONNECTOR, CONSTANT, CONSTRAINEDBY, DEFINEUNIT, DER, DISCRETE, DOT, EACH, ELSE, ELSEIF, ELSEWHEN, ENCAPSULATED, END, ENUMERATION, EQEQ, EQUALS, EQUATION, EXPANDABLE, EXTENDS, EXTERNAL, FALSE, FINAL, FLOW, FOR, FUNCTION, GREATER, GREATEREQ, IDENT, IF, IMPORT, IMPURE, IN, INITIAL, INNER, INPUT, LBRACE, LBRACK, LESS, LESSEQ, LESSGT, LINE_COMMENT, LOOP, LPAR, MINUS, MINUS_EW, MODEL, MODELICA, NEWLINE, NOT, OPERATOR, OPTIMIZATION, OR, OUTER, OUTPUT, OVERLOAD, PACKAGE, PARAMETER, PARTIAL, PLUS, PLUS_EW, POWER, POWER_EW, PROTECTED, PUBLIC, PURE, RBRACE, RBRACK, RECORD, REDECLARE, REPLACEABLE, RETURN, RPAR, SEMICOLON, SLASH, SLASH_EW, STAR, STAR_EW, STREAM, STRING, SUBTYPEOF, THEN, TRUE, TYPE, UNSIGNED_INTEGER, UNSIGNED_REAL, WHEN, WHILE, WHITESPACE, WITHIN) */;
            _d2 = tmp220  /* pattern as ty=enumeration(Add, Delete, Equal) */;
            _t2 = tmpMeta221;
            _rest = tmpMeta218;
            /* Pattern matching succeeded */
            /* Check guard condition after assignments */
            if (!((((((modelica_integer)_d1 == 1) && ((modelica_integer)_d2 == 2)) || (((modelica_integer)_d2 == 1) && ((modelica_integer)_d1 == 2))) && omc_LexerModelicaDiff_modelicaDiffTokenEq(threadData, _t1, _t2)) && (((modelica_integer)_t3 == 61) || ((modelica_integer)_t3 == 101)))) goto tmp88_end;
            tmpMeta223 = mmc_mk_box2(0, mmc_mk_integer(3), _t1);
            tmpMeta222 = mmc_mk_cons(tmpMeta223, _rest);
            tmp86_c0 = 0 /* false */;
            tmpMeta[0+1] = tmpMeta222;
            tmpMeta[0+2] = _tmp;
            goto tmp88_done;
          }
          case 6: {
            modelica_metatype tmpMeta224;
            modelica_metatype tmpMeta225;
            modelica_metatype tmpMeta226;
            modelica_integer tmp227;
            modelica_metatype tmpMeta228;
            modelica_metatype tmpMeta229;
            modelica_metatype tmpMeta230;
            modelica_metatype tmpMeta231;
            modelica_integer tmp232;
            modelica_metatype tmpMeta233;
            modelica_metatype tmpMeta234;
            modelica_integer tmp235;
            modelica_metatype tmpMeta236;
            modelica_metatype tmpMeta237;
            modelica_metatype tmpMeta238;
            modelica_integer tmp239;
            modelica_metatype tmpMeta240;
            modelica_metatype tmpMeta241;
            modelica_integer tmp242;
            modelica_metatype tmpMeta243;
            modelica_metatype tmpMeta244;
            modelica_metatype tmpMeta245;
            modelica_integer tmp246;
            modelica_metatype tmpMeta247;
            modelica_metatype tmpMeta248;
            modelica_integer tmp249;
            modelica_metatype tmpMeta250;
            modelica_metatype tmpMeta251;
            modelica_metatype tmpMeta252;
            modelica_integer tmp253;
            modelica_metatype tmpMeta254;
            modelica_metatype tmpMeta255;
            modelica_metatype tmpMeta256;
            modelica_metatype tmpMeta257;
            modelica_metatype tmpMeta258;
            modelica_metatype tmpMeta259;
            modelica_metatype tmpMeta260;
            modelica_metatype tmpMeta261;
            modelica_metatype tmpMeta262;
            if (listEmpty(tmp89_1)) goto tmp88_end;
            tmpMeta224 = MMC_CAR(tmp89_1);
            tmpMeta225 = MMC_CDR(tmp89_1);
            tmpMeta226 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta224), 1));
            tmp227 = mmc_unbox_integer(tmpMeta226);
            tmpMeta228 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta224), 2));
            if (listEmpty(tmpMeta225)) goto tmp88_end;
            tmpMeta229 = MMC_CAR(tmpMeta225);
            tmpMeta230 = MMC_CDR(tmpMeta225);
            tmpMeta231 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta229), 1));
            tmp232 = mmc_unbox_integer(tmpMeta231);
            tmpMeta233 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta229), 2));
            tmpMeta234 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta233), 3));
            tmp235 = mmc_unbox_integer(tmpMeta234);
            if (listEmpty(tmpMeta230)) goto tmp88_end;
            tmpMeta236 = MMC_CAR(tmpMeta230);
            tmpMeta237 = MMC_CDR(tmpMeta230);
            tmpMeta238 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta236), 1));
            tmp239 = mmc_unbox_integer(tmpMeta238);
            tmpMeta240 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta236), 2));
            tmpMeta241 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta240), 3));
            tmp242 = mmc_unbox_integer(tmpMeta241);
            if (listEmpty(tmpMeta237)) goto tmp88_end;
            tmpMeta243 = MMC_CAR(tmpMeta237);
            tmpMeta244 = MMC_CDR(tmpMeta237);
            tmpMeta245 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta243), 1));
            tmp246 = mmc_unbox_integer(tmpMeta245);
            tmpMeta247 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta243), 2));
            tmpMeta248 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta247), 3));
            tmp249 = mmc_unbox_integer(tmpMeta248);
            if (listEmpty(tmpMeta244)) goto tmp88_end;
            tmpMeta250 = MMC_CAR(tmpMeta244);
            tmpMeta251 = MMC_CDR(tmpMeta244);
            tmpMeta252 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta250), 1));
            tmp253 = mmc_unbox_integer(tmpMeta252);
            tmpMeta254 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta250), 2));
            _d1 = tmp227  /* pattern as ty=enumeration(Add, Delete, Equal) */;
            _t1 = tmpMeta228;
            _d3 = tmp232  /* pattern as ty=enumeration(Add, Delete, Equal) */;
            _tk3 = tmpMeta233;
            _t3 = tmp235  /* pattern as ty=enumeration(_NO_TOKEN, ALGORITHM, AND, ANNOTATION, ASSIGN, BLOCK, BLOCK_COMMENT, BREAK, CLASS, COLON, COLONCOLON, COMMA, CONNECT, CONNECTOR, CONSTANT, CONSTRAINEDBY, DEFINEUNIT, DER, DISCRETE, DOT, EACH, ELSE, ELSEIF, ELSEWHEN, ENCAPSULATED, END, ENUMERATION, EQEQ, EQUALS, EQUATION, EXPANDABLE, EXTENDS, EXTERNAL, FALSE, FINAL, FLOW, FOR, FUNCTION, GREATER, GREATEREQ, IDENT, IF, IMPORT, IMPURE, IN, INITIAL, INNER, INPUT, LBRACE, LBRACK, LESS, LESSEQ, LESSGT, LINE_COMMENT, LOOP, LPAR, MINUS, MINUS_EW, MODEL, MODELICA, NEWLINE, NOT, OPERATOR, OPTIMIZATION, OR, OUTER, OUTPUT, OVERLOAD, PACKAGE, PARAMETER, PARTIAL, PLUS, PLUS_EW, POWER, POWER_EW, PROTECTED, PUBLIC, PURE, RBRACE, RBRACK, RECORD, REDECLARE, REPLACEABLE, RETURN, RPAR, SEMICOLON, SLASH, SLASH_EW, STAR, STAR_EW, STREAM, STRING, SUBTYPEOF, THEN, TRUE, TYPE, UNSIGNED_INTEGER, UNSIGNED_REAL, WHEN, WHILE, WHITESPACE, WITHIN) */;
            _d4 = tmp239  /* pattern as ty=enumeration(Add, Delete, Equal) */;
            _tk4 = tmpMeta240;
            _t4 = tmp242  /* pattern as ty=enumeration(_NO_TOKEN, ALGORITHM, AND, ANNOTATION, ASSIGN, BLOCK, BLOCK_COMMENT, BREAK, CLASS, COLON, COLONCOLON, COMMA, CONNECT, CONNECTOR, CONSTANT, CONSTRAINEDBY, DEFINEUNIT, DER, DISCRETE, DOT, EACH, ELSE, ELSEIF, ELSEWHEN, ENCAPSULATED, END, ENUMERATION, EQEQ, EQUALS, EQUATION, EXPANDABLE, EXTENDS, EXTERNAL, FALSE, FINAL, FLOW, FOR, FUNCTION, GREATER, GREATEREQ, IDENT, IF, IMPORT, IMPURE, IN, INITIAL, INNER, INPUT, LBRACE, LBRACK, LESS, LESSEQ, LESSGT, LINE_COMMENT, LOOP, LPAR, MINUS, MINUS_EW, MODEL, MODELICA, NEWLINE, NOT, OPERATOR, OPTIMIZATION, OR, OUTER, OUTPUT, OVERLOAD, PACKAGE, PARAMETER, PARTIAL, PLUS, PLUS_EW, POWER, POWER_EW, PROTECTED, PUBLIC, PURE, RBRACE, RBRACK, RECORD, REDECLARE, REPLACEABLE, RETURN, RPAR, SEMICOLON, SLASH, SLASH_EW, STAR, STAR_EW, STREAM, STRING, SUBTYPEOF, THEN, TRUE, TYPE, UNSIGNED_INTEGER, UNSIGNED_REAL, WHEN, WHILE, WHITESPACE, WITHIN) */;
            _d5 = tmp246  /* pattern as ty=enumeration(Add, Delete, Equal) */;
            _tk5 = tmpMeta247;
            _t5 = tmp249  /* pattern as ty=enumeration(_NO_TOKEN, ALGORITHM, AND, ANNOTATION, ASSIGN, BLOCK, BLOCK_COMMENT, BREAK, CLASS, COLON, COLONCOLON, COMMA, CONNECT, CONNECTOR, CONSTANT, CONSTRAINEDBY, DEFINEUNIT, DER, DISCRETE, DOT, EACH, ELSE, ELSEIF, ELSEWHEN, ENCAPSULATED, END, ENUMERATION, EQEQ, EQUALS, EQUATION, EXPANDABLE, EXTENDS, EXTERNAL, FALSE, FINAL, FLOW, FOR, FUNCTION, GREATER, GREATEREQ, IDENT, IF, IMPORT, IMPURE, IN, INITIAL, INNER, INPUT, LBRACE, LBRACK, LESS, LESSEQ, LESSGT, LINE_COMMENT, LOOP, LPAR, MINUS, MINUS_EW, MODEL, MODELICA, NEWLINE, NOT, OPERATOR, OPTIMIZATION, OR, OUTER, OUTPUT, OVERLOAD, PACKAGE, PARAMETER, PARTIAL, PLUS, PLUS_EW, POWER, POWER_EW, PROTECTED, PUBLIC, PURE, RBRACE, RBRACK, RECORD, REDECLARE, REPLACEABLE, RETURN, RPAR, SEMICOLON, SLASH, SLASH_EW, STAR, STAR_EW, STREAM, STRING, SUBTYPEOF, THEN, TRUE, TYPE, UNSIGNED_INTEGER, UNSIGNED_REAL, WHEN, WHILE, WHITESPACE, WITHIN) */;
            _d2 = tmp253  /* pattern as ty=enumeration(Add, Delete, Equal) */;
            _t2 = tmpMeta254;
            _rest = tmpMeta251;
            /* Pattern matching succeeded */
            /* Check guard condition after assignments */
            if (!(((((((((((modelica_integer)_d1 == 1) && ((modelica_integer)_d2 == 2)) || (((modelica_integer)_d2 == 1) && ((modelica_integer)_d1 == 2))) && omc_LexerModelicaDiff_modelicaDiffTokenEq(threadData, _t1, _t2)) && (((modelica_integer)_d3 == 3) || ((modelica_integer)_d3 == 2))) && (((modelica_integer)_d4 == 3) || ((modelica_integer)_d4 == 2))) && (((modelica_integer)_d5 == 3) || ((modelica_integer)_d5 == 2))) && (((modelica_integer)_t3 == 61) || ((modelica_integer)_t3 == 101))) && (((modelica_integer)_t4 == 61) || ((modelica_integer)_t4 == 101))) && (((modelica_integer)_t5 == 61) || ((modelica_integer)_t5 == 101)))) goto tmp88_end;
            tmpMeta256 = mmc_mk_box2(0, mmc_mk_integer(3), _t1);
            tmpMeta258 = mmc_mk_box2(0, mmc_mk_integer(3), _tk3);
            tmpMeta260 = mmc_mk_box2(0, mmc_mk_integer(3), _tk4);
            tmpMeta262 = mmc_mk_box2(0, mmc_mk_integer(3), _tk5);
            tmpMeta261 = mmc_mk_cons(tmpMeta262, _rest);
            tmpMeta259 = mmc_mk_cons(tmpMeta260, tmpMeta261);
            tmpMeta257 = mmc_mk_cons(tmpMeta258, tmpMeta259);
            tmpMeta255 = mmc_mk_cons(tmpMeta256, tmpMeta257);
            tmp86_c0 = 0 /* false */;
            tmpMeta[0+1] = tmpMeta255;
            tmpMeta[0+2] = _tmp;
            goto tmp88_done;
          }
          case 7: {
            modelica_metatype tmpMeta263;
            modelica_metatype tmpMeta264;
            modelica_metatype tmpMeta265;
            modelica_integer tmp266;
            modelica_metatype tmpMeta267;
            modelica_metatype tmpMeta268;
            modelica_metatype tmpMeta269;
            modelica_metatype tmpMeta270;
            modelica_integer tmp271;
            modelica_metatype tmpMeta272;
            modelica_metatype tmpMeta273;
            modelica_integer tmp274;
            modelica_metatype tmpMeta275;
            modelica_metatype tmpMeta276;
            modelica_metatype tmpMeta277;
            modelica_integer tmp278;
            modelica_metatype tmpMeta279;
            modelica_metatype tmpMeta280;
            modelica_integer tmp281;
            modelica_metatype tmpMeta282;
            modelica_metatype tmpMeta283;
            modelica_metatype tmpMeta284;
            modelica_integer tmp285;
            modelica_metatype tmpMeta286;
            modelica_metatype tmpMeta287;
            modelica_metatype tmpMeta288;
            modelica_metatype tmpMeta289;
            modelica_metatype tmpMeta290;
            modelica_metatype tmpMeta291;
            modelica_metatype tmpMeta292;
            if (listEmpty(tmp89_1)) goto tmp88_end;
            tmpMeta263 = MMC_CAR(tmp89_1);
            tmpMeta264 = MMC_CDR(tmp89_1);
            tmpMeta265 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta263), 1));
            tmp266 = mmc_unbox_integer(tmpMeta265);
            tmpMeta267 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta263), 2));
            if (listEmpty(tmpMeta264)) goto tmp88_end;
            tmpMeta268 = MMC_CAR(tmpMeta264);
            tmpMeta269 = MMC_CDR(tmpMeta264);
            tmpMeta270 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta268), 1));
            tmp271 = mmc_unbox_integer(tmpMeta270);
            tmpMeta272 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta268), 2));
            tmpMeta273 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta272), 3));
            tmp274 = mmc_unbox_integer(tmpMeta273);
            if (listEmpty(tmpMeta269)) goto tmp88_end;
            tmpMeta275 = MMC_CAR(tmpMeta269);
            tmpMeta276 = MMC_CDR(tmpMeta269);
            tmpMeta277 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta275), 1));
            tmp278 = mmc_unbox_integer(tmpMeta277);
            tmpMeta279 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta275), 2));
            tmpMeta280 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta279), 3));
            tmp281 = mmc_unbox_integer(tmpMeta280);
            if (listEmpty(tmpMeta276)) goto tmp88_end;
            tmpMeta282 = MMC_CAR(tmpMeta276);
            tmpMeta283 = MMC_CDR(tmpMeta276);
            tmpMeta284 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta282), 1));
            tmp285 = mmc_unbox_integer(tmpMeta284);
            tmpMeta286 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta282), 2));
            _d1 = tmp266  /* pattern as ty=enumeration(Add, Delete, Equal) */;
            _t1 = tmpMeta267;
            _d3 = tmp271  /* pattern as ty=enumeration(Add, Delete, Equal) */;
            _tk3 = tmpMeta272;
            _t3 = tmp274  /* pattern as ty=enumeration(_NO_TOKEN, ALGORITHM, AND, ANNOTATION, ASSIGN, BLOCK, BLOCK_COMMENT, BREAK, CLASS, COLON, COLONCOLON, COMMA, CONNECT, CONNECTOR, CONSTANT, CONSTRAINEDBY, DEFINEUNIT, DER, DISCRETE, DOT, EACH, ELSE, ELSEIF, ELSEWHEN, ENCAPSULATED, END, ENUMERATION, EQEQ, EQUALS, EQUATION, EXPANDABLE, EXTENDS, EXTERNAL, FALSE, FINAL, FLOW, FOR, FUNCTION, GREATER, GREATEREQ, IDENT, IF, IMPORT, IMPURE, IN, INITIAL, INNER, INPUT, LBRACE, LBRACK, LESS, LESSEQ, LESSGT, LINE_COMMENT, LOOP, LPAR, MINUS, MINUS_EW, MODEL, MODELICA, NEWLINE, NOT, OPERATOR, OPTIMIZATION, OR, OUTER, OUTPUT, OVERLOAD, PACKAGE, PARAMETER, PARTIAL, PLUS, PLUS_EW, POWER, POWER_EW, PROTECTED, PUBLIC, PURE, RBRACE, RBRACK, RECORD, REDECLARE, REPLACEABLE, RETURN, RPAR, SEMICOLON, SLASH, SLASH_EW, STAR, STAR_EW, STREAM, STRING, SUBTYPEOF, THEN, TRUE, TYPE, UNSIGNED_INTEGER, UNSIGNED_REAL, WHEN, WHILE, WHITESPACE, WITHIN) */;
            _d4 = tmp278  /* pattern as ty=enumeration(Add, Delete, Equal) */;
            _tk4 = tmpMeta279;
            _t4 = tmp281  /* pattern as ty=enumeration(_NO_TOKEN, ALGORITHM, AND, ANNOTATION, ASSIGN, BLOCK, BLOCK_COMMENT, BREAK, CLASS, COLON, COLONCOLON, COMMA, CONNECT, CONNECTOR, CONSTANT, CONSTRAINEDBY, DEFINEUNIT, DER, DISCRETE, DOT, EACH, ELSE, ELSEIF, ELSEWHEN, ENCAPSULATED, END, ENUMERATION, EQEQ, EQUALS, EQUATION, EXPANDABLE, EXTENDS, EXTERNAL, FALSE, FINAL, FLOW, FOR, FUNCTION, GREATER, GREATEREQ, IDENT, IF, IMPORT, IMPURE, IN, INITIAL, INNER, INPUT, LBRACE, LBRACK, LESS, LESSEQ, LESSGT, LINE_COMMENT, LOOP, LPAR, MINUS, MINUS_EW, MODEL, MODELICA, NEWLINE, NOT, OPERATOR, OPTIMIZATION, OR, OUTER, OUTPUT, OVERLOAD, PACKAGE, PARAMETER, PARTIAL, PLUS, PLUS_EW, POWER, POWER_EW, PROTECTED, PUBLIC, PURE, RBRACE, RBRACK, RECORD, REDECLARE, REPLACEABLE, RETURN, RPAR, SEMICOLON, SLASH, SLASH_EW, STAR, STAR_EW, STREAM, STRING, SUBTYPEOF, THEN, TRUE, TYPE, UNSIGNED_INTEGER, UNSIGNED_REAL, WHEN, WHILE, WHITESPACE, WITHIN) */;
            _d2 = tmp285  /* pattern as ty=enumeration(Add, Delete, Equal) */;
            _t2 = tmpMeta286;
            _rest = tmpMeta283;
            /* Pattern matching succeeded */
            /* Check guard condition after assignments */
            if (!(((((((((modelica_integer)_d1 == 1) && ((modelica_integer)_d2 == 2)) || (((modelica_integer)_d2 == 1) && ((modelica_integer)_d1 == 2))) && omc_LexerModelicaDiff_modelicaDiffTokenEq(threadData, _t1, _t2)) && (((modelica_integer)_d3 == 3) || ((modelica_integer)_d3 == 2))) && (((modelica_integer)_d4 == 3) || ((modelica_integer)_d4 == 2))) && (((modelica_integer)_t3 == 61) || ((modelica_integer)_t3 == 101))) && (((modelica_integer)_t4 == 61) || ((modelica_integer)_t4 == 101)))) goto tmp88_end;
            tmpMeta288 = mmc_mk_box2(0, mmc_mk_integer(3), _t1);
            tmpMeta290 = mmc_mk_box2(0, mmc_mk_integer(3), _tk3);
            tmpMeta292 = mmc_mk_box2(0, mmc_mk_integer(3), _tk4);
            tmpMeta291 = mmc_mk_cons(tmpMeta292, _rest);
            tmpMeta289 = mmc_mk_cons(tmpMeta290, tmpMeta291);
            tmpMeta287 = mmc_mk_cons(tmpMeta288, tmpMeta289);
            tmp86_c0 = 0 /* false */;
            tmpMeta[0+1] = tmpMeta287;
            tmpMeta[0+2] = _tmp;
            goto tmp88_done;
          }
          case 8: {
            modelica_metatype tmpMeta293;
            modelica_metatype tmpMeta294;
            modelica_metatype tmpMeta295;
            modelica_integer tmp296;
            modelica_metatype tmpMeta297;
            modelica_metatype tmpMeta298;
            modelica_metatype tmpMeta299;
            modelica_metatype tmpMeta300;
            modelica_integer tmp301;
            modelica_metatype tmpMeta302;
            modelica_metatype tmpMeta303;
            modelica_integer tmp304;
            modelica_metatype tmpMeta305;
            modelica_metatype tmpMeta306;
            modelica_metatype tmpMeta307;
            modelica_integer tmp308;
            modelica_metatype tmpMeta309;
            modelica_metatype tmpMeta310;
            modelica_metatype tmpMeta311;
            modelica_metatype tmpMeta312;
            modelica_metatype tmpMeta313;
            if (listEmpty(tmp89_1)) goto tmp88_end;
            tmpMeta293 = MMC_CAR(tmp89_1);
            tmpMeta294 = MMC_CDR(tmp89_1);
            tmpMeta295 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta293), 1));
            tmp296 = mmc_unbox_integer(tmpMeta295);
            tmpMeta297 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta293), 2));
            if (listEmpty(tmpMeta294)) goto tmp88_end;
            tmpMeta298 = MMC_CAR(tmpMeta294);
            tmpMeta299 = MMC_CDR(tmpMeta294);
            tmpMeta300 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta298), 1));
            tmp301 = mmc_unbox_integer(tmpMeta300);
            tmpMeta302 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta298), 2));
            tmpMeta303 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta302), 3));
            tmp304 = mmc_unbox_integer(tmpMeta303);
            if (listEmpty(tmpMeta299)) goto tmp88_end;
            tmpMeta305 = MMC_CAR(tmpMeta299);
            tmpMeta306 = MMC_CDR(tmpMeta299);
            tmpMeta307 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta305), 1));
            tmp308 = mmc_unbox_integer(tmpMeta307);
            tmpMeta309 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta305), 2));
            _d1 = tmp296  /* pattern as ty=enumeration(Add, Delete, Equal) */;
            _t1 = tmpMeta297;
            _d3 = tmp301  /* pattern as ty=enumeration(Add, Delete, Equal) */;
            _tk3 = tmpMeta302;
            _t3 = tmp304  /* pattern as ty=enumeration(_NO_TOKEN, ALGORITHM, AND, ANNOTATION, ASSIGN, BLOCK, BLOCK_COMMENT, BREAK, CLASS, COLON, COLONCOLON, COMMA, CONNECT, CONNECTOR, CONSTANT, CONSTRAINEDBY, DEFINEUNIT, DER, DISCRETE, DOT, EACH, ELSE, ELSEIF, ELSEWHEN, ENCAPSULATED, END, ENUMERATION, EQEQ, EQUALS, EQUATION, EXPANDABLE, EXTENDS, EXTERNAL, FALSE, FINAL, FLOW, FOR, FUNCTION, GREATER, GREATEREQ, IDENT, IF, IMPORT, IMPURE, IN, INITIAL, INNER, INPUT, LBRACE, LBRACK, LESS, LESSEQ, LESSGT, LINE_COMMENT, LOOP, LPAR, MINUS, MINUS_EW, MODEL, MODELICA, NEWLINE, NOT, OPERATOR, OPTIMIZATION, OR, OUTER, OUTPUT, OVERLOAD, PACKAGE, PARAMETER, PARTIAL, PLUS, PLUS_EW, POWER, POWER_EW, PROTECTED, PUBLIC, PURE, RBRACE, RBRACK, RECORD, REDECLARE, REPLACEABLE, RETURN, RPAR, SEMICOLON, SLASH, SLASH_EW, STAR, STAR_EW, STREAM, STRING, SUBTYPEOF, THEN, TRUE, TYPE, UNSIGNED_INTEGER, UNSIGNED_REAL, WHEN, WHILE, WHITESPACE, WITHIN) */;
            _d2 = tmp308  /* pattern as ty=enumeration(Add, Delete, Equal) */;
            _t2 = tmpMeta309;
            _rest = tmpMeta306;
            /* Pattern matching succeeded */
            /* Check guard condition after assignments */
            if (!(((((((modelica_integer)_d1 == 1) && ((modelica_integer)_d2 == 2)) || (((modelica_integer)_d2 == 1) && ((modelica_integer)_d1 == 2))) && omc_LexerModelicaDiff_modelicaDiffTokenEq(threadData, _t1, _t2)) && (((modelica_integer)_d3 == 3) || ((modelica_integer)_d3 == 2))) && (((modelica_integer)_t3 == 61) || ((modelica_integer)_t3 == 101)))) goto tmp88_end;
            tmpMeta311 = mmc_mk_box2(0, mmc_mk_integer(3), _t1);
            tmpMeta313 = mmc_mk_box2(0, mmc_mk_integer(3), _tk3);
            tmpMeta312 = mmc_mk_cons(tmpMeta313, _rest);
            tmpMeta310 = mmc_mk_cons(tmpMeta311, tmpMeta312);
            tmp86_c0 = 0 /* false */;
            tmpMeta[0+1] = tmpMeta310;
            tmpMeta[0+2] = _tmp;
            goto tmp88_done;
          }
          case 9: {
            modelica_metatype tmpMeta314;
            modelica_metatype tmpMeta315;
            modelica_metatype tmpMeta316;
            modelica_integer tmp317;
            modelica_metatype tmpMeta318;
            modelica_metatype tmpMeta319;
            modelica_integer tmp320;
            modelica_metatype tmpMeta321;
            modelica_metatype tmpMeta322;
            modelica_metatype tmpMeta323;
            modelica_integer tmp324;
            modelica_metatype tmpMeta325;
            modelica_metatype tmpMeta326;
            modelica_integer tmp327;
            modelica_metatype tmpMeta328;
            modelica_metatype tmpMeta329;
            modelica_metatype tmpMeta330;
            modelica_metatype tmpMeta331;
            modelica_integer tmp332;
            if (listEmpty(tmp89_1)) goto tmp88_end;
            tmpMeta314 = MMC_CAR(tmp89_1);
            tmpMeta315 = MMC_CDR(tmp89_1);
            tmpMeta316 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta314), 1));
            tmp317 = mmc_unbox_integer(tmpMeta316);
            if (1 != tmp317) goto tmp88_end;
            tmpMeta318 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta314), 2));
            tmpMeta319 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta318), 3));
            tmp320 = mmc_unbox_integer(tmpMeta319);
            if (61 != tmp320) goto tmp88_end;
            if (listEmpty(tmpMeta315)) goto tmp88_end;
            tmpMeta321 = MMC_CAR(tmpMeta315);
            tmpMeta322 = MMC_CDR(tmpMeta315);
            tmpMeta323 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta321), 1));
            tmp324 = mmc_unbox_integer(tmpMeta323);
            if (1 != tmp324) goto tmp88_end;
            tmpMeta325 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta321), 2));
            tmpMeta326 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta325), 3));
            tmp327 = mmc_unbox_integer(tmpMeta326);
            if (101 != tmp327) goto tmp88_end;
            if (listEmpty(tmpMeta322)) goto tmp88_end;
            tmpMeta328 = MMC_CAR(tmpMeta322);
            tmpMeta329 = MMC_CDR(tmpMeta322);
            tmpMeta330 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta328), 2));
            tmpMeta331 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta330), 3));
            tmp332 = mmc_unbox_integer(tmpMeta331);
            if (61 != tmp332) goto tmp88_end;
            
            _rest = tmpMeta322;
            /* Pattern matching succeeded */
            tmp86_c0 = 0 /* false */;
            tmpMeta[0+1] = _rest;
            tmpMeta[0+2] = _tmp;
            goto tmp88_done;
          }
          case 10: {
            modelica_metatype tmpMeta333;
            modelica_metatype tmpMeta334;
            modelica_metatype tmpMeta335;
            modelica_integer tmp336;
            modelica_metatype tmpMeta337;
            modelica_metatype tmpMeta338;
            modelica_integer tmp339;
            modelica_metatype tmpMeta340;
            modelica_metatype tmpMeta341;
            modelica_metatype tmpMeta342;
            modelica_metatype tmpMeta343;
            modelica_integer tmp344;
            if (listEmpty(tmp89_1)) goto tmp88_end;
            tmpMeta333 = MMC_CAR(tmp89_1);
            tmpMeta334 = MMC_CDR(tmp89_1);
            tmpMeta335 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta333), 1));
            tmp336 = mmc_unbox_integer(tmpMeta335);
            if (1 != tmp336) goto tmp88_end;
            tmpMeta337 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta333), 2));
            tmpMeta338 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta337), 3));
            tmp339 = mmc_unbox_integer(tmpMeta338);
            if (61 != tmp339) goto tmp88_end;
            if (listEmpty(tmpMeta334)) goto tmp88_end;
            tmpMeta340 = MMC_CAR(tmpMeta334);
            tmpMeta341 = MMC_CDR(tmpMeta334);
            tmpMeta342 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta340), 2));
            tmpMeta343 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta342), 3));
            tmp344 = mmc_unbox_integer(tmpMeta343);
            if (61 != tmp344) goto tmp88_end;
            
            _rest = tmpMeta334;
            /* Pattern matching succeeded */
            tmp86_c0 = 0 /* false */;
            tmpMeta[0+1] = _rest;
            tmpMeta[0+2] = _tmp;
            goto tmp88_done;
          }
          case 11: {
            modelica_metatype tmpMeta345;
            modelica_metatype tmpMeta346;
            modelica_metatype tmpMeta347;
            modelica_metatype tmpMeta348;
            modelica_integer tmp349;
            modelica_metatype tmpMeta350;
            modelica_metatype tmpMeta351;
            modelica_metatype tmpMeta352;
            modelica_integer tmp353;
            modelica_metatype tmpMeta354;
            modelica_metatype tmpMeta355;
            modelica_integer tmp356;
            modelica_metatype tmpMeta357;
            if (listEmpty(tmp89_1)) goto tmp88_end;
            tmpMeta345 = MMC_CAR(tmp89_1);
            tmpMeta346 = MMC_CDR(tmp89_1);
            tmpMeta347 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta345), 2));
            tmpMeta348 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta347), 3));
            tmp349 = mmc_unbox_integer(tmpMeta348);
            if (61 != tmp349) goto tmp88_end;
            if (listEmpty(tmpMeta346)) goto tmp88_end;
            tmpMeta350 = MMC_CAR(tmpMeta346);
            tmpMeta351 = MMC_CDR(tmpMeta346);
            tmpMeta352 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta350), 1));
            tmp353 = mmc_unbox_integer(tmpMeta352);
            if (1 != tmp353) goto tmp88_end;
            tmpMeta354 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta350), 2));
            tmpMeta355 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta354), 3));
            tmp356 = mmc_unbox_integer(tmpMeta355);
            if (61 != tmp356) goto tmp88_end;
            
            _e = tmpMeta345;
            _rest = tmpMeta351;
            /* Pattern matching succeeded */
            tmpMeta357 = mmc_mk_cons(_e, _rest);
            tmp86_c0 = 0 /* false */;
            tmpMeta[0+1] = tmpMeta357;
            tmpMeta[0+2] = _tmp;
            goto tmp88_done;
          }
          case 12: {
            modelica_metatype tmpMeta358;
            modelica_metatype tmpMeta359;
            modelica_metatype tmpMeta360;
            modelica_metatype tmpMeta361;
            modelica_integer tmp362;
            modelica_metatype tmpMeta363;
            if (listEmpty(tmp89_1)) goto tmp88_end;
            tmpMeta358 = MMC_CAR(tmp89_1);
            tmpMeta359 = MMC_CDR(tmp89_1);
            tmpMeta360 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta358), 2));
            tmpMeta361 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta360), 3));
            tmp362 = mmc_unbox_integer(tmpMeta361);
            if (61 != tmp362) goto tmp88_end;
            
            _e = tmpMeta358;
            _rest = tmpMeta359;
            /* Pattern matching succeeded */
            tmpMeta363 = mmc_mk_cons(_e, _tmp);
            tmp86_c0 = 1 /* true */;
            tmpMeta[0+1] = _rest;
            tmpMeta[0+2] = tmpMeta363;
            goto tmp88_done;
          }
          case 13: {
            modelica_metatype tmpMeta364;
            modelica_metatype tmpMeta365;
            modelica_metatype tmpMeta366;
            modelica_integer tmp367;
            modelica_metatype tmpMeta368;
            modelica_metatype tmpMeta369;
            modelica_integer tmp370;
            modelica_metatype tmpMeta371;
            modelica_metatype tmpMeta372;
            modelica_metatype tmpMeta373;
            modelica_integer tmp374;
            modelica_metatype tmpMeta375;
            modelica_metatype tmpMeta376;
            modelica_string tmp377;
            modelica_metatype tmpMeta382;
            modelica_metatype tmpMeta383;
            if (listEmpty(tmp89_1)) goto tmp88_end;
            tmpMeta364 = MMC_CAR(tmp89_1);
            tmpMeta365 = MMC_CDR(tmp89_1);
            tmpMeta366 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta364), 1));
            tmp367 = mmc_unbox_integer(tmpMeta366);
            if (1 != tmp367) goto tmp88_end;
            tmpMeta368 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta364), 2));
            tmpMeta369 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta368), 3));
            tmp370 = mmc_unbox_integer(tmpMeta369);
            if (101 != tmp370) goto tmp88_end;
            if (listEmpty(tmpMeta365)) goto tmp88_end;
            tmpMeta371 = MMC_CAR(tmpMeta365);
            tmpMeta372 = MMC_CDR(tmpMeta365);
            tmpMeta373 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta371), 1));
            tmp374 = mmc_unbox_integer(tmpMeta373);
            if (1 != tmp374) goto tmp88_end;
            
            _e = tmpMeta371;
            _rest = tmpMeta372;
            /* Pattern matching succeeded */
            /* Check guard condition after assignments */
            if (!_lastIsNewline) goto tmp88_end;
            {
              modelica_string __omcQ_24tmpVar15;
              modelica_string __omcQ_24tmpVar14;
              modelica_metatype tmpMeta378;
              modelica_integer tmp379;
              modelica_integer tmp380;
              modelica_integer tmp381;
              modelica_integer _i;
              tmp380 = 1 /* Range step-value */;
              tmp381 = _depth /* Range stop-value */;
              _i = ((modelica_integer) 1) /* Range start-value */;
              _i = (((modelica_integer) 1) /* Range start-value */)-tmp380;
              __omcQ_24tmpVar15 = (modelica_string) mmc_emptystring; /* defaultValue */
              while(1) {
                tmp379 = 1;
                if (tmp380 > 0 ? _i+tmp380 <= tmp381 : _i+tmp380 >= tmp381) {
                  _i += tmp380;
                  tmp379--;
                }
                if (tmp379 == 0) {
                  __omcQ_24tmpVar14 = _OMC_LIT11;
                  tmpMeta378 = stringAppend(__omcQ_24tmpVar15,__omcQ_24tmpVar14);
                  __omcQ_24tmpVar15 = tmpMeta378;
                } else if (tmp379 == 1) {
                  break;
                } else {
                  goto goto_87;
                }
              }
              tmp377 = __omcQ_24tmpVar15;
            }
            tmpMeta382 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _OMC_LIT10, mmc_mk_integer(101), tmp377, mmc_mk_integer(((modelica_integer) 1)), mmc_mk_integer(_depth), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 0)), mmc_mk_integer(((modelica_integer) 0)));
            tmpMeta383 = mmc_mk_box2(0, mmc_mk_integer(1), tmpMeta382);
            tmpMeta376 = mmc_mk_cons(tmpMeta383, _tmp);
            tmpMeta375 = mmc_mk_cons(_e, tmpMeta376);
            tmp86_c0 = 0 /* false */;
            tmpMeta[0+1] = _rest;
            tmpMeta[0+2] = tmpMeta375;
            goto tmp88_done;
          }
          case 14: {
            modelica_metatype tmpMeta384;
            modelica_metatype tmpMeta385;
            modelica_metatype tmpMeta386;
            modelica_integer tmp387;
            modelica_metatype tmpMeta388;
            modelica_metatype tmpMeta389;
            modelica_integer tmp390;
            modelica_metatype tmpMeta391;
            modelica_metatype tmpMeta392;
            modelica_metatype tmpMeta393;
            modelica_metatype tmpMeta394;
            modelica_integer tmp395;
            if (listEmpty(tmp89_1)) goto tmp88_end;
            tmpMeta384 = MMC_CAR(tmp89_1);
            tmpMeta385 = MMC_CDR(tmp89_1);
            tmpMeta386 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta384), 1));
            tmp387 = mmc_unbox_integer(tmpMeta386);
            if (1 != tmp387) goto tmp88_end;
            tmpMeta388 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta384), 2));
            tmpMeta389 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta388), 3));
            tmp390 = mmc_unbox_integer(tmpMeta389);
            if (101 != tmp390) goto tmp88_end;
            if (listEmpty(tmpMeta385)) goto tmp88_end;
            tmpMeta391 = MMC_CAR(tmpMeta385);
            tmpMeta392 = MMC_CDR(tmpMeta385);
            tmpMeta393 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta391), 2));
            tmpMeta394 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta393), 3));
            tmp395 = mmc_unbox_integer(tmpMeta394);
            if (61 != tmp395) goto tmp88_end;
            
            _rest = tmpMeta385;
            /* Pattern matching succeeded */
            /* Check guard condition after assignments */
            if (!_lastIsNewline) goto tmp88_end;
            tmp86_c0 = 1 /* true */;
            tmpMeta[0+1] = _rest;
            tmpMeta[0+2] = _tmp;
            goto tmp88_done;
          }
          case 15: {
            modelica_metatype tmpMeta396;
            modelica_metatype tmpMeta397;
            modelica_metatype tmpMeta398;
            modelica_metatype tmpMeta399;
            modelica_integer tmp400;
            modelica_metatype tmpMeta401;
            modelica_metatype tmpMeta402;
            modelica_integer tmp403;
            modelica_metatype tmpMeta404;
            if (listEmpty(tmp89_1)) goto tmp88_end;
            tmpMeta396 = MMC_CAR(tmp89_1);
            tmpMeta397 = MMC_CDR(tmp89_1);
            tmpMeta398 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta396), 2));
            tmpMeta399 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta398), 3));
            tmp400 = mmc_unbox_integer(tmpMeta399);
            if (101 != tmp400) goto tmp88_end;
            
            _e = tmpMeta396;
            _t = tmpMeta398;
            _rest = tmpMeta397;
            /* Pattern matching succeeded */
            /* Check guard condition after assignments */
            if (!_lastIsNewline) goto tmp88_end;
            /* Pattern-matching assignment */
            tmpMeta401 = _t;
            tmpMeta402 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta401), 6));
            tmp403 = mmc_unbox_integer(tmpMeta402);
            _depth = tmp403  /* pattern as ty=Integer */;
            tmpMeta404 = mmc_mk_cons(_e, _tmp);
            tmp86_c0 = 0 /* false */;
            tmpMeta[0+1] = _rest;
            tmpMeta[0+2] = tmpMeta404;
            goto tmp88_done;
          }
          case 16: {
            modelica_metatype tmpMeta405;
            modelica_metatype tmpMeta406;
            modelica_metatype tmpMeta407;
            if (listEmpty(tmp89_1)) goto tmp88_end;
            tmpMeta405 = MMC_CAR(tmp89_1);
            tmpMeta406 = MMC_CDR(tmp89_1);
            _e = tmpMeta405;
            _rest = tmpMeta406;
            /* Pattern matching succeeded */
            tmpMeta407 = mmc_mk_cons(_e, _tmp);
            tmp86_c0 = 0 /* false */;
            tmpMeta[0+1] = _rest;
            tmpMeta[0+2] = tmpMeta407;
            goto tmp88_done;
          }
          }
          goto tmp88_end;
          tmp88_end: ;
        }
        goto goto_87;
        goto_87:;
        MMC_THROW_INTERNAL();
        goto tmp88_done;
        tmp88_done:;
      }
    }
    _lastIsNewline = tmp86_c0;
    _simpleDiff = tmpMeta[0+1];
    _tmp = tmpMeta[0+2];
  }

  _simpleDiff = listReverse(_tmp);

  {
    modelica_metatype __omcQ_24tmpVar17;
    modelica_metatype* tmp409;
    modelica_metatype tmpMeta410;
    modelica_string __omcQ_24tmpVar16;
    modelica_integer tmp411;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = _simpleDiff;
    tmpMeta410 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar17 = tmpMeta410; /* defaultValue */
    tmp409 = &__omcQ_24tmpVar17;
    while(1) {
      tmp411 = 1;
      while (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        if (((1 == mmc_unbox_integer(omc_LexerModelicaDiff_tuple21(threadData, _e))) && omc_LexerModelicaDiff_isLineComment(threadData, omc_LexerModelicaDiff_tuple22(threadData, _e)))) {
          tmp411--;
          break;
        }
      }
      if (tmp411 == 0) {
        __omcQ_24tmpVar16 = omc_LexerModelicaDiff_tokenContent(threadData, omc_LexerModelicaDiff_tuple22(threadData, _e));
        *tmp409 = mmc_mk_cons(__omcQ_24tmpVar16,0);
        tmp409 = &MMC_CDR(*tmp409);
      } else if (tmp411 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp409 = mmc_mk_nil();
    tmpMeta408 = __omcQ_24tmpVar17;
  }
  _addedLineComments = tmpMeta408;

  {
    modelica_metatype __omcQ_24tmpVar19;
    modelica_metatype* tmp413;
    modelica_metatype tmpMeta414;
    modelica_string __omcQ_24tmpVar18;
    modelica_integer tmp415;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = _simpleDiff;
    tmpMeta414 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar19 = tmpMeta414; /* defaultValue */
    tmp413 = &__omcQ_24tmpVar19;
    while(1) {
      tmp415 = 1;
      while (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        if (((2 == mmc_unbox_integer(omc_LexerModelicaDiff_tuple21(threadData, _e))) && omc_LexerModelicaDiff_isLineComment(threadData, omc_LexerModelicaDiff_tuple22(threadData, _e)))) {
          tmp415--;
          break;
        }
      }
      if (tmp415 == 0) {
        __omcQ_24tmpVar18 = omc_LexerModelicaDiff_tokenContent(threadData, omc_LexerModelicaDiff_tuple22(threadData, _e));
        *tmp413 = mmc_mk_cons(__omcQ_24tmpVar18,0);
        tmp413 = &MMC_CDR(*tmp413);
      } else if (tmp415 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp413 = mmc_mk_nil();
    tmpMeta412 = __omcQ_24tmpVar19;
  }
  _removedLineComments = tmpMeta412;

  {
    modelica_metatype __omcQ_24tmpVar21;
    modelica_metatype* tmp417;
    modelica_metatype tmpMeta418;
    modelica_metatype __omcQ_24tmpVar20;
    modelica_integer tmp419;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = _simpleDiff;
    tmpMeta418 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar21 = tmpMeta418; /* defaultValue */
    tmp417 = &__omcQ_24tmpVar21;
    while(1) {
      tmp419 = 1;
      while (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        if (((1 == mmc_unbox_integer(omc_LexerModelicaDiff_tuple21(threadData, _e))) && omc_LexerModelicaDiff_isBlockComment(threadData, omc_LexerModelicaDiff_tuple22(threadData, _e)))) {
          tmp419--;
          break;
        }
      }
      if (tmp419 == 0) {
        __omcQ_24tmpVar20 = omc_LexerModelicaDiff_blockCommentCanonical(threadData, omc_LexerModelicaDiff_tuple22(threadData, _e));
        *tmp417 = mmc_mk_cons(__omcQ_24tmpVar20,0);
        tmp417 = &MMC_CDR(*tmp417);
      } else if (tmp419 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp417 = mmc_mk_nil();
    tmpMeta416 = __omcQ_24tmpVar21;
  }
  _addedBlockComments = tmpMeta416;

  {
    modelica_metatype __omcQ_24tmpVar23;
    modelica_metatype* tmp421;
    modelica_metatype tmpMeta422;
    modelica_metatype __omcQ_24tmpVar22;
    modelica_integer tmp423;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = _simpleDiff;
    tmpMeta422 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar23 = tmpMeta422; /* defaultValue */
    tmp421 = &__omcQ_24tmpVar23;
    while(1) {
      tmp423 = 1;
      while (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        if (((2 == mmc_unbox_integer(omc_LexerModelicaDiff_tuple21(threadData, _e))) && omc_LexerModelicaDiff_isBlockComment(threadData, omc_LexerModelicaDiff_tuple22(threadData, _e)))) {
          tmp423--;
          break;
        }
      }
      if (tmp423 == 0) {
        __omcQ_24tmpVar22 = omc_LexerModelicaDiff_blockCommentCanonical(threadData, omc_LexerModelicaDiff_tuple22(threadData, _e));
        *tmp421 = mmc_mk_cons(__omcQ_24tmpVar22,0);
        tmp421 = &MMC_CDR(*tmp421);
      } else if (tmp423 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp421 = mmc_mk_nil();
    tmpMeta420 = __omcQ_24tmpVar23;
  }
  _removedBlockComments = tmpMeta420;

  {
    modelica_metatype __omcQ_24tmpVar25;
    modelica_metatype* tmp425;
    modelica_metatype tmpMeta426;
    modelica_metatype tmpMeta427;
    modelica_metatype __omcQ_24tmpVar24;
    modelica_integer tmp448;
    modelica_metatype _e_loopVar = 0;
    modelica_boolean tmp449 = 0;
    modelica_metatype _e;
    _e_loopVar = _simpleDiff;
    tmpMeta426 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar25 = tmpMeta426; /* defaultValue */
    tmp425 = &__omcQ_24tmpVar25;
    while(1) {
      tmp448 = 1;
      while (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        { /* match expression */
          modelica_metatype tmp452_1;
          tmp452_1 = _e;
          {
            modelica_metatype _t = NULL;
            volatile mmc_switch_type tmp452;
            int tmp453;
            // _t has no default value.
            tmp452 = 0;
            for (; tmp452 < 3; tmp452++) {
              switch (MMC_SWITCH_CAST(tmp452)) {
              case 0: {
                modelica_metatype tmpMeta454;
                modelica_integer tmp455;
                modelica_metatype tmpMeta456;
                modelica_metatype tmpMeta457;
                modelica_integer tmp458;
                tmpMeta454 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp452_1), 1));
                tmp455 = mmc_unbox_integer(tmpMeta454);
                if (1 != tmp455) goto tmp451_end;
                tmpMeta456 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp452_1), 2));
                tmpMeta457 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta456), 3));
                tmp458 = mmc_unbox_integer(tmpMeta457);
                if (54 != tmp458) goto tmp451_end;
                
                _t = tmpMeta456;
                /* Pattern matching succeeded */
                tmp449 = (!listMember(omc_LexerModelicaDiff_tokenContent(threadData, _t), _removedLineComments));
                goto tmp451_done;
              }
              case 1: {
                modelica_metatype tmpMeta459;
                modelica_integer tmp460;
                modelica_metatype tmpMeta461;
                modelica_metatype tmpMeta462;
                modelica_integer tmp463;
                tmpMeta459 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp452_1), 1));
                tmp460 = mmc_unbox_integer(tmpMeta459);
                if (1 != tmp460) goto tmp451_end;
                tmpMeta461 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp452_1), 2));
                tmpMeta462 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta461), 3));
                tmp463 = mmc_unbox_integer(tmpMeta462);
                if (7 != tmp463) goto tmp451_end;
                
                _t = tmpMeta461;
                /* Pattern matching succeeded */
                tmp449 = (!listMember(omc_LexerModelicaDiff_blockCommentCanonical(threadData, _t), _removedBlockComments));
                goto tmp451_done;
              }
              case 2: {
                
                /* Pattern matching succeeded */
                tmp449 = 1 /* true */;
                goto tmp451_done;
              }
              }
              goto tmp451_end;
              tmp451_end: ;
            }
            goto goto_450;
            goto_450:;
            MMC_THROW_INTERNAL();
            goto tmp451_done;
            tmp451_done:;
          }
        }
        if (tmp449) {
          tmp448--;
          break;
        }
      }
      if (tmp448 == 0) {
        { /* match expression */
          modelica_metatype tmp430_1;
          tmp430_1 = _e;
          {
            modelica_metatype _t = NULL;
            volatile mmc_switch_type tmp430;
            int tmp431;
            // _t has no default value.
            tmp430 = 0;
            for (; tmp430 < 3; tmp430++) {
              switch (MMC_SWITCH_CAST(tmp430)) {
              case 0: {
                modelica_metatype tmpMeta432;
                modelica_integer tmp433;
                modelica_metatype tmpMeta434;
                modelica_metatype tmpMeta435;
                modelica_integer tmp436;
                modelica_metatype tmpMeta437;
                modelica_boolean tmp438;
                modelica_metatype tmpMeta439;
                tmpMeta432 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp430_1), 1));
                tmp433 = mmc_unbox_integer(tmpMeta432);
                if (2 != tmp433) goto tmp429_end;
                tmpMeta434 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp430_1), 2));
                tmpMeta435 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta434), 3));
                tmp436 = mmc_unbox_integer(tmpMeta435);
                if (54 != tmp436) goto tmp429_end;
                
                _t = tmpMeta434;
                /* Pattern matching succeeded */
                tmp438 = (modelica_boolean)listMember(omc_LexerModelicaDiff_tokenContent(threadData, _t), _addedLineComments);
                if(tmp438)
                {
                  tmpMeta437 = mmc_mk_box2(0, mmc_mk_integer(3), _t);
                  tmpMeta439 = tmpMeta437;
                }
                else
                {
                  tmpMeta439 = _e;
                }
                tmpMeta427 = tmpMeta439;
                goto tmp429_done;
              }
              case 1: {
                modelica_metatype tmpMeta440;
                modelica_integer tmp441;
                modelica_metatype tmpMeta442;
                modelica_metatype tmpMeta443;
                modelica_integer tmp444;
                modelica_metatype tmpMeta445;
                modelica_boolean tmp446;
                modelica_metatype tmpMeta447;
                tmpMeta440 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp430_1), 1));
                tmp441 = mmc_unbox_integer(tmpMeta440);
                if (2 != tmp441) goto tmp429_end;
                tmpMeta442 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp430_1), 2));
                tmpMeta443 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta442), 3));
                tmp444 = mmc_unbox_integer(tmpMeta443);
                if (7 != tmp444) goto tmp429_end;
                
                _t = tmpMeta442;
                /* Pattern matching succeeded */
                tmp446 = (modelica_boolean)listMember(omc_LexerModelicaDiff_blockCommentCanonical(threadData, _t), _addedBlockComments);
                if(tmp446)
                {
                  tmpMeta445 = mmc_mk_box2(0, mmc_mk_integer(3), _t);
                  tmpMeta447 = tmpMeta445;
                }
                else
                {
                  tmpMeta447 = _e;
                }
                tmpMeta427 = tmpMeta447;
                goto tmp429_done;
              }
              case 2: {
                
                /* Pattern matching succeeded */
                tmpMeta427 = _e;
                goto tmp429_done;
              }
              }
              goto tmp429_end;
              tmp429_end: ;
            }
            goto goto_428;
            goto_428:;
            MMC_THROW_INTERNAL();
            goto tmp429_done;
            tmp429_done:;
          }
        }__omcQ_24tmpVar24 = tmpMeta427;
        *tmp425 = mmc_mk_cons(__omcQ_24tmpVar24,0);
        tmp425 = &MMC_CDR(*tmp425);
      } else if (tmp448 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp425 = mmc_mk_nil();
    tmpMeta424 = __omcQ_24tmpVar25;
  }
  _simpleDiff = tmpMeta424;

  {
    modelica_metatype __omcQ_24tmpVar27;
    modelica_metatype* tmp465;
    modelica_metatype tmpMeta466;
    modelica_metatype tmpMeta467;
    modelica_metatype __omcQ_24tmpVar26;
    modelica_integer tmp477;
    modelica_metatype _e_loopVar = 0;
    modelica_metatype _e;
    _e_loopVar = _simpleDiff;
    tmpMeta466 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar27 = tmpMeta466; /* defaultValue */
    tmp465 = &__omcQ_24tmpVar27;
    while(1) {
      tmp477 = 1;
      if (!listEmpty(_e_loopVar)) {
        _e = MMC_CAR(_e_loopVar);
        _e_loopVar = MMC_CDR(_e_loopVar);
        tmp477--;
      }
      if (tmp477 == 0) {
        { /* match expression */
          modelica_metatype tmp470_1;
          tmp470_1 = _e;
          {
            modelica_integer _d;
            modelica_metatype _t = NULL;
            volatile mmc_switch_type tmp470;
            int tmp471;
            // _d has no default value.
            // _t has no default value.
            tmp470 = 0;
            for (; tmp470 < 1; tmp470++) {
              switch (MMC_SWITCH_CAST(tmp470)) {
              case 0: {
                modelica_metatype tmpMeta472;
                modelica_integer tmp473;
                modelica_metatype tmpMeta474;
                modelica_metatype tmpMeta475;
                modelica_metatype tmpMeta476;
                tmpMeta472 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp470_1), 1));
                tmp473 = mmc_unbox_integer(tmpMeta472);
                tmpMeta474 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp470_1), 2));
                _d = tmp473  /* pattern as ty=enumeration(Add, Delete, Equal) */;
                _t = tmpMeta474;
                /* Pattern matching succeeded */
                tmpMeta475 = mmc_mk_cons(_t, MMC_REFSTRUCTLIT(mmc_nil));
                tmpMeta476 = mmc_mk_box2(0, mmc_mk_integer((modelica_integer)_d), tmpMeta475);
                tmpMeta467 = tmpMeta476;
                goto tmp469_done;
              }
              }
              goto tmp469_end;
              tmp469_end: ;
            }
            goto goto_468;
            goto_468:;
            MMC_THROW_INTERNAL();
            goto tmp469_done;
            tmp469_done:;
          }
        }__omcQ_24tmpVar26 = tmpMeta467;
        *tmp465 = mmc_mk_cons(__omcQ_24tmpVar26,0);
        tmp465 = &MMC_CDR(*tmp465);
      } else if (tmp477 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp465 = mmc_mk_nil();
    tmpMeta464 = __omcQ_24tmpVar27;
  }
  _odiffs = tmpMeta464;
  _return: OMC_LABEL_UNUSED
  return _odiffs;
}
modelica_metatype boxptr_LexerModelicaDiff_filterModelicaDiff(threadData_t *threadData, modelica_metatype _diffs, modelica_metatype _removeWhitespace)
{
  modelica_integer tmp1;
  modelica_metatype _odiffs = NULL;
  tmp1 = mmc_unbox_integer(_removeWhitespace);
  _odiffs = omc_LexerModelicaDiff_filterModelicaDiff(threadData, _diffs, tmp1);
  /* skip box _odiffs; list<tuple<#enumeration(Add, Delete, Equal), list<LexerModelicaDiff.Token>>> */
  return _odiffs;
}

DLLDirection
modelica_boolean omc_LexerModelicaDiff_modelicaDiffTokenWhitespace(threadData_t *threadData, modelica_metatype _t)
{
  modelica_boolean _b;
  modelica_integer _id;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  // _id has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _t;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _id = tmp3  /* pattern as ty=enumeration(_NO_TOKEN, ALGORITHM, AND, ANNOTATION, ASSIGN, BLOCK, BLOCK_COMMENT, BREAK, CLASS, COLON, COLONCOLON, COMMA, CONNECT, CONNECTOR, CONSTANT, CONSTRAINEDBY, DEFINEUNIT, DER, DISCRETE, DOT, EACH, ELSE, ELSEIF, ELSEWHEN, ENCAPSULATED, END, ENUMERATION, EQEQ, EQUALS, EQUATION, EXPANDABLE, EXTENDS, EXTERNAL, FALSE, FINAL, FLOW, FOR, FUNCTION, GREATER, GREATEREQ, IDENT, IF, IMPORT, IMPURE, IN, INITIAL, INNER, INPUT, LBRACE, LBRACK, LESS, LESSEQ, LESSGT, LINE_COMMENT, LOOP, LPAR, MINUS, MINUS_EW, MODEL, MODELICA, NEWLINE, NOT, OPERATOR, OPTIMIZATION, OR, OUTER, OUTPUT, OVERLOAD, PACKAGE, PARAMETER, PARTIAL, PLUS, PLUS_EW, POWER, POWER_EW, PROTECTED, PUBLIC, PURE, RBRACE, RBRACK, RECORD, REDECLARE, REPLACEABLE, RETURN, RPAR, SEMICOLON, SLASH, SLASH_EW, STAR, STAR_EW, STREAM, STRING, SUBTYPEOF, THEN, TRUE, TYPE, UNSIGNED_INTEGER, UNSIGNED_REAL, WHEN, WHILE, WHITESPACE, WITHIN) */;

  _b = (((((modelica_integer)_id == 7) || ((modelica_integer)_id == 54)) || ((modelica_integer)_id == 101)) || ((modelica_integer)_id == 61));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_LexerModelicaDiff_modelicaDiffTokenWhitespace(threadData_t *threadData, modelica_metatype _t)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_LexerModelicaDiff_modelicaDiffTokenWhitespace(threadData, _t);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_boolean omc_LexerModelicaDiff_modelicaDiffTokenEq(threadData_t *threadData, modelica_metatype _ta, modelica_metatype _tb)
{
  modelica_boolean _b;
  modelica_integer _ida;
  modelica_integer _idb;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_boolean tmp7 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  // _ida has no default value.
  // _idb has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _ta;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  _ida = tmp3  /* pattern as ty=enumeration(_NO_TOKEN, ALGORITHM, AND, ANNOTATION, ASSIGN, BLOCK, BLOCK_COMMENT, BREAK, CLASS, COLON, COLONCOLON, COMMA, CONNECT, CONNECTOR, CONSTANT, CONSTRAINEDBY, DEFINEUNIT, DER, DISCRETE, DOT, EACH, ELSE, ELSEIF, ELSEWHEN, ENCAPSULATED, END, ENUMERATION, EQEQ, EQUALS, EQUATION, EXPANDABLE, EXTENDS, EXTERNAL, FALSE, FINAL, FLOW, FOR, FUNCTION, GREATER, GREATEREQ, IDENT, IF, IMPORT, IMPURE, IN, INITIAL, INNER, INPUT, LBRACE, LBRACK, LESS, LESSEQ, LESSGT, LINE_COMMENT, LOOP, LPAR, MINUS, MINUS_EW, MODEL, MODELICA, NEWLINE, NOT, OPERATOR, OPTIMIZATION, OR, OUTER, OUTPUT, OVERLOAD, PACKAGE, PARAMETER, PARTIAL, PLUS, PLUS_EW, POWER, POWER_EW, PROTECTED, PUBLIC, PURE, RBRACE, RBRACK, RECORD, REDECLARE, REPLACEABLE, RETURN, RPAR, SEMICOLON, SLASH, SLASH_EW, STAR, STAR_EW, STREAM, STRING, SUBTYPEOF, THEN, TRUE, TYPE, UNSIGNED_INTEGER, UNSIGNED_REAL, WHEN, WHILE, WHITESPACE, WITHIN) */;

  /* Pattern-matching assignment */
  tmpMeta4 = _tb;
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta4), 3));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  _idb = tmp6  /* pattern as ty=enumeration(_NO_TOKEN, ALGORITHM, AND, ANNOTATION, ASSIGN, BLOCK, BLOCK_COMMENT, BREAK, CLASS, COLON, COLONCOLON, COMMA, CONNECT, CONNECTOR, CONSTANT, CONSTRAINEDBY, DEFINEUNIT, DER, DISCRETE, DOT, EACH, ELSE, ELSEIF, ELSEWHEN, ENCAPSULATED, END, ENUMERATION, EQEQ, EQUALS, EQUATION, EXPANDABLE, EXTENDS, EXTERNAL, FALSE, FINAL, FLOW, FOR, FUNCTION, GREATER, GREATEREQ, IDENT, IF, IMPORT, IMPURE, IN, INITIAL, INNER, INPUT, LBRACE, LBRACK, LESS, LESSEQ, LESSGT, LINE_COMMENT, LOOP, LPAR, MINUS, MINUS_EW, MODEL, MODELICA, NEWLINE, NOT, OPERATOR, OPTIMIZATION, OR, OUTER, OUTPUT, OVERLOAD, PACKAGE, PARAMETER, PARTIAL, PLUS, PLUS_EW, POWER, POWER_EW, PROTECTED, PUBLIC, PURE, RBRACE, RBRACK, RECORD, REDECLARE, REPLACEABLE, RETURN, RPAR, SEMICOLON, SLASH, SLASH_EW, STAR, STAR_EW, STREAM, STRING, SUBTYPEOF, THEN, TRUE, TYPE, UNSIGNED_INTEGER, UNSIGNED_REAL, WHEN, WHILE, WHITESPACE, WITHIN) */;

  if(((modelica_integer)_ida != (modelica_integer)_idb))
  {
    _b = 0 /* false */;

    goto _return;
  }

  { /* match expression */
    modelica_integer tmp10_1;
    tmp10_1 = (modelica_integer)_ida;
    {
      int tmp10;
      {
        switch (MMC_SWITCH_CAST(tmp10_1)) {
        case 41: {
          if (41 != tmp10_1) goto tmp9_end;
          /* Pattern matching succeeded */
          tmp7 = omc_LexerModelicaDiff_tokenContentEq(threadData, _ta, _tb);
          goto tmp9_done;
        }
        case 97: {
          if (97 != tmp10_1) goto tmp9_end;
          /* Pattern matching succeeded */
          tmp7 = omc_LexerModelicaDiff_tokenContentEq(threadData, _ta, _tb);
          goto tmp9_done;
        }
        case 98: {
          if (98 != tmp10_1) goto tmp9_end;
          /* Pattern matching succeeded */
          tmp7 = (stringReal(omc_LexerModelicaDiff_tokenContent(threadData, _ta)) == stringReal(omc_LexerModelicaDiff_tokenContent(threadData, _tb)));
          goto tmp9_done;
        }
        case 7: {
          if (7 != tmp10_1) goto tmp9_end;
          /* Pattern matching succeeded */
          tmp7 = valueEq(omc_LexerModelicaDiff_blockCommentCanonical(threadData, _ta), omc_LexerModelicaDiff_blockCommentCanonical(threadData, _tb));
          goto tmp9_done;
        }
        case 54: {
          if (54 != tmp10_1) goto tmp9_end;
          /* Pattern matching succeeded */
          tmp7 = omc_LexerModelicaDiff_tokenContentEq(threadData, _ta, _tb);
          goto tmp9_done;
        }
        case 92: {
          if (92 != tmp10_1) goto tmp9_end;
          /* Pattern matching succeeded */
          _b = omc_LexerModelicaDiff_tokenContentEq(threadData, _ta, _tb);

          if((!_b))
          {
            _b = ((((modelica_integer) 0) != omc_StringUtil_findChar(threadData, omc_LexerModelicaDiff_tokenContent(threadData, _ta), ((modelica_integer) 10), ((modelica_integer) 1), ((modelica_integer) 0)))?valueEq(omc_LexerModelicaDiff_blockCommentCanonical(threadData, _ta), omc_LexerModelicaDiff_blockCommentCanonical(threadData, _tb)):0 /* false */);
          }
          tmp7 = _b;
          goto tmp9_done;
        }
        case 101: {
          if (101 != tmp10_1) goto tmp9_end;
          /* Pattern matching succeeded */
          tmp7 = 1 /* true */;
          goto tmp9_done;
        }
        default:
        tmp9_default: OMC_LABEL_UNUSED; {
          
          /* Pattern matching succeeded */
          tmp7 = 1 /* true */;
          goto tmp9_done;
        }
        }
        goto tmp9_end;
        tmp9_end: ;
      }
      goto goto_8;
      goto_8:;
      MMC_THROW_INTERNAL();
      goto tmp9_done;
      tmp9_done:;
    }
  }
  _b = tmp7;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_LexerModelicaDiff_modelicaDiffTokenEq(threadData_t *threadData, modelica_metatype _ta, modelica_metatype _tb)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_LexerModelicaDiff_modelicaDiffTokenEq(threadData, _ta, _tb);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

PROTECTED_FUNCTION_STATIC void omc_LexerModelicaDiff_checkArrayModelica(threadData_t *threadData, integer_array _arr, modelica_integer _index, modelica_metatype _info)
{
  modelica_string _filename = NULL;
  modelica_integer _lineStart;
  modelica_integer tmp1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_string tmp8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_string tmp11;
  modelica_integer tmp12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_string tmp15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _filename has no default value.
  // _lineStart has no default value.
  tmp1 = size_of_dimension_base_array(_arr, ((modelica_integer) 1));
  if(((_index < ((modelica_integer) 1)) || (_index > tmp1)))
  {
    /* Pattern-matching assignment */
    tmpMeta2 = _info;
    tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 2));
    tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta2), 4));
    tmp5 = mmc_unbox_integer(tmpMeta4);
    _filename = tmpMeta3;
    _lineStart = tmp5  /* pattern as ty=Integer */;

    tmpMeta6 = stringAppend(_OMC_LIT12,_filename);
    tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT13);
    tmp8 = modelica_integer_to_modelica_string(_lineStart, ((modelica_integer) 0), 1 /* true */);
    tmpMeta9 = stringAppend(tmpMeta7,tmp8);
    tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT14);
    tmp12 = size_of_dimension_base_array(_arr, ((modelica_integer) 1));
    tmp11 = modelica_integer_to_modelica_string(tmp12, ((modelica_integer) 0), 1 /* true */);
    tmpMeta13 = stringAppend(tmpMeta10,tmp11);
    tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT15);
    tmp15 = modelica_integer_to_modelica_string(_index, ((modelica_integer) 0), 1 /* true */);
    tmpMeta16 = stringAppend(tmpMeta14,tmp15);
    tmpMeta17 = stringAppend(tmpMeta16,_OMC_LIT9);
    fputs(MMC_STRINGDATA(tmpMeta17),stdout);

    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_LexerModelicaDiff_checkArrayModelica(threadData_t *threadData, modelica_metatype _arr, modelica_metatype _index, modelica_metatype _info)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_index);
  omc_LexerModelicaDiff_checkArrayModelica(threadData, *((base_array_t*)_arr), tmp1, _info);
  return;
}

PROTECTED_FUNCTION_STATIC void omc_LexerModelicaDiff_checkArray(threadData_t *threadData, modelica_metatype _arr, modelica_integer _index, modelica_metatype _info)
{
  modelica_string _filename = NULL;
  modelica_integer _lineStart;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_string tmp7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_string tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_string tmp13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _filename has no default value.
  // _lineStart has no default value.
  if(((_index < ((modelica_integer) 1)) || (_index > arrayLength(_arr))))
  {
    /* Pattern-matching assignment */
    tmpMeta1 = _info;
    tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 2));
    tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
    tmp4 = mmc_unbox_integer(tmpMeta3);
    _filename = tmpMeta2;
    _lineStart = tmp4  /* pattern as ty=Integer */;

    tmpMeta5 = stringAppend(_OMC_LIT12,_filename);
    tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT13);
    tmp7 = modelica_integer_to_modelica_string(_lineStart, ((modelica_integer) 0), 1 /* true */);
    tmpMeta8 = stringAppend(tmpMeta6,tmp7);
    tmpMeta9 = stringAppend(tmpMeta8,_OMC_LIT14);
    tmp10 = modelica_integer_to_modelica_string(arrayLength(_arr), ((modelica_integer) 0), 1 /* true */);
    tmpMeta11 = stringAppend(tmpMeta9,tmp10);
    tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT15);
    tmp13 = modelica_integer_to_modelica_string(_index, ((modelica_integer) 0), 1 /* true */);
    tmpMeta14 = stringAppend(tmpMeta12,tmp13);
    tmpMeta15 = stringAppend(tmpMeta14,_OMC_LIT9);
    fputs(MMC_STRINGDATA(tmpMeta15),stdout);

    MMC_THROW_INTERNAL();
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_LexerModelicaDiff_checkArray(threadData_t *threadData, modelica_metatype _arr, modelica_metatype _index, modelica_metatype _info)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_index);
  omc_LexerModelicaDiff_checkArray(threadData, _arr, tmp1, _info);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_LexerModelicaDiff_evalState(threadData_t *threadData, modelica_integer _cState, modelica_integer _c, modelica_integer *out_new_c)
{
  modelica_integer _new_state;
  modelica_integer _new_c;
  modelica_integer _cState1;
  modelica_integer _c1;
  modelica_integer _val;
  modelica_integer _val2;
  modelica_integer _chk;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _new_state has no default value.
  // _new_c has no default value.
  _cState1 = _cState;
  _c1 = _c;
  // _val has no default value.
  // _val2 has no default value.
  // _chk has no default value.
  _chk = integer_get(_OMC_LIT16, (_cState1)-1);

  _chk = _chk + _c1;

  _val = integer_get(_OMC_LIT17, (_chk)-1);

  _val2 = integer_get(_OMC_LIT16, (_cState1)-1) + _c1;

  if((_cState1 != _val))
  {
    _cState1 = integer_get(_OMC_LIT18, (_cState1)-1);

    if((_cState1 >= ((modelica_integer) 395)))
    {
      _c1 = integer_get(_OMC_LIT19, (_c1)-1);
    }

    if((_cState1 > ((modelica_integer) 0)))
    {
      _cState1 = omc_LexerModelicaDiff_evalState(threadData, _cState1, _c1 ,&_c1);
    }
  }

  _new_state = _cState1;

  _new_c = _c1;
  _return: OMC_LABEL_UNUSED
  if (out_new_c) { *out_new_c = _new_c; }
  return _new_state;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_LexerModelicaDiff_evalState(threadData_t *threadData, modelica_metatype _cState, modelica_metatype _c, modelica_metatype *out_new_c)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer _new_c;
  modelica_integer _new_state;
  modelica_metatype out_new_state;
  tmp1 = mmc_unbox_integer(_cState);
  tmp2 = mmc_unbox_integer(_c);
  _new_state = omc_LexerModelicaDiff_evalState(threadData, tmp1, tmp2, &_new_c);
  out_new_state = mmc_mk_icon(_new_state);
  if (out_new_c) { *out_new_c = mmc_mk_icon(_new_c); }
  return out_new_state;
}

PROTECTED_FUNCTION_STATIC modelica_integer omc_LexerModelicaDiff_findRule(threadData_t *threadData, modelica_string _fileContents, modelica_integer _currSt, modelica_integer _pos, modelica_integer _sPos, modelica_integer _mm_ePos, modelica_integer _linenr, modelica_integer _inBuffer, modelica_integer _inBkBuffer, modelica_metatype _inStates, modelica_integer *out_mm_currSt, modelica_integer *out_mm_pos, modelica_integer *out_mm_sPos, modelica_integer *out_mm_linenr, modelica_integer *out_buffer, modelica_integer *out_bkBuffer, modelica_metatype *out_states)
{
  modelica_integer _action;
  modelica_integer _mm_currSt;
  modelica_integer _mm_pos;
  modelica_integer _mm_sPos;
  modelica_integer _mm_linenr;
  modelica_integer _buffer;
  modelica_integer _bkBuffer;
  modelica_metatype _states = NULL;
  modelica_metatype _mm_accept = NULL;
  modelica_metatype _mm_ec = NULL;
  modelica_metatype _mm_meta = NULL;
  modelica_metatype _mm_base = NULL;
  modelica_metatype _mm_def = NULL;
  modelica_metatype _mm_nxt = NULL;
  modelica_metatype _mm_chk = NULL;
  modelica_metatype _mm_acclist = NULL;
  modelica_integer _lp;
  modelica_integer _lp1;
  modelica_integer _stCmp;
  modelica_integer _cp;
  modelica_boolean _st;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _action has no default value.
  // _mm_currSt has no default value.
  // _mm_pos has no default value.
  // _mm_sPos has no default value.
  // _mm_linenr has no default value.
  // _buffer has no default value.
  // _bkBuffer has no default value.
  // _states has no default value.
  // _mm_accept has no default value.
  // _mm_ec has no default value.
  // _mm_meta has no default value.
  // _mm_base has no default value.
  // _mm_def has no default value.
  // _mm_nxt has no default value.
  // _mm_chk has no default value.
  // _mm_acclist has no default value.
  // _lp has no default value.
  // _lp1 has no default value.
  // _stCmp has no default value.
  // _cp has no default value.
  // _st has no default value.
  _mm_currSt = _currSt;

  _mm_pos = _pos;

  _mm_sPos = _sPos;

  _mm_linenr = _linenr;

  _buffer = _inBuffer;

  _bkBuffer = _inBkBuffer;

  _states = _inStates;

  _stCmp = mmc_unbox_integer(listGet(_states, ((modelica_integer) 1)));

  _lp = integer_get(_OMC_LIT20, (_stCmp)-1);

  _lp1 = integer_get(_OMC_LIT20, (((modelica_integer) 1) + _stCmp)-1);

  _st = ((_lp > ((modelica_integer) 0)) && (_lp < _lp1));

  if(_st)
  {
    _lp = integer_get(_OMC_LIT20, (_stCmp)-1);

    _action = integer_get(_OMC_LIT21, (_lp)-1);
  }
  else
  {
    _cp = stringGetNoBoundsChecking(_fileContents, ((modelica_integer) -1) + _mm_pos);

    _buffer = ((modelica_integer) -1) + _buffer;

    _bkBuffer = ((modelica_integer) 1) + _bkBuffer;

    _mm_pos = ((modelica_integer) -1) + _mm_pos;

    _mm_sPos = ((modelica_integer) -1) + _mm_sPos;

    if((_cp == ((modelica_integer) 10)))
    {
      _mm_sPos = _mm_ePos;

      _mm_linenr = ((modelica_integer) -1) + _mm_linenr;
    }

    /* Pattern-matching assignment */
    tmpMeta1 = _states;
    if (listEmpty(tmpMeta1)) MMC_THROW_INTERNAL();
    tmpMeta2 = MMC_CAR(tmpMeta1);
    tmpMeta3 = MMC_CDR(tmpMeta1);
    tmp4 = mmc_unbox_integer(tmpMeta2);
    _mm_currSt = tmp4  /* pattern as ty=Integer */;
    _states = tmpMeta3;

    /* Tail recursive call */
    _currSt = _mm_currSt;
    _pos = _mm_pos;
    _sPos = _mm_sPos;
    _linenr = _mm_linenr;
    _inBuffer = _buffer;
    _inBkBuffer = _bkBuffer;
    _inStates = _states;
    goto _tailrecursive;
    /* TODO: Make sure any eventual dead code below is never generated */
    ;
  }
  _return: OMC_LABEL_UNUSED
  if (out_mm_currSt) { *out_mm_currSt = _mm_currSt; }
  if (out_mm_pos) { *out_mm_pos = _mm_pos; }
  if (out_mm_sPos) { *out_mm_sPos = _mm_sPos; }
  if (out_mm_linenr) { *out_mm_linenr = _mm_linenr; }
  if (out_buffer) { *out_buffer = _buffer; }
  if (out_bkBuffer) { *out_bkBuffer = _bkBuffer; }
  if (out_states) { *out_states = _states; }
  return _action;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_LexerModelicaDiff_findRule(threadData_t *threadData, modelica_metatype _fileContents, modelica_metatype _currSt, modelica_metatype _pos, modelica_metatype _sPos, modelica_metatype _mm_ePos, modelica_metatype _linenr, modelica_metatype _inBuffer, modelica_metatype _inBkBuffer, modelica_metatype _inStates, modelica_metatype *out_mm_currSt, modelica_metatype *out_mm_pos, modelica_metatype *out_mm_sPos, modelica_metatype *out_mm_linenr, modelica_metatype *out_buffer, modelica_metatype *out_bkBuffer, modelica_metatype *out_states)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer _mm_currSt;
  modelica_integer _mm_pos;
  modelica_integer _mm_sPos;
  modelica_integer _mm_linenr;
  modelica_integer _buffer;
  modelica_integer _bkBuffer;
  modelica_integer _action;
  modelica_metatype out_action;
  tmp1 = mmc_unbox_integer(_currSt);
  tmp2 = mmc_unbox_integer(_pos);
  tmp3 = mmc_unbox_integer(_sPos);
  tmp4 = mmc_unbox_integer(_mm_ePos);
  tmp5 = mmc_unbox_integer(_linenr);
  tmp6 = mmc_unbox_integer(_inBuffer);
  tmp7 = mmc_unbox_integer(_inBkBuffer);
  _action = omc_LexerModelicaDiff_findRule(threadData, _fileContents, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, _inStates, &_mm_currSt, &_mm_pos, &_mm_sPos, &_mm_linenr, &_buffer, &_bkBuffer, out_states);
  out_action = mmc_mk_icon(_action);
  if (out_mm_currSt) { *out_mm_currSt = mmc_mk_icon(_mm_currSt); }
  if (out_mm_pos) { *out_mm_pos = mmc_mk_icon(_mm_pos); }
  if (out_mm_sPos) { *out_mm_sPos = mmc_mk_icon(_mm_sPos); }
  if (out_mm_linenr) { *out_mm_linenr = mmc_mk_icon(_mm_linenr); }
  if (out_buffer) { *out_buffer = mmc_mk_icon(_buffer); }
  if (out_bkBuffer) { *out_bkBuffer = mmc_mk_icon(_bkBuffer); }
  /* skip box _states; list<#Integer> */
  return out_action;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_LexerModelicaDiff_consume(threadData_t *threadData, modelica_integer _cp, modelica_metatype _tokens, modelica_string _fileContents, modelica_integer _startSt, modelica_integer _currSt, modelica_integer _pos, modelica_integer _sPos, modelica_integer _ePos, modelica_integer _linenr, modelica_integer _inLineNrStart, modelica_integer _inBuffer, modelica_metatype _inStates, modelica_string _fileName, modelica_metatype _inErrorTokens, modelica_integer *out_bkBuffer, modelica_integer *out_mm_startSt, modelica_integer *out_mm_currSt, modelica_integer *out_mm_pos, modelica_integer *out_mm_sPos, modelica_integer *out_mm_ePos, modelica_integer *out_mm_linenr, modelica_integer *out_lineNrStart, modelica_integer *out_buffer, modelica_metatype *out_states, modelica_metatype *out_errorTokens)
{
  modelica_metatype _resToken = NULL;
  modelica_integer _bkBuffer;
  modelica_integer _mm_startSt;
  modelica_integer _mm_currSt;
  modelica_integer _mm_pos;
  modelica_integer _mm_sPos;
  modelica_integer _mm_ePos;
  modelica_integer _mm_linenr;
  modelica_integer _lineNrStart;
  modelica_integer _buffer;
  modelica_metatype _states = NULL;
  modelica_metatype _errorTokens = NULL;
  modelica_metatype _tok = NULL;
  modelica_integer _act;
  modelica_integer _buffer2;
  modelica_integer _c;
  modelica_integer _baseCond;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _resToken has no default value.
  _bkBuffer = ((modelica_integer) 0);
  // _mm_startSt has no default value.
  // _mm_currSt has no default value.
  // _mm_pos has no default value.
  // _mm_sPos has no default value.
  // _mm_ePos has no default value.
  // _mm_linenr has no default value.
  // _lineNrStart has no default value.
  // _buffer has no default value.
  // _states has no default value.
  _errorTokens = _inErrorTokens;
  // _tok has no default value.
  // _act has no default value.
  // _buffer2 has no default value.
  // _c has no default value.
  // _baseCond has no default value.
  _mm_startSt = _startSt;

  _mm_currSt = _currSt;

  _mm_pos = _pos;

  _mm_sPos = _sPos;

  _mm_ePos = _ePos;

  _mm_linenr = _linenr;

  _lineNrStart = _inLineNrStart;

  _buffer = _inBuffer;

  _states = _inStates;

  _baseCond = integer_get(_OMC_LIT16, (_mm_currSt)-1);

  _buffer = ((modelica_integer) 1) + _buffer;

  _mm_pos = ((modelica_integer) 1) + _mm_pos;

  if((_cp == ((modelica_integer) 10)))
  {
    _mm_linenr = ((modelica_integer) 1) + _mm_linenr;

    _mm_sPos = ((modelica_integer) 0);
  }
  else
  {
    _mm_sPos = ((modelica_integer) 1) + _mm_sPos;
  }

  _c = integer_get(_OMC_LIT22, (_cp)-1);

  _mm_currSt = omc_LexerModelicaDiff_evalState(threadData, _mm_currSt, _c ,&_c);

  if((_mm_currSt > ((modelica_integer) 0)))
  {
    _mm_currSt = integer_get(_OMC_LIT16, (_mm_currSt)-1);

    _mm_currSt = integer_get(_OMC_LIT23, (_mm_currSt + _c)-1);
  }
  else
  {
    _mm_currSt = integer_get(_OMC_LIT23, (_c)-1);
  }

  tmpMeta1 = mmc_mk_cons(mmc_mk_integer(_mm_currSt), _states);
  _states = tmpMeta1;

  _baseCond = integer_get(_OMC_LIT16, (_mm_currSt)-1);

  if((_baseCond == ((modelica_integer) 453)))
  {
    _act = omc_LexerModelicaDiff_findRule(threadData, _fileContents, _mm_currSt, _mm_pos, _mm_sPos, _mm_ePos, _mm_linenr, _buffer, _bkBuffer, _states ,&_mm_currSt ,&_mm_pos ,&_mm_sPos ,&_mm_linenr ,&_buffer ,&_bkBuffer ,&_states);

    _tok = omc_LexerModelicaDiff_action(threadData, _act, _mm_startSt, _mm_currSt, _mm_pos, _mm_sPos, _mm_ePos, _mm_linenr, _lineNrStart, _buffer, 0 /* false */, _fileName, _fileContents, _errorTokens ,&_mm_startSt ,&_buffer2 ,&_errorTokens);

    _mm_currSt = _mm_startSt;

    tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
    _states = tmpMeta2;

    if((_buffer != _buffer2))
    {
      _mm_ePos = _mm_sPos;

      _lineNrStart = _linenr;
    }

    _buffer = _buffer2;

    { /* match expression */
      modelica_metatype tmp6_1;
      tmp6_1 = _tok;
      {
        volatile mmc_switch_type tmp6;
        int tmp7;
        tmp6 = 0;
        for (; tmp6 < 2; tmp6++) {
          switch (MMC_SWITCH_CAST(tmp6)) {
          case 0: {
            modelica_metatype tmpMeta8;
            modelica_integer tmp9;
            tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp6_1), 3));
            tmp9 = mmc_unbox_integer(tmpMeta8);
            if (1 != tmp9) goto tmp5_end;
            
            /* Pattern matching succeeded */
            tmpMeta3 = _tokens;
            goto tmp5_done;
          }
          case 1: {
            modelica_metatype tmpMeta10;
            
            /* Pattern matching succeeded */
            tmpMeta10 = mmc_mk_cons(_tok, _tokens);
            tmpMeta3 = tmpMeta10;
            goto tmp5_done;
          }
          }
          goto tmp5_end;
          tmp5_end: ;
        }
        goto goto_4;
        goto_4:;
        MMC_THROW_INTERNAL();
        goto tmp5_done;
        tmp5_done:;
      }
    }
    _resToken = tmpMeta3;
  }
  else
  {
    _bkBuffer = ((modelica_integer) 0);

    _resToken = _tokens;
  }
  _return: OMC_LABEL_UNUSED
  if (out_bkBuffer) { *out_bkBuffer = _bkBuffer; }
  if (out_mm_startSt) { *out_mm_startSt = _mm_startSt; }
  if (out_mm_currSt) { *out_mm_currSt = _mm_currSt; }
  if (out_mm_pos) { *out_mm_pos = _mm_pos; }
  if (out_mm_sPos) { *out_mm_sPos = _mm_sPos; }
  if (out_mm_ePos) { *out_mm_ePos = _mm_ePos; }
  if (out_mm_linenr) { *out_mm_linenr = _mm_linenr; }
  if (out_lineNrStart) { *out_lineNrStart = _lineNrStart; }
  if (out_buffer) { *out_buffer = _buffer; }
  if (out_states) { *out_states = _states; }
  if (out_errorTokens) { *out_errorTokens = _errorTokens; }
  return _resToken;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_LexerModelicaDiff_consume(threadData_t *threadData, modelica_metatype _cp, modelica_metatype _tokens, modelica_metatype _fileContents, modelica_metatype _startSt, modelica_metatype _currSt, modelica_metatype _pos, modelica_metatype _sPos, modelica_metatype _ePos, modelica_metatype _linenr, modelica_metatype _inLineNrStart, modelica_metatype _inBuffer, modelica_metatype _inStates, modelica_metatype _fileName, modelica_metatype _inErrorTokens, modelica_metatype *out_bkBuffer, modelica_metatype *out_mm_startSt, modelica_metatype *out_mm_currSt, modelica_metatype *out_mm_pos, modelica_metatype *out_mm_sPos, modelica_metatype *out_mm_ePos, modelica_metatype *out_mm_linenr, modelica_metatype *out_lineNrStart, modelica_metatype *out_buffer, modelica_metatype *out_states, modelica_metatype *out_errorTokens)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer _bkBuffer;
  modelica_integer _mm_startSt;
  modelica_integer _mm_currSt;
  modelica_integer _mm_pos;
  modelica_integer _mm_sPos;
  modelica_integer _mm_ePos;
  modelica_integer _mm_linenr;
  modelica_integer _lineNrStart;
  modelica_integer _buffer;
  modelica_metatype _resToken = NULL;
  tmp1 = mmc_unbox_integer(_cp);
  tmp2 = mmc_unbox_integer(_startSt);
  tmp3 = mmc_unbox_integer(_currSt);
  tmp4 = mmc_unbox_integer(_pos);
  tmp5 = mmc_unbox_integer(_sPos);
  tmp6 = mmc_unbox_integer(_ePos);
  tmp7 = mmc_unbox_integer(_linenr);
  tmp8 = mmc_unbox_integer(_inLineNrStart);
  tmp9 = mmc_unbox_integer(_inBuffer);
  _resToken = omc_LexerModelicaDiff_consume(threadData, tmp1, _tokens, _fileContents, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9, _inStates, _fileName, _inErrorTokens, &_bkBuffer, &_mm_startSt, &_mm_currSt, &_mm_pos, &_mm_sPos, &_mm_ePos, &_mm_linenr, &_lineNrStart, &_buffer, out_states, out_errorTokens);
  /* skip box _resToken; list<LexerModelicaDiff.Token> */
  if (out_bkBuffer) { *out_bkBuffer = mmc_mk_icon(_bkBuffer); }
  if (out_mm_startSt) { *out_mm_startSt = mmc_mk_icon(_mm_startSt); }
  if (out_mm_currSt) { *out_mm_currSt = mmc_mk_icon(_mm_currSt); }
  if (out_mm_pos) { *out_mm_pos = mmc_mk_icon(_mm_pos); }
  if (out_mm_sPos) { *out_mm_sPos = mmc_mk_icon(_mm_sPos); }
  if (out_mm_ePos) { *out_mm_ePos = mmc_mk_icon(_mm_ePos); }
  if (out_mm_linenr) { *out_mm_linenr = mmc_mk_icon(_mm_linenr); }
  if (out_lineNrStart) { *out_lineNrStart = mmc_mk_icon(_lineNrStart); }
  if (out_buffer) { *out_buffer = mmc_mk_icon(_buffer); }
  /* skip box _states; list<#Integer> */
  /* skip box _errorTokens; list<LexerModelicaDiff.Token> */
  return _resToken;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_LexerModelicaDiff_lex(threadData_t *threadData, modelica_string _fileName, modelica_string _contents, modelica_metatype *out_errorTokens)
{
  modelica_metatype _tokens = NULL;
  modelica_metatype _errorTokens = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer _startSt;
  modelica_integer _i;
  modelica_integer _r;
  modelica_integer _cTok;
  modelica_integer _cTok2;
  modelica_integer _currSt;
  modelica_integer _pos;
  modelica_integer _sPos;
  modelica_integer _ePos;
  modelica_integer _linenr;
  modelica_integer _contentLen;
  modelica_integer _numBacktrack;
  modelica_integer _buffer;
  modelica_integer _lineNrStart;
  modelica_metatype _cProg = NULL;
  modelica_metatype _cProg2 = NULL;
  modelica_metatype _chars = NULL;
  modelica_metatype _states = NULL;
  modelica_string _s1 = NULL;
  modelica_string _s2 = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tokens has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _errorTokens = tmpMeta1;
  // _startSt has no default value.
  // _i has no default value.
  // _r has no default value.
  // _cTok has no default value.
  // _cTok2 has no default value.
  // _currSt has no default value.
  // _pos has no default value.
  // _sPos has no default value.
  // _ePos has no default value.
  // _linenr has no default value.
  // _contentLen has no default value.
  // _numBacktrack has no default value.
  // _buffer has no default value.
  // _lineNrStart has no default value.
  // _cProg has no default value.
  // _cProg2 has no default value.
  // _chars has no default value.
  // _states has no default value.
  // _s1 has no default value.
  // _s2 has no default value.
  _startSt = ((modelica_integer) 1);

  _currSt = ((modelica_integer) 1);

  _pos = ((modelica_integer) 1);

  _sPos = ((modelica_integer) 0);

  _ePos = ((modelica_integer) 0);

  _linenr = ((modelica_integer) 1);

  _lineNrStart = ((modelica_integer) 1);

  _buffer = ((modelica_integer) 0);

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _states = tmpMeta2;

  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _tokens = tmpMeta3;

  _contentLen = stringLength(_contents);

  _i = ((modelica_integer) 1);

  while(1)
  {
    if(!(_i <= _contentLen)) break;
    _cTok = stringGetNoBoundsChecking(_contents, _i);

    _tokens = omc_LexerModelicaDiff_consume(threadData, _cTok, _tokens, _contents, _startSt, _currSt, _pos, _sPos, _ePos, _linenr, _lineNrStart, _buffer, _states, _fileName, _errorTokens ,&_numBacktrack ,&_startSt ,&_currSt ,&_pos ,&_sPos ,&_ePos ,&_linenr ,&_lineNrStart ,&_buffer ,&_states ,&_errorTokens);

    _i = ((modelica_integer) 1) + _i - _numBacktrack;
  }

  _tokens = listReverseInPlace(_tokens);

  _errorTokens = listReverseInPlace(_errorTokens);
  _return: OMC_LABEL_UNUSED
  if (out_errorTokens) { *out_errorTokens = _errorTokens; }
  return _tokens;
}

DLLDirection
modelica_metatype omc_LexerModelicaDiff_tokenSourceInfo(threadData_t *threadData, modelica_metatype _token)
{
  modelica_metatype _info = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _info has no default value.
  { /* match expression */
    modelica_metatype tmp4_1;modelica_metatype _t;
    tmp4_1 = _token;
    _t = tmp4_1;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 1; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box8(3, &SourceInfo_SOURCEINFO__desc, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_t), 2))), mmc_mk_boolean(0 /* false */), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_t), 7))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_t), 8))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_t), 9))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_t), 10))), _OMC_LIT24);
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _info = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _info;
}

DLLDirection
modelica_boolean omc_LexerModelicaDiff_tokenContentEq(threadData_t *threadData, modelica_metatype _token1, modelica_metatype _token2)
{
  modelica_boolean _b;
  modelica_string _contents1 = NULL;
  modelica_string _contents2 = NULL;
  modelica_integer _offset1;
  modelica_integer _length1;
  modelica_integer _offset2;
  modelica_integer _length2;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_integer tmp12;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  // _contents1 has no default value.
  // _contents2 has no default value.
  // _offset1 has no default value.
  // _length1 has no default value.
  // _offset2 has no default value.
  // _length2 has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _token1;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  _contents1 = tmpMeta2;
  _offset1 = tmp4  /* pattern as ty=Integer */;
  _length1 = tmp6  /* pattern as ty=Integer */;

  /* Pattern-matching assignment */
  tmpMeta7 = _token2;
  tmpMeta8 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 4));
  tmpMeta9 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 5));
  tmp10 = mmc_unbox_integer(tmpMeta9);
  tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta7), 6));
  tmp12 = mmc_unbox_integer(tmpMeta11);
  _contents2 = tmpMeta8;
  _offset2 = tmp10  /* pattern as ty=Integer */;
  _length2 = tmp12  /* pattern as ty=Integer */;

  _b = ((_length1 != _length2)?0 /* false */:(((modelica_integer) 0) == omc_System_strcmp__offset(threadData, _contents1, _offset1, _length1, _contents2, _offset2, _length2)));
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_LexerModelicaDiff_tokenContentEq(threadData_t *threadData, modelica_metatype _token1, modelica_metatype _token2)
{
  modelica_boolean _b;
  modelica_metatype out_b;
  _b = omc_LexerModelicaDiff_tokenContentEq(threadData, _token1, _token2);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

DLLDirection
modelica_string omc_LexerModelicaDiff_tokenContent(threadData_t *threadData, modelica_metatype _token)
{
  modelica_string _contents = NULL;
  modelica_integer _byteOffset;
  modelica_integer _length;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_integer tmp4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _contents has no default value.
  // _byteOffset has no default value.
  // _length has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _token;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta3 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmp4 = mmc_unbox_integer(tmpMeta3);
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  _contents = tmpMeta2;
  _byteOffset = tmp4  /* pattern as ty=Integer */;
  _length = tmp6  /* pattern as ty=Integer */;

  _contents = ((_length > ((modelica_integer) 0))?substring(_contents, _byteOffset, ((modelica_integer) -1) + _byteOffset + _length):_OMC_LIT25);
  _return: OMC_LABEL_UNUSED
  return _contents;
}

DLLDirection
modelica_string omc_LexerModelicaDiff_printToken(threadData_t *threadData, modelica_metatype _token)
{
  modelica_string _strTk = NULL;
  modelica_integer _id;
  modelica_string _contents = NULL;
  modelica_integer _byteOffset;
  modelica_integer _length;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_integer tmp6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_string tmp9;
  const char* tmp10[102] = {"_NO_TOKEN", "ALGORITHM", "AND", "ANNOTATION", "ASSIGN", "BLOCK", "BLOCK_COMMENT", "BREAK", "CLASS", "COLON", "COLONCOLON", "COMMA", "CONNECT", "CONNECTOR", "CONSTANT", "CONSTRAINEDBY", "DEFINEUNIT", "DER", "DISCRETE", "DOT", "EACH", "ELSE", "ELSEIF", "ELSEWHEN", "ENCAPSULATED", "END", "ENUMERATION", "EQEQ", "EQUALS", "EQUATION", "EXPANDABLE", "EXTENDS", "EXTERNAL", "FALSE", "FINAL", "FLOW", "FOR", "FUNCTION", "GREATER", "GREATEREQ", "IDENT", "IF", "IMPORT", "IMPURE", "IN", "INITIAL", "INNER", "INPUT", "LBRACE", "LBRACK", "LESS", "LESSEQ", "LESSGT", "LINE_COMMENT", "LOOP", "LPAR", "MINUS", "MINUS_EW", "MODEL", "MODELICA", "NEWLINE", "NOT", "OPERATOR", "OPTIMIZATION", "OR", "OUTER", "OUTPUT", "OVERLOAD", "PACKAGE", "PARAMETER", "PARTIAL", "PLUS", "PLUS_EW", "POWER", "POWER_EW", "PROTECTED", "PUBLIC", "PURE", "RBRACE", "RBRACK", "RECORD", "REDECLARE", "REPLACEABLE", "RETURN", "RPAR", "SEMICOLON", "SLASH", "SLASH_EW", "STAR", "STAR_EW", "STREAM", "STRING", "SUBTYPEOF", "THEN", "TRUE", "TYPE", "UNSIGNED_INTEGER", "UNSIGNED_REAL", "WHEN", "WHILE", "WHITESPACE", "WITHIN"};
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _strTk has no default value.
  // _id has no default value.
  // _contents has no default value.
  // _byteOffset has no default value.
  // _length has no default value.
  /* Pattern-matching assignment */
  tmpMeta1 = _token;
  tmpMeta2 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 3));
  tmp3 = mmc_unbox_integer(tmpMeta2);
  tmpMeta4 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 4));
  tmpMeta5 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 5));
  tmp6 = mmc_unbox_integer(tmpMeta5);
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta1), 6));
  tmp8 = mmc_unbox_integer(tmpMeta7);
  _id = tmp3  /* pattern as ty=enumeration(_NO_TOKEN, ALGORITHM, AND, ANNOTATION, ASSIGN, BLOCK, BLOCK_COMMENT, BREAK, CLASS, COLON, COLONCOLON, COMMA, CONNECT, CONNECTOR, CONSTANT, CONSTRAINEDBY, DEFINEUNIT, DER, DISCRETE, DOT, EACH, ELSE, ELSEIF, ELSEWHEN, ENCAPSULATED, END, ENUMERATION, EQEQ, EQUALS, EQUATION, EXPANDABLE, EXTENDS, EXTERNAL, FALSE, FINAL, FLOW, FOR, FUNCTION, GREATER, GREATEREQ, IDENT, IF, IMPORT, IMPURE, IN, INITIAL, INNER, INPUT, LBRACE, LBRACK, LESS, LESSEQ, LESSGT, LINE_COMMENT, LOOP, LPAR, MINUS, MINUS_EW, MODEL, MODELICA, NEWLINE, NOT, OPERATOR, OPTIMIZATION, OR, OUTER, OUTPUT, OVERLOAD, PACKAGE, PARAMETER, PARTIAL, PLUS, PLUS_EW, POWER, POWER_EW, PROTECTED, PUBLIC, PURE, RBRACE, RBRACK, RECORD, REDECLARE, REPLACEABLE, RETURN, RPAR, SEMICOLON, SLASH, SLASH_EW, STAR, STAR_EW, STREAM, STRING, SUBTYPEOF, THEN, TRUE, TYPE, UNSIGNED_INTEGER, UNSIGNED_REAL, WHEN, WHILE, WHITESPACE, WITHIN) */;
  _contents = tmpMeta4;
  _byteOffset = tmp6  /* pattern as ty=Integer */;
  _length = tmp8  /* pattern as ty=Integer */;

  _contents = ((_length > ((modelica_integer) 0))?substring(_contents, _byteOffset, ((modelica_integer) -1) + _byteOffset + _length):_OMC_LIT25);

  tmp9 = enum_to_modelica_string((modelica_integer)_id, tmp10, ((modelica_integer) 0), 1 /* true */);
  tmpMeta11 = stringAppend(_OMC_LIT26,tmp9);
  tmpMeta12 = stringAppend(tmpMeta11,_OMC_LIT27);
  tmpMeta13 = stringAppend(tmpMeta12,_contents);
  tmpMeta14 = stringAppend(tmpMeta13,_OMC_LIT28);
  tmpMeta15 = stringAppend(tmpMeta14,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_token), 7))))));
  tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT13);
  tmpMeta17 = stringAppend(tmpMeta16,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_token), 8))))));
  tmpMeta18 = stringAppend(tmpMeta17,_OMC_LIT29);
  tmpMeta19 = stringAppend(tmpMeta18,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_token), 9))))));
  tmpMeta20 = stringAppend(tmpMeta19,_OMC_LIT13);
  tmpMeta21 = stringAppend(tmpMeta20,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_token), 10))))));
  tmpMeta22 = stringAppend(tmpMeta21,_OMC_LIT30);
  _strTk = tmpMeta22;
  _return: OMC_LABEL_UNUSED
  return _strTk;
}

DLLDirection
modelica_metatype omc_LexerModelicaDiff_action(threadData_t *threadData, modelica_integer _act, modelica_integer _startSt, modelica_integer _mm_currSt, modelica_integer _mm_pos, modelica_integer _mm_sPos, modelica_integer _mm_ePos, modelica_integer _mm_linenr, modelica_integer _lineNrStart, modelica_integer _buffer, modelica_boolean _debug, modelica_string _fileNm, modelica_string _fileContents, modelica_metatype _inErrorTokens, modelica_integer *out_mm_startSt, modelica_integer *out_bufferRet, modelica_metatype *out_errorTokens)
{
  modelica_metatype _token = NULL;
  modelica_integer _mm_startSt;
  modelica_integer _bufferRet;
  modelica_metatype _errorTokens = NULL;
  modelica_metatype _info = NULL;
  modelica_string _sToken = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _token has no default value.
  // _mm_startSt has no default value.
  // _bufferRet has no default value.
  _errorTokens = _inErrorTokens;
  // _info has no default value.
  // _sToken has no default value.
  _mm_startSt = _startSt;

  _bufferRet = ((modelica_integer) 0);

  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = _act;
    {
      modelica_metatype _tok = NULL;
      int tmp4;
      // _tok has no default value.
      {
        switch (MMC_SWITCH_CAST(tmp4_1)) {
        case 1: {
          modelica_metatype tmpMeta5;
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta5 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(101), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta5;
          goto tmp3_done;
        }
        case 2: {
          modelica_metatype tmpMeta6;
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta6 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(61), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta6;
          goto tmp3_done;
        }
        case 3: {
          modelica_metatype tmpMeta7;
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta7 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(98), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta7;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta8;
          if (4 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta8 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(98), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta8;
          goto tmp3_done;
        }
        case 5: {
          modelica_metatype tmpMeta9;
          if (5 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta9 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(98), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta9;
          goto tmp3_done;
        }
        case 6: {
          modelica_metatype tmpMeta10;
          if (6 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta10 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(2), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta10;
          goto tmp3_done;
        }
        case 7: {
          modelica_metatype tmpMeta11;
          if (7 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta11 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(3), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta11;
          goto tmp3_done;
        }
        case 8: {
          modelica_metatype tmpMeta12;
          if (8 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta12 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(4), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta12;
          goto tmp3_done;
        }
        case 9: {
          modelica_metatype tmpMeta13;
          if (9 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta13 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(6), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta13;
          goto tmp3_done;
        }
        case 10: {
          modelica_metatype tmpMeta14;
          if (10 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta14 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(9), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta14;
          goto tmp3_done;
        }
        case 11: {
          modelica_metatype tmpMeta15;
          if (11 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta15 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(13), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta15;
          goto tmp3_done;
        }
        case 12: {
          modelica_metatype tmpMeta16;
          if (12 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta16 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(14), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta16;
          goto tmp3_done;
        }
        case 13: {
          modelica_metatype tmpMeta17;
          if (13 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta17 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(15), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta17;
          goto tmp3_done;
        }
        case 14: {
          modelica_metatype tmpMeta18;
          if (14 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta18 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(19), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta18;
          goto tmp3_done;
        }
        case 15: {
          modelica_metatype tmpMeta19;
          if (15 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta19 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(18), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta19;
          goto tmp3_done;
        }
        case 16: {
          modelica_metatype tmpMeta20;
          if (16 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta20 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(17), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta20;
          goto tmp3_done;
        }
        case 17: {
          modelica_metatype tmpMeta21;
          if (17 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta21 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(21), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta21;
          goto tmp3_done;
        }
        case 18: {
          modelica_metatype tmpMeta22;
          if (18 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta22 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(22), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta22;
          goto tmp3_done;
        }
        case 19: {
          modelica_metatype tmpMeta23;
          if (19 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta23 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(23), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta23;
          goto tmp3_done;
        }
        case 20: {
          modelica_metatype tmpMeta24;
          if (20 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta24 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(24), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta24;
          goto tmp3_done;
        }
        case 21: {
          modelica_metatype tmpMeta25;
          if (21 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta25 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(26), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta25;
          goto tmp3_done;
        }
        case 22: {
          modelica_metatype tmpMeta26;
          if (22 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta26 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(27), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta26;
          goto tmp3_done;
        }
        case 23: {
          modelica_metatype tmpMeta27;
          if (23 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta27 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(30), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta27;
          goto tmp3_done;
        }
        case 24: {
          modelica_metatype tmpMeta28;
          if (24 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta28 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(25), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta28;
          goto tmp3_done;
        }
        case 25: {
          modelica_metatype tmpMeta29;
          if (25 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta29 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(31), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta29;
          goto tmp3_done;
        }
        case 26: {
          modelica_metatype tmpMeta30;
          if (26 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta30 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(32), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta30;
          goto tmp3_done;
        }
        case 27: {
          modelica_metatype tmpMeta31;
          if (27 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta31 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(16), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta31;
          goto tmp3_done;
        }
        case 28: {
          modelica_metatype tmpMeta32;
          if (28 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta32 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(33), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta32;
          goto tmp3_done;
        }
        case 29: {
          modelica_metatype tmpMeta33;
          if (29 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta33 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(34), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta33;
          goto tmp3_done;
        }
        case 30: {
          modelica_metatype tmpMeta34;
          if (30 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta34 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(35), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta34;
          goto tmp3_done;
        }
        case 31: {
          modelica_metatype tmpMeta35;
          if (31 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta35 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(36), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta35;
          goto tmp3_done;
        }
        case 32: {
          modelica_metatype tmpMeta36;
          if (32 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta36 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(37), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta36;
          goto tmp3_done;
        }
        case 33: {
          modelica_metatype tmpMeta37;
          if (33 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta37 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(38), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta37;
          goto tmp3_done;
        }
        case 34: {
          modelica_metatype tmpMeta38;
          if (34 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta38 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(42), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta38;
          goto tmp3_done;
        }
        case 35: {
          modelica_metatype tmpMeta39;
          if (35 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta39 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(43), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta39;
          goto tmp3_done;
        }
        case 36: {
          modelica_metatype tmpMeta40;
          if (36 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta40 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(45), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta40;
          goto tmp3_done;
        }
        case 37: {
          modelica_metatype tmpMeta41;
          if (37 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta41 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(46), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta41;
          goto tmp3_done;
        }
        case 38: {
          modelica_metatype tmpMeta42;
          if (38 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta42 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(47), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta42;
          goto tmp3_done;
        }
        case 39: {
          modelica_metatype tmpMeta43;
          if (39 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta43 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(48), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta43;
          goto tmp3_done;
        }
        case 40: {
          modelica_metatype tmpMeta44;
          if (40 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta44 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(55), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta44;
          goto tmp3_done;
        }
        case 41: {
          modelica_metatype tmpMeta45;
          if (41 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta45 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(59), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta45;
          goto tmp3_done;
        }
        case 42: {
          modelica_metatype tmpMeta46;
          if (42 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta46 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(62), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta46;
          goto tmp3_done;
        }
        case 43: {
          modelica_metatype tmpMeta47;
          if (43 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta47 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(66), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta47;
          goto tmp3_done;
        }
        case 44: {
          modelica_metatype tmpMeta48;
          if (44 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta48 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(63), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta48;
          goto tmp3_done;
        }
        case 45: {
          modelica_metatype tmpMeta49;
          if (45 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta49 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(68), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta49;
          goto tmp3_done;
        }
        case 46: {
          modelica_metatype tmpMeta50;
          if (46 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta50 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(65), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta50;
          goto tmp3_done;
        }
        case 47: {
          modelica_metatype tmpMeta51;
          if (47 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta51 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(67), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta51;
          goto tmp3_done;
        }
        case 48: {
          modelica_metatype tmpMeta52;
          if (48 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta52 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(69), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta52;
          goto tmp3_done;
        }
        case 49: {
          modelica_metatype tmpMeta53;
          if (49 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta53 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(70), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta53;
          goto tmp3_done;
        }
        case 50: {
          modelica_metatype tmpMeta54;
          if (50 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta54 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(71), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta54;
          goto tmp3_done;
        }
        case 51: {
          modelica_metatype tmpMeta55;
          if (51 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta55 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(76), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta55;
          goto tmp3_done;
        }
        case 52: {
          modelica_metatype tmpMeta56;
          if (52 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta56 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(77), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta56;
          goto tmp3_done;
        }
        case 53: {
          modelica_metatype tmpMeta57;
          if (53 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta57 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(81), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta57;
          goto tmp3_done;
        }
        case 54: {
          modelica_metatype tmpMeta58;
          if (54 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta58 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(82), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta58;
          goto tmp3_done;
        }
        case 55: {
          modelica_metatype tmpMeta59;
          if (55 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta59 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(83), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta59;
          goto tmp3_done;
        }
        case 56: {
          modelica_metatype tmpMeta60;
          if (56 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta60 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(94), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta60;
          goto tmp3_done;
        }
        case 57: {
          modelica_metatype tmpMeta61;
          if (57 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta61 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(95), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta61;
          goto tmp3_done;
        }
        case 58: {
          modelica_metatype tmpMeta62;
          if (58 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta62 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(96), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta62;
          goto tmp3_done;
        }
        case 59: {
          modelica_metatype tmpMeta63;
          if (59 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta63 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(99), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta63;
          goto tmp3_done;
        }
        case 60: {
          modelica_metatype tmpMeta64;
          if (60 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta64 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(100), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta64;
          goto tmp3_done;
        }
        case 61: {
          modelica_metatype tmpMeta65;
          if (61 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta65 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(102), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta65;
          goto tmp3_done;
        }
        case 62: {
          modelica_metatype tmpMeta66;
          if (62 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta66 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(84), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta66;
          goto tmp3_done;
        }
        case 63: {
          modelica_metatype tmpMeta67;
          if (63 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta67 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(8), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta67;
          goto tmp3_done;
        }
        case 64: {
          modelica_metatype tmpMeta68;
          if (64 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta68 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(56), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta68;
          goto tmp3_done;
        }
        case 65: {
          modelica_metatype tmpMeta69;
          if (65 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta69 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(85), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta69;
          goto tmp3_done;
        }
        case 66: {
          modelica_metatype tmpMeta70;
          if (66 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta70 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(50), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta70;
          goto tmp3_done;
        }
        case 67: {
          modelica_metatype tmpMeta71;
          if (67 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta71 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(80), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta71;
          goto tmp3_done;
        }
        case 68: {
          modelica_metatype tmpMeta72;
          if (68 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta72 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(49), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta72;
          goto tmp3_done;
        }
        case 69: {
          modelica_metatype tmpMeta73;
          if (69 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta73 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(79), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta73;
          goto tmp3_done;
        }
        case 70: {
          modelica_metatype tmpMeta74;
          if (70 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta74 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(28), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta74;
          goto tmp3_done;
        }
        case 71: {
          modelica_metatype tmpMeta75;
          if (71 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta75 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(29), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta75;
          goto tmp3_done;
        }
        case 72: {
          modelica_metatype tmpMeta76;
          if (72 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta76 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(12), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta76;
          goto tmp3_done;
        }
        case 73: {
          modelica_metatype tmpMeta77;
          if (73 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta77 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(5), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta77;
          goto tmp3_done;
        }
        case 74: {
          modelica_metatype tmpMeta78;
          if (74 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta78 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(11), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta78;
          goto tmp3_done;
        }
        case 75: {
          modelica_metatype tmpMeta79;
          if (75 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta79 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(10), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta79;
          goto tmp3_done;
        }
        case 76: {
          modelica_metatype tmpMeta80;
          if (76 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta80 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(86), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta80;
          goto tmp3_done;
        }
        case 77: {
          modelica_metatype tmpMeta81;
          if (77 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta81 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(78), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta81;
          goto tmp3_done;
        }
        case 78: {
          modelica_metatype tmpMeta82;
          if (78 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta82 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(44), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta82;
          goto tmp3_done;
        }
        case 79: {
          modelica_metatype tmpMeta83;
          if (79 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta83 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(64), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta83;
          goto tmp3_done;
        }
        case 80: {
          modelica_metatype tmpMeta84;
          if (80 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta84 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(73), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta84;
          goto tmp3_done;
        }
        case 81: {
          modelica_metatype tmpMeta85;
          if (81 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta85 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(58), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta85;
          goto tmp3_done;
        }
        case 82: {
          modelica_metatype tmpMeta86;
          if (82 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta86 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(90), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta86;
          goto tmp3_done;
        }
        case 83: {
          modelica_metatype tmpMeta87;
          if (83 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta87 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(88), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta87;
          goto tmp3_done;
        }
        case 84: {
          modelica_metatype tmpMeta88;
          if (84 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta88 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(75), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta88;
          goto tmp3_done;
        }
        case 85: {
          modelica_metatype tmpMeta89;
          if (85 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta89 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(89), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta89;
          goto tmp3_done;
        }
        case 86: {
          modelica_metatype tmpMeta90;
          if (86 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta90 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(57), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta90;
          goto tmp3_done;
        }
        case 87: {
          modelica_metatype tmpMeta91;
          if (87 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta91 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(72), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta91;
          goto tmp3_done;
        }
        case 88: {
          modelica_metatype tmpMeta92;
          if (88 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta92 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(52), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta92;
          goto tmp3_done;
        }
        case 89: {
          modelica_metatype tmpMeta93;
          if (89 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta93 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(53), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta93;
          goto tmp3_done;
        }
        case 90: {
          modelica_metatype tmpMeta94;
          if (90 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta94 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(51), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta94;
          goto tmp3_done;
        }
        case 91: {
          modelica_metatype tmpMeta95;
          if (91 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta95 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(39), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta95;
          goto tmp3_done;
        }
        case 92: {
          modelica_metatype tmpMeta96;
          if (92 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta96 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(40), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta96;
          goto tmp3_done;
        }
        case 93: {
          modelica_metatype tmpMeta97;
          if (93 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta97 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(74), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta97;
          goto tmp3_done;
        }
        case 94: {
          modelica_metatype tmpMeta98;
          if (94 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta98 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(87), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta98;
          goto tmp3_done;
        }
        case 95: {
          modelica_metatype tmpMeta99;
          if (95 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta99 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(93), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta99;
          goto tmp3_done;
        }
        case 96: {
          modelica_metatype tmpMeta100;
          if (96 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta100 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(91), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta100;
          goto tmp3_done;
        }
        case 97: {
          modelica_metatype tmpMeta101;
          if (97 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta101 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(20), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta101;
          goto tmp3_done;
        }
        case 98: {
          modelica_metatype tmpMeta102;
          if (98 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta102 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(41), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta102;
          goto tmp3_done;
        }
        case 99: {
          modelica_metatype tmpMeta103;
          if (99 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta103 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(41), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta103;
          goto tmp3_done;
        }
        case 100: {
          modelica_metatype tmpMeta104;
          if (100 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta104 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(97), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta104;
          goto tmp3_done;
        }
        case 101: {
          if (101 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          _mm_startSt = ((modelica_integer) 7);

          _bufferRet = _buffer;
          tmpMeta1 = _OMC_LIT32;
          goto tmp3_done;
        }
        case 102: {
          if (102 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          _bufferRet = _buffer;
          tmpMeta1 = _OMC_LIT32;
          goto tmp3_done;
        }
        case 103: {
          if (103 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          _bufferRet = _buffer;
          tmpMeta1 = _OMC_LIT32;
          goto tmp3_done;
        }
        case 104: {
          modelica_metatype tmpMeta105;
          if (104 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          _mm_startSt = ((modelica_integer) 1);
          tmpMeta105 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(92), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta105;
          goto tmp3_done;
        }
        case 105: {
          if (105 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          _bufferRet = _buffer;
          tmpMeta1 = _OMC_LIT32;
          goto tmp3_done;
        }
        case 106: {
          if (106 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          _bufferRet = _buffer;
          tmpMeta1 = _OMC_LIT32;
          goto tmp3_done;
        }
        case 107: {
          if (107 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          _mm_startSt = ((modelica_integer) 3);

          _bufferRet = _buffer;
          tmpMeta1 = _OMC_LIT32;
          goto tmp3_done;
        }
        case 108: {
          modelica_metatype tmpMeta106;
          if (108 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          _mm_startSt = ((modelica_integer) 1);
          tmpMeta106 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(7), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta106;
          goto tmp3_done;
        }
        case 109: {
          if (109 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          _bufferRet = _buffer;
          tmpMeta1 = _OMC_LIT32;
          goto tmp3_done;
        }
        case 110: {
          if (110 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          _bufferRet = _buffer;
          tmpMeta1 = _OMC_LIT32;
          goto tmp3_done;
        }
        case 111: {
          if (111 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          _mm_startSt = ((modelica_integer) 5);

          _bufferRet = _buffer;
          tmpMeta1 = _OMC_LIT32;
          goto tmp3_done;
        }
        case 112: {
          modelica_metatype tmpMeta107;
          if (112 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          _mm_startSt = ((modelica_integer) 1);
          tmpMeta107 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(54), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          tmpMeta1 = tmpMeta107;
          goto tmp3_done;
        }
        case 113: {
          if (113 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          _bufferRet = _buffer;
          tmpMeta1 = _OMC_LIT32;
          goto tmp3_done;
        }
        case 114: {
          modelica_metatype tmpMeta108;
          modelica_metatype tmpMeta109;
          if (114 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmpMeta108 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(1), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          _tok = tmpMeta108;

          tmpMeta109 = mmc_mk_cons(_tok, _errorTokens);
          _errorTokens = tmpMeta109;
          tmpMeta1 = _OMC_LIT32;
          goto tmp3_done;
        }
        default:
        tmp3_default: OMC_LABEL_UNUSED; {
          modelica_string tmp110;
          modelica_metatype tmpMeta111;
          modelica_metatype tmpMeta112;
          modelica_metatype tmpMeta113;
          
          /* Pattern matching succeeded */
          tmp110 = modelica_integer_to_modelica_string(_act, ((modelica_integer) 0), 1 /* true */);
          tmpMeta111 = stringAppend(_OMC_LIT33,tmp110);
          tmpMeta112 = stringAppend(tmpMeta111,_OMC_LIT9);
          fputs(MMC_STRINGDATA(tmpMeta112),stdout);

          tmpMeta113 = mmc_mk_box10(3, &LexerModelicaDiff_Token_TOKEN__desc, _fileNm, mmc_mk_integer(1), _fileContents, mmc_mk_integer(_mm_pos - _buffer), mmc_mk_integer(_buffer), mmc_mk_integer(_lineNrStart), mmc_mk_integer(((modelica_integer) 1) + _mm_ePos), mmc_mk_integer(_mm_linenr), mmc_mk_integer(((modelica_integer) 1) + _mm_sPos));
          _tok = tmpMeta113;

          fputs(MMC_STRINGDATA(omc_LexerModelicaDiff_printToken(threadData, _tok)),stdout);
          goto goto_2;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _token = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  if (out_mm_startSt) { *out_mm_startSt = _mm_startSt; }
  if (out_bufferRet) { *out_bufferRet = _bufferRet; }
  if (out_errorTokens) { *out_errorTokens = _errorTokens; }
  return _token;
}
modelica_metatype boxptr_LexerModelicaDiff_action(threadData_t *threadData, modelica_metatype _act, modelica_metatype _startSt, modelica_metatype _mm_currSt, modelica_metatype _mm_pos, modelica_metatype _mm_sPos, modelica_metatype _mm_ePos, modelica_metatype _mm_linenr, modelica_metatype _lineNrStart, modelica_metatype _buffer, modelica_metatype _debug, modelica_metatype _fileNm, modelica_metatype _fileContents, modelica_metatype _inErrorTokens, modelica_metatype *out_mm_startSt, modelica_metatype *out_bufferRet, modelica_metatype *out_errorTokens)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_integer _mm_startSt;
  modelica_integer _bufferRet;
  modelica_metatype _token = NULL;
  tmp1 = mmc_unbox_integer(_act);
  tmp2 = mmc_unbox_integer(_startSt);
  tmp3 = mmc_unbox_integer(_mm_currSt);
  tmp4 = mmc_unbox_integer(_mm_pos);
  tmp5 = mmc_unbox_integer(_mm_sPos);
  tmp6 = mmc_unbox_integer(_mm_ePos);
  tmp7 = mmc_unbox_integer(_mm_linenr);
  tmp8 = mmc_unbox_integer(_lineNrStart);
  tmp9 = mmc_unbox_integer(_buffer);
  tmp10 = mmc_unbox_integer(_debug);
  _token = omc_LexerModelicaDiff_action(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10, _fileNm, _fileContents, _inErrorTokens, &_mm_startSt, &_bufferRet, out_errorTokens);
  /* skip box _token; LexerModelicaDiff.Token */
  if (out_mm_startSt) { *out_mm_startSt = mmc_mk_icon(_mm_startSt); }
  if (out_bufferRet) { *out_bufferRet = mmc_mk_icon(_bufferRet); }
  /* skip box _errorTokens; list<LexerModelicaDiff.Token> */
  return _token;
}

DLLDirection
modelica_metatype omc_LexerModelicaDiff_scanString(threadData_t *threadData, modelica_string _fileSource, modelica_string _fileName, modelica_metatype *out_errorTokens)
{
  modelica_metatype _tokens = NULL;
  modelica_metatype _errorTokens = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tokens has no default value.
  // _errorTokens has no default value.
  _tokens = omc_LexerModelicaDiff_lex(threadData, _fileName, _fileSource ,&_errorTokens);
  _return: OMC_LABEL_UNUSED
  if (out_errorTokens) { *out_errorTokens = _errorTokens; }
  return _tokens;
}

DLLDirection
modelica_metatype omc_LexerModelicaDiff_scan(threadData_t *threadData, modelica_string _fileName, modelica_metatype *out_errorTokens)
{
  modelica_metatype _tokens = NULL;
  modelica_metatype _errorTokens = NULL;
  modelica_string _contents = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _tokens has no default value.
  // _errorTokens has no default value.
  // _contents has no default value.
  _contents = omc_System_readFile(threadData, _fileName);

  _tokens = omc_LexerModelicaDiff_lex(threadData, _fileName, _contents ,&_errorTokens);
  _return: OMC_LABEL_UNUSED
  if (out_errorTokens) { *out_errorTokens = _errorTokens; }
  return _tokens;
}


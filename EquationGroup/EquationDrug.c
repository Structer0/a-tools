
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <wchar.h>
#include <windows.h>

// ----------------- Float Types Definitions ------------------

typedef float float32_t;
typedef long double float80_t;

// ------------------------ Structures ------------------------

struct _FILETIME {
    int32_t e0;
    int32_t e1;
};

struct _OSVERSIONINFOA {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    int32_t e4;
    char e5[128];
};

struct _OVERLAPPED {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    char * e3;
};

struct _PROCESS_INFORMATION {
    char * e0;
    char * e1;
    int32_t e2;
    int32_t e3;
};

struct _SECURITY_ATTRIBUTES {
    int32_t e0;
    char * e1;
    bool e2;
};

struct _STARTUPINFOA {
    int32_t e0;
    char * e1;
    char * e2;
    char * e3;
    int32_t e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    int32_t e8;
    int32_t e9;
    int32_t e10;
    int32_t e11;
    int16_t e12;
    int16_t e13;
    char * e14;
    char * e15;
    char * e16;
    char * e17;
};

struct _SYSTEMTIME {
    int16_t e0;
    int16_t e1;
    int16_t e2;
    int16_t e3;
    int16_t e4;
    int16_t e5;
    int16_t e6;
    int16_t e7;
};

struct _WIN32_FIND_DATAA {
    int32_t e0;
    struct _FILETIME e1;
    struct _FILETIME e2;
    struct _FILETIME e3;
    int32_t e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    char e8[1];
    char e9[14];
    int32_t e10;
    int32_t e11;
    int16_t e12;
};

// ------------------- Function Prototypes --------------------

int32_t entry_point(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_401000(char * str, int32_t a2);
int32_t function_401050(int32_t a1);
int32_t function_401070(int32_t a1);
int32_t function_401090(int32_t a1, int32_t a2, int32_t a3);
char * function_401760(void);
int32_t function_40178f(void);
int32_t function_4017ef(int32_t a1, int32_t a2, int32_t a3);
char * function_401810(struct _STARTUPINFOA * str);
int32_t function_4018b0(void);
int32_t function_4018e0(int32_t a1, int32_t a2);
int32_t function_401920(int32_t a1);
int32_t function_401a38(void);
int32_t function_401a50(void);
int32_t function_401a80(int32_t a1);
char * function_401bf5(void);
int32_t function_401c13(void);
bool function_401c50(void);
int32_t function_401ca0(int32_t a1);
int32_t function_401f57(void);
int32_t function_401fc4(void);
int32_t function_402000(int32_t a1);
int32_t function_40214b(void);
int32_t function_40217a(void);
int32_t function_4021b0(char * a1, char * a2, int32_t a3);
int32_t function_402330(char * a1, int32_t a2, int32_t a3);
char * function_402470(char * hModule);
int32_t function_4024c0(char * a1);
int32_t function_4028a6(void);
int32_t function_4028d5(int32_t a1, int32_t a2);
int32_t function_4028f0(char * hFile, int32_t a2, int32_t a3, int32_t a4);
int32_t function_402ab0(int32_t a1);
int32_t function_402ad0(int32_t * a1, char * a2, int32_t a3);
int32_t function_402c2c(void);
int32_t function_402c63(int32_t a1, int32_t a2);
int32_t function_402c80(char * a1, char * a2, int32_t a3, int32_t a4, int32_t a5);
int32_t function_402dd0(int32_t a1, char * a2);
int32_t function_4031a8(void);
int32_t function_403233(void);
bool function_403270(void);
int32_t function_4032b0(int32_t a1, int32_t * a2, char * a3, int32_t a4, int32_t a5);
void function_40344b(void);
int32_t function_40344c(void);
int32_t function_403480(struct _OVERLAPPED * a1, char * a2, struct _SECURITY_ATTRIBUTES * a3, int32_t a4, int32_t a5);
bool function_403673(void);
int32_t function_4036c7(void);
char * function_403720(struct _FILETIME * lpFileName2, int32_t lpFileName, int32_t lpFileName3);
int32_t function_403850(char * a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_4038f0(char * a1, uint32_t a2);
int32_t function_403910(int32_t a1, int32_t a2);
int32_t function_403ac0(void);
int32_t function_403be0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11);
int32_t function_403c80(int32_t a1, uint32_t a2, int32_t a3, int32_t * a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8);
int32_t function_403e90(int64_t a1, int32_t a2);
int32_t function_403ed0(int32_t result);
int32_t function_403ef0(int32_t a1, int64_t a2);
int32_t function_403f08(int32_t a1);
int32_t function_403fc9(int32_t a1);
int32_t function_40408a(int32_t a1);
int32_t function_404117(int32_t a1);
int32_t function_404184(void);
int32_t function_404191(void);
int32_t function_40419b(int32_t a1);
int32_t function_4041a5(void);
int32_t function_4041b1(void);
int32_t function_4041b7(int32_t a1);
int32_t function_404244(int32_t a1);
int32_t function_4042b1(void);
int32_t function_4042be(void);
int32_t function_4042c8(int32_t a1);
int32_t function_4042d2(void);
int32_t function_4042de(void);
int32_t function_4042e4(int32_t a1);
int32_t function_404371(int32_t a1);
int32_t function_4043de(void);
int32_t function_4043eb(void);
int32_t function_4043f5(int32_t a1);
int32_t function_4043ff(void);
int32_t function_40440b(void);
int32_t function_404411(int32_t a1);
int32_t function_4044a4(int32_t a1, int32_t a2);
int32_t function_404603(void);
int32_t function_404610(void);
int32_t function_40461d(int32_t a1);
int32_t function_404627(int32_t a1);
int32_t function_404632(void);
int32_t function_404633(void);
int32_t function_404639(uint32_t a1, int32_t * a2);
int32_t function_404775(int32_t a1);
int32_t function_40488d(int32_t a1);
int32_t function_4049a5(int32_t a1);
int32_t function_404a44(int32_t a1);
int32_t function_404afc(void);
int32_t function_404b09(void);
int32_t function_404b16(int32_t a1);
int32_t function_404b20(void);
int32_t function_404b2b(void);
int32_t function_404b2c(void);
int32_t function_404b32(int32_t a1);
int32_t function_404bd1(int32_t a1);
int32_t function_404c89(void);
int32_t function_404c96(void);
int32_t function_404ca3(int32_t a1);
int32_t function_404cad(void);
int32_t function_404cb8(void);
int32_t function_404cb9(void);
int32_t function_404cbf(int32_t a1);
int32_t function_404d5e(int32_t a1);
int32_t function_404e16(void);
int32_t function_404e23(void);
int32_t function_404e30(int32_t a1);
int32_t function_404e3a(void);
int32_t function_404e45(void);
int32_t function_404e46(void);
int32_t function_404e4c(int32_t a1);
int32_t function_404eeb(int32_t a1);
int32_t function_404fdc(void);
int32_t function_404fe9(void);
int32_t function_404ff6(int32_t a1);
int32_t function_405000(int32_t a1);
int32_t function_40500b(void);
int32_t function_40500c(void);
int32_t function_405012(uint32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t * a6);
int32_t function_40513e(int32_t a1, int32_t a2);
int32_t function_4051b2(int32_t a1, int32_t a2);
int32_t function_405371(int32_t * hModule, char * lpProcName, int32_t a3);
int32_t function_4053db(int32_t * a1, uint32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t function_4054d0(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_405569(void);
int32_t function_405789(int32_t * a1, int32_t a2);
int32_t function_4058da(int32_t a1, int32_t a2, char * a3, char a4, int32_t a5, char a6, int32_t a7);
int32_t function_40593d(int32_t a1, int32_t a2, char * a3, int32_t a4, int32_t result);
char * function_405969(int32_t a1, int32_t a2);
int32_t function_4059db(void);
int32_t function_405ad7(int32_t a1);
bool function_405adf(int32_t a1, int32_t a2, int32_t a3);
int32_t function_405b13(int32_t a1);
int32_t function_405b63(int32_t lpString1, int32_t hWnd, int32_t a3, int32_t a4, int32_t a5);
int32_t function_405cc1(int32_t a1);
int32_t function_405d92(int32_t a1);
int32_t function_405e0c(void);
int32_t function_405e6b(int32_t a1);
int32_t (**function_405ec0(int32_t a1))();
int32_t function_405f9e(void);
bool function_4063f2(int32_t a1);
void function_40640d(void);
int32_t function_40640f(void);
int32_t function_406410(void);
int32_t function_406416(int32_t a1);
int32_t function_4064e7(int32_t a1);
int32_t function_406561(void);
int32_t function_4065c0(int32_t a1);
int32_t (**function_406615(int32_t a1))();
int32_t function_4066f3(void);
bool function_406b9c(int32_t a1);
void function_406bb7(void);
int32_t function_406bb9(void);
int32_t function_406bba(void);
int32_t function_406bc0(int32_t a1);
int32_t function_406c00(char * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8);
int32_t function_406e6e(int32_t a1, int32_t a2);
int32_t function_406ed7(int32_t a1);
int32_t function_406f2d(void);
int32_t function_406f8c(int32_t a1);
int32_t function_406fe1(int32_t * a1, int32_t a2);
int32_t function_407027(int16_t * wstr);
bool function_407476(int32_t a1);
void function_407491(void);
int32_t function_407493(void);
int32_t function_407494(void);
char * function_40749a(void);
bool function_407537(void);
int32_t function_407541(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t function_4075be(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_4075df(int32_t * a1, int32_t * a2);
int32_t function_407618(int32_t a1, int32_t a2, int32_t a3, int64_t a4, int32_t a5, int32_t a6, int32_t a7);
int32_t function_40767a(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5);
int32_t function_4077a8(int32_t a1);
int32_t function_40788d(void);
int32_t function_407898(char * a1, int32_t a2);
char * function_4079e3(char * a1, int32_t * a2, int32_t * a3, int32_t * a4, int32_t * a5, int32_t * a6);
int32_t function_407a32(void);
int32_t function_407b80(int32_t a1);
int32_t function_407bc0(void);
int32_t function_407bf0(void);
char * function_407ca2(void);
char * function_407d11(int32_t a1, char * a2, int32_t * a3, int32_t * a4, char * a5);
int32_t function_407dd3(char * hFile, int32_t * a2);
int32_t function_407e36(int32_t * hObject);
int32_t function_407e56(void);
int32_t function_407f0e(void);
int32_t function_407f71(int32_t a1, char * a2, int32_t a3, int32_t a4);
int32_t function_407f98(char * hFile, int32_t * a2, int32_t * hMem2, int32_t a4);
int32_t function_40806e(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
void function_4080b6(void);
int32_t function_4080d8(void);
int32_t function_40828e(int32_t a1, int32_t a2, int32_t a3);
int32_t function_4082a2(int32_t status);
int32_t function_4082b0(int32_t a1, int32_t a2);
int32_t function_4082e9(int32_t a1, int32_t a2, int32_t a3);
void function_4082fa(void);
int32_t function_40831c(void);
int32_t function_40832e(void);
int32_t function_408331(void);
void function_408332(void);
char * function_408338(char * a1, int32_t * a2, int32_t * a3, char * a4);
int32_t unknown_409148(void);
int32_t unknown_40914c(void);
int32_t unknown_409184(void);

// --------------------- Global Variables ---------------------

int32_t g1 = 0; // eax
int32_t g2 = 0; // ebp
int32_t g3 = 0; // ebx
int32_t g4 = 0; // ecx
int32_t g5 = 0; // edi
int32_t g6 = 0; // edx
int32_t g7 = 0; // esi
int32_t g8 = 0; // esp
int32_t g9 = -0x2eb7a73; // 0x4071dc
int32_t g10 = -0x2ed73b7d; // 0x4071e9
int32_t g11 = 0x59c458b; // 0x4072af
int32_t g12 = -0x2eb7a73; // 0x407306
int32_t g13 = -0x76991f2f; // 0x407313
int32_t g14 = 0x1c6a086a; // 0x40736c
int32_t g15 = 0x5fc03259; // 0x407dba
int32_t g16 = -0x3f973334; // 0x4082ae
int32_t g17 = 0x5fc03259; // 0x4083de
int32_t g18 = -1; // 0x409448
int32_t g19 = -1; // 0x409458
int32_t g20 = -1; // 0x409498
int32_t g21 = -1; // 0x4094b0
int32_t g22 = -1; // 0x4094c8
int32_t g23 = -1; // 0x4094f8
int32_t g24 = -1; // 0x409520
int32_t g25 = -1; // 0x409530
int32_t g26 = -1; // 0x409540
int32_t g27 = -1; // 0x409558
int32_t g28 = -1; // 0x409570
int32_t g29 = -1; // 0x409588
int32_t g30 = -1; // 0x409638
int32_t g31 = -1; // 0x4096a8
int32_t g32 = -1; // 0x4096b8
int32_t g33 = -1; // 0x409710
int32_t g34 = -1; // 0x409728
int32_t g35 = -1; // 0x409738
int32_t g36 = -1; // 0x409748
int32_t g37 = -1; // 0x4097a0
int32_t g38 = -1; // 0x409820
int32_t g39 = -1; // 0x409830
int32_t g40 = -1; // 0x409848
int32_t g41 = -1; // 0x409858
int32_t g42 = -1; // 0x409868
int32_t g43 = -1; // 0x409878
int32_t g44 = -1; // 0x409890
int32_t g45 = -1; // 0x4098a0
int32_t g46 = -1; // 0x4098b0
int32_t g47 = -1; // 0x4098c0
int32_t g48 = -1; // 0x4098d0
int32_t g49 = -1; // 0x4098e0
int32_t g50 = -1; // 0x4098f0
int32_t g51 = 0xa164; // 0x409900
int32_t g52 = 0xa164; // 0x409aa8
int32_t g53 = 0xa164; // 0x409c50
int32_t g54 = 0xa164; // 0x409d70
int32_t g55 = 0xa164; // 0x409e50
int32_t g56 = 0xa164; // 0x409f40
int32_t g57 = 0xa164; // 0x40a018
int32_t g58 = -1; // 0x40a108
int32_t g59 = -1; // 0x40a148
int32_t g60 = -1; // 0x40a200
int32_t g61 = -1; // 0x40a228
int32_t g62 = -1; // 0x40a238
int32_t g63 = -1; // 0x40a258
int32_t g64 = -1; // 0x40a268
int16_t * g65 = (int16_t *)104; // 0x40b024
int32_t g66 = -0x76d7a775; // 0x40b0d8
int32_t g67 = 104; // 0x40b0f0
int32_t g68 = -0x1fcff46; // 0x40b104
char ** g69 = NULL; // 0x40b118
struct _OSVERSIONINFOA * g70 = NULL; // 0x40b120
int32_t g71 = 0; // 0x40b130
int32_t g72 = 0; // 0x40b1c0
int32_t (*g73)() = NULL; // 0x40b1c4
int32_t (*g74)(int32_t, int32_t, int32_t, int32_t, int32_t) = NULL; // 0x40b1c8
int32_t (*g75)(int32_t, int32_t, int32_t, int32_t) = NULL; // 0x40b1dc
float80_t g76 = 0.0L; // st6

// ------------------------ Functions -------------------------

// Address range: 0x401000 - 0x40104f
int32_t function_401000(char * str, int32_t a2) {
    int32_t len = strlen(str); // 0x40100a
    int32_t result = len; // 0x401048_1
    if (len > 0) {
        int32_t v1 = (int32_t)str; // 0x401032
        char * v2 = (char *)v1; // 0x401035_0
        *v2 = (char)((int32_t)*v2 ^ a2);
        int32_t v3 = 1; // 0x401021
        while (v3 < len) {
            // 0x40102f
            v1 = v3 + (int32_t)str;
            v2 = (char *)v1;
            *v2 = (char)((int32_t)*v2 ^ a2);
            v3++;
            // continue -> 0x40102f
        }
        // 0x401027
        result = v1;
        // branch -> 0x401045
    }
    // 0x401045
    return result;
}

// Address range: 0x401050 - 0x40106f
int32_t function_401050(int32_t a1) {
    // 0x401050
    int32_t v1;
    g2 = v1;
    return function_401000((char *)a1, 127);
}

// Address range: 0x401070 - 0x40108f
int32_t function_401070(int32_t a1) {
    // 0x401070
    int32_t v1;
    g2 = v1;
    return function_401000((char *)a1, 60);
}

// Address range: 0x401090 - 0x40175f
int32_t function_401090(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1;
    g2 = &v1;
    abort();
    // UNREACHABLE
}

// Address range: 0x401760 - 0x40178e
char * function_401760(void) {
    int32_t hMem = *(int32_t *)(g2 - 100); // 0x401760
    if (hMem != 0) {
        // 0x401766
        g1 = (int32_t)LocalFree((char *)hMem);
        *(int32_t *)(g2 - 100) = 0;
        // branch -> 0x401777
    }
    int32_t hLibModule = *(int32_t *)(g2 - 96); // 0x401777
    if (hLibModule != 0) {
        // 0x40177d
        g1 = FreeLibrary((char *)hLibModule);
        *(int32_t *)(g2 - 96) = 0;
        // branch -> 0x40178e
    }
    // 0x40178e
    return (char *)g1;
}

// Address range: 0x40178f - 0x4017ee
int32_t function_40178f(void) {
    // 0x40178f
    *(int32_t *)(g2 - 4) = -1;
    function_402470((char *)*(int32_t *)(g2 - 140));
    ExitProcess(0);
    // UNREACHABLE
}

// Address range: 0x4017ef - 0x40180f
int32_t function_4017ef(int32_t a1, int32_t a2, int32_t a3) {
    // 0x4017ef
    abort();
    // UNREACHABLE
}

// Address range: 0x401810 - 0x4018af
char * function_401810(struct _STARTUPINFOA * str) {
    int32_t str2 = 81; // bp-12
    function_401050((int32_t)&str2);
    int32_t errorCode; // 0x4018ae_2
    if (strstr((char *)str, (char *)&str2) == NULL) {
        // 0x401874
        int32_t lpStartupInfo;
        GetStartupInfoA((struct _STARTUPINFOA *)&lpStartupInfo);
        int32_t lpProcessInformation;
        bool v1 = CreateProcessA((char *)str, NULL, NULL, NULL, true, 0, NULL, NULL, (struct _STARTUPINFOA *)&lpStartupInfo, (struct _PROCESS_INFORMATION *)&lpProcessInformation); // 0x4018a5
        errorCode = v1;
        // branch -> 0x4018ab
    } else {
        char * moduleHandle = LoadLibraryA((char *)str); // 0x40184f
        if (moduleHandle == NULL) {
            // 0x40185e
            errorCode = GetLastError();
            // branch -> 0x4018ab
        } else {
            errorCode = (int32_t)moduleHandle;
        }
    }
    // 0x4018ab
    return (char *)errorCode;
}

// Address range: 0x4018b0 - 0x4018df
int32_t function_4018b0(void) {
    int32_t lpSystemTime;
    GetSystemTime((struct _SYSTEMTIME *)&lpSystemTime);
    int32_t v1;
    uint32_t v2 = v1 & 0xffff; // 0x4018c0
    g76 = (float80_t)(v2 % 10) / 10.0L;
    int32_t v3;
    g2 = v3;
    return v2 / 10;
}

// Address range: 0x4018e0 - 0x40191f
int32_t function_4018e0(int32_t a1, int32_t a2) {
    // 0x4018e0
    function_4018b0();
    g4 = a1;
    g76 = (float80_t)a1 + (float80_t)(a2 - a1 + 1) * g76;
    int32_t result = function_4080d8(); // 0x401915
    g1 = result;
    int32_t v1;
    g2 = v1;
    return result;
}

// Address range: 0x401920 - 0x401a37
int32_t function_401920(int32_t a1) {
    int32_t v1;
    g2 = &v1;
    abort();
    // UNREACHABLE
}

// Address range: 0x401a38 - 0x401a4f
int32_t function_401a38(void) {
    int32_t pSid = *(int32_t *)(g2 - 28); // 0x401a38
    int32_t result; // 0x401a42_4
    if (pSid != 0) {
        // 0x401a3e
        result = (int32_t)FreeSid((char *)pSid);
        *(int32_t *)(g2 - 28) = 0;
        // branch -> 0x401a4f
    }
    // 0x401a4f
    return result;
}

// Address range: 0x401a50 - 0x401a7f
int32_t function_401a50(void) {
    // 0x401a50
    *(int32_t *)(g2 - 4) = -1;
    abort();
    // UNREACHABLE
}

// Address range: 0x401a80 - 0x401bf4
int32_t function_401a80(int32_t a1) {
    int32_t v1;
    g2 = &v1;
    abort();
    // UNREACHABLE
}

// Address range: 0x401bf5 - 0x401c12
char * function_401bf5(void) {
    // 0x401bf5
    char * result; // 0x401c05
    if (*(int32_t *)(g2 - 28) == 0) {
        // 0x401c12
        return result;
    }
    int32_t pSid = *(int32_t *)(g2 - 32); // 0x401bfb
    if (pSid != 0) {
        // 0x401c01
        result = FreeSid((char *)pSid);
        *(int32_t *)(g2 - 32) = 0;
        // branch -> 0x401c12
    }
    // 0x401c12
    return result;
}

// Address range: 0x401c13 - 0x401c4f
int32_t function_401c13(void) {
    // 0x401c13
    *(int32_t *)(g2 - 4) = -1;
    abort();
    // UNREACHABLE
}

// Address range: 0x401c50 - 0x401c9f
bool function_401c50(void) {
    bool result; // 0x401c92_2
    int32_t pSecurityDescriptor;
    if (!InitializeSecurityDescriptor((char *)&pSecurityDescriptor, 1)) {
        // 0x401c8d
        result = false;
        // branch -> 0x401c8f
    } else {
        int32_t lpMutexAttributes = 12;
        char * v1 = CreateMutexW((struct _SECURITY_ATTRIBUTES *)&lpMutexAttributes, false, L"prkMtx"); // 0x401c85
        result = ((int32_t)v1 & 1) != 0;
        // branch -> 0x401c8f
    }
    // 0x401c8f
    return result;
}

// Address range: 0x401ca0 - 0x401f56
int32_t function_401ca0(int32_t a1) {
    int32_t v1;
    g2 = &v1;
    abort();
    // UNREACHABLE
}

// Address range: 0x401f57 - 0x401fc3
int32_t function_401f57(void) {
    char ** v1 = g69;
    if (v1 != NULL) {
        // 0x401f60
        *(int32_t *)(g2 - 284) = (int32_t)v1;
        int32_t hObject = *(int32_t *)(g2 - 284); // 0x401f6c
        if (hObject != 0) {
            // 0x401f75
            g1 = CloseHandle((char *)hObject);
            // branch -> 0x401f82
        }
        // 0x401f82
        g69 = NULL;
        // branch -> 0x401f8c
    }
    int32_t pSid = *(int32_t *)(g2 - 32); // 0x401f8c
    if (pSid != 0) {
        // 0x401f92
        g1 = (int32_t)FreeSid((char *)pSid);
        *(int32_t *)(g2 - 32) = 0;
        // branch -> 0x401fa3
    }
    int32_t pSid2 = *(int32_t *)(g2 - 192); // 0x401fa3
    if (pSid2 != 0) {
        // 0x401fac
        g1 = (int32_t)FreeSid((char *)pSid2);
        *(int32_t *)(g2 - 192) = 0;
        // branch -> 0x401fc3
    }
    // 0x401fc3
    return g1;
}

// Address range: 0x401fc4 - 0x401fff
int32_t function_401fc4(void) {
    // 0x401fc4
    *(int32_t *)(g2 - 4) = -1;
    abort();
    // UNREACHABLE
}

// Address range: 0x402000 - 0x40214a
int32_t function_402000(int32_t a1) {
    int32_t v1;
    g2 = &v1;
    abort();
    // UNREACHABLE
}

// Address range: 0x40214b - 0x402179
int32_t function_40214b(void) {
    int32_t hMem = *(int32_t *)(g2 - 40); // 0x40214b
    if (hMem != 0) {
        // 0x402151
        g1 = (int32_t)LocalFree((char *)hMem);
        *(int32_t *)(g2 - 40) = 0;
        // branch -> 0x402162
    }
    int32_t hMem2 = *(int32_t *)(g2 - 32); // 0x402162
    if (hMem2 != 0) {
        // 0x402168
        g1 = (int32_t)LocalFree((char *)hMem2);
        *(int32_t *)(g2 - 32) = 0;
        // branch -> 0x402179
    }
    // 0x402179
    return g1;
}

// Address range: 0x40217a - 0x4021af
int32_t function_40217a(void) {
    // 0x40217a
    *(int32_t *)(g2 - 4) = -1;
    abort();
    // UNREACHABLE
}

// Address range: 0x4021b0 - 0x40232f
int32_t function_4021b0(char * a1, char * a2, int32_t a3) {
    // 0x4021b0
    abort();
    // UNREACHABLE
}

// Address range: 0x402330 - 0x40246f
int32_t function_402330(char * a1, int32_t a2, int32_t a3) {
    // 0x402330
    abort();
    // UNREACHABLE
}

// Address range: 0x402470 - 0x4024bf
char * function_402470(char * hModule) {
    int32_t lpFilename;
    memset((char *)&lpFilename, 0, 261);
    char * result; // 0x4024bf_2
    if (GetModuleFileNameA(hModule, (char *)&lpFilename, 260) == 0) {
        // 0x4024a9
        result = NULL;
        // branch -> 0x4024bc
    } else {
        // 0x4024ad
        function_4024c0((char *)&lpFilename);
        result = (char *)(int32_t)&lpFilename;
        // branch -> 0x4024bc
    }
    // 0x4024bc
    int32_t v1;
    g2 = v1;
    return result;
}

// Address range: 0x4024c0 - 0x4028a5
int32_t function_4024c0(char * a1) {
    // 0x4024c0
    abort();
    // UNREACHABLE
}

// Address range: 0x4028a6 - 0x4028d4
int32_t function_4028a6(void) {
    int32_t hObject = *(int32_t *)(g2 - 28); // 0x4028a6
    if (hObject != 0) {
        // 0x4028ac
        g1 = CloseHandle((char *)hObject);
        *(int32_t *)(g2 - 28) = 0;
        // branch -> 0x4028bd
    }
    int32_t hMem = *(int32_t *)(g2 - 44); // 0x4028bd
    if (hMem != 0) {
        // 0x4028c3
        g1 = (int32_t)LocalFree((char *)hMem);
        *(int32_t *)(g2 - 44) = 0;
        // branch -> 0x4028d4
    }
    // 0x4028d4
    return g1;
}

// Address range: 0x4028d5 - 0x4028ef
int32_t function_4028d5(int32_t a1, int32_t a2) {
    // 0x4028d5
    g1 = *(int32_t *)(g2 - 36);
    g4 = *(int32_t *)(g2 - 16);
    abort();
    // UNREACHABLE
}

// Address range: 0x4028f0 - 0x402aaf
int32_t function_4028f0(char * hFile, int32_t a2, int32_t a3, int32_t a4) {
    int32_t str2 = 114; // bp-16
    function_401070((int32_t)&str2);
    int32_t len = strlen("\r\n"); // 0x402921
    int32_t lpNumberOfBytesWritten;
    if (WriteFile(hFile, "\r\n", len, &lpNumberOfBytesWritten, NULL)) {
        char * str = (char *)a2;
        int32_t len2 = strlen(str); // 0x40294e
        if (WriteFile(hFile, str, len2, &lpNumberOfBytesWritten, NULL)) {
            int32_t len3 = strlen("\r\n"); // 0x40297b
            if (WriteFile(hFile, "\r\n", len3, &lpNumberOfBytesWritten, NULL)) {
                int32_t len4 = strlen((char *)&str2); // 0x4029a8
                if (WriteFile(hFile, (char *)&str2, len4, &lpNumberOfBytesWritten, NULL)) {
                    char * str3 = (char *)a3;
                    int32_t len5 = strlen(str3); // 0x4029d4
                    if (WriteFile(hFile, str3, len5, &lpNumberOfBytesWritten, NULL)) {
                        int32_t len6 = strlen("\r\n"); // 0x402a01
                        if (WriteFile(hFile, "\r\n", len6, &lpNumberOfBytesWritten, NULL)) {
                            int32_t len7 = strlen((char *)&str2); // 0x402a2e
                            if (WriteFile(hFile, (char *)&str2, len7, &lpNumberOfBytesWritten, NULL)) {
                                char * str4 = (char *)a4;
                                int32_t len8 = strlen(str4); // 0x402a57
                                if (WriteFile(hFile, str4, len8, &lpNumberOfBytesWritten, NULL)) {
                                    int32_t len9 = strlen("\r\n"); // 0x402a81
                                    int32_t result; // 0x402aa9_2
                                    if (!WriteFile(hFile, "\r\n", len9, &lpNumberOfBytesWritten, NULL)) {
                                        // 0x402a9d
                                        result = 0;
                                        // branch -> 0x402aa6
                                    } else {
                                        // 0x402aa1
                                        result = 1;
                                        // branch -> 0x402aa6
                                    }
                                    // 0x402aa6
                                    return result;
                                }
                                // 0x402a72
                                // branch -> 0x402aa6
                                // 0x402aa6
                                return 0;
                            }
                            // 0x402a49
                            // branch -> 0x402aa6
                            // 0x402aa6
                            return 0;
                        }
                        // 0x402a1d
                        // branch -> 0x402aa6
                        // 0x402aa6
                        return 0;
                    }
                    // 0x4029ef
                    // branch -> 0x402aa6
                    // 0x402aa6
                    return 0;
                }
                // 0x4029c3
                // branch -> 0x402aa6
                // 0x402aa6
                return 0;
            }
            // 0x402997
            // branch -> 0x402aa6
            // 0x402aa6
            return 0;
        }
        // 0x402969
        // branch -> 0x402aa6
        // 0x402aa6
        return 0;
    }
    // 0x40293d
    // branch -> 0x402aa6
    // 0x402aa6
    return 0;
}

// Address range: 0x402ab0 - 0x402acf
int32_t function_402ab0(int32_t a1) {
    // 0x402ab0
    function_402dd0(3, (char *)a1);
    int32_t v1;
    g2 = v1;
    return 0;
}

// Address range: 0x402ad0 - 0x402c2b
int32_t function_402ad0(int32_t * a1, char * a2, int32_t a3) {
    // 0x402ad0
    abort();
    // UNREACHABLE
}

// Address range: 0x402c2c - 0x402c62
int32_t function_402c2c(void) {
    int32_t v1 = *(int32_t *)(g2 - 52); // 0x402c2c
    if (v1 != 0) {
        // 0x402c32
        *(int32_t *)(g2 - 68) = v1;
        _qm__qm_3_YAXPAX_Z(*(int32_t *)(g2 - 68));
        *(int32_t *)(g2 - 52) = 0;
        // branch -> 0x402c4b
    }
    int32_t hKey = *(int32_t *)(g2 - 28); // 0x402c4b
    int32_t result; // 0x402c55
    if (hKey != 0) {
        // 0x402c51
        result = RegCloseKey((char *)hKey);
        *(int32_t *)(g2 - 28) = 0;
        // branch -> 0x402c62
    }
    // 0x402c62
    return result;
}

// Address range: 0x402c63 - 0x402c7f
int32_t function_402c63(int32_t a1, int32_t a2) {
    // 0x402c63
    g1 = *(int32_t *)(g2 - 36);
    g4 = *(int32_t *)(g2 - 16);
    abort();
    // UNREACHABLE
}

// Address range: 0x402c80 - 0x402dcf
int32_t function_402c80(char * a1, char * a2, int32_t a3, int32_t a4, int32_t a5) {
    // 0x402c80
    abort();
    // UNREACHABLE
}

// Address range: 0x402dd0 - 0x4031a7
int32_t function_402dd0(int32_t a1, char * a2) {
    // 0x402dd0
    abort();
    // UNREACHABLE
}

// Address range: 0x4031a8 - 0x403232
int32_t function_4031a8(void) {
    int32_t hMem = *(int32_t *)(g2 - 76); // 0x4031a8
    if (hMem != 0) {
        // 0x4031ae
        g1 = (int32_t)LocalFree((char *)hMem);
        *(int32_t *)(g2 - 76) = 0;
        // branch -> 0x4031bf
    }
    int32_t hMem2 = *(int32_t *)(g2 - 48); // 0x4031bf
    if (hMem2 != 0) {
        // 0x4031c5
        g1 = (int32_t)LocalFree((char *)hMem2);
        *(int32_t *)(g2 - 48) = 0;
        // branch -> 0x4031d6
    }
    int32_t hMem3 = *(int32_t *)(g2 - 44); // 0x4031d6
    if (hMem3 != 0) {
        // 0x4031dc
        g1 = (int32_t)LocalFree((char *)hMem3);
        *(int32_t *)(g2 - 44) = 0;
        // branch -> 0x4031ed
    }
    int32_t hMem4 = *(int32_t *)(g2 - 40); // 0x4031ed
    if (hMem4 != 0) {
        // 0x4031f3
        g1 = (int32_t)LocalFree((char *)hMem4);
        *(int32_t *)(g2 - 40) = 0;
        // branch -> 0x403204
    }
    int32_t hMem5 = *(int32_t *)(g2 - 32); // 0x403204
    if (hMem5 != 0) {
        // 0x40320a
        g1 = (int32_t)LocalFree((char *)hMem5);
        *(int32_t *)(g2 - 32) = 0;
        // branch -> 0x40321b
    }
    int32_t hKey = *(int32_t *)(g2 - 36); // 0x40321b
    if (hKey != 0) {
        // 0x403221
        g1 = RegCloseKey((char *)hKey);
        *(int32_t *)(g2 - 36) = 0;
        // branch -> 0x403232
    }
    // 0x403232
    return g1;
}

// Address range: 0x403233 - 0x40326f
int32_t function_403233(void) {
    // 0x403233
    *(int32_t *)(g2 - 4) = -1;
    abort();
    // UNREACHABLE
}

// Address range: 0x403270 - 0x4032af
bool function_403270(void) {
    // 0x403270
    g70 = (struct _OSVERSIONINFOA *)148;
    if (GetVersionExA((struct _OSVERSIONINFOA *)&g70)) {
        // 0x40328c
        bool result; // 0x4032a0_2
        if (g71 == 1) {
            // 0x403295
            result = true;
            // branch -> 0x40329f
        } else {
            // 0x403299
            result = false;
            // branch -> 0x40329f
        }
        // 0x40329f
        return result;
    }
    // 0x40329d
    // branch -> 0x40329f
    // 0x40329f
    return true;
}

// Address range: 0x4032b0 - 0x40344a
int32_t function_4032b0(int32_t a1, int32_t * a2, char * a3, int32_t a4, int32_t a5) {
    // 0x4032b0
    abort();
    // UNREACHABLE
}

// Address range: 0x40344b - 0x40344b
void function_40344b(void) {
    // 0x40344b
    return;
}

// Address range: 0x40344c - 0x40347f
int32_t function_40344c(void) {
    // 0x40344c
    *(int32_t *)(g2 - 4) = -1;
    abort();
    // UNREACHABLE
}

// Address range: 0x403480 - 0x403672
int32_t function_403480(struct _OVERLAPPED * a1, char * a2, struct _SECURITY_ATTRIBUTES * a3, int32_t a4, int32_t a5) {
    // 0x403480
    abort();
    // UNREACHABLE
}

// Address range: 0x403673 - 0x4036c6
bool function_403673(void) {
    int32_t hObject = *(int32_t *)(g2 - 600); // 0x403673
    int32_t v1; // 0x4036a5
    int32_t hMem; // 0x4036af
    switch (hObject) {
        default: {
            // 0x403685
            g1 = CloseHandle((char *)hObject);
            *(int32_t *)(g2 - 600) = 0;
            // branch -> 0x40369c
        }
        case 0: {
            v1 = g2;
            // 0x40369c
            if (*(int32_t *)(v1 - 604) == 0) {
                // 0x4036af
                hMem = *(int32_t *)(v1 - 28);
                if (hMem != 0) {
                    // 0x4036b5
                    g1 = (int32_t)LocalFree((char *)hMem);
                    *(int32_t *)(g2 - 28) = 0;
                    // branch -> 0x4036c6
                }
                // 0x4036c6
                return (g1 & 1) != 0;
            }
            break;
        }
        case -1: {
            v1 = g2;
            // 0x40369c
            if (*(int32_t *)(v1 - 604) == 0) {
                // 0x4036af
                hMem = *(int32_t *)(v1 - 28);
                if (hMem != 0) {
                    // 0x4036b5
                    g1 = (int32_t)LocalFree((char *)hMem);
                    *(int32_t *)(g2 - 28) = 0;
                    // branch -> 0x4036c6
                }
                // 0x4036c6
                return (g1 & 1) != 0;
            }
            break;
        }
    }
    // 0x4036a5
    g1 = DeleteFileA((char *)*(int32_t *)(v1 + 8));
    // branch -> 0x4036af
    // 0x4036af
    hMem = *(int32_t *)(g2 - 28);
    if (hMem != 0) {
        // 0x4036b5
        g1 = (int32_t)LocalFree((char *)hMem);
        *(int32_t *)(g2 - 28) = 0;
        // branch -> 0x4036c6
    }
    // 0x4036c6
    return (g1 & 1) != 0;
}

// Address range: 0x4036c7 - 0x40371f
int32_t function_4036c7(void) {
    // 0x4036c7
    *(int32_t *)(g2 - 4) = -1;
    abort();
    // UNREACHABLE
}

// Address range: 0x403720 - 0x40384f
char * function_403720(struct _FILETIME * lpFileName2, int32_t lpFileName, int32_t lpFileName3) {
    int32_t v1;
    int32_t v2 = v1; // bp-320
    int32_t lpFindFileData;
    char * v3 = FindFirstFileA((char *)lpFileName, (struct _WIN32_FIND_DATAA *)&lpFindFileData); // 0x403734
    int32_t hFindFile = (int32_t)v3; // 0x403734_6
    char * fileHandle; // 0x4037e5
    int32_t v4; // 0x403843_2
    int32_t lpLastWriteTime;
    int32_t lpLastAccessTime;
    int32_t lpCreationTime;
    int32_t v5;
    if (v3 != (char *)-1) {
        // 0x40377f
        FindClose((char *)hFindFile);
        if (v1 == 0) {
            // 0x4037a3
            v5 = &lpLastWriteTime;
            // branch -> 0x4037af
        } else {
            // 0x403795
            v5 = &v2;
            // branch -> 0x4037af
        }
        // 0x4037af
        lpCreationTime = *(int32_t *)v5;
        fileHandle = CreateFileA((char *)lpFileName2, 0x40000000, 0, NULL, 3, 0, NULL);
        if (fileHandle == (char *)-1) {
            // 0x4037fa
            v4 = (int32_t)fileHandle & -256;
            // branch -> 0x403840
        } else {
            // 0x4037fe
            SetFileTime(fileHandle, (struct _FILETIME *)&lpCreationTime, (struct _FILETIME *)&lpLastAccessTime, (struct _FILETIME *)&lpLastWriteTime);
            CloseHandle(fileHandle);
            v4 = SetFileAttributesA((char *)lpFileName2, lpFindFileData) ? -255 : 1;
            // branch -> 0x403840
        }
        // 0x403840
        return (char *)v4;
    }
    // 0x403749
    if (lpFileName3 == 0) {
        // 0x403778
        // branch -> 0x403840
        // 0x403840
        return (char *)(hFindFile & -256);
    }
    char * v6 = FindFirstFileA((char *)lpFileName3, (struct _WIN32_FIND_DATAA *)&lpFindFileData); // 0x40375a
    int32_t hFindFile2 = (int32_t)v6; // 0x40375a_6
    if (v6 == (char *)-1) {
        // 0x40376f
        // branch -> 0x403840
        // 0x403840
        return (char *)(hFindFile2 & -256);
    }
    // 0x40374f
    // branch -> 0x40377f
    // 0x40377f
    FindClose((char *)hFindFile2);
    if (v2 == 0) {
        // 0x4037a3
        v5 = &lpLastWriteTime;
        // branch -> 0x4037af
    } else {
        // 0x403795
        v5 = &v2;
        // branch -> 0x4037af
    }
    // 0x4037af
    lpCreationTime = *(int32_t *)v5;
    fileHandle = CreateFileA((char *)lpFileName2, 0x40000000, 0, NULL, 3, 0, NULL);
    if (fileHandle == (char *)-1) {
        // 0x4037fa
        v4 = (int32_t)fileHandle & -256;
        // branch -> 0x403840
    } else {
        // 0x4037fe
        SetFileTime(fileHandle, (struct _FILETIME *)&lpCreationTime, (struct _FILETIME *)&lpLastAccessTime, (struct _FILETIME *)&lpLastWriteTime);
        CloseHandle(fileHandle);
        v4 = SetFileAttributesA((char *)lpFileName2, lpFindFileData) ? -255 : 1;
        // branch -> 0x403840
    }
    // 0x403840
    return (char *)v4;
}

// Address range: 0x403850 - 0x4038ef
int32_t function_403850(char * a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x403850
    if (a1 == NULL || a3 == 0 || a4 == 0) {
        // 0x403862
        return 0;
    }
    // 0x403886
    if (a2 != 0) {
        // 0x403897
        function_403be0(0x9200, 2, 4, 4, 4, 4, 4, 4, 4, 4, g5);
        // branch -> 0x40388f
    }
    // 0x40388f
    return 0;
}

// Address range: 0x4038f0 - 0x40390f
int32_t function_4038f0(char * a1, uint32_t a2) {
    // 0x4038f0
    if (a2 < 12 || a1 == NULL) {
        // 0x403904
        return 0;
    }
    // 0x4038ff
    if (*a1 == 64) {
        // 0x403907
        return *(int32_t *)((int32_t)a1 + 8);
    }
    // 0x403904
    return 0;
}

// Address range: 0x403910 - 0x403abf
int32_t function_403910(int32_t a1, int32_t a2) {
    int32_t v1;
    *(char *)&v1 = 0;
    int32_t v2 = 1; // eax
    int32_t v3 = &v1;
    int32_t v4 = 1; // 0x403918108
    // branch -> 0x403915
    while (true) {
        // 0x403915
        *(char *)(v3 + v4) = (char)v4;
        int32_t v5 = v2 + 1; // 0x403918
        v2 = v5;
        if (v5 >= 16) {
            int32_t v6 = g7; // 0x40391e
            int32_t v7 = g5; // bp-68
            int32_t v8;
            int32_t v9 = &v8; // 0x403920_0
            function_403ef0(v9, 4);
            int32_t v10;
            int32_t v11 = &v10; // 0x40392c_0
            g4 = v11;
            bool v12 = &v8 >= NULL & (v9 < 4 ^ (3 - v9 & v9) < 0); // 0x40396395
            int32_t v13 = v12 ? 1 : (int32_t)v12; // 0x403963
            if (v13 == 0) {
                // 0x403aab
                g5 = v7;
                g1 = 0;
                g7 = v6;
                return 0;
            }
            // 0x403986
            v10 = v11;
            v1 = 0;
            int32_t v14 = g3; // 0x4039bf
            int32_t result = (int32_t)(v14 == 0) & v13; // 0x403a27
            if (result != 1) {
                // 0x403aa2
                g3 = v14;
                g5 = 0;
                g1 = result;
                g7 = 0;
                return result;
            }
            // 0x403a37
            int32_t v15;
            function_403ef0((int32_t)&v15, 4);
            int32_t v16;
            g4 = &v16;
            int32_t v17;
            int32_t v18;
            int32_t v19;
            bool v20 = &v17 >= &v15 & ((int32_t)&v18 & 252) == 0 & &v17 < &v19 & &v16 < (int32_t *)5; // 0x403a74112
            g1 = v20;
            int32_t result2; // 0x403a99
            if (!v20) {
                // 0x403a83
                int32_t v21;
                bool v22 = v21 != 0 & v17 != 0; // 0x403a9788
                g4 = v22;
                result2 = v22 & v20;
                g1 = result2;
                // branch -> 0x403a9b
            } else {
                result2 = 1;
            }
            // 0x403a9b
            g3 = v14;
            g5 = 0;
            g7 = 0;
            return result2;
        }
        // 0x403915
        v3 = g8;
        v4 = v5;
        // branch -> 0x403915
    }
}

// Address range: 0x403ac0 - 0x403bdf
int32_t function_403ac0(void) {
    // 0x403ad2
    int16_t v1; // bp-16
    int32_t v2 = &v1;
    v1 = 0;
    *(char *)&v1 = 0;
    int32_t v3 = 1; // 0x403ad571
    *(char *)(v2 + v3) = (char)v3;
    int32_t v4 = 2; // 0x403ad5
    // branch -> 0x403ad2
    while (v4 < 16) {
        // 0x403ad2
        // 0x403ad2
        v3 = v4;
        *(char *)(g8 + v3) = (char)v3;
        v4++;
        // branch -> 0x403ad2
    }
    // 0x403bc8
    return -1;
}

// Address range: 0x403be0 - 0x403c7f
int32_t function_403be0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11) {
    // 0x403be0
    g72 = 1;
    if (a1 == 0) {
        // 0x403bf2
        return -1;
    }
    // 0x403bf6
    switch (a2) {
        case -1: {
            // 0x403c04
            switch (a3) {
                case -1: {
                    // 0x403c12
                    switch (a4) {
                        case -1: {
                            // 0x403c20
                            switch (a5) {
                                case -1: {
                                    // 0x403c2e
                                    switch (a6) {
                                        case -1: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                        case 4: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    // 0x403bf2
                                                                    return -1;
                                                                }
                                                                case 4: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                        case 4: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    // 0x403bf2
                                                                    return -1;
                                                                }
                                                            }
                                                            // 0x403bf2
                                                            return -1;
                                                        }
                                                        case 4: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                        case 4: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    // 0x403bf2
                                                                    return -1;
                                                                }
                                                                case 4: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                        case 4: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    // 0x403bf2
                                                                    return -1;
                                                                }
                                                            }
                                                            // 0x403bf2
                                                            return -1;
                                                        }
                                                    }
                                                    // 0x403bf2
                                                    return -1;
                                                }
                                                case 4: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                        case 4: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    // 0x403bf2
                                                                    return -1;
                                                                }
                                                                case 4: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                        case 4: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    // 0x403bf2
                                                                    return -1;
                                                                }
                                                            }
                                                            // 0x403bf2
                                                            return -1;
                                                        }
                                                        case 4: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                        case 4: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    // 0x403bf2
                                                                    return -1;
                                                                }
                                                                case 4: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                        case 4: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    // 0x403bf2
                                                                    return -1;
                                                                }
                                                            }
                                                            // 0x403bf2
                                                            return -1;
                                                        }
                                                    }
                                                    // 0x403bf2
                                                    return -1;
                                                }
                                            }
                                            // 0x403bf2
                                            return -1;
                                        }
                                        case 4: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                        case 4: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    // 0x403bf2
                                                                    return -1;
                                                                }
                                                                case 4: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                        case 4: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    // 0x403bf2
                                                                    return -1;
                                                                }
                                                            }
                                                            // 0x403bf2
                                                            return -1;
                                                        }
                                                        case 4: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                        case 4: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    // 0x403bf2
                                                                    return -1;
                                                                }
                                                                case 4: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                        case 4: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                    }
                                                                    // 0x403bf2
                                                                    return -1;
                                                                }
                                                            }
                                                            // 0x403bf2
                                                            return -1;
                                                        }
                                                    }
                                                    // 0x403bf2
                                                    return -1;
                                                }
                                                case 4: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // 0x403c78
                                                                            function_403ac0();
                                                                            return -1;
                                                                        }
                                                                        case 4: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                    }
                                                                    // 0x403bf2
                                                                    return -1;
                                                                }
                                                                case 4: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                        case 4: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                    }
                                                                    // 0x403bf2
                                                                    return -1;
                                                                }
                                                            }
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                        case 4: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                        case 4: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                    }
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                                case 4: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                        case 4: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                    }
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                            }
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                    }
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                    }
                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                    break;
                                }
                                case 4: {
                                    // 0x403c2e
                                    switch (a6) {
                                        case -1: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                        case 4: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                    }
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                                case 4: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                        case 4: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                    }
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                            }
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                        case 4: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                        case 4: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                    }
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                                case 4: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                        case 4: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                    }
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                            }
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                    }
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                        case 4: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                    }
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                                case 4: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                        case 4: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                    }
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                            }
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                        case 4: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                        case 4: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                    }
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                                case 4: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                        case 4: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                    }
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                            }
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                    }
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                        case 4: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // 0x403c66
                                                                    switch (a10) {
                                                                        case -1: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                        case 4: {
                                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                                        }
                                                                    }
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                                case 4: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                            }
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                        case 4: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                                case 4: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                            }
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                    }
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                                case 4: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                            }
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                        case 4: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                                case 4: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                            }
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                    }
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                    }
                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                    break;
                                }
                            }
                            // Detected a possible infinite recursion (goto support failed); quitting...
                            break;
                        }
                        case 4: {
                            // 0x403c20
                            switch (a5) {
                                case -1: {
                                    // 0x403c2e
                                    switch (a6) {
                                        case -1: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                                case 4: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                            }
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                        case 4: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                                case 4: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                            }
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                    }
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                                case 4: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                            }
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                        case 4: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                                case 4: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                            }
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                    }
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                        case 4: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                                case 4: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                            }
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                        case 4: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                                case 4: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                            }
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                    }
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                                case 4: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                            }
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                        case 4: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                                case 4: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                            }
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                    }
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                    }
                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                    break;
                                }
                                case 4: {
                                    // 0x403c2e
                                    switch (a6) {
                                        case -1: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // 0x403c58
                                                            switch (a9) {
                                                                case -1: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                                case 4: {
                                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                                    break;
                                                                }
                                                            }
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                        case 4: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                    }
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                        case 4: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                    }
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                        case 4: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                        case 4: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                    }
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                        case 4: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                    }
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                    }
                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                    break;
                                }
                            }
                            // Detected a possible infinite recursion (goto support failed); quitting...
                            break;
                        }
                    }
                    // Detected a possible infinite recursion (goto support failed); quitting...
                    break;
                }
                case 4: {
                    // 0x403c12
                    switch (a4) {
                        case -1: {
                            // 0x403c20
                            switch (a5) {
                                case -1: {
                                    // 0x403c2e
                                    switch (a6) {
                                        case -1: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                        case 4: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                    }
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                        case 4: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                    }
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                        case 4: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                        case 4: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                    }
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                        case 4: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                    }
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                    }
                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                    break;
                                }
                                case 4: {
                                    // 0x403c2e
                                    switch (a6) {
                                        case -1: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                        case 4: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                    }
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                        case 4: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                    }
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                        case 4: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                        case 4: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                    }
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                        case 4: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                    }
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                    }
                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                    break;
                                }
                            }
                            // Detected a possible infinite recursion (goto support failed); quitting...
                            break;
                        }
                        case 4: {
                            // 0x403c20
                            switch (a5) {
                                case -1: {
                                    // 0x403c2e
                                    switch (a6) {
                                        case -1: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // 0x403c4a
                                                    switch (a8) {
                                                        case -1: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                        case 4: {
                                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                                            break;
                                                        }
                                                    }
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                        case 4: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                    }
                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                    break;
                                }
                                case 4: {
                                    // 0x403c2e
                                    switch (a6) {
                                        case -1: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                        case 4: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                    }
                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                    break;
                                }
                            }
                            // Detected a possible infinite recursion (goto support failed); quitting...
                            break;
                        }
                    }
                    // Detected a possible infinite recursion (goto support failed); quitting...
                    break;
                }
            }
            // Detected a possible infinite recursion (goto support failed); quitting...
            break;
        }
        case 2: {
            // 0x403c04
            switch (a3) {
                case -1: {
                    // 0x403c12
                    switch (a4) {
                        case -1: {
                            // 0x403c20
                            switch (a5) {
                                case -1: {
                                    // 0x403c2e
                                    switch (a6) {
                                        case -1: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                        case 4: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                    }
                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                    break;
                                }
                                case 4: {
                                    // 0x403c2e
                                    switch (a6) {
                                        case -1: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                        case 4: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                    }
                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                    break;
                                }
                            }
                            // Detected a possible infinite recursion (goto support failed); quitting...
                            break;
                        }
                        case 4: {
                            // 0x403c20
                            switch (a5) {
                                case -1: {
                                    // 0x403c2e
                                    switch (a6) {
                                        case -1: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                        case 4: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                    }
                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                    break;
                                }
                                case 4: {
                                    // 0x403c2e
                                    switch (a6) {
                                        case -1: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                        case 4: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                    }
                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                    break;
                                }
                            }
                            // Detected a possible infinite recursion (goto support failed); quitting...
                            break;
                        }
                    }
                    // Detected a possible infinite recursion (goto support failed); quitting...
                    break;
                }
                case 4: {
                    // 0x403c12
                    switch (a4) {
                        case -1: {
                            // 0x403c20
                            switch (a5) {
                                case -1: {
                                    // 0x403c2e
                                    switch (a6) {
                                        case -1: {
                                            // 0x403c3c
                                            switch (a7) {
                                                case -1: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                                case 4: {
                                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                                    break;
                                                }
                                            }
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                        case 4: {
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                    }
                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                    break;
                                }
                                case 4: {
                                    // 0x403c2e
                                    switch (a6) {
                                        case -1: {
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                        case 4: {
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                    }
                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                    break;
                                }
                            }
                            // Detected a possible infinite recursion (goto support failed); quitting...
                            break;
                        }
                        case 4: {
                            // 0x403c20
                            switch (a5) {
                                case -1: {
                                    // 0x403c2e
                                    switch (a6) {
                                        case -1: {
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                        case 4: {
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                    }
                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                    break;
                                }
                                case 4: {
                                    // 0x403c2e
                                    switch (a6) {
                                        case -1: {
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                        case 4: {
                                            // Detected a possible infinite recursion (goto support failed); quitting...
                                            break;
                                        }
                                    }
                                    // Detected a possible infinite recursion (goto support failed); quitting...
                                    break;
                                }
                            }
                            // Detected a possible infinite recursion (goto support failed); quitting...
                            break;
                        }
                    }
                    // Detected a possible infinite recursion (goto support failed); quitting...
                    break;
                }
            }
            // Detected a possible infinite recursion (goto support failed); quitting...
            break;
        }
    }
    // Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x403c80 - 0x403e8f
int32_t function_403c80(int32_t a1, uint32_t a2, int32_t a3, int32_t * a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    int32_t v1 = 0; // eax
    int32_t v2 = 0; // ecx
    int32_t v3 = 0; // ebx
    int32_t v4 = 0; // 0x403c99
    int32_t v5 = 1; // 0x403d9988
    // branch -> 0x403c99
    while (true) {
        int32_t v6 = v4; // 0x403e1e
        int32_t v7 = v5; // 0x403d9987
        // branch -> 0x403ca0
        while (true) {
            uint32_t v8 = v1; // 0x403ca0
            int32_t v9 = 2 * v8; // 0x403ca0
            v1 = v9;
            int32_t v10; // 0x403cb4106
            int32_t v11; // 0x403cc5
            if (v9 == 0) {
                int32_t v12 = v2; // 0x403cb0
                unsigned char v13 = *(char *)(a1 + v12); // 0x403cb0
                v10 = 2 * (int32_t)v13 | 1;
                v1 = v10;
                v2 = v12 + 1;
                v11 = v13 < 0;
                // branch -> 0x403cc1
            } else {
                // 0x403ca6
                v10 = v9;
                v11 = v8 / 128 & 1;
                // branch -> 0x403cc1
            }
            // 0x403cc1
            if (v11 == 0) {
                int32_t v14 = v10; // 0x403cd8
                int32_t v15 = 1; // 0x403cfa
                while (true) {
                    int32_t v16 = 2 * v14; // 0x403cd8
                    int32_t v17; // 0x403cfa
                    int32_t v18; // 0x403cfd
                    if (v16 == 0) {
                        int32_t v19 = v2; // 0x403ce9
                        unsigned char v20 = *(char *)(a1 + v19); // 0x403ce9
                        v2 = v19 + 1;
                        v18 = 2 * (int32_t)v20 | 1;
                        v17 = v20 < 0;
                        // branch -> 0x403cfa
                    } else {
                        // 0x403cdf
                        v18 = v16;
                        v17 = v14 / 128 & 1;
                        // branch -> 0x403cfa
                    }
                    int32_t v21 = v17 | 2 * v15; // 0x403cfa
                    int32_t v22 = 2 * v18; // 0x403cfd
                    int32_t v23; // 0x403d1f
                    int32_t v24; // 0x403d23
                    if (v22 == 0) {
                        int32_t v25 = v2; // 0x403d0e
                        unsigned char v26 = *(char *)(a1 + v25); // 0x403d0e
                        v2 = v25 + 1;
                        v24 = 2 * (int32_t)v26 | 1;
                        v23 = v26 < 0;
                        // branch -> 0x403d1f
                    } else {
                        // 0x403d04
                        v24 = v22;
                        v23 = v18 / 128 & 1;
                        // branch -> 0x403d1f
                    }
                    // 0x403d1f
                    if (v23 == 0) {
                        int32_t v27 = 2 * v24; // 0x403d23
                        if (v27 == 0) {
                            int32_t v28 = v2; // 0x403d37
                            unsigned char v29 = *(char *)(a1 + v28); // 0x403d37
                            v2 = v28 + 1;
                            v14 = 2 * (int32_t)v29 | 1;
                            v15 = ((int32_t)(v29 < 0) | -2) + 2 * v21;
                            // branch -> 0x403cd8
                            continue;
                        } else {
                            // 0x403d29
                            v14 = v27;
                            v15 = (v24 / 128 | -2) + 2 * v21;
                            // branch -> 0x403cd8
                            continue;
                        }
                    } else {
                        // 0x403d4e
                        int32_t v30; // 0x403da0
                        int32_t v31; // 0x403dc1
                        int32_t v32; // 0x403e37
                        if (v21 == 2) {
                            int32_t v33 = 2 * v24; // 0x403d57
                            if (v33 == 0) {
                                int32_t v34 = v2; // 0x403d67
                                unsigned char v35 = *(char *)(a1 + v34); // 0x403d67
                                v2 = v34 + 1;
                                v31 = v35 < 0;
                                v30 = 2 * (int32_t)v35 | 1;
                                v32 = v7;
                                // branch -> 0x403da0
                            } else {
                                // 0x403d5d
                                v31 = v24 / 128 & 1;
                                v30 = v33;
                                v32 = v7;
                                // branch -> 0x403da0
                            }
                          lab_0x403da0:;
                            int32_t v36 = 2 * v30; // 0x403da0
                            int32_t v37; // 0x403dc1
                            int32_t v38; // 0x403dd0120
                            if (v36 == 0) {
                              lab_0x403db0:;
                                int32_t v39 = v2; // 0x403db0
                                unsigned char v40 = *(char *)(a1 + v39); // 0x403db0
                                v2 = v39 + 1;
                                v38 = 2 * (int32_t)v40 | 1;
                                v37 = v40 < 0;
                                // branch -> 0x403dc1
                            } else {
                              lab_0x403da6:
                                // 0x403da6
                                v38 = v36;
                                v37 = v30 / 128 & 1;
                                // branch -> 0x403dc1
                            }
                            int32_t v41 = v37 | -v31 & 2; // 0x403dc1
                            int32_t v42 = v41; // 0x403e2d
                            if (v41 == 0) {
                                int32_t v43 = 1; // 0x403df2
                                int32_t v44 = v38; // 0x403dd0
                                // branch -> 0x403dd0
                                int32_t v45; // 0x403df2
                                while (true) {
                                    int32_t v46 = 2 * v44; // 0x403dd0
                                    int32_t v47; // 0x403df2
                                    int32_t v48; // 0x403df5
                                    if (v46 == 0) {
                                        int32_t v49 = v2; // 0x403de1
                                        unsigned char v50 = *(char *)(a1 + v49); // 0x403de1
                                        v2 = v49 + 1;
                                        v48 = 2 * (int32_t)v50 | 1;
                                        v47 = v50 < 0;
                                        // branch -> 0x403df2
                                    } else {
                                        // 0x403dd7
                                        v48 = v46;
                                        v47 = v44 / 128 & 1;
                                        // branch -> 0x403df2
                                    }
                                    // 0x403df2
                                    v45 = v47 | 2 * v43;
                                    int32_t v51 = 2 * v48; // 0x403df5
                                    int32_t v52; // 0x403e17
                                    int32_t v53; // 0x403dd0121
                                    if (v51 == 0) {
                                        int32_t v54 = v2; // 0x403e06
                                        unsigned char v55 = *(char *)(a1 + v54); // 0x403e06
                                        v2 = v54 + 1;
                                        v53 = 2 * (int32_t)v55 | 1;
                                        v52 = v55 < 0;
                                        // branch -> 0x403e17
                                    } else {
                                        // 0x403dfc
                                        v53 = v51;
                                        v52 = v48 / 128 & 1;
                                        // branch -> 0x403e17
                                    }
                                    // 0x403e17
                                    if (v52 != 0) {
                                        // break -> 0x403e1b
                                        break;
                                    }
                                    v43 = v45;
                                    v44 = v53;
                                    // continue -> 0x403dd0
                                }
                                // 0x403e1b
                                v42 = v45 + 2;
                                // branch -> 0x403e1e
                            }
                            int32_t v56 = v6 - v32 + a3; // 0x403e37
                            unsigned char v57 = *(char *)v56; // 0x403e37
                            v3 = (int32_t)v57 | v32 & -256;
                            *(char *)(v6 + a3) = v57;
                            int32_t v58 = v6 + 1; // 0x403e3f
                            int32_t v59 = v56 + 1; // 0x403e40
                            unsigned char v60 = *(char *)v59; // 0x403e41
                            v3 = v3 & -256 | (int32_t)v60;
                            *(char *)(a3 + v58) = v60;
                            int32_t v61 = v58 + 1; // 0x403e46
                            int32_t v62 = v42 + (int32_t)(v32 > 1280) - 1; // 0x403e48
                            // branch -> 0x403e41
                            while (v62 != 0) {
                                // 0x403e41
                                v59++;
                                v60 = *(char *)v59;
                                v3 = v3 & -256 | (int32_t)v60;
                                *(char *)(a3 + v61) = v60;
                                v61++;
                                v62--;
                                // continue -> 0x403e41
                            }
                            // 0x403e4b
                            // branch -> 0x403ca0
                            break;
                        } else {
                            int32_t v63 = v2; // 0x403d7a
                            int32_t v64 = (int32_t)*(char *)(a1 + v63); // 0x403d7a
                            uint32_t v65 = v64 | 256 * v21 - 768; // 0x403d84
                            v2 = v63 + 1;
                            if (v65 == -1) {
                                // 0x403e5c
                                *a4 = v6;
                                if (v2 == a2) {
                                    // 0x403e6e
                                    return 0;
                                }
                                // 0x403e74
                                return v2 < a2 ? -205 : -201;
                            }
                            // 0x403d90
                            v31 = v64 & 1 ^ 1;
                            v30 = v24;
                            v32 = v65 / 2 + 1;
                            // branch -> 0x403da0
                            goto lab_0x403da0;
                        }
                    }
                }
            } else {
                // 0x403cc5
                *(char *)(v6 + a3) = *(char *)(a1 + v2);
                int32_t v66 = v3 + 1; // 0x403ccf
                v3 = v66;
                v2++;
                v4 = v66;
                v5 = v7;
                // branch -> 0x403c99
                break;
            }
        }
    }
}

// Address range: 0x403e90 - 0x403ecf
int32_t function_403e90(int64_t a1, int32_t a2) {
    int32_t v1 = a1;
    uint32_t size = v1 * a2; // 0x403e9d
    if (a2 - 1 >= size || v1 - 1 >= size) {
        // 0x403ec1
        // branch -> 0x403ec3
        // 0x403ec3
        return 0;
    }
    // 0x403eb0
    if (size != -1) {
        // 0x403eb5
        return (int32_t)malloc(size);
    }
    // 0x403ec3
    return 0;
}

// Address range: 0x403ed0 - 0x403eef
int32_t function_403ed0(int32_t result) {
    // 0x403ed0
    if (result != 0) {
        // 0x403ed8
        int32_t v1;
        free((char *)v1);
        // branch -> 0x403ee2
    }
    // 0x403ee2
    return result;
}

// Address range: 0x403ef0 - 0x403f07
int32_t function_403ef0(int32_t a1, int64_t a2) {
    int32_t v1 = a2;
    return (int32_t)((int64_t)(a1 - 1 + v1) / (a2 & 0xffffffff)) * v1 - a1;
}

// Address range: 0x403f08 - 0x403fc8
int32_t function_403f08(int32_t a1) {
    int32_t v1 = 28; // bp-4
    int32_t v2 = &g18; // bp-8
    function_4082b0((int32_t)&g18, 28);
    int32_t v3 = g2; // 0x403f14
    int32_t v4 = *(int32_t *)(v3 + 12); // 0x403f14
    g7 = v4;
    g5 = 0;
    if (v4 != 0) {
        // 0x403f21
        if (*(int32_t *)(v3 + 16) == 20) {
            // 0x403f2b
            *(int32_t *)(v4 + 8) = 0;
            *(int32_t *)(g7 + 4) = g5;
            *(int32_t *)(g2 - 28) = -29;
            *(int32_t *)(g2 - 4) = g5;
            int32_t v5 = *(int32_t *)g7; // 0x403f3b
            int32_t v6 = function_4051b2(*(int32_t *)(g2 + 8), v5); // 0x403f40
            *(int32_t *)(g2 - 36) = v6;
            int32_t v7; // 0x403fc3
            if (v6 == g5) {
                // 0x403f4e
                *(int32_t *)(g2 - 4) = -1;
                // branch -> 0x403fc2
                // 0x403fc2
                v7 = -20;
                // branch -> 0x403fc3
            } else {
                int32_t v8 = *(int32_t *)(v6 + 264); // 0x403f56
                *(int32_t *)(g2 - 40) = v8;
                int32_t v9 = 544; // edx
                *(int32_t *)(g2 - 32) = g5;
                int32_t v10 = g5; // 0x403f6723
                if (v10 < *(int32_t *)(v8 + 48)) {
                    while (true) {
                        int32_t v11 = *(int32_t *)(*(int32_t *)(v8 + 72) + 8 * v10); // 0x403f6f
                        *(int32_t *)(g2 - 44) = v11;
                        if (*(char *)(v11 + 1) >= 2) {
                            // 0x403f7b
                            if (*(int32_t *)(v11 + 8) == 32) {
                                int32_t v12 = v11 + 12; // 0x403f81
                                int32_t v13 = v12; // eax
                                int32_t v14 = *(int32_t *)v12 & 4080; // 0x403f86
                                g3 = v14;
                                if (v14 == v9) {
                                    // 0x403f90
                                    *(int32_t *)(g7 + 4) = v12;
                                    int32_t v15 = *(int32_t *)v13; // 0x403f93
                                    g3 = v15;
                                    *(int32_t *)(g7 + 8) = v15;
                                    *(int32_t *)v13 = v9;
                                    *(int32_t *)(g2 - 28) = 0;
                                    // branch -> 0x403f9e
                                }
                            }
                        }
                        uint32_t v16 = g5; // 0x403f9e
                        if (v16 < 1001) {
                            int32_t v17 = v16 + 1; // 0x403fa6
                            g5 = v17;
                            *(int32_t *)(g2 - 32) = v17;
                            int32_t v18 = g5; // 0x403f67
                            if (v18 >= *(int32_t *)(v8 + 48)) {
                                // break -> 0x403fb7
                                break;
                            }
                            v10 = v18;
                            // continue -> 0x403f6c
                            continue;
                        }
                    }
                    // 0x403fb7
                    *(int32_t *)(g2 - 4) = -1;
                    // branch -> 0x403fc3
                    // 0x403fc3
                    function_4082e9(v5, v2, v1);
                    return 0;
                }
                // 0x403fb7
                *(int32_t *)(g2 - 4) = -1;
                v7 = v5;
                // branch -> 0x403fc3
            }
            // 0x403fc3
            function_4082e9(v7, v2, v1);
            return 0;
        }
    }
    // 0x403fc2
    // branch -> 0x403fc3
    // 0x403fc3
    function_4082e9(87, v2, v1);
    return 0;
}

// Address range: 0x403fc9 - 0x404089
int32_t function_403fc9(int32_t a1) {
    int32_t v1 = 28; // bp-4
    int32_t v2 = &g19; // bp-8
    function_4082b0((int32_t)&g19, 28);
    int32_t v3 = g2; // 0x403fd5
    int32_t v4 = *(int32_t *)(v3 + 12); // 0x403fd5
    g7 = v4;
    g5 = 0;
    if (v4 != 0) {
        // 0x403fe2
        if (*(int32_t *)(v3 + 16) == 20) {
            // 0x403fec
            *(int32_t *)(v4 + 8) = 0;
            *(int32_t *)(g7 + 4) = g5;
            *(int32_t *)(g2 - 28) = -29;
            *(int32_t *)(g2 - 4) = g5;
            int32_t v5 = *(int32_t *)g7; // 0x403ffc
            int32_t v6 = function_4051b2(*(int32_t *)(g2 + 8), v5); // 0x404001
            *(int32_t *)(g2 - 36) = v6;
            int32_t v7; // 0x404084
            if (v6 == g5) {
                // 0x40400f
                *(int32_t *)(g2 - 4) = -1;
                // branch -> 0x404083
                // 0x404083
                v7 = -20;
                // branch -> 0x404084
            } else {
                int32_t v8 = *(int32_t *)(v6 + 300); // 0x404017
                *(int32_t *)(g2 - 40) = v8;
                int32_t v9 = 544; // edx
                *(int32_t *)(g2 - 32) = g5;
                int32_t v10 = g5; // 0x40402823
                if (v10 < *(int32_t *)(v8 + 60)) {
                    while (true) {
                        int32_t v11 = *(int32_t *)(*(int32_t *)(v8 + 88) + 8 * v10); // 0x404030
                        *(int32_t *)(g2 - 44) = v11;
                        if (*(char *)(v11 + 1) >= 2) {
                            // 0x40403c
                            if (*(int32_t *)(v11 + 8) == 32) {
                                int32_t v12 = v11 + 12; // 0x404042
                                int32_t v13 = v12; // eax
                                int32_t v14 = *(int32_t *)v12 & 4080; // 0x404047
                                g3 = v14;
                                if (v14 == v9) {
                                    // 0x404051
                                    *(int32_t *)(g7 + 4) = v12;
                                    int32_t v15 = *(int32_t *)v13; // 0x404054
                                    g3 = v15;
                                    *(int32_t *)(g7 + 8) = v15;
                                    *(int32_t *)v13 = v9;
                                    *(int32_t *)(g2 - 28) = 0;
                                    // branch -> 0x40405f
                                }
                            }
                        }
                        uint32_t v16 = g5; // 0x40405f
                        if (v16 < 1001) {
                            int32_t v17 = v16 + 1; // 0x404067
                            g5 = v17;
                            *(int32_t *)(g2 - 32) = v17;
                            int32_t v18 = g5; // 0x404028
                            if (v18 >= *(int32_t *)(v8 + 60)) {
                                // break -> 0x404078
                                break;
                            }
                            v10 = v18;
                            // continue -> 0x40402d
                            continue;
                        }
                    }
                    // 0x404078
                    *(int32_t *)(g2 - 4) = -1;
                    // branch -> 0x404084
                    // 0x404084
                    function_4082e9(v5, v2, v1);
                    return 0;
                }
                // 0x404078
                *(int32_t *)(g2 - 4) = -1;
                v7 = v5;
                // branch -> 0x404084
            }
            // 0x404084
            function_4082e9(v7, v2, v1);
            return 0;
        }
    }
    // 0x404083
    // branch -> 0x404084
    // 0x404084
    function_4082e9(87, v2, v1);
    return 0;
}

// Address range: 0x40408a - 0x404116
int32_t function_40408a(int32_t a1) {
    int32_t v1 = &g20; // bp-8
    function_4082b0((int32_t)&g20, 40);
    int32_t v2 = *(int32_t *)(g2 + 12); // 0x404096
    g7 = v2;
    g3 = 0;
    *(int32_t *)(v2 + 8) = 0;
    *(int32_t *)(g7 + 4) = g3;
    *(int32_t *)(g2 - 28) = -29;
    *(int32_t *)(g2 - 4) = g3;
    int32_t v3 = *(int32_t *)g7; // 0x4040bd
    int32_t v4 = function_4051b2(*(int32_t *)(g2 + 8), v3); // 0x4040c2
    g4 = (int32_t)(char *)v3;
    *(int32_t *)(g2 - 36) = v4;
    if (v4 == g3) {
        // 0x4040d0
        function_404117(v1);
        // branch -> 0x4040d4
    }
    int32_t v5 = *(int32_t *)(g2 + 8); // 0x4040d9
    int32_t v6 = function_405371((int32_t *)v5, "PsReferencePrimaryToken", v1); // 0x4040dc
    *(int32_t *)(g2 - 32) = v6;
    int32_t v7 = *(int32_t *)(g2 + 8); // 0x4040e9
    int32_t result = function_405371((int32_t *)v7, "PsDereferencePrimaryToken", v5); // 0x4040ec
    g1 = result;
    *(int32_t *)(g2 - 44) = result;
    int32_t v8 = g2; // 0x4040f7
    ((int32_t (*)(int32_t))*(int32_t *)(v8 - 32))(*(int32_t *)(v8 - 36));
    *(int32_t *)(g2 - 48) = result;
    return result;
}

// Address range: 0x404117 - 0x404183
int32_t function_404117(int32_t a1) {
    // 0x404117
    *(int32_t *)(g2 - 4) = -1;
    function_4041b1();
    return 0;
}

// Address range: 0x404184 - 0x404190
int32_t function_404184(void) {
    int32_t v1 = g2; // 0x404184
    int32_t result = *(int32_t *)(v1 - 36) + 200; // 0x404187
    g1 = result;
    ((int32_t (*)(int32_t))*(int32_t *)(v1 - 44))(result);
    return result;
}

// Address range: 0x404191 - 0x40419a
int32_t function_404191(void) {
    // 0x404191
    function_4041a5();
    return 0;
}

// Address range: 0x40419b - 0x4041a4
int32_t function_40419b(int32_t a1) {
    // 0x40419b
    *(int32_t *)(g2 - 28) = -28;
    return *(int32_t *)(g2 - 24);
}

// Address range: 0x4041a5 - 0x4041b0
int32_t function_4041a5(void) {
    // 0x4041a5
    *(int32_t *)(g2 - 4) = -1;
    function_4041b1();
    return 0;
}

// Address range: 0x4041b1 - 0x4041b6
int32_t function_4041b1(void) {
    // 0x4041b1
    int32_t v1;
    int32_t v2;
    function_4082e9(v1, v2, 0);
    return 0;
}

// Address range: 0x4041b7 - 0x404243
int32_t function_4041b7(int32_t a1) {
    int32_t v1 = &g21; // bp-8
    function_4082b0((int32_t)&g21, 40);
    int32_t v2 = *(int32_t *)(g2 + 12); // 0x4041c3
    g7 = v2;
    g3 = 0;
    *(int32_t *)(v2 + 8) = 0;
    *(int32_t *)(g7 + 4) = g3;
    *(int32_t *)(g2 - 28) = -29;
    *(int32_t *)(g2 - 4) = g3;
    int32_t v3 = *(int32_t *)g7; // 0x4041ea
    int32_t v4 = function_4051b2(*(int32_t *)(g2 + 8), v3); // 0x4041ef
    g4 = (int32_t)(char *)v3;
    *(int32_t *)(g2 - 36) = v4;
    if (v4 == g3) {
        // 0x4041fd
        function_404244(v1);
        // branch -> 0x404201
    }
    int32_t v5 = *(int32_t *)(g2 + 8); // 0x404206
    int32_t v6 = function_405371((int32_t *)v5, "PsReferencePrimaryToken", v1); // 0x404209
    *(int32_t *)(g2 - 32) = v6;
    int32_t v7 = *(int32_t *)(g2 + 8); // 0x404216
    int32_t result = function_405371((int32_t *)v7, "PsDereferencePrimaryToken", v5); // 0x404219
    g1 = result;
    *(int32_t *)(g2 - 44) = result;
    int32_t v8 = g2; // 0x404224
    ((int32_t (*)(int32_t))*(int32_t *)(v8 - 32))(*(int32_t *)(v8 - 36));
    *(int32_t *)(g2 - 48) = result;
    return result;
}

// Address range: 0x404244 - 0x4042b0
int32_t function_404244(int32_t a1) {
    // 0x404244
    *(int32_t *)(g2 - 4) = -1;
    function_4042de();
    return 0;
}

// Address range: 0x4042b1 - 0x4042bd
int32_t function_4042b1(void) {
    int32_t v1 = g2; // 0x4042b1
    int32_t result = *(int32_t *)(v1 - 36) + 200; // 0x4042b4
    g1 = result;
    ((int32_t (*)(int32_t))*(int32_t *)(v1 - 44))(result);
    return result;
}

// Address range: 0x4042be - 0x4042c7
int32_t function_4042be(void) {
    // 0x4042be
    function_4042d2();
    return 0;
}

// Address range: 0x4042c8 - 0x4042d1
int32_t function_4042c8(int32_t a1) {
    // 0x4042c8
    *(int32_t *)(g2 - 28) = -28;
    return *(int32_t *)(g2 - 24);
}

// Address range: 0x4042d2 - 0x4042dd
int32_t function_4042d2(void) {
    // 0x4042d2
    *(int32_t *)(g2 - 4) = -1;
    function_4042de();
    return 0;
}

// Address range: 0x4042de - 0x4042e3
int32_t function_4042de(void) {
    // 0x4042de
    int32_t v1;
    int32_t v2;
    function_4082e9(v1, v2, 0);
    return 0;
}

// Address range: 0x4042e4 - 0x404370
int32_t function_4042e4(int32_t a1) {
    int32_t v1 = &g22; // bp-8
    function_4082b0((int32_t)&g22, 40);
    int32_t v2 = *(int32_t *)(g2 + 12); // 0x4042f0
    g7 = v2;
    g3 = 0;
    *(int32_t *)(v2 + 8) = 0;
    *(int32_t *)(g7 + 4) = g3;
    *(int32_t *)(g2 - 28) = -29;
    *(int32_t *)(g2 - 4) = g3;
    int32_t v3 = *(int32_t *)g7; // 0x404317
    int32_t v4 = function_4051b2(*(int32_t *)(g2 + 8), v3); // 0x40431c
    g4 = (int32_t)(char *)v3;
    *(int32_t *)(g2 - 36) = v4;
    if (v4 == g3) {
        // 0x40432a
        function_404371(v1);
        // branch -> 0x40432e
    }
    int32_t v5 = *(int32_t *)(g2 + 8); // 0x404333
    int32_t v6 = function_405371((int32_t *)v5, "PsReferencePrimaryToken", v1); // 0x404336
    *(int32_t *)(g2 - 32) = v6;
    int32_t v7 = *(int32_t *)(g2 + 8); // 0x404343
    int32_t result = function_405371((int32_t *)v7, "PsDereferencePrimaryToken", v5); // 0x404346
    g1 = result;
    *(int32_t *)(g2 - 44) = result;
    int32_t v8 = g2; // 0x404351
    ((int32_t (*)(int32_t))*(int32_t *)(v8 - 32))(*(int32_t *)(v8 - 36));
    *(int32_t *)(g2 - 48) = result;
    return result;
}

// Address range: 0x404371 - 0x4043dd
int32_t function_404371(int32_t a1) {
    // 0x404371
    *(int32_t *)(g2 - 4) = -1;
    function_40440b();
    return 0;
}

// Address range: 0x4043de - 0x4043ea
int32_t function_4043de(void) {
    int32_t v1 = g2; // 0x4043de
    int32_t result = *(int32_t *)(v1 - 36) + 216; // 0x4043e1
    g1 = result;
    ((int32_t (*)(int32_t))*(int32_t *)(v1 - 44))(result);
    return result;
}

// Address range: 0x4043eb - 0x4043f4
int32_t function_4043eb(void) {
    // 0x4043eb
    function_4043ff();
    return 0;
}

// Address range: 0x4043f5 - 0x4043fe
int32_t function_4043f5(int32_t a1) {
    // 0x4043f5
    *(int32_t *)(g2 - 28) = -28;
    return *(int32_t *)(g2 - 24);
}

// Address range: 0x4043ff - 0x40440a
int32_t function_4043ff(void) {
    // 0x4043ff
    *(int32_t *)(g2 - 4) = -1;
    function_40440b();
    return 0;
}

// Address range: 0x40440b - 0x404410
int32_t function_40440b(void) {
    // 0x40440b
    int32_t v1;
    int32_t v2;
    function_4082e9(v1, v2, 0);
    return 0;
}

// Address range: 0x404411 - 0x4044a3
int32_t function_404411(int32_t a1) {
    int32_t v1 = &g23; // bp-8
    function_4082b0((int32_t)&g23, 48);
    int32_t v2 = *(int32_t *)(g2 + 12); // 0x40441d
    g7 = v2;
    g3 = 0;
    *(int32_t *)(v2 + 8) = 0;
    *(int32_t *)(g7 + 4) = g3;
    *(int32_t *)(g7 + 16) = g3;
    *(int32_t *)(g7 + 12) = g3;
    *(int32_t *)(g2 - 28) = -29;
    *(int32_t *)(g2 - 4) = g3;
    int32_t v3 = *(int32_t *)g7; // 0x40444a
    int32_t v4 = function_4051b2(*(int32_t *)(g2 + 8), v3); // 0x40444f
    g4 = (int32_t)(char *)v3;
    *(int32_t *)(g2 - 40) = v4;
    if (v4 == g3) {
        // 0x40445d
        function_4044a4(v1, 48);
        // branch -> 0x404461
    }
    int32_t v5 = *(int32_t *)(g2 + 8); // 0x404466
    int32_t v6 = function_405371((int32_t *)v5, "PsReferencePrimaryToken", v1); // 0x404469
    *(int32_t *)(g2 - 36) = v6;
    int32_t v7 = *(int32_t *)(g2 + 8); // 0x404476
    int32_t result = function_405371((int32_t *)v7, "PsDereferencePrimaryToken", v5); // 0x404479
    g1 = result;
    *(int32_t *)(g2 - 44) = result;
    int32_t v8 = g2; // 0x404484
    ((int32_t (*)(int32_t))*(int32_t *)(v8 - 36))(*(int32_t *)(v8 - 40));
    *(int32_t *)(g2 - 48) = result;
    return result;
}

// Address range: 0x4044a4 - 0x404602
int32_t function_4044a4(int32_t a1, int32_t a2) {
    // 0x4044a4
    int32_t result;
    g1 = result;
    *(int32_t *)(g2 - 4) = -1;
    g4 = function_404633();
    return result;
}

// Address range: 0x404603 - 0x40460f
int32_t function_404603(void) {
    int32_t v1 = g2; // 0x404603
    int32_t result = *(int32_t *)(v1 - 40) + 224; // 0x404606
    g1 = result;
    ((int32_t (*)(int32_t))*(int32_t *)(v1 - 44))(result);
    return result;
}

// Address range: 0x404610 - 0x40461c
int32_t function_404610(void) {
    // 0x404610
    int32_t v1;
    return function_404627(v1);
}

// Address range: 0x40461d - 0x404626
int32_t function_40461d(int32_t a1) {
    // 0x40461d
    *(int32_t *)(g2 - 28) = -28;
    return *(int32_t *)(g2 - 24);
}

// Address range: 0x404627 - 0x404631
int32_t function_404627(int32_t a1) {
    // 0x404627
    *(int32_t *)(g2 - 4) = -1;
    function_404633();
    return *(int32_t *)(g2 - 28);
}

// Address range: 0x404632 - 0x404632
int32_t function_404632(void) {
    // 0x404632
    int32_t result;
    return result;
}

// Address range: 0x404633 - 0x404638
int32_t function_404633(void) {
    // 0x404633
    int32_t v1;
    int32_t v2;
    function_4082e9(v1, v2, 0);
    return g4;
}

// Address range: 0x404639 - 0x404774
int32_t function_404639(uint32_t a1, int32_t * a2) {
    int32_t v1;
    uint16_t v2 = (int16_t)v1;
    int32_t v3;
    g2 = &v3;
    int32_t result2; // 0x404774_2
    if (a2 == NULL) {
        // 0x40464b
        result2 = 87;
        // branch -> 0x404770
    } else {
        // 0x404653
        *a2 = 0;
        g7 = a1;
        int32_t v4; // bp+226
        if (a1 > 9) {
            // 0x404667
            g5 = 20;
            int32_t v5;
            memset((char *)&v5, 0, 20);
            v5 = g7;
            int32_t v6 = GetVersion(); // 0x40467e
            int32_t v7 = v6 & 255; // 0x404686
            if (v7 != 4) {
                // 0x404699
                char * mem; // 0x40474a
                if (v7 != 5) {
                    // 0x40469c
                    if (v7 == 6) {
                        // 0x4046a3
                        // branch -> 0x40473a
                        // 0x40473a
                        function_4059db();
                        if (g8 == -12) {
                            // 0x404749
                            mem = malloc(g5);
                            if (mem != NULL) {
                                // 0x404757
                                memcpy(mem, (char *)&v5, g5);
                                *a2 = (int32_t)mem;
                                // branch -> 0x40476a
                            }
                        }
                    }
                    // 0x40476a
                    // branch -> 0x40476f
                    // 0x40476f
                    // branch -> 0x404770
                    // 0x404770
                    return -66;
                }
                // 0x4046b2
                int32_t lpVersionInformation;
                memset((char *)&lpVersionInformation, 0, 156);
                lpVersionInformation = 156;
                GetVersionExA((struct _OSVERSIONINFOA *)&lpVersionInformation);
                int32_t v8 = v6 / 256 & 255; // 0x4046d3
                int32_t result; // 0x40476a21
                if (v8 == 0) {
                    // 0x404712
                    // branch -> 0x40473a
                    // 0x40473a
                    function_4059db();
                    if (g8 == -12) {
                        // 0x404749
                        mem = malloc(g5);
                        if (mem != NULL) {
                            // 0x404757
                            memcpy(mem, (char *)&v5, g5);
                            *a2 = (int32_t)mem;
                            // branch -> 0x40476a
                        }
                    }
                } else {
                    // 0x4046db
                    if (v8 != 1) {
                        // 0x4046de
                        if (v8 == 2) {
                            // 0x4046e5
                            if (v2 == 0) {
                                // 0x40470b
                                // branch -> 0x40473a
                            }
                            // 0x40473a
                            function_4059db();
                            if (g8 == -12) {
                                // 0x404749
                                mem = malloc(g5);
                                if (mem != NULL) {
                                    // 0x404757
                                    memcpy(mem, (char *)&v5, g5);
                                    *a2 = (int32_t)mem;
                                    // branch -> 0x40476a
                                }
                            }
                        }
                        // 0x40476a
                        // branch -> 0x40476f
                        // 0x40476f
                        // branch -> 0x404770
                        // 0x404770
                        return -66;
                    }
                    // 0x4046f8
                    if (v2 <= 1) {
                        // 0x404704
                        // branch -> 0x40473a
                        // 0x40473a
                        function_4059db();
                        if (g8 == -12) {
                            // 0x404749
                            mem = malloc(g5);
                            if (mem != NULL) {
                                // 0x404757
                                memcpy(mem, (char *)&v5, g5);
                                *a2 = (int32_t)mem;
                                // branch -> 0x40476a
                            }
                        }
                        // 0x40476a
                        // branch -> 0x40476f
                        // 0x40476f
                        // branch -> 0x404770
                        // 0x404770
                        return result;
                    }
                    // 0x40470b
                    // branch -> 0x40473a
                    // 0x40473a
                    function_4059db();
                    if (g8 == -12) {
                        // 0x404749
                        mem = malloc(g5);
                        if (mem != NULL) {
                            // 0x404757
                            memcpy(mem, (char *)&v5, g5);
                            *a2 = (int32_t)mem;
                            // branch -> 0x40476a
                        }
                    }
                }
                // 0x40476a
                // branch -> 0x40476f
                // 0x40476f
                // branch -> 0x404770
                // 0x404770
                return result;
            }
            // 0x40471e
            function_407bf0();
            // branch -> 0x40476a
            // 0x40476a
            v4 = -30;
            // branch -> 0x40476f
        } else {
            // 0x40465f
            v4 = -26;
            // branch -> 0x40476f
        }
        // 0x40476f
        result2 = v4;
        // branch -> 0x404770
    }
    // 0x404770
    return result2;
}

// Address range: 0x404775 - 0x40488c
int32_t function_404775(int32_t a1) {
    int32_t v1 = 36; // bp-4
    int32_t v2 = &g24; // bp-8
    function_4082b0((int32_t)&g24, 36);
    int32_t v3 = g2; // 0x404781
    int32_t v4 = *(int32_t *)(v3 + 12); // 0x404781
    g7 = v4;
    if (v4 != 0) {
        // 0x40478c
        if (*(int32_t *)(v3 + 16) == 24) {
            int32_t v5 = *(int32_t *)(v3 + 8); // 0x40479b
            int32_t v6 = function_405371((int32_t *)v5, "RtlEqualSid", v2); // 0x40479e
            *(int32_t *)(g2 - 40) = v6;
            if (v6 == 0) {
                // 0x404886
                // branch -> 0x404887
                // 0x404887
                function_4082e9((int32_t)(char *)-63, v2, v1);
                return 0;
            }
            // 0x4047b3
            *(int32_t *)(g2 - 36) = -29;
            *(int32_t *)(g2 - 4) = 0;
            int32_t v7 = *(int32_t *)g7; // 0x4047be
            char * v8 = (char *)v7; // bp-12
            int32_t v9 = function_4051b2(*(int32_t *)(g2 + 8), v7); // 0x4047c3
            *(int32_t *)(g2 - 44) = v9;
            if (v9 == 0) {
                // 0x4047d1
                v8 = (char *)-20;
                // branch -> 0x404853
                // 0x404853
                *(int32_t *)(g2 - 4) = -1;
                // branch -> 0x404887
            } else {
                int32_t v10 = *(int32_t *)(v9 + 264); // 0x4047d6
                g5 = v10;
                *(int32_t *)(g2 - 48) = v10;
                g1 = 0;
                *(int32_t *)(g2 - 28) = 0;
                int32_t v11 = g1;
                int32_t v12 = g5; // 0x4047e447
                int32_t v13 = g2;
                if (v11 < *(int32_t *)(v12 + 48)) {
                    int32_t v14 = v13; // 0x4047f3
                    int32_t v15; // 0x40487b
                    while (true) {
                        int32_t v16 = *(int32_t *)(v12 + 72); // 0x4047ed
                        g4 = v16;
                        int32_t v17 = *(int32_t *)(v16 + 8 * v11); // 0x4047f0
                        g3 = v17;
                        *(int32_t *)(v14 - 52) = v17;
                        int32_t v18 = *(int32_t *)(g7 + 4); // 0x4047f6
                        v8 = (char *)v18;
                        ((int32_t (*)(int32_t, int32_t))*(int32_t *)(g2 - 40))(g3, v18);
                        if (g1 != 0) {
                            // 0x404801
                            if (*(char *)(g3 + 1) == *(char *)(*(int32_t *)(g7 + 8) + 1)) {
                                // 0x40480c
                                *(int32_t *)(g2 - 32) = 0;
                                uint32_t v19 = *(int32_t *)(g2 - 32); // 0x40481443
                                int32_t v20; // 0x404831
                                int32_t v21; // 0x40483d
                                int32_t v22; // 0x40484a
                                int32_t v23; // 0x40483a
                                if (v19 >= (int32_t)*(char *)(g3 + 1)) {
                                    // 0x404831
                                    v20 = g7;
                                    if (*(char *)(v20 + 12) != 0) {
                                        // 0x404837
                                        v23 = 8 * *(int32_t *)(g2 - 28);
                                        v21 = *(int32_t *)(g5 + 72);
                                        *(int32_t *)(v20 + 20) = *(int32_t *)((v23 | 4) + v21);
                                        v22 = *(int32_t *)(g7 + 16);
                                        *(int32_t *)(*(int32_t *)(g5 + 72) + 4 + v23) = v22;
                                        // branch -> 0x404851
                                    }
                                    // 0x404851
                                    // branch -> 0x404853
                                    // 0x404853
                                    *(int32_t *)(g2 - 4) = -1;
                                    // branch -> 0x404887
                                    // 0x404887
                                    function_4082e9((int32_t)v8, v2, v1);
                                    return 0;
                                }
                                int32_t v24 = 4 * v19 + 8; // 0x40481c
                                int32_t v25 = *(int32_t *)(*(int32_t *)(g7 + 8) + v24); // 0x404826
                                *(int32_t *)(v24 + g3) = v25;
                                int32_t * v26 = (int32_t *)(g2 - 32); // 0x40482c_0
                                *v26 = *v26 + 1;
                                uint32_t v27 = *(int32_t *)(g2 - 32); // 0x404814
                                while (v27 < (int32_t)*(char *)(g3 + 1)) {
                                    // 0x404819
                                    v24 = 4 * v27 + 8;
                                    v25 = *(int32_t *)(*(int32_t *)(g7 + 8) + v24);
                                    *(int32_t *)(v24 + g3) = v25;
                                    v26 = (int32_t *)(g2 - 32);
                                    *v26 = *v26 + 1;
                                    v27 = *(int32_t *)(g2 - 32);
                                    // continue -> 0x404819
                                }
                                // 0x404831
                                v20 = g7;
                                if (*(char *)(v20 + 12) != 0) {
                                    // 0x404837
                                    v23 = 8 * *(int32_t *)(g2 - 28);
                                    v21 = *(int32_t *)(g5 + 72);
                                    *(int32_t *)(v20 + 20) = *(int32_t *)((v23 | 4) + v21);
                                    v22 = *(int32_t *)(g7 + 16);
                                    *(int32_t *)(*(int32_t *)(g5 + 72) + 4 + v23) = v22;
                                    // branch -> 0x404851
                                }
                                // 0x404851
                                // branch -> 0x404853
                                // 0x404853
                                *(int32_t *)(g2 - 4) = -1;
                                // branch -> 0x404887
                                // 0x404887
                                function_4082e9((int32_t)v8, v2, v1);
                                return 0;
                            }
                        }
                        int32_t v28 = g2; // 0x404859
                        int32_t * v29 = (int32_t *)(v28 - 28); // 0x404859_0
                        uint32_t v30 = *v29; // 0x404859
                        if (v30 <= 1000) {
                            // 0x404862
                            *v29 = v30 + 1;
                            int32_t v31 = g2; // 0x404865
                            int32_t v32 = *(int32_t *)(v31 - 28); // 0x404865
                            g1 = v32;
                            int32_t v33 = g5; // 0x4047e4
                            if (v32 >= *(int32_t *)(v33 + 48)) {
                                v15 = v31;
                                // break -> 0x40487b
                                break;
                            }
                            v14 = v31;
                            v12 = v33;
                            v11 = v32;
                            // continue -> 0x4047ed
                            continue;
                        } else {
                            v15 = v28;
                        }
                    }
                    // 0x40487b
                    *(int32_t *)(v15 - 4) = -1;
                    // branch -> 0x404887
                    // 0x404887
                    function_4082e9((int32_t)v8, v2, v1);
                    return 0;
                }
                // 0x40487b
                *(int32_t *)(v13 - 4) = -1;
                // branch -> 0x404887
            }
            // 0x404887
            function_4082e9((int32_t)v8, v2, v1);
            return 0;
        }
    }
    // 0x404886
    // branch -> 0x404887
    // 0x404887
    function_4082e9((int32_t)(char *)87, v2, v1);
    return 0;
}

// Address range: 0x40488d - 0x4049a4
int32_t function_40488d(int32_t a1) {
    int32_t v1 = 36; // bp-4
    int32_t v2 = &g25; // bp-8
    function_4082b0((int32_t)&g25, 36);
    int32_t v3 = g2; // 0x404899
    int32_t v4 = *(int32_t *)(v3 + 12); // 0x404899
    g7 = v4;
    if (v4 != 0) {
        // 0x4048a4
        if (*(int32_t *)(v3 + 16) == 24) {
            int32_t v5 = *(int32_t *)(v3 + 8); // 0x4048b3
            int32_t v6 = function_405371((int32_t *)v5, "RtlEqualSid", v2); // 0x4048b6
            *(int32_t *)(g2 - 40) = v6;
            if (v6 == 0) {
                // 0x40499e
                // branch -> 0x40499f
                // 0x40499f
                function_4082e9((int32_t)(char *)-63, v2, v1);
                return 0;
            }
            // 0x4048cb
            *(int32_t *)(g2 - 36) = -29;
            *(int32_t *)(g2 - 4) = 0;
            int32_t v7 = *(int32_t *)g7; // 0x4048d6
            char * v8 = (char *)v7; // bp-12
            int32_t v9 = function_4051b2(*(int32_t *)(g2 + 8), v7); // 0x4048db
            *(int32_t *)(g2 - 44) = v9;
            if (v9 == 0) {
                // 0x4048e9
                v8 = (char *)-20;
                // branch -> 0x40496b
                // 0x40496b
                *(int32_t *)(g2 - 4) = -1;
                // branch -> 0x40499f
            } else {
                int32_t v10 = *(int32_t *)(v9 + 300); // 0x4048ee
                g5 = v10;
                *(int32_t *)(g2 - 48) = v10;
                g1 = 0;
                *(int32_t *)(g2 - 28) = 0;
                int32_t v11 = g1;
                int32_t v12 = g5; // 0x4048fc47
                int32_t v13 = g2;
                if (v11 < *(int32_t *)(v12 + 60)) {
                    int32_t v14 = v13; // 0x40490b
                    int32_t v15; // 0x404993
                    while (true) {
                        int32_t v16 = *(int32_t *)(v12 + 88); // 0x404905
                        g4 = v16;
                        int32_t v17 = *(int32_t *)(v16 + 8 * v11); // 0x404908
                        g3 = v17;
                        *(int32_t *)(v14 - 52) = v17;
                        int32_t v18 = *(int32_t *)(g7 + 4); // 0x40490e
                        v8 = (char *)v18;
                        ((int32_t (*)(int32_t, int32_t))*(int32_t *)(g2 - 40))(g3, v18);
                        if (g1 != 0) {
                            // 0x404919
                            if (*(char *)(g3 + 1) == *(char *)(*(int32_t *)(g7 + 8) + 1)) {
                                // 0x404924
                                *(int32_t *)(g2 - 32) = 0;
                                uint32_t v19 = *(int32_t *)(g2 - 32); // 0x40492c43
                                int32_t v20; // 0x404949
                                int32_t v21; // 0x404955
                                int32_t v22; // 0x404962
                                int32_t v23; // 0x404952
                                if (v19 >= (int32_t)*(char *)(g3 + 1)) {
                                    // 0x404949
                                    v20 = g7;
                                    if (*(char *)(v20 + 12) != 0) {
                                        // 0x40494f
                                        v23 = 8 * *(int32_t *)(g2 - 28);
                                        v21 = *(int32_t *)(g5 + 88);
                                        *(int32_t *)(v20 + 20) = *(int32_t *)((v23 | 4) + v21);
                                        v22 = *(int32_t *)(g7 + 16);
                                        *(int32_t *)(*(int32_t *)(g5 + 88) + 4 + v23) = v22;
                                        // branch -> 0x404969
                                    }
                                    // 0x404969
                                    // branch -> 0x40496b
                                    // 0x40496b
                                    *(int32_t *)(g2 - 4) = -1;
                                    // branch -> 0x40499f
                                    // 0x40499f
                                    function_4082e9((int32_t)v8, v2, v1);
                                    return 0;
                                }
                                int32_t v24 = 4 * v19 + 8; // 0x404934
                                int32_t v25 = *(int32_t *)(*(int32_t *)(g7 + 8) + v24); // 0x40493e
                                *(int32_t *)(v24 + g3) = v25;
                                int32_t * v26 = (int32_t *)(g2 - 32); // 0x404944_0
                                *v26 = *v26 + 1;
                                uint32_t v27 = *(int32_t *)(g2 - 32); // 0x40492c
                                while (v27 < (int32_t)*(char *)(g3 + 1)) {
                                    // 0x404931
                                    v24 = 4 * v27 + 8;
                                    v25 = *(int32_t *)(*(int32_t *)(g7 + 8) + v24);
                                    *(int32_t *)(v24 + g3) = v25;
                                    v26 = (int32_t *)(g2 - 32);
                                    *v26 = *v26 + 1;
                                    v27 = *(int32_t *)(g2 - 32);
                                    // continue -> 0x404931
                                }
                                // 0x404949
                                v20 = g7;
                                if (*(char *)(v20 + 12) != 0) {
                                    // 0x40494f
                                    v23 = 8 * *(int32_t *)(g2 - 28);
                                    v21 = *(int32_t *)(g5 + 88);
                                    *(int32_t *)(v20 + 20) = *(int32_t *)((v23 | 4) + v21);
                                    v22 = *(int32_t *)(g7 + 16);
                                    *(int32_t *)(*(int32_t *)(g5 + 88) + 4 + v23) = v22;
                                    // branch -> 0x404969
                                }
                                // 0x404969
                                // branch -> 0x40496b
                                // 0x40496b
                                *(int32_t *)(g2 - 4) = -1;
                                // branch -> 0x40499f
                                // 0x40499f
                                function_4082e9((int32_t)v8, v2, v1);
                                return 0;
                            }
                        }
                        int32_t v28 = g2; // 0x404971
                        int32_t * v29 = (int32_t *)(v28 - 28); // 0x404971_0
                        uint32_t v30 = *v29; // 0x404971
                        if (v30 <= 1000) {
                            // 0x40497a
                            *v29 = v30 + 1;
                            int32_t v31 = g2; // 0x40497d
                            int32_t v32 = *(int32_t *)(v31 - 28); // 0x40497d
                            g1 = v32;
                            int32_t v33 = g5; // 0x4048fc
                            if (v32 >= *(int32_t *)(v33 + 60)) {
                                v15 = v31;
                                // break -> 0x404993
                                break;
                            }
                            v14 = v31;
                            v12 = v33;
                            v11 = v32;
                            // continue -> 0x404905
                            continue;
                        } else {
                            v15 = v28;
                        }
                    }
                    // 0x404993
                    *(int32_t *)(v15 - 4) = -1;
                    // branch -> 0x40499f
                    // 0x40499f
                    function_4082e9((int32_t)v8, v2, v1);
                    return 0;
                }
                // 0x404993
                *(int32_t *)(v13 - 4) = -1;
                // branch -> 0x40499f
            }
            // 0x40499f
            function_4082e9((int32_t)v8, v2, v1);
            return 0;
        }
    }
    // 0x40499e
    // branch -> 0x40499f
    // 0x40499f
    function_4082e9((int32_t)(char *)87, v2, v1);
    return 0;
}

// Address range: 0x4049a5 - 0x404a43
int32_t function_4049a5(int32_t a1) {
    int32_t v1 = &g26; // bp-8
    function_4082b0((int32_t)&g26, 48);
    int32_t v2 = g2; // 0x4049b1
    g7 = *(int32_t *)(v2 + 12);
    int32_t v3 = *(int32_t *)(v2 + 8); // 0x4049cb
    g5 = v3;
    int32_t v4 = function_405371((int32_t *)v3, "RtlEqualSid", v1); // 0x4049cf
    *(int32_t *)(g2 - 48) = v4;
    if (v4 == 0) {
        // 0x4049dd
        function_404b2b();
        // branch -> 0x4049e4
    }
    // 0x4049e4
    *(int32_t *)(g2 - 44) = -29;
    *(int32_t *)(g2 - 4) = 0;
    int32_t v5 = *(int32_t *)g7; // 0x4049ef
    int32_t v6 = function_4051b2(g5, v5); // 0x4049f2
    g4 = (int32_t)(char *)v5;
    *(int32_t *)(g2 - 40) = v6;
    if (v6 == 0) {
        // 0x404a00
        function_404a44(v1);
        // branch -> 0x404a04
    }
    int32_t v7 = g5; // 0x404a09
    int32_t v8 = function_405371((int32_t *)v7, "PsReferencePrimaryToken", v1); // 0x404a0a
    *(int32_t *)(g2 - 36) = v8;
    int32_t result = function_405371((int32_t *)g5, "PsDereferencePrimaryToken", v7); // 0x404a18
    g1 = result;
    *(int32_t *)(g2 - 52) = result;
    int32_t v9 = g2; // 0x404a23
    ((int32_t (*)(int32_t))*(int32_t *)(v9 - 36))(*(int32_t *)(v9 - 40));
    *(int32_t *)(g2 - 56) = result;
    return result;
}

// Address range: 0x404a44 - 0x404afb
int32_t function_404a44(int32_t a1) {
    // 0x404a44
    *(int32_t *)(g2 - 4) = -1;
    function_404b2c();
    return 0;
}

// Address range: 0x404afc - 0x404b08
int32_t function_404afc(void) {
    int32_t v1 = g2; // 0x404afc
    int32_t result = *(int32_t *)(v1 - 40) + 200; // 0x404aff
    g1 = result;
    ((int32_t (*)(int32_t))*(int32_t *)(v1 - 52))(result);
    return result;
}

// Address range: 0x404b09 - 0x404b15
int32_t function_404b09(void) {
    // 0x404b09
    function_404b20();
    return 0;
}

// Address range: 0x404b16 - 0x404b1f
int32_t function_404b16(int32_t a1) {
    // 0x404b16
    *(int32_t *)(g2 - 44) = -28;
    return *(int32_t *)(g2 - 24);
}

// Address range: 0x404b20 - 0x404b2a
int32_t function_404b20(void) {
    // 0x404b20
    *(int32_t *)(g2 - 4) = -1;
    function_404b2c();
    return 0;
}

// Address range: 0x404b2b - 0x404b2b
int32_t function_404b2b(void) {
    // 0x404b2b
    int32_t result;
    return result;
}

// Address range: 0x404b2c - 0x404b31
int32_t function_404b2c(void) {
    // 0x404b2c
    int32_t v1;
    int32_t v2;
    function_4082e9(v1, v2, 0);
    return 0;
}

// Address range: 0x404b32 - 0x404bd0
int32_t function_404b32(int32_t a1) {
    int32_t v1 = &g27; // bp-8
    function_4082b0((int32_t)&g27, 48);
    int32_t v2 = g2; // 0x404b3e
    g7 = *(int32_t *)(v2 + 12);
    int32_t v3 = *(int32_t *)(v2 + 8); // 0x404b58
    g5 = v3;
    int32_t v4 = function_405371((int32_t *)v3, "RtlEqualSid", v1); // 0x404b5c
    *(int32_t *)(g2 - 48) = v4;
    if (v4 == 0) {
        // 0x404b6a
        function_404cb8();
        // branch -> 0x404b71
    }
    // 0x404b71
    *(int32_t *)(g2 - 44) = -29;
    *(int32_t *)(g2 - 4) = 0;
    int32_t v5 = *(int32_t *)g7; // 0x404b7c
    int32_t v6 = function_4051b2(g5, v5); // 0x404b7f
    g4 = (int32_t)(char *)v5;
    *(int32_t *)(g2 - 40) = v6;
    if (v6 == 0) {
        // 0x404b8d
        function_404bd1(v1);
        // branch -> 0x404b91
    }
    int32_t v7 = g5; // 0x404b96
    int32_t v8 = function_405371((int32_t *)v7, "PsReferencePrimaryToken", v1); // 0x404b97
    *(int32_t *)(g2 - 36) = v8;
    int32_t result = function_405371((int32_t *)g5, "PsDereferencePrimaryToken", v7); // 0x404ba5
    g1 = result;
    *(int32_t *)(g2 - 52) = result;
    int32_t v9 = g2; // 0x404bb0
    ((int32_t (*)(int32_t))*(int32_t *)(v9 - 36))(*(int32_t *)(v9 - 40));
    *(int32_t *)(g2 - 56) = result;
    return result;
}

// Address range: 0x404bd1 - 0x404c88
int32_t function_404bd1(int32_t a1) {
    // 0x404bd1
    *(int32_t *)(g2 - 4) = -1;
    function_404cb9();
    return 0;
}

// Address range: 0x404c89 - 0x404c95
int32_t function_404c89(void) {
    int32_t v1 = g2; // 0x404c89
    int32_t result = *(int32_t *)(v1 - 40) + 200; // 0x404c8c
    g1 = result;
    ((int32_t (*)(int32_t))*(int32_t *)(v1 - 52))(result);
    return result;
}

// Address range: 0x404c96 - 0x404ca2
int32_t function_404c96(void) {
    // 0x404c96
    function_404cad();
    return 0;
}

// Address range: 0x404ca3 - 0x404cac
int32_t function_404ca3(int32_t a1) {
    // 0x404ca3
    *(int32_t *)(g2 - 44) = -28;
    return *(int32_t *)(g2 - 24);
}

// Address range: 0x404cad - 0x404cb7
int32_t function_404cad(void) {
    // 0x404cad
    *(int32_t *)(g2 - 4) = -1;
    function_404cb9();
    return 0;
}

// Address range: 0x404cb8 - 0x404cb8
int32_t function_404cb8(void) {
    // 0x404cb8
    int32_t result;
    return result;
}

// Address range: 0x404cb9 - 0x404cbe
int32_t function_404cb9(void) {
    // 0x404cb9
    int32_t v1;
    int32_t v2;
    function_4082e9(v1, v2, 0);
    return 0;
}

// Address range: 0x404cbf - 0x404d5d
int32_t function_404cbf(int32_t a1) {
    int32_t v1 = &g28; // bp-8
    function_4082b0((int32_t)&g28, 48);
    int32_t v2 = g2; // 0x404ccb
    g7 = *(int32_t *)(v2 + 12);
    int32_t v3 = *(int32_t *)(v2 + 8); // 0x404ce5
    g5 = v3;
    int32_t v4 = function_405371((int32_t *)v3, "RtlEqualSid", v1); // 0x404ce9
    *(int32_t *)(g2 - 48) = v4;
    if (v4 == 0) {
        // 0x404cf7
        function_404e45();
        // branch -> 0x404cfe
    }
    // 0x404cfe
    *(int32_t *)(g2 - 44) = -29;
    *(int32_t *)(g2 - 4) = 0;
    int32_t v5 = *(int32_t *)g7; // 0x404d09
    int32_t v6 = function_4051b2(g5, v5); // 0x404d0c
    g4 = (int32_t)(char *)v5;
    *(int32_t *)(g2 - 40) = v6;
    if (v6 == 0) {
        // 0x404d1a
        function_404d5e(v1);
        // branch -> 0x404d1e
    }
    int32_t v7 = g5; // 0x404d23
    int32_t v8 = function_405371((int32_t *)v7, "PsReferencePrimaryToken", v1); // 0x404d24
    *(int32_t *)(g2 - 36) = v8;
    int32_t result = function_405371((int32_t *)g5, "PsDereferencePrimaryToken", v7); // 0x404d32
    g1 = result;
    *(int32_t *)(g2 - 52) = result;
    int32_t v9 = g2; // 0x404d3d
    ((int32_t (*)(int32_t))*(int32_t *)(v9 - 36))(*(int32_t *)(v9 - 40));
    *(int32_t *)(g2 - 56) = result;
    return result;
}

// Address range: 0x404d5e - 0x404e15
int32_t function_404d5e(int32_t a1) {
    // 0x404d5e
    *(int32_t *)(g2 - 4) = -1;
    function_404e46();
    return 0;
}

// Address range: 0x404e16 - 0x404e22
int32_t function_404e16(void) {
    int32_t v1 = g2; // 0x404e16
    int32_t result = *(int32_t *)(v1 - 40) + 216; // 0x404e19
    g1 = result;
    ((int32_t (*)(int32_t))*(int32_t *)(v1 - 52))(result);
    return result;
}

// Address range: 0x404e23 - 0x404e2f
int32_t function_404e23(void) {
    // 0x404e23
    function_404e3a();
    return 0;
}

// Address range: 0x404e30 - 0x404e39
int32_t function_404e30(int32_t a1) {
    // 0x404e30
    *(int32_t *)(g2 - 44) = -28;
    return *(int32_t *)(g2 - 24);
}

// Address range: 0x404e3a - 0x404e44
int32_t function_404e3a(void) {
    // 0x404e3a
    *(int32_t *)(g2 - 4) = -1;
    function_404e46();
    return 0;
}

// Address range: 0x404e45 - 0x404e45
int32_t function_404e45(void) {
    // 0x404e45
    int32_t result;
    return result;
}

// Address range: 0x404e46 - 0x404e4b
int32_t function_404e46(void) {
    // 0x404e46
    int32_t v1;
    int32_t v2;
    function_4082e9(v1, v2, 0);
    return 0;
}

// Address range: 0x404e4c - 0x404eea
int32_t function_404e4c(int32_t a1) {
    int32_t v1 = &g29; // bp-8
    function_4082b0((int32_t)&g29, 52);
    int32_t v2 = g2; // 0x404e58
    g7 = *(int32_t *)(v2 + 12);
    int32_t v3 = *(int32_t *)(v2 + 8); // 0x404e72
    g5 = v3;
    int32_t v4 = function_405371((int32_t *)v3, "RtlEqualSid", v1); // 0x404e76
    *(int32_t *)(g2 - 48) = v4;
    if (v4 == 0) {
        // 0x404e84
        function_40500b();
        // branch -> 0x404e8b
    }
    // 0x404e8b
    *(int32_t *)(g2 - 36) = -29;
    *(int32_t *)(g2 - 4) = 0;
    int32_t v5 = *(int32_t *)g7; // 0x404e96
    int32_t v6 = function_4051b2(g5, v5); // 0x404e99
    g4 = (int32_t)(char *)v5;
    *(int32_t *)(g2 - 44) = v6;
    if (v6 == 0) {
        // 0x404ea7
        function_404eeb(v1);
        // branch -> 0x404eab
    }
    int32_t v7 = g5; // 0x404eb0
    int32_t v8 = function_405371((int32_t *)v7, "PsReferencePrimaryToken", v1); // 0x404eb1
    *(int32_t *)(g2 - 40) = v8;
    int32_t result = function_405371((int32_t *)g5, "PsDereferencePrimaryToken", v7); // 0x404ebf
    g1 = result;
    *(int32_t *)(g2 - 52) = result;
    int32_t v9 = g2; // 0x404eca
    ((int32_t (*)(int32_t))*(int32_t *)(v9 - 40))(*(int32_t *)(v9 - 44));
    *(int32_t *)(g2 - 56) = result;
    return result;
}

// Address range: 0x404eeb - 0x404fdb
int32_t function_404eeb(int32_t a1) {
    // 0x404eeb
    *(int32_t *)(g2 - 4) = -1;
    g4 = function_40500c();
    int32_t result;
    return result;
}

// Address range: 0x404fdc - 0x404fe8
int32_t function_404fdc(void) {
    int32_t v1 = g2; // 0x404fdc
    int32_t result = *(int32_t *)(v1 - 44) + 224; // 0x404fdf
    g1 = result;
    ((int32_t (*)(int32_t))*(int32_t *)(v1 - 52))(result);
    return result;
}

// Address range: 0x404fe9 - 0x404ff5
int32_t function_404fe9(void) {
    // 0x404fe9
    int32_t v1;
    return function_405000(v1);
}

// Address range: 0x404ff6 - 0x404fff
int32_t function_404ff6(int32_t a1) {
    // 0x404ff6
    *(int32_t *)(g2 - 36) = -28;
    return *(int32_t *)(g2 - 24);
}

// Address range: 0x405000 - 0x40500a
int32_t function_405000(int32_t a1) {
    // 0x405000
    *(int32_t *)(g2 - 4) = -1;
    function_40500c();
    return *(int32_t *)(g2 - 36);
}

// Address range: 0x40500b - 0x40500b
int32_t function_40500b(void) {
    // 0x40500b
    int32_t result;
    return result;
}

// Address range: 0x40500c - 0x405011
int32_t function_40500c(void) {
    // 0x40500c
    int32_t v1;
    int32_t v2;
    function_4082e9(v1, v2, 0);
    return g4;
}

// Address range: 0x405012 - 0x40513d
int32_t function_405012(uint32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t * a6) {
    int32_t v1;
    uint16_t v2 = (int16_t)v1;
    int32_t v3;
    g2 = &v3;
    if (a6 != NULL) {
        // 0x405024
        *a6 = 0;
        // branch -> 0x405027
    }
    // 0x405027
    g7 = a1;
    int32_t result3; // 0x40513d_2
    if (a1 > 9) {
        // 0x405038
        int32_t v4;
        int32_t result2 = &v4; // 0x40503c_0
        memset((char *)&v4, 0, 24);
        v4 = g7;
        int32_t v5 = GetVersion(); // 0x405065
        int32_t v6 = v5 & 255; // 0x40506d
        g5 = -66;
        if (v6 == 4) {
            // 0x405101
            function_407bf0();
            // branch -> 0x405134
        } else {
            // 0x40507c
            int32_t result; // 0x405134
            if (v6 == 5) {
                // 0x405096
                int32_t lpVersionInformation;
                memset((char *)&lpVersionInformation, 0, 156);
                lpVersionInformation = 156;
                GetVersionExA((struct _OSVERSIONINFOA *)&lpVersionInformation);
                int32_t v7 = v5 / 256 & 255; // 0x4050b7
                if (v7 == 0) {
                    // 0x4050f4
                    // branch -> 0x40511a
                } else {
                    // 0x4050bf
                    if (v7 != 1) {
                        // 0x4050c2
                        if (v7 == 2) {
                            // 0x4050c5
                            if (v2 == 0) {
                                // 0x4050ed
                                // branch -> 0x40511a
                            }
                            // 0x40511a
                            function_4059db();
                            result = result2;
                            // branch -> 0x405134
                        } else {
                            // 0x4050c2
                            result = g5;
                            // branch -> 0x405134
                        }
                        // 0x405134
                        // branch -> 0x405138
                        // 0x405138
                        return result;
                    }
                    // 0x4050d9
                    if (v2 <= 1) {
                        // 0x4050e6
                        // branch -> 0x40511a
                        // 0x40511a
                        function_4059db();
                        // branch -> 0x405134
                        // 0x405134
                        // branch -> 0x405138
                        // 0x405138
                        return result2;
                    }
                    // 0x4050ed
                    // branch -> 0x40511a
                }
                // 0x40511a
                function_4059db();
                // branch -> 0x405134
                // 0x405134
                // branch -> 0x405138
                // 0x405138
                return result2;
            }
            // 0x40507f
            result = -66;
            if (v6 == 6) {
                // 0x405086
                // branch -> 0x40511a
                // 0x40511a
                function_4059db();
                result = result2;
                // branch -> 0x405134
            }
            // 0x405134
            // branch -> 0x405138
            // 0x405138
            return result;
        }
        // 0x405134
        result3 = -30;
        // branch -> 0x405138
    } else {
        // 0x405030
        result3 = -26;
        // branch -> 0x405138
    }
    // 0x405138
    return result3;
}

// Address range: 0x40513e - 0x4051b1
int32_t function_40513e(int32_t a1, int32_t a2) {
    int32_t v1 = g7; // 0x405146
    g7 = a1;
    int32_t v2 = function_405371((int32_t *)a1, "PsGetCurrentProcess", v1); // 0x405150
    g1 = v2;
    g4 = (int32_t)"PsGetCurrentProcess";
    int32_t v3;
    int32_t result;
    if (v2 != 0) {
        // 0x40515b
        ((int32_t (*)())v2)();
        result = v2;
        // branch -> 0x4051af
        // 0x4051af
        g1 = result;
        g7 = v1;
        g2 = v3;
        return result;
    }
    // 0x405162
    if (g7 != 0) {
        int32_t v4 = *(int32_t *)(g7 + 8); // 0x40516a
        int32_t v5; // 0x40519317
        if (v4 == 5) {
            // 0x405172
            if (*(int32_t *)(g7 + 12) == 2) {
                // 0x405178
                if (*(int16_t *)(g7 + 16) != 0) {
                    // 0x40517f
                    result = *(int32_t *)(*(int32_t *)292 + 56);
                    // branch -> 0x4051af
                    // 0x4051af
                    g1 = result;
                    g7 = v1;
                    g2 = v3;
                    return result;
                }
            }
            // 0x40518d
            v5 = *(int32_t *)292;
            // branch -> 0x4051a0
        } else {
            int32_t v6 = *(int32_t *)292; // 0x405193
            if (v4 == 6) {
                // 0x405192
                result = *(int32_t *)(v6 + 72);
                // branch -> 0x4051af
                // 0x4051af
                g1 = result;
                g7 = v1;
                g2 = v3;
                return result;
            }
            v5 = v6;
        }
        // 0x4051a0
        result = *(int32_t *)(v5 + 68);
        // branch -> 0x4051af
    } else {
        result = 0;
    }
    // 0x4051af
    g1 = result;
    g7 = v1;
    g2 = v3;
    return result;
}

// Address range: 0x4051b2 - 0x405370
int32_t function_4051b2(int32_t a1, int32_t a2) {
    int32_t v1 = g7; // 0x4051b8
    g7 = 0;
    int32_t result2; // 0x405209_2
    int32_t v2;
    if (a1 == 0) {
        // 0x405205
        g1 = 0;
        result2 = 0;
        // branch -> 0x405207
    } else {
        int32_t v3 = *(int32_t *)(a1 + 8); // 0x4051bf
        g4 = v3 - 4;
        if (v3 == 4) {
            int32_t result = function_40513e(a1, v1); // 0x405327
            g1 = result;
            g6 = a2;
            g4 = result;
            if (*(int32_t *)(result + 148) == a2) {
                // 0x405207
                g7 = v1;
                g2 = v2;
                return result;
            }
            int32_t v4 = result; // 0x40533e
            while (true) {
                int32_t v5 = *(int32_t *)(v4 + 152); // 0x40533e
                int32_t v6 = v5 - 152; // 0x405344
                g1 = v6;
                if (v5 != 152 && v6 != result) {
                    int32_t v7 = g7 + 1; // 0x405357
                    g7 = v7;
                    if (v7 <= 1000) {
                        // 0x405364
                        if (*(int32_t *)(v5 - 4) == a2) {
                            result2 = v6;
                            // break -> 0x405207
                            break;
                        }
                        v4 = v6;
                        // continue -> 0x40533e
                        continue;
                    }
                }
            }
            // 0x405207
            g7 = v1;
            g2 = v2;
            return result2;
        }
        // 0x4051cb
        if (v3 != 5) {
            int32_t v8 = v3 - 6; // 0x4051ce
            g4 = v8;
            if (v8 == 0) {
                int32_t v9 = function_40513e(a1, v1); // 0x4051d2
                g1 = v9;
                g4 = v9;
                g6 = 0;
                if (v9 != g7) {
                    int32_t v10 = 0; // 0x4051fc
                    int32_t v11 = v9; // 0x4051eb
                    while (true) {
                        // 0x4051e0
                        if (*(int32_t *)(v11 + 156) != a2) {
                            int32_t v12 = *(int32_t *)(v11 + 160); // 0x4051eb
                            int32_t v13 = v12 - 160; // 0x4051f1
                            g1 = v13;
                            if (v12 != 160 && v13 != v9) {
                                int32_t v14 = v10 + 1; // 0x4051fc
                                g6 = v14;
                                if (v14 >= 1001) {
                                    // break -> 0x405205
                                    break;
                                }
                                v10 = v14;
                                v11 = v13;
                                // continue -> 0x4051e0
                                continue;
                            }
                            // 0x405205
                            g1 = 0;
                            // branch -> 0x405207
                            // 0x405207
                            g7 = v1;
                            g2 = v2;
                            return 0;
                        }
                    }
                    // 0x405205
                    g1 = 0;
                    result2 = 0;
                    // branch -> 0x405207
                } else {
                    result2 = v9;
                }
            } else {
                // 0x405205
                g1 = 0;
                result2 = 0;
                // branch -> 0x405207
            }
            // 0x405207
            g7 = v1;
            g2 = v2;
            return result2;
        }
        int32_t v15 = *(int32_t *)(a1 + 12); // 0x40520a
        g4 = v15;
        switch (v15) {
            case 0: {
                int32_t result3 = function_40513e(a1, v1); // 0x405212
                g1 = result3;
                g6 = a2;
                g4 = result3;
                if (*(int32_t *)(result3 + 156) == a2) {
                    // 0x405207
                    g7 = v1;
                    g2 = v2;
                    return result3;
                }
                int32_t v16 = result3; // 0x405225
                while (true) {
                    int32_t v17 = *(int32_t *)(v16 + 160); // 0x405225
                    int32_t v18 = v17 - 160; // 0x40522b
                    g1 = v18;
                    if (v17 != 160 && v18 != result3) {
                        int32_t v19 = g7 + 1; // 0x405236
                        g7 = v19;
                        if (v19 <= 1000) {
                            // 0x40523f
                            if (*(int32_t *)(v17 - 4) == a2) {
                                result2 = v18;
                                // break (via goto) -> 0x405207
                                goto lab_0x405207_3;
                            }
                            v16 = v18;
                            // continue -> 0x405225
                            continue;
                        }
                    }
                }
                // 0x405207
                g7 = v1;
                g2 = v2;
                return result2;
            }
            case 1: {
                int32_t result4 = function_40513e(a1, v1); // 0x40524f
                g1 = result4;
                g6 = a2;
                g4 = result4;
                if (*(int32_t *)(result4 + 132) == a2) {
                    // 0x405207
                    g7 = v1;
                    g2 = v2;
                    return result4;
                }
                int32_t v20 = result4; // 0x405262
                while (true) {
                    int32_t v21 = *(int32_t *)(v20 + 136); // 0x405262
                    int32_t v22 = v21 - 136; // 0x405268
                    g1 = v22;
                    if (v21 != 136 && v22 != result4) {
                        int32_t v23 = g7 + 1; // 0x405273
                        g7 = v23;
                        if (v23 <= 1000) {
                            // 0x40527c
                            if (*(int32_t *)(v21 - 4) == a2) {
                                result2 = v22;
                                // break (via goto) -> 0x405207
                                goto lab_0x405207_3;
                            }
                            v20 = v22;
                            // continue -> 0x405262
                            continue;
                        }
                    }
                }
                // 0x405207
                g7 = v1;
                g2 = v2;
                return result2;
            }
            case 2: {
                int32_t result5 = function_40513e(a1, v1); // 0x405296
                g1 = result5;
                if (*(int16_t *)(a1 + 16) == 0) {
                    // 0x405296
                    g6 = a2;
                    g4 = result5;
                    if (*(int32_t *)(result5 + 132) != a2) {
                        int32_t v24 = result5; // 0x4052ad
                        while (true) {
                            int32_t v25 = *(int32_t *)(v24 + 136); // 0x4052ad
                            int32_t v26 = v25 - 136; // 0x4052b3
                            g1 = v26;
                            if (v25 != 136 && v26 != result5) {
                                int32_t v27 = g7 + 1; // 0x4052c6
                                g7 = v27;
                                if (v27 <= 1000) {
                                    // 0x4052d3
                                    if (*(int32_t *)(v25 - 4) == a2) {
                                        result2 = v26;
                                        // break (via goto) -> 0x405207
                                        goto lab_0x405207_3;
                                    }
                                    v24 = v26;
                                    // continue -> 0x4052ad
                                    continue;
                                }
                            }
                            // 0x405205
                            g1 = 0;
                            // branch -> 0x405207
                            // 0x405207
                            g7 = v1;
                            g2 = v2;
                            return 0;
                        }
                    }
                } else {
                    // 0x4052e0
                    g4 = result5;
                    if (result5 != g7) {
                        int32_t v28 = g7; // 0x405318
                        int32_t v29 = result5; // 0x4052ff
                        while (true) {
                            int32_t v30 = *(int32_t *)(v29 + 148); // 0x4052f0
                            g6 = v30;
                            if (v30 != a2) {
                                int32_t v31 = *(int32_t *)(v29 + 152); // 0x4052ff
                                int32_t v32 = v31 - 152; // 0x405305
                                g1 = v32;
                                if (v31 != 152 && v32 != result5) {
                                    int32_t v33 = v28 + 1; // 0x405318
                                    if (v33 >= 1001) {
                                        // break (via goto) -> 0x405205
                                        goto lab_0x405205;
                                    }
                                    v28 = v33;
                                    v29 = v32;
                                    // continue -> 0x4052f0
                                    continue;
                                }
                                // 0x405205
                                g1 = 0;
                                // branch -> 0x405207
                                // 0x405207
                                g7 = v1;
                                g2 = v2;
                                return 0;
                            }
                        }
                        // 0x405205
                        g1 = 0;
                        result2 = 0;
                        // branch -> 0x405207
                    }
                }
                // 0x405207
                g7 = v1;
                g2 = v2;
                return result5;
            }
        }
        // 0x405205
        g1 = 0;
        // branch -> 0x405207
        // 0x405207
        g7 = v1;
        g2 = v2;
        return 0;
      lab_0x405205:
        // 0x405205
        g1 = 0;
        result2 = 0;
        // branch -> 0x405207
    }
  lab_0x405207_3:
    // 0x405207
    g7 = v1;
    g2 = v2;
    return result2;
}

// Address range: 0x405371 - 0x4053da
int32_t function_405371(int32_t * hModule, char * lpProcName, int32_t a3) {
    int32_t v1 = (int32_t)hModule;
    int32_t v2 = v1;
    int32_t v3;
    g2 = &v3;
    int32_t v4 = g4; // bp-12
    int32_t v5 = &v4; // 0x405375_0
    int32_t v6 = g7; // 0x405376
    g7 = v1;
    int32_t v7 = g5; // 0x40537c
    if (hModule == NULL) {
        // 0x4053d7
        g5 = v7;
        g7 = v6;
        g2 = v3;
        return 0;
    }
    // 0x40537f
    g5 = (int32_t)lpProcName;
    if (lpProcName == NULL) {
        // 0x4053d7
        g5 = v7;
        g7 = v6;
        g2 = v3;
        return 0;
    }
    // 0x405386
    int32_t result;
    int32_t func; // 0x4053d1
    int32_t v8; // 0x4053cc
    if (*(int32_t *)(v1 + 24) == 0) {
        // 0x4053be
        func = (int32_t)GetProcAddress((char *)*hModule, lpProcName);
        // branch -> 0x4053c8
        // 0x4053c8
        g4 = func;
        if (func != 0) {
            // 0x4053cc
            v8 = g7;
            result = *(int32_t *)(v8 + 4) - *(int32_t *)v8 + func;
            // branch -> 0x4053d7
        } else {
            result = 0;
        }
        // 0x4053d7
        g5 = v7;
        g7 = v6;
        g2 = v3;
        return result;
    }
    // 0x40538d
    v2 = 0;
    v4 = 0x10000 * strlen(lpProcName) / 0x10000;
    g4 = (int32_t)lpProcName;
    g1 = v5;
    int32_t v9 = g7; // 0x4053ad
    int32_t v10 = *(int32_t *)v9; // 0x4053ad
    int32_t v11 = *(int32_t *)(v9 + 24); // 0x4053b2
    ((int32_t (*)(int32_t, int32_t, int32_t, int32_t))v11)(v10, v5, 0, (int32_t)&v2);
    if (g1 == 0) {
        // 0x4053b9
        func = v2;
        // branch -> 0x4053c8
        // 0x4053c8
        g4 = func;
        if (func != 0) {
            // 0x4053cc
            v8 = g7;
            result = *(int32_t *)(v8 + 4) - *(int32_t *)v8 + func;
            // branch -> 0x4053d7
        } else {
            result = 0;
        }
        // 0x4053d7
        g5 = v7;
        g7 = v6;
        g2 = v3;
        return result;
    }
    // 0x4053d7
    g5 = v7;
    g7 = v6;
    g2 = v3;
    return 0;
}

// Address range: 0x4053db - 0x4054cf
int32_t function_4053db(int32_t * a1, uint32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7) {
    int32_t v1 = (int32_t)a1;
    int32_t v2 = 0; // 0x4054a6
    int32_t v3 = g6 - 0x1000; // 0x4054a5
    // branch -> 0x4053ec
    int32_t v4;
    while (true) {
        int32_t v5 = v3 + 1; // 0x4053f5
        int32_t v6; // 0x4054a6
        if (*(char *)v3 == 85) {
            // 0x4053f5
            if (*(char *)v5 == -117) {
                // 0x4053ff
                if (*(char *)(v3 + 2) == -20) {
                    int32_t v7 = 0; // 0x40549b47
                    int32_t v8 = v3; // 0x405433
                    // branch -> 0x40540d
                  lab_0x40540d:
                    while (true) {
                        // 0x40540d
                        int32_t v9; // 0x40549b
                        if (*(char *)v8 == -24) {
                            unsigned char v10 = *(char *)(v8 + 4); // 0x405416
                            unsigned char v11 = *(char *)(v8 + 3); // 0x40541a
                            unsigned char v12 = *(char *)(v8 + 2); // 0x405423
                            unsigned char v13 = *(char *)(v8 + 1); // 0x40542c
                            int32_t v14 = v8 + 5 + (int32_t)v13 + 256 * (256 * ((int32_t)v11 | 256 * (int32_t)v10) | (int32_t)v12); // 0x405435
                            g1 = v14;
                            if (v14 >= a2) {
                                // 0x405440
                                if (v14 <= a3 + a2) {
                                    int32_t v15 = 0; // 0x40545f
                                    // branch -> 0x40544b
                                    while (true) {
                                        int32_t v16 = v14 + 1; // 0x405450
                                        if (*(char *)v14 == -1) {
                                            // 0x405450
                                            if (*(char *)v16 == 21) {
                                                // 0x405456
                                                if (*(int32_t *)(v14 + 2) == a4) {
                                                    int32_t v17 = 0; // 0x405494
                                                    int32_t v18 = v8; // 0x40547f
                                                    int32_t v19 = v14 + 6; // 0x405493
                                                    // branch -> 0x40546c
                                                    int32_t v20; // 0x40549a
                                                    while (true) {
                                                        int32_t v21 = v19 + 1; // 0x405471
                                                        int32_t v22 = v18; // 0x40547f42
                                                        if (*(char *)v19 == -1) {
                                                            // 0x405471
                                                            if (*(char *)v21 == 21) {
                                                                // 0x405477
                                                                if (*(int32_t *)(v19 + 2) == a5) {
                                                                    int32_t v23 = v18 + 5; // 0x40547f
                                                                    if (*(char *)v23 == -123) {
                                                                        // 0x405487
                                                                        if (*(char *)(v18 + 6) == -64) {
                                                                            int32_t v24 = v18 + 7; // 0x40548d
                                                                            if (*(char *)v24 == 116) {
                                                                                // 0x4054bd
                                                                                *(int32_t *)(v1 + 20) = v24 + *(int32_t *)(v1 + 4) - *a1;
                                                                                // branch -> 0x4054b8
                                                                                // 0x4054b8
                                                                                g2 = v4;
                                                                                return v1 & -256 | 1;
                                                                            }
                                                                            v22 = v23;
                                                                        } else {
                                                                            v22 = v23;
                                                                        }
                                                                    } else {
                                                                        v22 = v23;
                                                                    }
                                                                } else {
                                                                    v22 = v18;
                                                                }
                                                            } else {
                                                                v22 = v18;
                                                            }
                                                        }
                                                        // 0x405493
                                                        g1 = v21;
                                                        int32_t v25 = v17 + 1; // 0x405494
                                                        if (v25 >= 20) {
                                                            v20 = v22;
                                                            // break -> 0x40549a
                                                            break;
                                                        }
                                                        v17 = v25;
                                                        v18 = v22;
                                                        v19 = v21;
                                                        // continue -> 0x40546c
                                                    }
                                                    // 0x40549a
                                                    // branch -> 0x40549b
                                                  lab_0x40549b_2:
                                                    // 0x40549b
                                                    v9 = v7 + 1;
                                                    if (v9 >= 50) {
                                                        // break (via goto) -> 0x4054a5
                                                        goto lab_0x4054a5;
                                                    }
                                                    v7 = v9;
                                                    v8 = v20 + 1;
                                                    // continue (via goto) -> 0x40540d
                                                    goto lab_0x40540d;
                                                }
                                            }
                                        }
                                        // 0x40545e
                                        g1 = v16;
                                        int32_t v26 = v15 + 1; // 0x40545f
                                        if (v26 >= 50) {
                                            // break -> 0x40549a
                                            break;
                                        }
                                        v15 = v26;
                                        v14 = v16;
                                        // continue -> 0x40544b
                                    }
                                    // 0x40549a
                                    // branch -> 0x40549b
                                    goto lab_0x40549b_2;
                                }
                            }
                        } else {
                            // 0x40549a
                            // branch -> 0x40549b
                            goto lab_0x40549b_2;
                        }
                        // 0x40549b
                        v9 = v7 + 1;
                        if (v9 >= 50) {
                            // break -> 0x4054a5
                            break;
                        }
                        v7 = v9;
                        // continue -> 0x40540d
                    }
                    // 0x4054a5
                    v6 = v2 + 1;
                    if (v6 >= 0x2000) {
                        // break -> 0x4054b6
                        break;
                    }
                    v2 = v6;
                    v3 = v5;
                    // continue -> 0x4053ec
                    continue;
                }
            }
        }
      lab_0x4054a5:
        // 0x4054a5
        v6 = v2 + 1;
        if (v6 >= 0x2000) {
            // break -> 0x4054b6
            break;
        }
        v2 = v6;
        v3 = v5;
        // continue -> 0x4053ec
    }
    // 0x4054b6
    // branch -> 0x4054b8
    // 0x4054b8
    g2 = v4;
    return g1 & -256;
}

// Address range: 0x4054d0 - 0x405568
int32_t function_4054d0(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1 = g5; // bp-8
    int32_t v2 = 0; // 0x40554b41
    int32_t v3 = g4 - 0x1000; // 0x40554a
    // branch -> 0x4054da
  lab_0x4054da:;
    int32_t v4;
    int32_t result;
    while (true) {
        int32_t v5 = v3 + 1; // 0x4054df
        int32_t v6; // 0x40554b
        if (*(char *)v3 == 85) {
            // 0x4054df
            if (*(char *)v5 == -117) {
                // 0x4054e5
                if (*(char *)(v3 + 2) == -20) {
                    int32_t v7 = 0; // 0x405505
                    int32_t v8 = v3 + 3; // 0x40550d
                    // branch -> 0x4054f0
                    int32_t v9; // 0x405505
                    while (true) {
                        int32_t v10 = v8 + 1; // 0x4054f5
                        if (*(char *)v8 == -1) {
                            // 0x4054f5
                            if (*(char *)v10 == 21) {
                                // 0x4054fb
                                if (*(int32_t *)(v8 + 2) == a1) {
                                    int32_t v11 = 0; // 0x405544
                                    int32_t v12 = v8 + 6; // 0x405526
                                    // branch -> 0x405512
                                    while (true) {
                                        // 0x405512
                                        int32_t v13; // 0x405543
                                        int32_t v14; // 0x405544
                                        if (*(char *)v12 == -1) {
                                            // 0x405517
                                            if (*(char *)(v12 + 1) == 21) {
                                                // 0x40551d
                                                if (*(int32_t *)(v12 + 2) == a2) {
                                                    int32_t v15 = 0; // 0x40553d
                                                    int32_t v16 = v12 + 6; // 0x40555e
                                                    // branch -> 0x40552b
                                                    int32_t v17; // 0x405530
                                                    while (true) {
                                                        // 0x40552b
                                                        v17 = v16 + 1;
                                                        if (*(char *)v16 == -123) {
                                                            // 0x405530
                                                            if (*(char *)v17 == -64) {
                                                                int32_t v18 = v16 + 2; // 0x405536
                                                                if (*(char *)v18 == 116) {
                                                                    int32_t v19 = v18 + *(int32_t *)(g3 + 4) - *(int32_t *)g3; // 0x40555e
                                                                    *(int32_t *)(g3 + 20) = v19;
                                                                    result = v19 & -256 | 1;
                                                                    // branch -> 0x405556
                                                                    // 0x405556
                                                                    g1 = result;
                                                                    g5 = v1;
                                                                    g7 = v4;
                                                                    return result;
                                                                }
                                                            }
                                                        }
                                                        int32_t v20 = v15 + 1; // 0x40553d
                                                        if (v20 >= 40) {
                                                            // break -> 0x405543
                                                            break;
                                                        }
                                                        v15 = v20;
                                                        v16 = v17;
                                                        // continue -> 0x40552b
                                                    }
                                                    // 0x405543
                                                    v13 = v17 + 1;
                                                    g1 = v13;
                                                    v14 = v11 + 1;
                                                    if (v14 >= 20) {
                                                        // break -> 0x40554a
                                                        break;
                                                    }
                                                    v11 = v14;
                                                    v12 = v13;
                                                    // continue -> 0x405512
                                                    continue;
                                                }
                                            }
                                        }
                                        // 0x405543
                                        v13 = v12 + 1;
                                        g1 = v13;
                                        v14 = v11 + 1;
                                        if (v14 >= 20) {
                                            // break -> 0x40554a
                                            break;
                                        }
                                        v11 = v14;
                                        v12 = v13;
                                        // continue -> 0x405512
                                    }
                                    // 0x40554a
                                    v6 = v7 + 1;
                                    if (v6 >= 0x2000) {
                                        // break (via goto) -> 0x405554
                                        goto lab_0x405554;
                                    }
                                    v2 = v6;
                                    v3 = v5;
                                    // continue (via goto) -> 0x4054da
                                    goto lab_0x4054da;
                                }
                            }
                        }
                        // 0x405504
                        g1 = v10;
                        v9 = v7 + 1;
                        if (v9 >= 50) {
                            // break -> 0x40554a
                            break;
                        }
                        v7 = v9;
                        v8 = v10;
                        // continue -> 0x4054f0
                    }
                    // 0x40554a
                    v6 = v9 + 1;
                    if (v6 >= 0x2000) {
                        // break -> 0x405554
                        break;
                    }
                    v2 = v6;
                    v3 = v5;
                    // continue -> 0x4054da
                    continue;
                }
            }
        }
        // 0x40554a
        v6 = v2 + 1;
        if (v6 >= 0x2000) {
            // break -> 0x405554
            break;
        }
        v2 = v6;
        v3 = v5;
        // continue -> 0x4054da
    }
  lab_0x405554:
    // 0x405554
    result = g1 & -256;
    // branch -> 0x405556
    // 0x405556
    g1 = result;
    g7 = v4;
    return result;
}

// Address range: 0x405569 - 0x405788
int32_t function_405569(void) {
    // 0x405569
    int32_t v1;
    char * v2 = (char *)v1; // bp-28
    function_4082b0((int32_t)&g30, 80);
    int32_t v3 = g2; // 0x405575
    g3 = *(int32_t *)(v3 + 8);
    int32_t v4 = 0; // eax
    *(int32_t *)(v3 - 52) = 0;
    *(int32_t *)(g2 - 48) = v4;
    *(int32_t *)(g2 - 36) = v4;
    *(int32_t *)(g2 - 40) = v4;
    int32_t v5 = *(int32_t *)g3; // 0x405586
    g1 = v5;
    int32_t v6;
    int32_t v7;
    if (*(int16_t *)v5 == 0x5a4d) {
        int32_t lp = *(int32_t *)(v5 + 60) + v5; // 0x405596
        g7 = lp;
        bool v8 = IsBadReadPtr((char *)lp, 248); // 0x40559e
        g1 = v8;
        if (!v8) {
            int32_t v9 = g7; // 0x4055ac
            if (*(int32_t *)v9 == 0x4550) {
                int32_t v10 = *(int32_t *)(v9 + 44); // 0x4055b8
                int32_t v11 = *(int32_t *)(v9 + 52) + v10; // 0x4055be
                g5 = v11;
                *(int32_t *)(g2 - 72) = v11;
                *(int32_t *)(g2 - 44) = v10 + *(int32_t *)g3;
                *(int32_t *)(g2 - 76) = *(int32_t *)(g7 + 28);
                *(int32_t *)(g2 - 56) = (int32_t)"KeRaiseIrqlToDpcLevel";
                int32_t v12 = g3; // 0x4055d7
                uint32_t v13 = *(int32_t *)(v12 + 8); // 0x4055d7
                if (v13 == 5) {
                    // 0x4055df
                    if (*(int32_t *)(v12 + 12) == 2) {
                        // 0x4055e5
                        if (*(int16_t *)(v12 + 16) != 0) {
                            // 0x4055f1
                            *(int32_t *)(g2 - 56) = (int32_t)"KeRaiseIrqlToSynchLevel";
                            // branch -> 0x4055f8
                        }
                    }
                } else {
                    // 0x4055ec
                    if (v13 >= 6) {
                        // 0x4055f1
                        *(int32_t *)(g2 - 56) = (int32_t)"KeRaiseIrqlToSynchLevel";
                        // branch -> 0x4055f8
                    }
                }
                int32_t moduleHandle = (int32_t)LoadLibraryA("ntdll.dll"); // 0x4055fd_4
                g1 = moduleHandle;
                *(int32_t *)(g2 - 64) = moduleHandle;
                int32_t hModule = g1; // 0x405606
                if (hModule == 0) {
                    // 0x405708
                    // branch -> 0x40570a
                    // 0x40570a
                    function_4082e9((int32_t)v2, v7, v6);
                    return 0;
                }
                int32_t (**func)() = GetProcAddress((char *)hModule, "RtlImageDirectoryEntryToData"); // 0x405614
                g1 = (int32_t)func;
                if (func == NULL) {
                    // 0x405708
                    // branch -> 0x40570a
                    // 0x40570a
                    function_4082e9((int32_t)v2, v7, v6);
                    return 0;
                }
                int32_t v14 = g2 - 80; // 0x405622
                g4 = v14;
                v6 = 1;
                int32_t v15 = *(int32_t *)g3; // 0x40562a
                v7 = v15;
                ((int32_t (*)(int32_t, int32_t, int32_t, int32_t))func)(v15, 1, 1, v14);
                g7 = g1;
                FreeLibrary((char *)*(int32_t *)(g2 - 64));
                int32_t v16 = g7; // 0x405639
                int32_t v17; // 0x405755_6
                int32_t (**func2)(); // 0x405755
                int32_t v18; // 0x40575f
                int32_t v19; // 0x405765
                int32_t v20; // 0x40575f
                int32_t v21; // 0x405762
                int32_t v22; // 0x40576b
                int32_t v23; // 0x40576e
                if (v16 != 0) {
                    int32_t v24 = *(int32_t *)(v16 + 12); // 0x40564152
                    if (v24 != 0) {
                        // branch -> 0x40564c
                        while (true) {
                            // 0x40564c
                            if (*(int32_t *)(v16 + 16) != 0) {
                                char * str = (char *)(*(int32_t *)g3 + v24);
                                v2 = str;
                                int32_t strcmp_rc = strcmp("HAL.dll", str); // 0x405660
                                g1 = strcmp_rc;
                                int32_t v25 = g7; // 0x40566f
                                if (strcmp_rc == 0) {
                                    int32_t v26 = *(int32_t *)(v25 + 16); // 0x40566f
                                    g7 = v26;
                                    int32_t v27; // 0x4056fc
                                    if (v26 != 0) {
                                        int32_t v28 = *(int32_t *)g3 + v26; // 0x40567a
                                        g7 = v28;
                                        *(int32_t *)(g2 - 60) = v28;
                                        *(int32_t *)(g2 - 32) = g7;
                                        int32_t v29 = g2; // 0x40568241
                                        int32_t v30 = *(int32_t *)(v29 - 32); // 0x40568244
                                        g1 = v30;
                                        int32_t v31 = *(int32_t *)v30; // 0x40568546
                                        int32_t v32 = v31; // ecx
                                        if (v31 != 0) {
                                            while (true) {
                                                // 0x40568b
                                                *(int32_t *)(v29 - 4) = 0;
                                                int32_t v33 = v32 >> 31; // 0x405691
                                                g1 = v33;
                                                *(char *)(g2 - 25) = (char)v33;
                                                int32_t v34 = g2; // 0x4056ec
                                                if (*(int32_t *)(v34 - 36) != 0) {
                                                    // 0x4056f2
                                                    if (*(int32_t *)(v34 - 40) != 0) {
                                                        // 0x4056f8
                                                        *(int32_t *)(v34 - 4) = -1;
                                                        // branch -> 0x4056fc
                                                        // 0x4056fc
                                                        v27 = g2;
                                                        if (*(int32_t *)(v27 - 36) != 0) {
                                                            // 0x405702
                                                            if (*(int32_t *)(v27 - 40) != 0) {
                                                                // 0x40574e
                                                                v2 = "RtlUnwind";
                                                                func2 = GetProcAddress((char *)*(int32_t *)g3, "RtlUnwind");
                                                                v17 = (int32_t)func2;
                                                                g1 = v17;
                                                                if (func2 != NULL) {
                                                                    // 0x40575f
                                                                    v18 = g2;
                                                                    v20 = *(int32_t *)(v18 - 48);
                                                                    v2 = (char *)v20;
                                                                    v21 = *(int32_t *)(v18 - 52);
                                                                    v19 = g3;
                                                                    if (*(int32_t *)(v19 + 8) > 5) {
                                                                        // 0x40577e
                                                                        g4 = v17;
                                                                        function_4054d0(v21, v20, v7, v6);
                                                                        // branch -> 0x40570a
                                                                        // 0x40570a
                                                                        function_4082e9((int32_t)v2, v7, v6);
                                                                        return 0;
                                                                    }
                                                                    // 0x40576b
                                                                    v22 = *(int32_t *)(v18 - 76);
                                                                    v23 = *(int32_t *)(v18 - 44);
                                                                    g6 = v17;
                                                                    function_4053db((int32_t *)v19, v23, v22, v21, v20, v7, v6);
                                                                    // branch -> 0x40570a
                                                                    // 0x40570a
                                                                    function_4082e9((int32_t)v2, v7, v6);
                                                                    return 0;
                                                                }
                                                            }
                                                        }
                                                        // 0x405708
                                                        // branch -> 0x40570a
                                                        // 0x40570a
                                                        function_4082e9((int32_t)v2, v7, v6);
                                                        return 0;
                                                    }
                                                }
                                                int32_t * v35 = (int32_t *)(v34 - 32); // 0x405710_0
                                                *v35 = *v35 + 4;
                                                int32_t v36 = g7 + 4; // 0x405714
                                                g7 = v36;
                                                *(int32_t *)(g2 - 60) = v36;
                                                *(int32_t *)(g2 - 4) = -1;
                                                int32_t v37 = g2; // 0x405682
                                                int32_t v38 = *(int32_t *)(v37 - 32); // 0x405682
                                                g1 = v38;
                                                int32_t v39 = *(int32_t *)v38; // 0x405685
                                                v32 = v39;
                                                if (v39 == 0) {
                                                    // break -> 0x4056fc
                                                    break;
                                                }
                                                v29 = v37;
                                                // continue -> 0x40568b
                                            }
                                            // 0x4056fc
                                            v27 = g2;
                                            if (*(int32_t *)(v27 - 36) != 0) {
                                                // 0x405702
                                                if (*(int32_t *)(v27 - 40) != 0) {
                                                    // 0x40574e
                                                    v2 = "RtlUnwind";
                                                    func2 = GetProcAddress((char *)*(int32_t *)g3, "RtlUnwind");
                                                    v17 = (int32_t)func2;
                                                    g1 = v17;
                                                    if (func2 != NULL) {
                                                        // 0x40575f
                                                        v18 = g2;
                                                        v20 = *(int32_t *)(v18 - 48);
                                                        v2 = (char *)v20;
                                                        v21 = *(int32_t *)(v18 - 52);
                                                        v19 = g3;
                                                        if (*(int32_t *)(v19 + 8) > 5) {
                                                            // 0x40577e
                                                            g4 = v17;
                                                            function_4054d0(v21, v20, v7, v6);
                                                            // branch -> 0x40570a
                                                            // 0x40570a
                                                            function_4082e9((int32_t)v2, v7, v6);
                                                            return 0;
                                                        }
                                                        // 0x40576b
                                                        v22 = *(int32_t *)(v18 - 76);
                                                        v23 = *(int32_t *)(v18 - 44);
                                                        g6 = v17;
                                                        function_4053db((int32_t *)v19, v23, v22, v21, v20, v7, v6);
                                                        // branch -> 0x40570a
                                                        // 0x40570a
                                                        function_4082e9((int32_t)v2, v7, v6);
                                                        return 0;
                                                    }
                                                }
                                            }
                                            // 0x405708
                                            // branch -> 0x40570a
                                            // 0x40570a
                                            function_4082e9((int32_t)v2, v7, v6);
                                            return 0;
                                        }
                                    }
                                    // 0x4056fc
                                    v27 = g2;
                                    if (*(int32_t *)(v27 - 36) != 0) {
                                        // 0x405702
                                        if (*(int32_t *)(v27 - 40) != 0) {
                                            // 0x40574e
                                            v2 = "RtlUnwind";
                                            func2 = GetProcAddress((char *)*(int32_t *)g3, "RtlUnwind");
                                            v17 = (int32_t)func2;
                                            g1 = v17;
                                            if (func2 != NULL) {
                                                // 0x40575f
                                                v18 = g2;
                                                v20 = *(int32_t *)(v18 - 48);
                                                v2 = (char *)v20;
                                                v21 = *(int32_t *)(v18 - 52);
                                                v19 = g3;
                                                if (*(int32_t *)(v19 + 8) > 5) {
                                                    // 0x40577e
                                                    g4 = v17;
                                                    function_4054d0(v21, v20, v7, v6);
                                                    // branch -> 0x40570a
                                                    // 0x40570a
                                                    function_4082e9((int32_t)v2, v7, v6);
                                                    return 0;
                                                }
                                                // 0x40576b
                                                v22 = *(int32_t *)(v18 - 76);
                                                v23 = *(int32_t *)(v18 - 44);
                                                g6 = v17;
                                                function_4053db((int32_t *)v19, v23, v22, v21, v20, v7, v6);
                                                // branch -> 0x40570a
                                                // 0x40570a
                                                function_4082e9((int32_t)v2, v7, v6);
                                                return 0;
                                            }
                                        }
                                    }
                                } else {
                                    int32_t v40 = v25 + 20; // 0x405746
                                    g7 = v40;
                                    int32_t v41 = *(int32_t *)(v25 + 32); // 0x405641
                                    if (v41 == 0) {
                                        // break -> 0x40574e
                                        break;
                                    }
                                    v24 = v41;
                                    v16 = v40;
                                    // continue -> 0x40564c
                                    continue;
                                }
                                // 0x405708
                                // branch -> 0x40570a
                                // 0x40570a
                                function_4082e9((int32_t)v2, v7, v6);
                                return 0;
                            }
                        }
                        // 0x40574e
                        v2 = "RtlUnwind";
                        func2 = GetProcAddress((char *)*(int32_t *)g3, "RtlUnwind");
                        v17 = (int32_t)func2;
                        g1 = v17;
                        if (func2 == NULL) {
                            // 0x405708
                            // branch -> 0x40570a
                            // 0x40570a
                            function_4082e9((int32_t)v2, v7, v6);
                            return 0;
                        }
                        // 0x40575f
                        v18 = g2;
                        v20 = *(int32_t *)(v18 - 48);
                        v21 = *(int32_t *)(v18 - 52);
                        v19 = g3;
                        if (*(int32_t *)(v19 + 8) > 5) {
                            // 0x40577e
                            g4 = v17;
                            function_4054d0(v21, v20, v7, v6);
                            // branch -> 0x40570a
                        } else {
                            // 0x40576b
                            v22 = *(int32_t *)(v18 - 76);
                            v23 = *(int32_t *)(v18 - 44);
                            g6 = v17;
                            function_4053db((int32_t *)v19, v23, v22, v21, v20, v7, v6);
                            // branch -> 0x40570a
                        }
                        // 0x40570a
                        function_4082e9((int32_t)(char *)v20, v7, v6);
                        return 0;
                    }
                }
                // 0x40574e
                v2 = "RtlUnwind";
                func2 = GetProcAddress((char *)*(int32_t *)g3, "RtlUnwind");
                v17 = (int32_t)func2;
                g1 = v17;
                if (func2 == NULL) {
                    // 0x405708
                    // branch -> 0x40570a
                    // 0x40570a
                    function_4082e9((int32_t)v2, v7, v6);
                    return 0;
                }
                // 0x40575f
                v18 = g2;
                v20 = *(int32_t *)(v18 - 48);
                v21 = *(int32_t *)(v18 - 52);
                v19 = g3;
                if (*(int32_t *)(v19 + 8) > 5) {
                    // 0x40577e
                    g4 = v17;
                    function_4054d0(v21, v20, v7, v6);
                    // branch -> 0x40570a
                } else {
                    // 0x40576b
                    v22 = *(int32_t *)(v18 - 76);
                    v23 = *(int32_t *)(v18 - 44);
                    g6 = v17;
                    function_4053db((int32_t *)v19, v23, v22, v21, v20, v7, v6);
                    // branch -> 0x40570a
                }
                // 0x40570a
                function_4082e9((int32_t)(char *)v20, v7, v6);
                return 0;
            }
        }
    }
    // 0x405708
    // branch -> 0x40570a
    // 0x40570a
    function_4082e9((int32_t)v2, v7, v6);
    return 0;
}

// Address range: 0x405789 - 0x4058d9
int32_t function_405789(int32_t * a1, int32_t a2) {
    int32_t v1;
    g2 = &v1;
    int32_t v2 = g3; // 0x405794
    int32_t v3 = g7; // 0x405795
    g7 = (int32_t)a1;
    g3 = 0;
    if (a1 == NULL) {
        // 0x40579f
        // branch -> 0x4058d3
    } else {
        // 0x4057a6
        memset((char *)a1, 0, 36);
        function_407e56();
        function_407e56();
        *(int32_t *)(g7 + 4) = g1;
        // branch -> 0x4058d3
    }
    // 0x4058d3
    g7 = v3;
    g3 = v2;
    int32_t v4;
    g2 = v4;
    return g1 & -256;
}

// Address range: 0x4058da - 0x40593c
int32_t function_4058da(int32_t a1, int32_t a2, char * a3, char a4, int32_t a5, char a6, int32_t a7) {
    int32_t v1 = (int32_t)a3;
    int32_t v2 = g5; // 0x4058e1
    int32_t v3 = a2; // edi
    int32_t v4; // 0x4058ff
    int32_t result; // 0x40591f
    int32_t v5; // eax
    int32_t v6; // ecx
    int32_t v7;
    int32_t v8;
    int32_t v9; // 0x405929
    int32_t v10; // 0x40592b
    int32_t v11; // 0x405930
    if (a2 == 0) {
        // 0x4058f9
        v6 = a4;
        v4 = v1 + a5;
        v5 = v4;
        *(char *)v4 = a4;
        *(char *)(v5 + 1) = (char)(0x1000000 * v6 / 0x1000000 / 256);
        *(char *)(v5 + 2) = (char)(0x1000000 * v6 / 0x1000000 / 0x10000);
        *(char *)(v5 + 3) = (char)(v6 / 0x1000000);
        v8 = a6;
        v6 = v8;
        result = v1 + a7;
        *(char *)(result + 1) = (char)(v8 / 256);
        v9 = v6;
        v10 = 0x1000000 * v9 / 0x1000000 / 0x10000;
        g6 = v10;
        *(char *)result = (char)v9;
        v11 = v6 / 0x1000000;
        g4 = v11;
        g5 = v2;
        *(char *)(result + 2) = (char)v10;
        *(char *)(result + 3) = (char)v11;
        g2 = v7;
        return result;
    }
    // 0x4058e9
    v6 = v1;
    int32_t v12 = v1; // 0x4058f3
    // branch -> 0x4058f0
    while (true) {
        unsigned char v13 = *(char *)(a1 - v1 + v12); // 0x4058f0
        g6 = g6 & -256 | (int32_t)v13;
        *(char *)v12 = v13;
        int32_t v14 = v6 + 1; // 0x4058f5
        v6 = v14;
        int32_t v15 = v3 - 1; // 0x4058f6
        v3 = v15;
        if (v15 == 0) {
            // 0x4058f9
            // branch -> 0x4058f9
            // 0x4058f9
            v6 = a4;
            v4 = v1 + a5;
            v5 = v4;
            *(char *)v4 = a4;
            *(char *)(v5 + 1) = (char)(0x1000000 * v6 / 0x1000000 / 256);
            *(char *)(v5 + 2) = (char)(0x1000000 * v6 / 0x1000000 / 0x10000);
            *(char *)(v5 + 3) = (char)(v6 / 0x1000000);
            v8 = a6;
            v6 = v8;
            result = v1 + a7;
            *(char *)(result + 1) = (char)(v8 / 256);
            v9 = v6;
            v10 = 0x1000000 * v9 / 0x1000000 / 0x10000;
            g6 = v10;
            *(char *)result = (char)v9;
            v11 = v6 / 0x1000000;
            g4 = v11;
            g5 = v2;
            *(char *)(result + 2) = (char)v10;
            *(char *)(result + 3) = (char)v11;
            g2 = v7;
            return result;
        }
        // 0x4058f0
        v12 = v14;
        // branch -> 0x4058f0
    }
}

// Address range: 0x40593d - 0x405968
int32_t function_40593d(int32_t a1, int32_t a2, char * a3, int32_t a4, int32_t result) {
    int32_t v1 = (int32_t)a3;
    int32_t v2 = g5; // bp-12
    int32_t v3 = a2; // edi
    int32_t v4;
    if (a2 == 0) {
        // 0x40593d
        // branch -> 0x40595c
    } else {
        int32_t v5 = v1; // ecx
        int32_t v6 = v1; // 0x405956
        // branch -> 0x405953
        while (true) {
            unsigned char v7 = *(char *)(a1 - v1 + v6); // 0x405953
            g6 = g6 & -256 | (int32_t)v7;
            *(char *)v6 = v7;
            int32_t v8 = v5 + 1; // 0x405958
            v5 = v8;
            int32_t v9 = v3 - 1; // 0x405959
            v3 = v9;
            if (v9 == 0) {
                // 0x40595c
                // branch -> 0x40595c
                // 0x40595c
                g4 = v8 & -256 | a4 & 255;
                g5 = v2;
                *(char *)(v1 + result) = (char)a4;
                g2 = v4;
                return result;
            }
            // 0x405953
            v6 = v8;
            // branch -> 0x405953
        }
    }
    // 0x40595c
    g4 = g4 & -256 | a4 & 255;
    *(char *)(v1 + result) = (char)a4;
    g2 = v4;
    return result;
}

// Address range: 0x405969 - 0x4059da
char * function_405969(int32_t a1, int32_t a2) {
    char * hHandle = OpenMutexW(0x100000, false, L"prkMtx"); // 0x405976
    int32_t hObject = (int32_t)hHandle; // edi
    int32_t v1;
    if (hHandle == NULL) {
        // 0x405982
        SetLastError(GetLastError());
        g5 = v1;
        return NULL;
    }
    int32_t v2 = WaitForSingleObject(hHandle, 0x3a98); // 0x40599a
    char * result; // 0x4059da_2
    switch (v2) {
        default: {
            int32_t errorCode = GetLastError(); // ebx
            CloseHandle((char *)hObject);
            char * dwErrCode;
            if (v2 != 258) {
                // 0x4059ca
                dwErrCode = (char *)errorCode;
                // branch -> 0x4059cb
            } else {
                dwErrCode = (char *)121;
            }
            // 0x4059cb
            SetLastError((int32_t)dwErrCode);
            result = NULL;
            // branch -> 0x4059d8
            break;
        }
        case 128: {
            // 0x4059d6
            result = (char *)hObject;
            // branch -> 0x4059d8
            break;
        }
        case 0: {
            // 0x4059d6
            result = (char *)hObject;
            // branch -> 0x4059d8
            break;
        }
    }
    // 0x4059d8
    g7 = (int32_t)(int16_t *)g7;
    g5 = v1;
    return result;
}

// Address range: 0x4059db - 0x405ad6
int32_t function_4059db(void) {
    int32_t v1 = 32; // bp-4
    int32_t v2 = &g31; // bp-8
    function_4082b0((int32_t)&g31, 32);
    g7 = 0;
    if (*(int32_t *)(g2 + 8) == 0) {
        // 0x4059ee
        // branch -> 0x405a5a
        // 0x405a5a
        // branch -> 0x405ad1
        // 0x405ad1
        function_4082e9(v2, v1, 0);
        return 0;
    }
    uint32_t v3 = GetVersion(); // 0x4059f2
    int32_t v4 = v3 & 255; // 0x4059f8
    g4 = v4;
    *(int32_t *)(g2 - 40) = v4;
    *(int32_t *)(g2 - 36) = v3 / 256 & 255;
    int32_t dwExStyle = g7; // 0x405a04
    char * hWndParent = (char *)dwExStyle;
    int32_t v5 = (int32_t)CreateWindowExW(dwExStyle, L"STATIC", L"h", -0x78000000, dwExStyle, dwExStyle, dwExStyle, dwExStyle, hWndParent, hWndParent, hWndParent, hWndParent); // 0x405a1c_22
    g5 = v5;
    *(int32_t *)(g2 - 44) = v5;
    int32_t lpAddress = g7; // 0x405a27
    if (g5 == lpAddress) {
        // 0x405a2b
        // branch -> 0x405a5a
        // 0x405a5a
        // branch -> 0x405ad1
        // 0x405ad1
        function_4082e9(v2, v1, 0);
        return 0;
    }
    int32_t memory = (int32_t)VirtualAlloc((char *)lpAddress, 0x1000, 0x1000, 64); // 0x405a39_10
    g3 = memory;
    *(int32_t *)(g2 - 48) = memory;
    if (g3 == g7) {
        // 0x405a48
        // branch -> 0x405a5a
        // 0x405a5a
        // branch -> 0x405ad1
        // 0x405ad1
        function_4082e9(v2, v1, 0);
        return 0;
    }
    int32_t v6 = (int32_t)function_405969(v2, v1); // 0x405a4c_3
    *(int32_t *)(g2 - 32) = v6;
    if (v6 == g7) {
        // 0x405a58
        // branch -> 0x405a5a
        // 0x405a5a
        // branch -> 0x405ad1
    } else {
        // 0x405a5d
        *(int32_t *)(g2 - 28) = -1;
        *(int32_t *)(g2 - 4) = g7;
        int32_t v7 = g2; // 0x405a64
        int32_t v8 = *(int32_t *)(v7 - 40); // 0x405a64
        if (v8 == 4) {
            int32_t v9 = *(int32_t *)(v7 + 12); // 0x405ab2
            int32_t v10 = *(int32_t *)(v7 + 8); // 0x405ab5
            int32_t v11 = function_405b63(g3, g5, v10, v9, *(int32_t *)(v7 + 16)); // 0x405aba
            g1 = v11;
            // branch -> 0x405abf
            // 0x405abf
            *(int32_t *)(g2 - 28) = v11;
            // branch -> 0x405ac5
        } else {
            // 0x405a6c
            if (v8 == 5) {
                int32_t v12 = *(int32_t *)(v7 - 36); // 0x405a8f
                if (v12 == g7) {
                    int32_t v13 = *(int32_t *)(v7 + 8); // 0x405a8a
                    int32_t v14 = *(int32_t *)(v7 + 12); // 0x405a87
                    int32_t v15 = *(int32_t *)(v7 + 16); // 0x405a84
                    int32_t v16 = function_406c00((char *)g3, g5, v13, v14, v15, v2, v1, 0); // 0x405a94
                    g1 = v16;
                    // branch -> 0x405abf
                    // 0x405abf
                    *(int32_t *)(g2 - 28) = v16;
                    // branch -> 0x405ac5
                    // 0x405ac5
                    *(int32_t *)(g2 - 4) = -1;
                    function_405adf(v2, v1, 0);
                    // branch -> 0x405ad1
                    // 0x405ad1
                    function_4082e9(v2, v1, 0);
                    return 0;
                }
                // 0x405a9b
                int32_t v17; // 0x405aa1
                if (v12 == 1) {
                    // 0x405aa1
                    v17 = function_4066f3();
                    g1 = v17;
                    // branch -> 0x405abf
                } else {
                    int32_t v18 = function_405f9e(); // 0x405aa8
                    g1 = v18;
                    v17 = v18;
                    // branch -> 0x405abf
                }
                // 0x405abf
                *(int32_t *)(g2 - 28) = v17;
                // branch -> 0x405ac5
                // 0x405ac5
                *(int32_t *)(g2 - 4) = -1;
                function_405adf(v2, v1, 0);
                // branch -> 0x405ad1
                // 0x405ad1
                function_4082e9(v2, v1, 0);
                return 0;
            }
            int32_t v19 = v8 - 6; // 0x405a6f
            g1 = v19;
            if (v19 == 0) {
                int32_t v20 = function_407027((int16_t *)g3); // 0x405a7d
                g1 = v20;
                // branch -> 0x405abf
                // 0x405abf
                *(int32_t *)(g2 - 28) = v20;
                // branch -> 0x405ac5
            }
            // 0x405ac5
            *(int32_t *)(g2 - 4) = -1;
            function_405adf(v2, v1, 0);
            // branch -> 0x405ad1
            // 0x405ad1
            function_4082e9(v2, v1, 0);
            return 0;
        }
        // 0x405ac5
        *(int32_t *)(g2 - 4) = -1;
        function_405adf(v2, v1, 0);
        // branch -> 0x405ad1
    }
    // 0x405ad1
    function_4082e9(v2, v1, 0);
    return 0;
}

// Address range: 0x405ad7 - 0x405ade
int32_t function_405ad7(int32_t a1) {
    // 0x405ad7
    g7 = 0;
    int32_t result = *(int32_t *)(g2 - 48); // 0x405adc
    g3 = result;
    return result;
}

// Address range: 0x405adf - 0x405b12
bool function_405adf(int32_t a1, int32_t a2, int32_t a3) {
    int32_t hMutex = *(int32_t *)(g2 - 32); // 0x405adf
    int32_t v1 = hMutex; // 0x405af6
    if (hMutex != g7) {
        // 0x405ae4
        ReleaseMutex((char *)hMutex);
        g1 = CloseHandle((char *)*(int32_t *)(g2 - 32));
        v1 = g7;
        // branch -> 0x405af6
    }
    int32_t dwSize = v1; // 0x405b0a
    if (g5 != v1) {
        // 0x405afa
        g1 = DestroyWindow((char *)g5);
        dwSize = g7;
        // branch -> 0x405b01
    }
    // 0x405b01
    int32_t v2; // 0x405b12_2
    if (g3 == dwSize) {
        // 0x405b01
        v2 = g1;
        // branch -> 0x405b12
    } else {
        // 0x405b05
        v2 = VirtualFree((char *)g3, dwSize, 0x8000);
        // branch -> 0x405b12
    }
    // 0x405b12
    return (v2 & 1) != 0;
}

// Address range: 0x405b13 - 0x405b62
int32_t function_405b13(int32_t a1) {
    // 0x405b13
    function_4082b0((int32_t)&g32, 8);
    int32_t v1 = *(int32_t *)(g2 + 8); // 0x405b1f
    g1 = v1;
    *(int32_t *)*(int32_t *)(v1 + 8) = *(int32_t *)(v1 + 12);
    int32_t v2 = g1; // 0x405b2a
    int32_t v3 = *(int32_t *)(v2 + 16); // 0x405b30
    g6 = v3;
    *(int32_t *)(*(int32_t *)(v2 + 8) + 4) = v3;
    *(int32_t *)(g2 - 4) = 0;
    int32_t v4 = g1; // 0x405b39
    int32_t v5 = *(int32_t *)(v4 + 24); // 0x405b3c
    int32_t v6 = v4 + 32; // 0x405b3f
    g4 = v6;
    int32_t v7 = *(int32_t *)(v4 + 20); // 0x405b43
    ((int32_t (*)(int32_t, int32_t, int32_t))v7)(v6, v5, *(int32_t *)(v4 + 28));
    *(int32_t *)(g2 - 4) = -1;
    function_4082e9(a1, 0, 0);
    return 0;
}

// Address range: 0x405b63 - 0x405cc0
int32_t function_405b63(int32_t lpString1, int32_t hWnd, int32_t a3, int32_t a4, int32_t a5) {
    int32_t v1 = g3; // 0x405b6c
    int32_t v2 = g7; // 0x405b6d
    int32_t v3 = g5; // bp-616
    g5 = 0;
    int32_t v4;
    int32_t result;
    if (lpString1 == 0 || hWnd == 0) {
        // 0x405cb9
        // branch -> 0x405cbb
        // 0x405cbb
        result = (int32_t)(int16_t *)87;
        // branch -> 0x405cbc
        // 0x405cbc
        g1 = result;
        g5 = v3;
        g7 = v2;
        g3 = v1;
        g2 = v4;
        return result;
    }
    // 0x405b83
    g3 = a3;
    if (a3 == 0) {
        // 0x405cb9
        // branch -> 0x405cbb
        // 0x405cbb
        result = (int32_t)(int16_t *)87;
        // branch -> 0x405cbc
        // 0x405cbc
        g1 = result;
        g5 = v3;
        g7 = v2;
        g3 = v1;
        g2 = v4;
        return result;
    }
    // 0x405b8e
    int32_t lpBuffer;
    GetEnvironmentVariableW(L"windir", (int16_t *)&lpBuffer, 260);
    int32_t n = 260 - wcslen((int16_t *)&lpBuffer); // 0x405bb3
    wcsncat((int16_t *)&lpBuffer, L"\\system32\\win32k.sys", n);
    int32_t lpSecurityAttributes = g5; // 0x405bcb
    char * v5 = CreateFileW((int16_t *)&lpBuffer, -0x80000000, 1, (struct _SECURITY_ATTRIBUTES *)lpSecurityAttributes, 3, 0x8000000, (char *)lpSecurityAttributes); // 0x405be2
    g7 = (int32_t)v5;
    if (v5 == (char *)-1) {
        // 0x405bef
        // branch -> 0x405cbb
        // 0x405cbb
        result = (int32_t)(int16_t *)-41;
        // branch -> 0x405cbc
        // 0x405cbc
        g1 = result;
        g5 = v3;
        g7 = v2;
        g3 = v1;
        g2 = v4;
        return result;
    }
    // 0x405bf6
    int32_t v6;
    int32_t v7 = &v6; // 0x405c12_0
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t result2;
    function_4079e3(v5, &v6, &result2, &v10, &v9, &v8);
    g3 = v7;
    CloseHandle((char *)g7);
    if (v7 == g5) {
        // 0x405c36
        int32_t v11;
        g1 = &v11;
        function_405789(&v11, v3);
        lstrcpyA((char *)lpString1, "name");
        SetPropA((char *)hWnd, "value", (char *)lpString1);
        function_4058da((int32_t)&g65, 17, (char *)lpString1, (char)function_405b13, 1, (char)v7, 7);
        // branch -> 0x405cbc
    } else {
        // 0x405c2f
        // branch -> 0x405cbb
        // 0x405cbb
        result = (int32_t)(int16_t *)-44;
        result2 = result;
        result2 = result;
        // branch -> 0x405cbc
    }
    // 0x405cbc
    g1 = result2;
    g5 = v3;
    g7 = v2;
    g3 = v1;
    g2 = v4;
    return result2;
}

// Address range: 0x405cc1 - 0x405d91
int32_t function_405cc1(int32_t a1) {
    // 0x405cc1
    function_4082b0((int32_t)&g33, 32);
    g3 = 0;
    *(int32_t *)(g2 - 4) = 0;
    int32_t v1 = g2; // 0x405cd2
    int32_t v2 = *(int32_t *)(v1 + 8); // 0x405cd2
    int32_t v3 = *(int32_t *)*(int32_t *)(v2 + 4); // 0x405cd8
    g5 = v3;
    *(int32_t *)(v1 - 32) = v3;
    int32_t v4 = 4 * *(int32_t *)(v2 + 80) + g5; // 0x405ce0
    *(int32_t *)(v2 + 8) = v4;
    *(int32_t *)(v2 + 12) = *(int32_t *)v4;
    g4 = v2 + 64;
    g6 = v2 + 28;
    function_407a32();
    int32_t v5 = *(int32_t *)(g7 + 16); // 0x405d06
    *(int32_t *)(g2 - 28) = v5;
    int32_t v6 = *(int32_t *)(g7 + 4); // 0x405d0c
    *(int32_t *)(g2 - 40) = v6;
    if (v5 == g3) {
        // 0x405d72
        *(char *)(g7 + 76) = 1;
        *(int32_t *)(g2 - 4) = -1;
        function_4082e9(a1, 0, 0);
        return 0;
    }
    // 0x405d16
    if ((v6 ^ v5) == -0x1000) {
        // 0x405d1f
        *(int32_t *)(g2 - 4) = 1;
        int32_t v7 = *(int32_t *)v5; // 0x405d26
        *(int32_t *)(g2 - 44) = v7;
        int32_t v8 = g7; // 0x405d66
        if (v7 == g5) {
            // 0x405d66
            *(int32_t *)(v8 + 16) = g3;
            *(int32_t *)(g7 + 20) = g3;
            *(int32_t *)(g7 + 24) = g3;
            // branch -> 0x405d6f
        } else {
            int32_t v9 = 4 * *(int32_t *)(v8 + 80) + v7; // 0x405d32
            *(int32_t *)(v8 + 20) = v9;
            *(int32_t *)(g7 + 24) = *(int32_t *)v9;
            g4 = g7 + 64;
            function_407a32();
            // branch -> 0x405d6f
        }
        // 0x405d6f
        *(int32_t *)(g2 - 4) = g3;
        // branch -> 0x405d72
    }
    // 0x405d72
    *(char *)(g7 + 76) = 1;
    *(int32_t *)(g2 - 4) = -1;
    function_4082e9(a1, 0, 0);
    return 0;
}

// Address range: 0x405d92 - 0x405e0b
int32_t function_405d92(int32_t a1) {
    // 0x405d92
    function_4082b0((int32_t)&g34, 12);
    g3 = 0;
    *(int32_t *)(g2 - 4) = 0;
    g5 = g4 + 28;
    function_407a32();
    int32_t v1 = g7; // 0x405dc8
    int32_t v2 = g3; // 0x405dc8
    if (*(int32_t *)(v1 + 16) == v2) {
        // 0x405dec
        *(char *)(v1 + 77) = 1;
        *(int32_t *)(g2 - 4) = -1;
        function_4082e9(a1, 0, 0);
        return 0;
    }
    int32_t v3 = *(int32_t *)(v1 + 20); // 0x405dcd
    g4 = v3;
    if (v3 == v2) {
        // 0x405dec
        *(char *)(v1 + 77) = 1;
        *(int32_t *)(g2 - 4) = -1;
        function_4082e9(a1, 0, 0);
        return 0;
    }
    // 0x405dd4
    int32_t v4; // 0x405dec
    if (*(int32_t *)(v1 + 24) != v2) {
        // 0x405ddb
        function_407a32();
        v4 = g7;
        // branch -> 0x405dec
    } else {
        v4 = v1;
    }
    // 0x405dec
    *(char *)(v4 + 77) = 1;
    *(int32_t *)(g2 - 4) = -1;
    function_4082e9(a1, 0, 0);
    return 0;
}

// Address range: 0x405e0c - 0x405e6a
int32_t function_405e0c(void) {
    // 0x405e0c
    function_4082b0((int32_t)&g35, 20);
    int32_t v1 = g2; // 0x405e18
    *(int32_t *)(v1 - 4) = 0;
    int32_t v2 = *(int32_t *)(*(int32_t *)(v1 + 8) + 48); // 0x405e1f
    g4 = v2;
    *(int32_t *)(g2 - 32) = v2;
    int32_t v3 = g2; // 0x405e4f
    if (g4 == 0) {
        // 0x405e4f
        *(int32_t *)(v3 - 4) = -1;
        // branch -> 0x405e65
    } else {
        // 0x405e29
        *(char *)(v3 - 25) = -21;
        g6 = g2 - 25;
        function_407a32();
        *(int32_t *)(g2 - 4) = -1;
        // branch -> 0x405e65
    }
    // 0x405e65
    int32_t v4;
    function_4082e9(v4, 0, 0);
    return 0;
}

// Address range: 0x405e6b - 0x405ebf
int32_t function_405e6b(int32_t a1) {
    // 0x405e6b
    function_4082b0((int32_t)&g36, 8);
    int32_t v1 = g2; // 0x405e77
    uint32_t v2 = *(int32_t *)(v1 + 8); // 0x405e77
    g7 = v2;
    if (v2 > 9) {
        // 0x405e86
        *(int32_t *)(v1 - 4) = 0;
        g4 = g7;
        function_405d92((int32_t)&g36);
        function_405e0c();
        int32_t v3 = g7; // 0x405e97
        int32_t v4 = *(int32_t *)(v3 + 68); // 0x405e9a
        int32_t v5 = v3 + 28; // 0x405e9d
        g1 = v5;
        int32_t v6 = *(int32_t *)v3; // 0x405ea1
        ((int32_t (*)(int32_t, int32_t, int32_t))v6)(v5, v4, *(int32_t *)(v3 + 72));
        *(int32_t *)(g2 - 4) = -1;
        // branch -> 0x405eba
    }
    // 0x405eba
    function_4082e9(a1, 0, 0);
    return 0;
}

// Address range: 0x405ec0 - 0x405f9d
int32_t (**function_405ec0(int32_t a1))() {
    int32_t v1 = &g37; // bp-8
    function_4082b0((int32_t)&g37, 32);
    int32_t v2 = g4; // 0x405ecc
    g5 = v2;
    if (v2 == 0 || *(int32_t *)(g2 + 8) == 0) {
        // 0x405f96
        // branch -> 0x405f98
        // 0x405f98
        function_4082e9(a1, 0, 0);
        return NULL;
    }
    int32_t v3 = v2 + 28; // 0x405ee0
    g3 = v3;
    char * v4 = "KeServiceDescriptorTable"; // bp-12
    int32_t v5 = function_405371((int32_t *)v3, "KeServiceDescriptorTable", v1); // 0x405ee9
    g1 = v5;
    g4 = (int32_t)v4;
    g7 = v5;
    if (v5 == 0) {
        // 0x405f96
        // branch -> 0x405f98
        // 0x405f98
        function_4082e9(a1, 0, 0);
        return NULL;
    }
    int32_t v6 = function_405371((int32_t *)g3, "_except_handler3", v1); // 0x405f00
    g1 = v6;
    if (v6 == 0) {
        // 0x405f96
        // branch -> 0x405f98
        // 0x405f98
        function_4082e9(a1, 0, 0);
        return NULL;
    }
    // 0x405f0f
    *(int32_t *)*(int32_t *)(g2 + 8) = v6;
    *(int32_t *)(g5 + 4) = g7;
    *(int32_t *)(g5 + 16) = 0;
    int32_t v7 = g7 - *(int32_t *)(g5 + 32); // 0x405f1b
    g7 = v7;
    *(int32_t *)(g2 - 36) = v7;
    int32_t hModule = *(int32_t *)g3; // 0x405f26
    int32_t func = (int32_t)GetProcAddress((char *)hModule, "KeAddSystemServiceTable"); // 0x405f28_6
    int32_t v8 = 0; // ecx
    *(int32_t *)(g2 - 4) = 0;
    *(int32_t *)(g2 - 32) = v8;
    *(int32_t *)(g2 - 28) = v8;
    g3 = -0x400001;
    uint32_t v9 = *(int32_t *)(g2 - 28); // 0x405f3e34
    int32_t v10; // 0x405f77
    int32_t v11; // 0x405f7a
    if (v9 > 99) {
        // 0x405f77
        v10 = g5;
        v11 = *(int32_t *)(g2 - 32);
        *(int32_t *)(v10 + 16) = v11 + *(int32_t *)(v10 + 32);
        *(int32_t *)(g2 - 4) = -1;
        // branch -> 0x405f98
        // 0x405f98
        function_4082e9(a1, 0, 0);
        return NULL;
    }
    while (true) {
        int32_t v12 = v9 + func; // 0x405f47
        int32_t v13 = v12; // edx
        *(int32_t *)(g2 - 40) = v12;
        int32_t v14 = g3 & *(int32_t *)v12; // 0x405f51
        v8 = v14;
        *(int32_t *)(g2 - 44) = v14;
        if (v8 == *(int32_t *)(g2 - 36)) {
            int32_t v15 = v13 + 9; // 0x405f5b
            *(int32_t *)(g2 - 40) = v15;
            int32_t v16 = g3 & *(int32_t *)v15; // 0x405f63
            *(int32_t *)(g2 - 48) = v16;
            int32_t v17 = v8 ^ v16; // 0x405f6a
            g7 = v17;
            if (v17 == -0x1000) {
                // 0x405f74
                *(int32_t *)(g2 - 32) = v16;
                // branch -> 0x405f77
                // 0x405f77
                v10 = g5;
                v11 = *(int32_t *)(g2 - 32);
                *(int32_t *)(v10 + 16) = v11 + *(int32_t *)(v10 + 32);
                *(int32_t *)(g2 - 4) = -1;
                // branch -> 0x405f98
                // 0x405f98
                function_4082e9(a1, 0, 0);
                return NULL;
            }
        }
        int32_t * v18 = (int32_t *)(g2 - 28); // 0x405f82_0
        *v18 = *v18 + 1;
        int32_t v19 = *(int32_t *)(g2 - 28); // 0x405f3e
        if (v19 > 99) {
            // break -> 0x405f77
            break;
        }
        v9 = v19;
        // continue -> 0x405f44
    }
    // 0x405f77
    v10 = g5;
    v11 = *(int32_t *)(g2 - 32);
    *(int32_t *)(v10 + 16) = v11 + *(int32_t *)(v10 + 32);
    *(int32_t *)(g2 - 4) = -1;
    // branch -> 0x405f98
    // 0x405f98
    function_4082e9(a1, 0, 0);
    return NULL;
}

// Address range: 0x405f9e - 0x4063f1
int32_t function_405f9e(void) {
    int32_t v1 = &g38; // bp-8
    function_4082b0((int32_t)&g38, 900);
    int32_t v2 = g2; // 0x405fad
    g5 = *(int32_t *)(v2 + 8);
    int32_t v3 = 0; // ebx
    *(int32_t *)(v2 - 240) = *(int32_t *)(v2 + 16);
    int32_t v4 = g2; // 0x405fd4
    *(int32_t *)(v4 - 172) = *(int32_t *)(v4 + 20);
    int32_t v5 = g2; // 0x405fdd
    *(int32_t *)(v5 - 168) = *(int32_t *)(v5 + 24);
    int32_t v6 = g5 + 512; // 0x405fe6
    *(int32_t *)(g2 - 108) = v6;
    *(int32_t *)(g2 - 176) = v6;
    *(char *)(g2 - 164) = (char)v3;
    *(char *)(g2 - 163) = (char)v3;
    function_407ca2();
    *(int32_t *)(g2 - 160) = 0;
    if (g3 == 0) {
        // 0x406016
        function_40640f();
        // branch -> 0x40601d
    }
    int32_t v7 = g2; // 0x40601d
    int32_t v8 = v7 - 36; // 0x40601d
    function_4075df((int32_t *)(v7 - 28), (int32_t *)v8);
    g4 = (int32_t)(char *)v8;
    int32_t v9 = &v1; // 0x40603d
    if (g3 != -44) {
        // 0x406030
        function_40640f();
        v9 = g8;
        // branch -> 0x406037
    }
    int32_t v10 = g2 - 212; // 0x406037
    g1 = v10;
    *(int32_t *)(v9 - 4) = v10;
    *(int32_t *)(v9 - 8) = 0x406043;
    if (function_405789(NULL, 0) == 0) {
        // 0x406048
        *(int32_t *)g8 = -61;
        return function_40640f();
    }
    // 0x40604f
    *(int32_t *)(g2 - 32) = -1;
    *(int32_t *)(g2 - 4) = g3;
    *(int32_t *)(g2 - 80) = g3;
    int32_t v11 = g2 - 80; // 0x406059
    g1 = v11;
    int32_t v12 = g8; // 0x40605c
    *(int32_t *)(v12 - 4) = v11;
    g4 = g2 - 240;
    *(int32_t *)(v12 - 8) = 0x406068;
    function_405ec0(0);
    *(int32_t *)(g2 - 32) = -63;
    *(int32_t *)(g2 - 4) = -1;
    *(int32_t *)(g8 - 4) = 0x406360;
    function_4063f2(0);
    function_406410();
    return 0;
}

// Address range: 0x4063f2 - 0x40640c
bool function_4063f2(int32_t a1) {
    int32_t hLibModule = *(int32_t *)(g2 - 212); // 0x4063f2
    bool result; // 0x406400
    if (hLibModule != g3) {
        // 0x4063fa
        result = FreeLibrary((char *)hLibModule);
        *(int32_t *)(g2 - 212) = g3;
        // branch -> 0x40640c
    } else {
        result = false;
    }
    // 0x40640c
    return result;
}

// Address range: 0x40640d - 0x40640e
void function_40640d(void) {
    // 0x40640d
    return;
}

// Address range: 0x40640f - 0x40640f
int32_t function_40640f(void) {
    // 0x40640f
    int32_t result;
    return result;
}

// Address range: 0x406410 - 0x406415
int32_t function_406410(void) {
    // 0x406410
    int32_t v1;
    int32_t v2;
    function_4082e9(v1, v2, 0);
    return 0;
}

// Address range: 0x406416 - 0x4064e6
int32_t function_406416(int32_t a1) {
    // 0x406416
    function_4082b0((int32_t)&g39, 32);
    g3 = 0;
    *(int32_t *)(g2 - 4) = 0;
    int32_t v1 = g2; // 0x406427
    int32_t v2 = *(int32_t *)(v1 + 8); // 0x406427
    int32_t v3 = *(int32_t *)*(int32_t *)(v2 + 4); // 0x40642d
    g5 = v3;
    *(int32_t *)(v1 - 32) = v3;
    int32_t v4 = 4 * *(int32_t *)(v2 + 80) + g5; // 0x406435
    *(int32_t *)(v2 + 8) = v4;
    *(int32_t *)(v2 + 12) = *(int32_t *)v4;
    g4 = v2 + 64;
    g6 = v2 + 28;
    function_407a32();
    int32_t v5 = *(int32_t *)(g7 + 16); // 0x40645b
    *(int32_t *)(g2 - 28) = v5;
    int32_t v6 = *(int32_t *)(g7 + 4); // 0x406461
    *(int32_t *)(g2 - 40) = v6;
    if (v5 == g3) {
        // 0x4064c7
        *(char *)(g7 + 76) = 1;
        *(int32_t *)(g2 - 4) = -1;
        function_4082e9(a1, 0, 0);
        return 0;
    }
    // 0x40646b
    if ((v6 ^ v5) == -0x1000) {
        // 0x406474
        *(int32_t *)(g2 - 4) = 1;
        int32_t v7 = *(int32_t *)v5; // 0x40647b
        *(int32_t *)(g2 - 44) = v7;
        int32_t v8 = g7; // 0x4064bb
        if (v7 == g5) {
            // 0x4064bb
            *(int32_t *)(v8 + 16) = g3;
            *(int32_t *)(g7 + 20) = g3;
            *(int32_t *)(g7 + 24) = g3;
            // branch -> 0x4064c4
        } else {
            int32_t v9 = 4 * *(int32_t *)(v8 + 80) + v7; // 0x406487
            *(int32_t *)(v8 + 20) = v9;
            *(int32_t *)(g7 + 24) = *(int32_t *)v9;
            g4 = g7 + 64;
            function_407a32();
            // branch -> 0x4064c4
        }
        // 0x4064c4
        *(int32_t *)(g2 - 4) = g3;
        // branch -> 0x4064c7
    }
    // 0x4064c7
    *(char *)(g7 + 76) = 1;
    *(int32_t *)(g2 - 4) = -1;
    function_4082e9(a1, 0, 0);
    return 0;
}

// Address range: 0x4064e7 - 0x406560
int32_t function_4064e7(int32_t a1) {
    // 0x4064e7
    function_4082b0((int32_t)&g40, 12);
    g3 = 0;
    *(int32_t *)(g2 - 4) = 0;
    g5 = g4 + 28;
    function_407a32();
    int32_t v1 = g7; // 0x40651d
    int32_t v2 = g3; // 0x40651d
    if (*(int32_t *)(v1 + 16) == v2) {
        // 0x406541
        *(char *)(v1 + 77) = 1;
        *(int32_t *)(g2 - 4) = -1;
        function_4082e9(a1, 0, 0);
        return 0;
    }
    int32_t v3 = *(int32_t *)(v1 + 20); // 0x406522
    g4 = v3;
    if (v3 == v2) {
        // 0x406541
        *(char *)(v1 + 77) = 1;
        *(int32_t *)(g2 - 4) = -1;
        function_4082e9(a1, 0, 0);
        return 0;
    }
    // 0x406529
    int32_t v4; // 0x406541
    if (*(int32_t *)(v1 + 24) != v2) {
        // 0x406530
        function_407a32();
        v4 = g7;
        // branch -> 0x406541
    } else {
        v4 = v1;
    }
    // 0x406541
    *(char *)(v4 + 77) = 1;
    *(int32_t *)(g2 - 4) = -1;
    function_4082e9(a1, 0, 0);
    return 0;
}

// Address range: 0x406561 - 0x4065bf
int32_t function_406561(void) {
    // 0x406561
    function_4082b0((int32_t)&g41, 20);
    int32_t v1 = g2; // 0x40656d
    *(int32_t *)(v1 - 4) = 0;
    int32_t v2 = *(int32_t *)(*(int32_t *)(v1 + 8) + 48); // 0x406574
    g4 = v2;
    *(int32_t *)(g2 - 32) = v2;
    int32_t v3 = g2; // 0x4065a4
    if (g4 == 0) {
        // 0x4065a4
        *(int32_t *)(v3 - 4) = -1;
        // branch -> 0x4065ba
    } else {
        // 0x40657e
        *(char *)(v3 - 25) = -21;
        g6 = g2 - 25;
        function_407a32();
        *(int32_t *)(g2 - 4) = -1;
        // branch -> 0x4065ba
    }
    // 0x4065ba
    int32_t v4;
    function_4082e9(v4, 0, 0);
    return 0;
}

// Address range: 0x4065c0 - 0x406614
int32_t function_4065c0(int32_t a1) {
    // 0x4065c0
    function_4082b0((int32_t)&g42, 8);
    int32_t v1 = g2; // 0x4065cc
    uint32_t v2 = *(int32_t *)(v1 + 8); // 0x4065cc
    g7 = v2;
    if (v2 > 9) {
        // 0x4065db
        *(int32_t *)(v1 - 4) = 0;
        g4 = g7;
        function_4064e7((int32_t)&g42);
        function_406561();
        int32_t v3 = g7; // 0x4065ec
        int32_t v4 = *(int32_t *)(v3 + 68); // 0x4065ef
        int32_t v5 = v3 + 28; // 0x4065f2
        g1 = v5;
        int32_t v6 = *(int32_t *)v3; // 0x4065f6
        ((int32_t (*)(int32_t, int32_t, int32_t))v6)(v5, v4, *(int32_t *)(v3 + 72));
        *(int32_t *)(g2 - 4) = -1;
        // branch -> 0x40660f
    }
    // 0x40660f
    function_4082e9(a1, 0, 0);
    return 0;
}

// Address range: 0x406615 - 0x4066f2
int32_t (**function_406615(int32_t a1))() {
    int32_t v1 = &g43; // bp-8
    function_4082b0((int32_t)&g43, 32);
    int32_t v2 = g4; // 0x406621
    g5 = v2;
    if (v2 == 0 || *(int32_t *)(g2 + 8) == 0) {
        // 0x4066eb
        // branch -> 0x4066ed
        // 0x4066ed
        function_4082e9(a1, 0, 0);
        return NULL;
    }
    int32_t v3 = v2 + 28; // 0x406635
    g3 = v3;
    char * v4 = "KeServiceDescriptorTable"; // bp-12
    int32_t v5 = function_405371((int32_t *)v3, "KeServiceDescriptorTable", v1); // 0x40663e
    g1 = v5;
    g4 = (int32_t)v4;
    g7 = v5;
    if (v5 == 0) {
        // 0x4066eb
        // branch -> 0x4066ed
        // 0x4066ed
        function_4082e9(a1, 0, 0);
        return NULL;
    }
    int32_t v6 = function_405371((int32_t *)g3, "_except_handler3", v1); // 0x406655
    g1 = v6;
    if (v6 == 0) {
        // 0x4066eb
        // branch -> 0x4066ed
        // 0x4066ed
        function_4082e9(a1, 0, 0);
        return NULL;
    }
    // 0x406664
    *(int32_t *)*(int32_t *)(g2 + 8) = v6;
    *(int32_t *)(g5 + 4) = g7;
    *(int32_t *)(g5 + 16) = 0;
    int32_t v7 = g7 - *(int32_t *)(g5 + 32); // 0x406670
    g7 = v7;
    *(int32_t *)(g2 - 36) = v7;
    int32_t hModule = *(int32_t *)g3; // 0x40667b
    int32_t func = (int32_t)GetProcAddress((char *)hModule, "KeAddSystemServiceTable"); // 0x40667d_6
    int32_t v8 = 0; // ecx
    *(int32_t *)(g2 - 4) = 0;
    *(int32_t *)(g2 - 32) = v8;
    *(int32_t *)(g2 - 28) = v8;
    g3 = -0x400001;
    uint32_t v9 = *(int32_t *)(g2 - 28); // 0x40669334
    int32_t v10; // 0x4066cc
    int32_t v11; // 0x4066cf
    if (v9 > 99) {
        // 0x4066cc
        v10 = g5;
        v11 = *(int32_t *)(g2 - 32);
        *(int32_t *)(v10 + 16) = v11 + *(int32_t *)(v10 + 32);
        *(int32_t *)(g2 - 4) = -1;
        // branch -> 0x4066ed
        // 0x4066ed
        function_4082e9(a1, 0, 0);
        return NULL;
    }
    while (true) {
        int32_t v12 = v9 + func; // 0x40669c
        int32_t v13 = v12; // edx
        *(int32_t *)(g2 - 40) = v12;
        int32_t v14 = g3 & *(int32_t *)v12; // 0x4066a6
        v8 = v14;
        *(int32_t *)(g2 - 44) = v14;
        if (v8 == *(int32_t *)(g2 - 36)) {
            int32_t v15 = v13 + 9; // 0x4066b0
            *(int32_t *)(g2 - 40) = v15;
            int32_t v16 = g3 & *(int32_t *)v15; // 0x4066b8
            *(int32_t *)(g2 - 48) = v16;
            int32_t v17 = v8 ^ v16; // 0x4066bf
            g7 = v17;
            if (v17 == -0x1000) {
                // 0x4066c9
                *(int32_t *)(g2 - 32) = v16;
                // branch -> 0x4066cc
                // 0x4066cc
                v10 = g5;
                v11 = *(int32_t *)(g2 - 32);
                *(int32_t *)(v10 + 16) = v11 + *(int32_t *)(v10 + 32);
                *(int32_t *)(g2 - 4) = -1;
                // branch -> 0x4066ed
                // 0x4066ed
                function_4082e9(a1, 0, 0);
                return NULL;
            }
        }
        int32_t * v18 = (int32_t *)(g2 - 28); // 0x4066d7_0
        *v18 = *v18 + 1;
        int32_t v19 = *(int32_t *)(g2 - 28); // 0x406693
        if (v19 > 99) {
            // break -> 0x4066cc
            break;
        }
        v9 = v19;
        // continue -> 0x406699
    }
    // 0x4066cc
    v10 = g5;
    v11 = *(int32_t *)(g2 - 32);
    *(int32_t *)(v10 + 16) = v11 + *(int32_t *)(v10 + 32);
    *(int32_t *)(g2 - 4) = -1;
    // branch -> 0x4066ed
    // 0x4066ed
    function_4082e9(a1, 0, 0);
    return NULL;
}

// Address range: 0x4066f3 - 0x406b9b
int32_t function_4066f3(void) {
    int32_t v1 = &g44; // bp-8
    function_4082b0((int32_t)&g44, 904);
    int32_t v2 = 0; // ebx
    int32_t v3 = g2; // 0x406704
    *(int32_t *)(v3 - 248) = *(int32_t *)(v3 + 16);
    int32_t v4 = g2; // 0x406729
    *(int32_t *)(v4 - 180) = *(int32_t *)(v4 + 20);
    int32_t v5 = g2; // 0x406732
    *(int32_t *)(v5 - 176) = *(int32_t *)(v5 + 24);
    int32_t v6 = *(int32_t *)(v3 + 8) + 512; // 0x40673b
    *(int32_t *)(g2 - 112) = v6;
    *(int32_t *)(g2 - 184) = v6;
    *(char *)(g2 - 172) = (char)v2;
    *(char *)(g2 - 171) = (char)v2;
    function_407ca2();
    *(int32_t *)(g2 - 168) = 0;
    if (g3 == 0) {
        // 0x40676b
        function_406bb9();
        // branch -> 0x406772
    }
    int32_t v7 = g2; // 0x406772
    int32_t v8 = v7 - 36; // 0x406772
    function_4075df((int32_t *)(v7 - 32), (int32_t *)v8);
    g4 = (int32_t)(char *)v8;
    int32_t v9 = &v1; // 0x406792
    if (g3 != -44) {
        // 0x406785
        function_406bb9();
        v9 = g8;
        // branch -> 0x40678c
    }
    int32_t v10 = g2 - 220; // 0x40678c
    g1 = v10;
    *(int32_t *)(v9 - 4) = v10;
    *(int32_t *)(v9 - 8) = 0x406798;
    if (function_405789(NULL, 0) == 0) {
        // 0x40679d
        *(int32_t *)g8 = -61;
        return function_406bb9();
    }
    // 0x4067a4
    *(int32_t *)(g2 - 28) = -1;
    *(int32_t *)(g2 - 4) = g3;
    *(int32_t *)(g2 - 80) = g3;
    int32_t v11 = g2 - 80; // 0x4067ae
    g1 = v11;
    int32_t v12 = g8; // 0x4067b1
    *(int32_t *)(v12 - 4) = v11;
    g4 = g2 - 248;
    *(int32_t *)(v12 - 8) = 0x4067bd;
    function_406615(0);
    *(int32_t *)(g2 - 28) = -63;
    *(int32_t *)(g2 - 4) = -1;
    *(int32_t *)(g8 - 4) = 0x406b0a;
    function_406b9c(0);
    function_406bba();
    return 0;
}

// Address range: 0x406b9c - 0x406bb6
bool function_406b9c(int32_t a1) {
    int32_t hLibModule = *(int32_t *)(g2 - 220); // 0x406b9c
    bool result; // 0x406baa
    if (hLibModule != g3) {
        // 0x406ba4
        result = FreeLibrary((char *)hLibModule);
        *(int32_t *)(g2 - 220) = g3;
        // branch -> 0x406bb6
    } else {
        result = false;
    }
    // 0x406bb6
    return result;
}

// Address range: 0x406bb7 - 0x406bb8
void function_406bb7(void) {
    // 0x406bb7
    return;
}

// Address range: 0x406bb9 - 0x406bb9
int32_t function_406bb9(void) {
    // 0x406bb9
    int32_t result;
    return result;
}

// Address range: 0x406bba - 0x406bbf
int32_t function_406bba(void) {
    // 0x406bba
    int32_t v1;
    int32_t v2;
    function_4082e9(v1, v2, 0);
    return 0;
}

// Address range: 0x406bc0 - 0x406bff
int32_t function_406bc0(int32_t a1) {
    // 0x406bc0
    function_4082b0((int32_t)&g45, 8);
    *(int32_t *)(g2 - 4) = 0;
    int32_t v1 = *(int32_t *)(g2 + 8); // 0x406bd0
    g1 = v1;
    *(char *)(v1 + 48) = 1;
    int32_t v2 = g1; // 0x406bd7
    int32_t v3 = *(int32_t *)(v2 + 4); // 0x406bda
    int32_t v4 = v2 + 12; // 0x406bdd
    g4 = v4;
    int32_t v5 = *(int32_t *)v2; // 0x406be1
    ((int32_t (*)(int32_t, int32_t, int32_t))v5)(v4, v3, *(int32_t *)(v2 + 8));
    *(int32_t *)(g2 - 4) = -1;
    function_4082e9(a1, 0, 0);
    return 0;
}

// Address range: 0x406c00 - 0x406e6d
int32_t function_406c00(char * a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8) {
    int32_t v1;
    int32_t v2 = v1; // bp-4
    g2 = &v2;
    int32_t v3 = g5; // bp-676
    int32_t v4 = &v3; // 0x406c12_0
    if (a1 == NULL || a2 == 0) {
        // 0x406e68
        g7 = *(int32_t *)(v4 + 4);
        g3 = *(int32_t *)(v4 + 8);
        g2 = v1;
        return (int32_t)(char *)87;
    }
    // 0x406c22
    char * v5;
    if (a3 != 0) {
        // 0x406c2d
        int32_t v6;
        int32_t v7;
        function_4075df(&v7, &v6);
        v5 = (char *)-44;
        // branch -> 0x406e68
    } else {
        v2 = v1;
        v3 = g5;
        v5 = (char *)87;
    }
    // 0x406e68
    g5 = v3;
    g7 = *(int32_t *)(v4 + 4);
    g3 = *(int32_t *)(v4 + 8);
    g2 = v2;
    return (int32_t)v5;
}

// Address range: 0x406e6e - 0x406ed6
int32_t function_406e6e(int32_t a1, int32_t a2) {
    // 0x406e6e
    function_4082b0((int32_t)&g46, 20);
    int32_t v1 = g2; // 0x406e7a
    int32_t v2 = *(int32_t *)(v1 + 8); // esi
    *(int32_t *)(v1 - 4) = 0;
    int32_t v3 = *(int32_t *)(v2 + 4); // 0x406e81
    g4 = v3;
    *(int32_t *)(g2 - 32) = v3;
    int32_t v4 = 0; // eax
    *(int32_t *)(g2 - 28) = 0;
    int32_t v5 = v4; // 0x406e8c11
    if (v5 >= 8) {
        // 0x406e9b
        function_407a32();
        *(int32_t *)(g2 - 4) = -1;
        function_4082e9(a1, a2, 0);
        return 0;
    }
    unsigned char v6 = *(char *)(g4 + v5); // 0x406e91
    g6 = g6 & -256 | (int32_t)v6;
    *(char *)(v5 + 8 + v2) = v6;
    int32_t v7 = v4 + 1; // 0x406e98
    v4 = v7;
    *(int32_t *)(g2 - 28) = v7;
    while (v4 < 8) {
        // 0x406e91
        v5 = v4;
        v6 = *(char *)(g4 + v5);
        g6 = g6 & -256 | (int32_t)v6;
        *(char *)(v5 + 8 + v2) = v6;
        v7 = v4 + 1;
        v4 = v7;
        *(int32_t *)(g2 - 28) = v7;
        // continue -> 0x406e91
    }
    // 0x406e9b
    function_407a32();
    *(int32_t *)(g2 - 4) = -1;
    function_4082e9(a1, a2, 0);
    return 0;
}

// Address range: 0x406ed7 - 0x406f2c
int32_t function_406ed7(int32_t a1) {
    // 0x406ed7
    function_4082b0((int32_t)&g47, 12);
    *(int32_t *)(g2 - 4) = 0;
    function_407a32();
    *(int32_t *)(g2 - 4) = -1;
    function_4082e9(a1, 0, 0);
    return 0;
}

// Address range: 0x406f2d - 0x406f8b
int32_t function_406f2d(void) {
    // 0x406f2d
    function_4082b0((int32_t)&g48, 20);
    int32_t v1 = g2; // 0x406f39
    *(int32_t *)(v1 - 4) = 0;
    int32_t v2 = *(int32_t *)(*(int32_t *)(v1 + 8) + 44); // 0x406f40
    g4 = v2;
    *(int32_t *)(g2 - 32) = v2;
    int32_t v3 = g2; // 0x406f70
    if (g4 == 0) {
        // 0x406f70
        *(int32_t *)(v3 - 4) = -1;
        // branch -> 0x406f86
    } else {
        // 0x406f4a
        *(char *)(v3 - 25) = -21;
        g6 = g2 - 25;
        function_407a32();
        *(int32_t *)(g2 - 4) = -1;
        // branch -> 0x406f86
    }
    // 0x406f86
    int32_t v4;
    function_4082e9(v4, 0, 0);
    return 0;
}

// Address range: 0x406f8c - 0x406fe0
int32_t function_406f8c(int32_t a1) {
    // 0x406f8c
    function_4082b0((int32_t)&g49, 8);
    int32_t v1 = g2; // 0x406f98
    uint32_t v2 = *(int32_t *)(v1 + 8); // 0x406f98
    g7 = v2;
    if (v2 > 9) {
        // 0x406fa7
        *(int32_t *)(v1 - 4) = 0;
        g4 = g7;
        function_406ed7((int32_t)&g49);
        function_406f2d();
        int32_t v3 = g7; // 0x406fb8
        int32_t v4 = *(int32_t *)(v3 + 64); // 0x406fbb
        int32_t v5 = v3 + 24; // 0x406fbe
        g1 = v5;
        int32_t v6 = *(int32_t *)v3; // 0x406fc2
        ((int32_t (*)(int32_t, int32_t, int32_t))v6)(v5, v4, *(int32_t *)(v3 + 68));
        *(int32_t *)(g2 - 4) = -1;
        // branch -> 0x406fdb
    }
    // 0x406fdb
    function_4082e9(a1, 0, 0);
    return 0;
}

// Address range: 0x406fe1 - 0x407026
int32_t function_406fe1(int32_t * a1, int32_t a2) {
    int32_t v1 = g7; // 0x406fe1
    int32_t v2 = g3; // 0x406fe3
    int32_t v3 = g5; // 0x406fe4
    if (a1 == NULL || v1 == 0) {
        // 0x406fe1
        // branch -> 0x407024
        // 0x407024
        g5 = v3;
        g3 = v2;
        return g1 & -256;
    }
    int32_t v4 = v1 + 24; // 0x406fee
    g5 = v4;
    int32_t v5 = function_405371((int32_t *)v4, "NtShutdownSystem", v3); // 0x406ff7
    g3 = v5;
    g4 = (int32_t)"NtShutdownSystem";
    if (v5 == 0) {
        // 0x407024
        g5 = v3;
        g3 = v2;
        return 0;
    }
    int32_t v6 = function_405371((int32_t *)g5, "_except_handler3", v3); // 0x40700a
    int32_t result;
    if (v6 != 0) {
        // 0x407015
        *(int32_t *)(int32_t)a1 = v6;
        *(int32_t *)(g7 + 4) = g3;
        result = v6 & -256 | 1;
        // branch -> 0x407024
    } else {
        result = 0;
    }
    // 0x407024
    g5 = v3;
    g3 = v2;
    return result;
}

// Address range: 0x407027 - 0x407475
int32_t function_407027(int16_t * wstr) {
    int32_t v1 = &g50; // bp-8
    function_4082b0((int32_t)&g50, 732);
    int32_t v2 = g2; // 0x407036
    g5 = *(int32_t *)(v2 + 8);
    int32_t v3 = 0; // ebx
    *(int32_t *)(v2 - 228) = *(int32_t *)(v2 + 16);
    int32_t v4 = g2; // 0x40705d
    *(int32_t *)(v4 - 164) = *(int32_t *)(v4 + 20);
    int32_t v5 = g2; // 0x407066
    *(int32_t *)(v5 - 160) = *(int32_t *)(v5 + 24);
    int32_t v6 = g5 + 512; // 0x40706f
    *(int32_t *)(g2 - 96) = v6;
    *(int32_t *)(g2 - 168) = v6;
    *(char *)(g2 - 156) = (char)v3;
    *(char *)(g2 - 155) = (char)v3;
    *(char *)(g2 - 212) = -22;
    *(char *)(g2 - 211) = (char)v6;
    *(char *)(g2 - 210) = (char)(v6 / 256);
    *(char *)(g2 - 209) = (char)(v6 / 0x10000);
    *(char *)(g2 - 208) = (char)(v6 / 0x1000000);
    *(char *)(g2 - 207) = 8;
    *(char *)(g2 - 206) = (char)v3;
    *(char *)(g2 - 205) = -112;
    function_407ca2();
    *(int32_t *)(g2 - 152) = 0;
    if (g3 == 0) {
        // 0x4070e1
        function_407493();
        // branch -> 0x4070e8
    }
    int32_t v7 = g2; // 0x4070e8
    int32_t v8 = v7 - 36; // 0x4070e8
    function_4075df((int32_t *)(v7 - 28), (int32_t *)v8);
    g4 = (int32_t)(char *)v8;
    int32_t v9 = &v1; // 0x407108
    if (g3 != -44) {
        // 0x4070fb
        function_407493();
        v9 = g8;
        // branch -> 0x407102
    }
    int32_t v10 = g2 - 204; // 0x407102
    g1 = v10;
    *(int32_t *)(v9 - 4) = v10;
    *(int32_t *)(v9 - 8) = 0x40710e;
    int32_t v11 = function_405789((int32_t *)wstr, 0); // 0x407109
    int32_t * v12 = (int32_t *)g8; // 0x40710e_0
    g4 = *v12;
    if (v11 == 0) {
        // 0x407113
        *v12 = -61;
        return function_407493();
    }
    // 0x40711a
    *(int32_t *)(g2 - 32) = -1;
    *(int32_t *)(g2 - 4) = g3;
    *(int32_t *)(g2 - 76) = g3;
    int32_t v13 = g2 - 76; // 0x407124
    g1 = v13;
    int32_t v14 = g8; // 0x407127
    *(int32_t *)(v14 - 4) = v13;
    g7 = g2 - 228;
    *(int32_t *)(v14 - 8) = 0x407133;
    int32_t v15 = function_406fe1((int32_t *)wstr, 0); // 0x40712e
    int32_t v16 = g8; // 0x407133
    int32_t v17;
    if (v15 == 0) {
        // 0x407138
        *(int32_t *)(g2 - 32) = -63;
        v17 = (int32_t)wstr;
        // branch -> 0x4073d9
    } else {
        // 0x407144
        *(int32_t *)v16 = 13;
        *(int32_t *)(v16 - 4) = g2 - 228;
        *(int32_t *)(v16 - 8) = 7;
        *(int32_t *)(v16 - 12) = 0x406e6e;
        *(int32_t *)(v16 - 16) = g5;
        *(int32_t *)(v16 - 20) = 23;
        *(int32_t *)(v16 - 24) = (int32_t)&g66;
        *(int32_t *)(v16 - 28) = 0x407161;
        int32_t uFlags = (int32_t)wstr;
        function_4058da(uFlags, 0, NULL, 0, 0, 0, 0);
        *(int32_t *)(g2 - 236) = g5;
        *(int32_t *)(g2 - 100) = g5 / 0x10000;
        *(int32_t *)(g2 - 232) = 176;
        *(int32_t *)(g2 - 148) = 48;
        *(int32_t *)(g2 - 144) = g3;
        *(int32_t *)(g2 - 140) = g3;
        *(int32_t *)(g2 - 136) = g3;
        *(int32_t *)(g2 - 132) = g3;
        *(int32_t *)(g2 - 128) = g3;
        *(int32_t *)(g2 - 124) = g3;
        *(int32_t *)(g2 - 120) = g3;
        *(int32_t *)(g2 - 116) = g3;
        *(int32_t *)(g2 - 112) = g3;
        *(int32_t *)(g2 - 108) = g3;
        *(int32_t *)(g2 - 104) = g3;
        int32_t v18 = g2; // 0x4071b0
        *(int32_t *)(v18 - 84) = v18 - 148;
        *(int32_t *)(g2 - 132) = g5 + 0xff50 & 0xffff;
        int32_t v19 = g8; // 0x4071ca
        *(int32_t *)(v19 - 4) = (int32_t)L"cnFormSyncExFBC";
        *(int32_t *)(v19 - 8) = g2 - 748;
        *(int32_t *)(v19 - 12) = (int32_t)&g9;
        wcscpy(wstr, NULL);
        int32_t v20 = g8; // 0x4071e2
        *(int32_t *)(v20 - 4) = g2 - 748;
        *(int32_t *)(v20 - 8) = (int32_t)&g10;
        int32_t v21 = wcslen(wstr); // 0x4071e3
        int32_t v22 = g8; // 0x4071e9
        *(int16_t *)(g2 - 48) = (int16_t)(2 * v21);
        *(int16_t *)(g2 - 46) = 512;
        int32_t v23 = g2; // 0x4071f8
        *(int32_t *)(v23 - 44) = v23 - 748;
        int32_t v24 = g2; // 0x407201
        *(int32_t *)(v24 - 88) = v24 - 48;
        *(int32_t *)(g2 - 52) = g3;
        *(int32_t *)(g2 - 92) = g3;
        int32_t * v25 = (int32_t *)(v22 + 36); // 0x40720d_0
        *v25 = 8;
        int32_t * v26 = (int32_t *)(v22 + 32); // 0x40720f_0
        *v26 = g3;
        int32_t * v27 = (int32_t *)(v22 + 28); // 0x407216_1
        *v27 = 0x407218;
        *(int32_t *)(g2 - 52) = (int32_t)LocalAlloc(uFlags, 0);
        *v25 = 16;
        *v26 = g3;
        *v27 = 0x407220;
        int32_t memoryHandle = (int32_t)LocalAlloc(uFlags, 0); // 0x40721e_5
        g7 = memoryHandle;
        *(int32_t *)(g2 - 92) = memoryHandle;
        *v25 = 8;
        *v26 = g3;
        *v27 = *(int32_t *)(g2 - 52);
        *(int32_t *)(v22 + 24) = 0x407230;
        memset((char *)wstr, 0, 0);
        int32_t v28 = g8; // 0x407230
        *(int32_t *)(v28 - 4) = 16;
        *(int32_t *)(v28 - 8) = g3;
        *(int32_t *)(v28 - 12) = g7;
        *(int32_t *)(v28 - 16) = 0x407239;
        memset((char *)wstr, 0, 0);
        int32_t v29 = g8; // 0x407239
        *(int32_t *)(v29 - 4) = 8;
        *(int32_t *)(v29 - 8) = g3;
        *(int32_t *)(v29 - 12) = g2 - 60;
        *(int32_t *)(v29 - 16) = 0x407245;
        memset((char *)wstr, 0, 0);
        int32_t v30 = g2; // 0x407245
        *(int32_t *)(v30 - 72) = *(int32_t *)(v30 - 52);
        *(int32_t *)(g2 - 68) = g7;
        int32_t v31 = g2; // 0x40724e
        *(int32_t *)(v31 - 64) = v31 - 60;
        int32_t v32 = g2; // 0x407254
        *(int32_t *)(v32 - 80) = v32 - 72;
        int32_t v33 = g5 + 1280; // 0x40725a
        g5 = v33;
        *(int32_t *)(g2 - 40) = v33;
        int32_t v34 = g8; // 0x407263
        *(int32_t *)(v34 - 4) = 8;
        *(int32_t *)(v34 - 8) = 28;
        *(int32_t *)(v34 - 12) = g5;
        *(int32_t *)(v34 - 16) = 10;
        *(int32_t *)(v34 - 20) = (int32_t)&g68;
        *(int32_t *)(v34 - 24) = 0x407274;
        function_40593d(uFlags, 0, NULL, 0, 0);
        int32_t v35 = g8; // 0x407274
        *(int32_t *)(v35 + 52) = 0;
        *(int32_t *)(v35 + 48) = g3;
        *(int32_t *)(v35 + 44) = g4;
        *(int32_t *)(v35 + 40) = g6;
        *(int32_t *)(v35 + 36) = g7;
        *(int32_t *)(v35 + 32) = g5;
        *(int32_t *)(v35 + 28) = 0;
        *(int32_t *)(v35 + 24) = 128;
        *(int32_t *)(v35 + 20) = 602;
        *(int32_t *)(v35 + 16) = *(int32_t *)(g2 - 80);
        *(int32_t *)(v35 + 12) = *(int32_t *)(g2 - 88);
        *(int32_t *)(v35 + 8) = *(int32_t *)(g2 - 88);
        *(int32_t *)(v35 + 4) = *(int32_t *)(g2 - 84);
        int32_t v36 = g2; // 0x407295
        g1 = *(int32_t *)(v36 - 28);
        *(int32_t *)v35 = 0x40729b;
        ((int32_t (*)())*(int32_t *)(v36 - 40))();
        int32_t v37 = g8; // 0x40729b
        int32_t * v38 = (int32_t *)(v37 + 8); // 0x40729d_0
        int32_t v39 = *v38; // 0x40729d
        g6 = v39;
        int32_t * v40 = (int32_t *)(v37 + 12); // 0x40729e_0
        int32_t v41 = *v40; // 0x40729e
        g4 = v41;
        int32_t * v42 = (int32_t *)(v37 + 16); // 0x40729f_0
        int32_t * v43 = (int32_t *)(v37 + 20); // 0x4072a0_0
        g3 = 0;
        *v43 = 0;
        *v42 = (int32_t)"cnFormSyncExFBC";
        *v40 = (int32_t)&g11;
        UnregisterClassA((char *)wstr, NULL);
        int32_t v44 = g2; // 0x4072af
        *(int32_t *)(v44 - 132) = *(int32_t *)(v44 - 100) + 0xff50 & 0xffff;
        *v43 = 8;
        *v42 = g3;
        *v40 = 0x4072cd;
        int32_t memoryHandle2 = (int32_t)LocalAlloc(uFlags, 0); // 0x4072cb_5
        g5 = memoryHandle2;
        *(int32_t *)(g2 - 52) = memoryHandle2;
        *v43 = 16;
        *v42 = g3;
        *v40 = 0x4072d7;
        int32_t memoryHandle3 = (int32_t)LocalAlloc(uFlags, 0); // 0x4072d5_5
        g7 = memoryHandle3;
        *(int32_t *)(g2 - 92) = memoryHandle3;
        *v43 = 8;
        *v42 = g3;
        *v40 = g5;
        *v38 = 0x4072e5;
        memset((char *)wstr, 0, 0);
        int32_t v45 = g8; // 0x4072e5
        *(int32_t *)(v45 - 4) = 16;
        *(int32_t *)(v45 - 8) = g3;
        *(int32_t *)(v45 - 12) = g7;
        *(int32_t *)(v45 - 16) = 0x4072ee;
        memset((char *)wstr, 0, 0);
        *(int32_t *)(g2 - 72) = g5;
        *(int32_t *)(g2 - 68) = g7;
        int32_t v46 = g8; // 0x4072f4
        *(int32_t *)(v46 - 4) = (int32_t)L"cnFormVoidFBC";
        *(int32_t *)(v46 - 8) = g2 - 748;
        *(int32_t *)(v46 - 12) = (int32_t)&g12;
        wcscpy(wstr, NULL);
        int32_t v47 = g8; // 0x40730c
        *(int32_t *)(v47 - 4) = g2 - 748;
        *(int32_t *)(v47 - 8) = (int32_t)&g13;
        *(int16_t *)(g2 - 48) = (int16_t)(2 * wcslen(wstr));
        *(int16_t *)(g2 - 46) = 512;
        int32_t v48 = g8; // 0x40731f
        *(int32_t *)(v48 - 4) = 8;
        *(int32_t *)(v48 - 8) = 28;
        *(int32_t *)(v48 - 12) = *(int32_t *)(g2 - 40);
        *(int32_t *)(v48 - 16) = 10;
        *(int32_t *)(v48 - 20) = (int32_t)&g68;
        *(int32_t *)(v48 - 24) = 0x407332;
        function_40593d(uFlags, 0, NULL, 0, 0);
        int32_t v49 = g8; // 0x407332
        *(int32_t *)(v49 + 52) = 0;
        *(int32_t *)(v49 + 48) = g3;
        *(int32_t *)(v49 + 44) = v41;
        *(int32_t *)(v49 + 40) = v39;
        *(int32_t *)(v49 + 36) = g7;
        *(int32_t *)(v49 + 32) = g5;
        *(int32_t *)(v49 + 28) = 0;
        *(int32_t *)(v49 + 24) = 128;
        *(int32_t *)(v49 + 20) = 603;
        *(int32_t *)(v49 + 16) = *(int32_t *)(g2 - 80);
        *(int32_t *)(v49 + 12) = *(int32_t *)(g2 - 88);
        *(int32_t *)(v49 + 8) = *(int32_t *)(g2 - 88);
        *(int32_t *)(v49 + 4) = *(int32_t *)(g2 - 84);
        int32_t v50 = g2; // 0x407353
        g1 = *(int32_t *)(v50 - 28);
        *(int32_t *)v49 = (int32_t)"_^ZY[Xj";
        ((int32_t (*)())*(int32_t *)(v50 - 40))();
        int32_t v51 = g8; // 0x407359
        int32_t * v52 = (int32_t *)v51; // 0x407359_0
        g5 = *v52;
        int32_t * v53 = (int32_t *)(v51 + 4); // 0x40735a_0
        g7 = *v53;
        int32_t * v54 = (int32_t *)(v51 + 8); // 0x40735b_0
        g6 = *v54;
        int32_t * v55 = (int32_t *)(v51 + 12); // 0x40735c_0
        g4 = *v55;
        int32_t * v56 = (int32_t *)(v51 + 16); // 0x40735d_0
        g3 = *v56;
        int32_t * v57 = (int32_t *)(v51 + 20); // 0x40735e_0
        *v57 = 0;
        *v56 = (int32_t)"cnFormVoidFBC";
        *v55 = (int32_t)&g14;
        UnregisterClassA((char *)wstr, NULL);
        *v57 = 8;
        *v56 = 28;
        *v55 = *(int32_t *)(g2 - 40);
        *v54 = 10;
        *v53 = (int32_t)&g68;
        *v52 = 0x40737f;
        function_40593d(uFlags, 0, NULL, 0, 0);
        int32_t v58 = g8; // 0x40737f
        *(int32_t *)(v58 - 4) = *(int32_t *)(g2 - 76);
        *(int32_t *)(v58 - 8) = 0x407387;
        int32_t v59 = function_407b80(uFlags); // 0x407382
        int32_t v60 = g8; // 0x407387
        if (v59 == 0) {
            // 0x40742b
            *(int32_t *)(g2 - 32) = -61;
            // branch -> 0x4073d7
        } else {
            // 0x407392
            *(int32_t *)(v60 + 20) = v59;
            *(int32_t *)(v60 + 16) = g3;
            *(int32_t *)(v60 + 12) = g4;
            *(int32_t *)(v60 + 8) = g6;
            *(int32_t *)(v60 + 4) = g7;
            *(int32_t *)v60 = g5;
            *(int32_t *)(v60 - 4) = 0;
            *(int32_t *)(v60 - 8) = 1;
            *(int32_t *)(v60 - 12) = 0;
            *(int32_t *)(v60 - 16) = 0;
            *(int32_t *)(v60 - 20) = 0;
            *(int32_t *)(v60 - 24) = 1536;
            *(int32_t *)(v60 - 28) = *(int32_t *)(g2 + 12);
            int32_t v61 = g2; // 0x4073aa
            int32_t v62 = *(int32_t *)(v61 - 36); // 0x4073aa
            g1 = v62;
            *(int32_t *)(v60 - 32) = 0x4073b0;
            ((int32_t (*)())*(int32_t *)(v61 - 40))();
            *(int32_t *)(g2 - 32) = v62;
            int32_t v63 = g8; // 0x4073b3
            g5 = *(int32_t *)v63;
            g7 = *(int32_t *)(v63 + 4);
            g6 = *(int32_t *)(v63 + 8);
            int32_t * v64 = (int32_t *)(v63 + 16); // 0x4073b7_0
            g3 = *v64;
            *(int32_t *)(v63 + 20) = 0;
            *v64 = 0x4073c0;
            function_407b80(uFlags);
            int32_t v65 = g8; // 0x4073c0
            int32_t v66 = g2; // 0x4073c1
            int32_t * v67 = (int32_t *)(v66 - 32); // 0x4073c1_0
            if (*v67 == 0) {
                // 0x4073c7
                if (*(char *)(v66 - 156) == 0) {
                    // 0x4073d0
                    *v67 = -64;
                    // branch -> 0x4073d7
                    // 0x4073d7
                    g3 = 0;
                    // branch -> 0x4073d9
                    // 0x4073d9
                    *(int32_t *)(g2 - 4) = -1;
                    *(int32_t *)(g8 - 4) = 0x4073e2;
                    function_407476(uFlags);
                    function_407494();
                    return *(int32_t *)(g2 - 32);
                }
                // 0x4073ea
                *(int32_t *)v65 = 7;
                *(int32_t *)(v65 - 4) = g2 - 228;
                *(int32_t *)(v65 - 8) = 1;
                *(int32_t *)(v65 - 12) = 0x406f8c;
                *(int32_t *)(v65 - 16) = *(int32_t *)(g2 - 96);
                *(int32_t *)(v65 - 20) = 17;
                *(int32_t *)(v65 - 24) = (int32_t)&g67;
                *(int32_t *)(v65 - 28) = 0x407409;
                function_4058da(uFlags, 0, NULL, 0, 0, 0, 0);
                int32_t v68 = g8; // 0x407409
                *(int32_t *)(v68 - 4) = 8;
                *(int32_t *)(v68 - 8) = 4;
                *(int32_t *)(v68 - 12) = *(int32_t *)(g2 - 40);
                *(int32_t *)(v68 - 16) = 10;
                *(int32_t *)(v68 - 20) = (int32_t)&g68;
                *(int32_t *)(v68 - 24) = 0x40741c;
                function_40593d(uFlags, 0, NULL, 0, 0);
                int32_t v69 = g8; // 0x40741c
                *(int32_t *)(v69 - 4) = *(int32_t *)(g2 - 76);
                *(int32_t *)(v69 - 8) = 0x407424;
                int32_t v70 = function_407b80(uFlags); // 0x40741f
                if (v70 == 0) {
                    // 0x40742b
                    *(int32_t *)(g2 - 32) = -61;
                    // branch -> 0x4073d7
                    // 0x4073d7
                    g3 = 0;
                    // branch -> 0x4073d9
                } else {
                    // 0x407434
                    *(int32_t *)(g2 - 32) = -1;
                    int32_t v71 = g8; // 0x407438
                    *(int32_t *)(v71 - 4) = v70;
                    *(int32_t *)(v71 - 8) = g3;
                    *(int32_t *)(v71 - 12) = g4;
                    *(int32_t *)(v71 - 16) = g6;
                    *(int32_t *)(v71 - 20) = g7;
                    *(int32_t *)(v71 - 24) = g5;
                    *(int32_t *)(v71 - 28) = 100;
                    int32_t v72 = g2; // 0x407440
                    int32_t v73 = *(int32_t *)(v72 - 152); // 0x407440
                    g1 = v73;
                    *(int32_t *)(v71 - 32) = 0x407449;
                    ((int32_t (*)())*(int32_t *)(v72 - 40))();
                    *(int32_t *)(g2 - 32) = v73;
                    g5 = *(int32_t *)g8;
                    g7 = *(int32_t *)(g8 + 4);
                    *(int32_t *)(g8 + 20) = 0;
                    *(int32_t *)(g8 + 16) = 0x407459;
                    function_407b80(uFlags);
                    g3 = 0;
                    if (*(char *)(g2 - 155) == 0) {
                        // 0x407468
                        *(int32_t *)(g2 - 32) = -64;
                        // branch -> 0x4073d9
                    }
                }
                // 0x4073d9
                *(int32_t *)(g2 - 4) = -1;
                *(int32_t *)(g8 - 4) = 0x4073e2;
                function_407476(uFlags);
                function_407494();
                return *(int32_t *)(g2 - 32);
            }
        }
        // 0x4073d7
        g3 = 0;
        v17 = uFlags;
        // branch -> 0x4073d9
    }
    // 0x4073d9
    *(int32_t *)(g2 - 4) = -1;
    *(int32_t *)(g8 - 4) = 0x4073e2;
    function_407476(v17);
    function_407494();
    return *(int32_t *)(g2 - 32);
}

// Address range: 0x407476 - 0x407490
bool function_407476(int32_t a1) {
    int32_t hLibModule = *(int32_t *)(g2 - 204); // 0x407476
    bool result; // 0x407484
    if (hLibModule != g3) {
        // 0x40747e
        result = FreeLibrary((char *)hLibModule);
        *(int32_t *)(g2 - 204) = g3;
        // branch -> 0x407490
    } else {
        result = false;
    }
    // 0x407490
    return result;
}

// Address range: 0x407491 - 0x407492
void function_407491(void) {
    // 0x407491
    return;
}

// Address range: 0x407493 - 0x407493
int32_t function_407493(void) {
    // 0x407493
    int32_t result;
    return result;
}

// Address range: 0x407494 - 0x407499
int32_t function_407494(void) {
    // 0x407494
    int32_t v1;
    int32_t v2;
    function_4082e9(v1, v2, 0);
    return g4;
}

// Address range: 0x40749a - 0x407536
char * function_40749a(void) {
    // 0x40749a
    function_4082b0((int32_t)&g58, 28);
    char * hModule = LoadLibraryW(L"user32.dll"); // 0x4074ab
    *(int32_t *)(g2 - 36) = (int32_t)hModule;
    g3 = 0;
    int32_t v1;
    if (hModule == NULL) {
        // 0x407531
        function_4082e9(v1, 0, 0);
        return NULL;
    }
    // 0x4074ba
    *(int32_t *)(g2 - 4) = 0;
    int32_t lpProcName = *(int32_t *)(g2 + 8); // 0x4074bd
    int32_t func = (int32_t)GetProcAddress(hModule, (char *)lpProcName); // 0x4074c1_6
    int32_t v2 = func; // eax
    *(int32_t *)(g2 - 32) = func;
    if (v2 == g3) {
        // 0x4074fc
        _local_unwind2(g2 - 16, -1);
        // branch -> 0x407531
    } else {
        // 0x4074d2
        *(int32_t *)(g2 - 4) = 1;
        *(int32_t *)(g2 - 28) = g3;
        if (*(int32_t *)(g2 - 28) <= 9) {
            int32_t v3 = g2; // 0x4074dc25
            while (true) {
                int32_t v4 = v2; // 0x4074e2
                if (*(char *)v4 == -72) {
                    char v5 = *(char *)(v4 + 3); // 0x4074e7
                    if ((int32_t)v5 == g3) {
                        // 0x4074ec
                        if (*(char *)(v4 + 4) == v5) {
                            int32_t v6 = v4 + 1; // 0x4074f1
                            *(int32_t *)(v3 - 40) = v6;
                            *(int32_t *)(g2 - 44) = *(int32_t *)v6;
                            // branch -> 0x4074fc
                            // 0x4074fc
                            _local_unwind2(g2 - 16, -1);
                            // branch -> 0x407531
                            // 0x407531
                            function_4082e9(v1, 0, 0);
                            return NULL;
                        }
                    }
                }
                int32_t v7 = v4 + 1; // 0x40750d
                v2 = v7;
                *(int32_t *)(v3 - 32) = v7;
                int32_t * v8 = (int32_t *)(g2 - 28); // 0x407511_0
                *v8 = *v8 + 1;
                if (*(int32_t *)(g2 - 28) > 9) {
                    // break -> 0x407516
                    break;
                }
                v3 = g2;
                // continue -> 0x4074e2
            }
            // 0x407516
            *(int32_t *)(g2 - 4) = g3;
            *(int32_t *)(g2 - 4) = -1;
            function_407537();
            // branch -> 0x407531
            // 0x407531
            function_4082e9(v1, 0, 0);
            return NULL;
        }
        // 0x407516
        *(int32_t *)(g2 - 4) = g3;
        *(int32_t *)(g2 - 4) = -1;
        function_407537();
        // branch -> 0x407531
    }
    // 0x407531
    function_4082e9(v1, 0, 0);
    return NULL;
}

// Address range: 0x407537 - 0x407540
bool function_407537(void) {
    // 0x407537
    return FreeLibrary((char *)*(int32_t *)(g2 - 36));
}

// Address range: 0x407541 - 0x4075bd
int32_t function_407541(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    // 0x407541
    int32_t v1;
    int32_t v2 = v1; // bp-4
    g2 = &v2;
    int32_t v3 = g5; // 0x407548
    int32_t v4 = 0; // ebx
    int32_t v5 = g7; // 0x40754b
    int32_t v6 = 4 * g1 + v5; // 0x40754b
    g5 = v6;
    int32_t result; // 0x4075b2
    if (v5 < v6) {
        int32_t v7 = v5; // 0x4075a417
        int32_t v8 = 0; // 0x4075ad14
        // branch -> 0x40755b
        while (true) {
            // 0x40755b
            function_407f0e();
            int32_t v9;
            int32_t v10 = function_40806e(a1, v9 - a4, a2, a3); // 0x407583
            int32_t v11 = v8; // 0x4075ad13
            if (v10 >= v4) {
                // 0x40758f
                v4 = v10;
                v11 = v7;
                // branch -> 0x4075a4
            }
            int32_t v12 = v7 + 4; // 0x4075a4
            if (v12 >= g5) {
                // 0x4075ad
                // branch -> 0x4075ad
                // 0x4075ad
                result = (v11 - g7) / 4;
                g1 = result;
                g5 = v3;
                g2 = v2;
                return result;
            }
            // 0x4075a4
            v7 = v12;
            v8 = v11;
            // branch -> 0x40755b
        }
    }
    // 0x4075ad
    result = -v5 / 4;
    g1 = result;
    g5 = v3;
    g2 = v1;
    return result;
}

// Address range: 0x4075be - 0x4075de
int32_t function_4075be(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x4075be
    function_407f0e();
    g1 = -4;
    return -4;
}

// Address range: 0x4075df - 0x407617
int32_t function_4075df(int32_t * a1, int32_t * a2) {
    // 0x4075df
    function_40749a();
    function_40749a();
    int32_t v1;
    g7 = v1;
    return -44;
}

// Address range: 0x407618 - 0x407679
int32_t function_407618(int32_t a1, int32_t a2, int32_t a3, int64_t a4, int32_t a5, int32_t a6, int32_t a7) {
    int32_t v1 = g4; // 0x40761b
    int32_t v2 = v1; // bp-8
    int32_t v3 = g7; // 0x40761c
    g7 = v1;
    int32_t v4 = function_407541(a1, a3, (int32_t)a4, a5, v3); // 0x40762b
    g1 = v4;
    int32_t v5 = g5; // 0x407633
    *(int32_t *)v5 = v4;
    int32_t result; // 0x407679_2
    if (v5 > -1) {
        // 0x40763d
        g4 = g7;
        function_4075be(a1, (int32_t)&v2, v3, v2);
        result = -4;
        // branch -> 0x407677
    } else {
        // 0x407639
        result = g5;
        // branch -> 0x407677
    }
    // 0x407677
    g7 = v3;
    return result;
}

// Address range: 0x40767a - 0x4077a7
int32_t function_40767a(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5) {
    // 0x40767a
    g4 = *(int32_t *)g7;
    int32_t v1 = g3; // 0x40767f
    int32_t v2 = g5; // 0x407680
    g5 = g1;
    g3 = 256;
    g1 = 256;
    int32_t result = function_407618(a1, 92, (int32_t)&g51, 420, a2, v2, v1); // 0x40769c
    g1 = result;
    int32_t v3;
    if (result < 0) {
        // 0x4077a4
        g5 = v2;
        g3 = v1;
        g2 = v3;
        return result;
    }
    // 0x4076ac
    int32_t result2; // 0x407723
    int32_t v4; // 0x407747
    int32_t v5; // 0x40776b
    int32_t v6; // 0x40778f
    int32_t result3; // 0x4077a7_2
    int32_t v7;
    if (result == 0) {
        // 0x407705
        g4 = *(int32_t *)g7;
        g5 = a3;
        g3 = 300;
        g1 = 300;
        result2 = function_407618(a1, 80, (int32_t)&g54, 217, a2, v2, v1);
        g1 = result2;
        if (result2 < 0) {
            // 0x4077a4
            g5 = v2;
            g3 = v1;
            g2 = v3;
            return result2;
        }
        // 0x40772f
        if (result2 == 0) {
            // 0x4077a2
            g1 = 0;
            result3 = 0;
            // branch -> 0x4077a4
        } else {
            // 0x407731
            g4 = *(int32_t *)g7;
            g1 = g3;
            v4 = function_407618(a1, 80, (int32_t)&g55, 235, a2, v2, v1);
            g1 = v4;
            if (v4 >= 0) {
                // 0x407753
                if (v4 == 0) {
                    // 0x4077a2
                    g1 = 0;
                    result3 = 0;
                    // branch -> 0x4077a4
                } else {
                    // 0x407755
                    g4 = *(int32_t *)g7;
                    g1 = g3;
                    v5 = function_407618(a1, 80, (int32_t)&g56, 212, a2, v2, v1);
                    g1 = v5;
                    if (v5 >= 0) {
                        // 0x407777
                        if (v5 == 0) {
                            // 0x4077a2
                            g1 = 0;
                            result3 = 0;
                            // branch -> 0x4077a4
                        } else {
                            // 0x407779
                            g4 = *(int32_t *)g7;
                            g1 = g3;
                            v6 = function_407618(a1, 80, (int32_t)&g57, 212, a2, v2, v1);
                            g1 = v6;
                            if (v6 >= 0) {
                                // 0x40779b
                                if (v6 == 0) {
                                    // 0x4077a2
                                    g1 = 0;
                                    result3 = 0;
                                    // branch -> 0x4077a4
                                } else {
                                    v7 = -14;
                                    // 0x40779f
                                    g1 = v7;
                                    result3 = v7;
                                    // branch -> 0x4077a4
                                }
                                // 0x4077a4
                                g5 = v2;
                                g3 = v1;
                                g2 = v3;
                                return result3;
                            }
                            result3 = v6;
                        }
                        // 0x4077a4
                        g5 = v2;
                        g3 = v1;
                        g2 = v3;
                        return result3;
                    }
                    result3 = v5;
                }
                // 0x4077a4
                g5 = v2;
                g3 = v1;
                g2 = v3;
                return result3;
            }
            result3 = v4;
        }
        // 0x4077a4
        g5 = v2;
        g3 = v1;
        g2 = v3;
        return result3;
    }
    // 0x4076ae
    g4 = *(int32_t *)g7;
    g1 = g3;
    int32_t result4 = function_407618(a1, 92, (int32_t)&g52, 417, a2, v2, v1); // 0x4076c4
    g1 = result4;
    if (result4 < 0) {
        // 0x4077a4
        g5 = v2;
        g3 = v1;
        g2 = v3;
        return result4;
    }
    // 0x4076d4
    if (result4 == 0) {
        // 0x407705
        g4 = *(int32_t *)g7;
        g5 = a3;
        g3 = 300;
        g1 = 300;
        result2 = function_407618(a1, 80, (int32_t)&g54, 217, a2, v2, v1);
        g1 = result2;
        if (result2 >= 0) {
            // 0x40772f
            if (result2 == 0) {
                // 0x4077a2
                g1 = 0;
                result3 = 0;
                // branch -> 0x4077a4
            } else {
                // 0x407731
                g4 = *(int32_t *)g7;
                g1 = g3;
                v4 = function_407618(a1, 80, (int32_t)&g55, 235, a2, v2, v1);
                g1 = v4;
                if (v4 >= 0) {
                    // 0x407753
                    if (v4 == 0) {
                        // 0x4077a2
                        g1 = 0;
                        result3 = 0;
                        // branch -> 0x4077a4
                    } else {
                        // 0x407755
                        g4 = *(int32_t *)g7;
                        g1 = g3;
                        v5 = function_407618(a1, 80, (int32_t)&g56, 212, a2, v2, v1);
                        g1 = v5;
                        if (v5 >= 0) {
                            // 0x407777
                            if (v5 == 0) {
                                // 0x4077a2
                                g1 = 0;
                                result3 = 0;
                                // branch -> 0x4077a4
                            } else {
                                // 0x407779
                                g4 = *(int32_t *)g7;
                                g1 = g3;
                                v6 = function_407618(a1, 80, (int32_t)&g57, 212, a2, v2, v1);
                                g1 = v6;
                                if (v6 >= 0) {
                                    // 0x40779b
                                    if (v6 == 0) {
                                        // 0x4077a2
                                        g1 = 0;
                                        result3 = 0;
                                        // branch -> 0x4077a4
                                    } else {
                                        v7 = -14;
                                        // 0x40779f
                                        g1 = v7;
                                        result3 = v7;
                                        // branch -> 0x4077a4
                                    }
                                    // 0x4077a4
                                    g5 = v2;
                                    g3 = v1;
                                    g2 = v3;
                                    return result3;
                                }
                                result3 = v6;
                            }
                            // 0x4077a4
                            g5 = v2;
                            g3 = v1;
                            g2 = v3;
                            return result3;
                        }
                        result3 = v5;
                    }
                    // 0x4077a4
                    g5 = v2;
                    g3 = v1;
                    g2 = v3;
                    return result3;
                }
                result3 = v4;
            }
            // 0x4077a4
            g5 = v2;
            g3 = v1;
            g2 = v3;
            return result3;
        }
        result3 = result2;
    } else {
        // 0x4076d6
        g4 = *(int32_t *)g7;
        g1 = g3;
        int32_t v8 = function_407618(a1, 92, (int32_t)&g53, 282, a2, v2, v1); // 0x4076ec
        g1 = v8;
        if (v8 >= 0) {
            // 0x4076fc
            if (v8 == 0) {
                // 0x407705
                g4 = *(int32_t *)g7;
                g5 = a3;
                g3 = 300;
                g1 = 300;
                result2 = function_407618(a1, 80, (int32_t)&g54, 217, a2, v2, v1);
                g1 = result2;
                if (result2 >= 0) {
                    // 0x40772f
                    if (result2 == 0) {
                        // 0x4077a2
                        g1 = 0;
                        result3 = 0;
                        // branch -> 0x4077a4
                    } else {
                        // 0x407731
                        g4 = *(int32_t *)g7;
                        g1 = g3;
                        v4 = function_407618(a1, 80, (int32_t)&g55, 235, a2, v2, v1);
                        g1 = v4;
                        if (v4 >= 0) {
                            // 0x407753
                            if (v4 == 0) {
                                // 0x4077a2
                                g1 = 0;
                                result3 = 0;
                                // branch -> 0x4077a4
                            } else {
                                // 0x407755
                                g4 = *(int32_t *)g7;
                                g1 = g3;
                                v5 = function_407618(a1, 80, (int32_t)&g56, 212, a2, v2, v1);
                                g1 = v5;
                                if (v5 >= 0) {
                                    // 0x407777
                                    if (v5 == 0) {
                                        // 0x4077a2
                                        g1 = 0;
                                        result3 = 0;
                                        // branch -> 0x4077a4
                                    } else {
                                        // 0x407779
                                        g4 = *(int32_t *)g7;
                                        g1 = g3;
                                        v6 = function_407618(a1, 80, (int32_t)&g57, 212, a2, v2, v1);
                                        g1 = v6;
                                        if (v6 >= 0) {
                                            // 0x40779b
                                            if (v6 == 0) {
                                                // 0x4077a2
                                                g1 = 0;
                                                result3 = 0;
                                                // branch -> 0x4077a4
                                            } else {
                                                v7 = -14;
                                                // 0x40779f
                                                g1 = v7;
                                                result3 = v7;
                                                // branch -> 0x4077a4
                                            }
                                            // 0x4077a4
                                            g5 = v2;
                                            g3 = v1;
                                            g2 = v3;
                                            return result3;
                                        }
                                        result3 = v6;
                                    }
                                    // 0x4077a4
                                    g5 = v2;
                                    g3 = v1;
                                    g2 = v3;
                                    return result3;
                                }
                                result3 = v5;
                            }
                            // 0x4077a4
                            g5 = v2;
                            g3 = v1;
                            g2 = v3;
                            return result3;
                        }
                        result3 = v4;
                    }
                    // 0x4077a4
                    g5 = v2;
                    g3 = v1;
                    g2 = v3;
                    return result3;
                }
                result3 = result2;
            } else {
                v7 = -13;
                // 0x40779f
                g1 = v7;
                result3 = v7;
                // branch -> 0x4077a4
            }
            // 0x4077a4
            g5 = v2;
            g3 = v1;
            g2 = v3;
            return result3;
        }
        result3 = v8;
    }
    // 0x4077a4
    g5 = v2;
    g3 = v1;
    g2 = v3;
    return result3;
}

// Address range: 0x4077a8 - 0x40788c
int32_t function_4077a8(int32_t a1) {
    int32_t v1 = 44; // bp-4
    int32_t v2 = &g59; // bp-8
    function_4082b0((int32_t)&g59, 44);
    g5 = g4;
    g7 = g6;
    g3 = 0;
    *(int32_t *)(g2 - 28) = 0;
    memset((char *)(g2 - 60), g3, 16);
    int32_t v3 = g2; // 0x4077c9
    int32_t v4 = v3 - 60; // 0x4077c9
    g1 = v4;
    int32_t v5 = *(int32_t *)(v3 + 8); // 0x4077cd
    int32_t v6;
    if (function_407dd3((char *)v5, (int32_t *)v4) == 0) {
        // 0x4077dc
        // branch -> 0x40786f
    } else {
        // 0x4077e4
        *(int32_t *)(g2 - 4) = g3;
        int32_t v7 = GetVersion(); // 0x4077e7
        *(int32_t *)(g2 - 32) = v7;
        int32_t v8 = v7 & 255; // 0x4077f0
        *(int32_t *)(g2 - 36) = v8;
        int32_t v9 = g2; // 0x4077f6
        *(int32_t *)(v9 - 40) = (int32_t)*(char *)(v9 - 31);
        int32_t v10 = g2; // 0x40781b
        if (v8 > 4) {
            // 0x40781b
            *(int32_t *)(v10 - 28) = -66;
            // branch -> 0x407822
        } else {
            int32_t v11 = *(int32_t *)(v10 + 16); // 0x407802
            int32_t v12 = *(int32_t *)(v10 + 12); // 0x407805
            g1 = g5;
            int32_t v13 = function_40767a(v10 - 60, v12, v11, v2, v1); // 0x40780e
            *(int32_t *)(g2 - 28) = v13;
            // branch -> 0x407822
        }
        // 0x407822
        if (*(int32_t *)(g2 - 28) == g3) {
            int32_t v14 = *(int32_t *)g5; // 0x407827
            g5 = v14;
            *(int32_t *)(g2 - 44) = v14;
            g1 = g5;
            g4 = *(int32_t *)g7;
            function_4075be(g2 - 60, *(int32_t *)(g2 + 24), v2, v1);
            *(int32_t *)(g2 - 28) = -4;
            if (g3 == -4) {
                // 0x407845
                g1 = g5 + 1;
                g4 = *(int32_t *)g7;
                function_4075be(g2 - 60, *(int32_t *)(g2 + 28), v2, v1);
                *(int32_t *)(g2 - 28) = -4;
                if (g3 == -4) {
                    int32_t v15 = *(int32_t *)g7; // 0x407875
                    int32_t v16 = *(int32_t *)(g2 + 12); // 0x40787a
                    *(int32_t *)*(int32_t *)(g2 + 20) = v16 + 4 * g5 + v15;
                    // branch -> 0x407882
                    // 0x407882
                    *(int32_t *)(g2 - 4) = -1;
                    function_40788d();
                    // branch -> 0x40786c
                    // 0x40786c
                    // branch -> 0x40786f
                    // 0x40786f
                    function_4082e9(v1, v6, a1);
                    return 0;
                }
            }
            // 0x40785f
            _local_unwind2(g2 - 16, -1);
            // branch -> 0x40786c
        } else {
            // 0x407882
            *(int32_t *)(g2 - 4) = -1;
            function_40788d();
            // branch -> 0x40786c
        }
        // 0x40786c
        // branch -> 0x40786f
    }
    // 0x40786f
    function_4082e9(v1, v6, a1);
    return 0;
}

// Address range: 0x40788d - 0x407897
int32_t function_40788d(void) {
    int32_t v1 = g2 - 60; // 0x40788d
    g1 = v1;
    return function_407e36((int32_t *)v1);
}

// Address range: 0x407898 - 0x4079e2
int32_t function_407898(char * a1, int32_t a2) {
    int32_t v1 = g7; // 0x40789f
    int32_t v2 = g5; // 0x4078a0
    g7 = g1;
    g5 = 0;
    int32_t hMem = 0; // bp-12
    int32_t hMem2 = 0; // bp-16
    int32_t result = function_407f98(a1, &hMem, &hMem2, v2); // 0x4078b6
    int32_t result2;
    if (result == g5) {
        int32_t v3 = result;
        if ((int32_t)*(int16_t *)(hMem + 6) > result) {
            // 0x4078e3
            g3 = 0xab3e;
            int32_t v4 = 0xab3e; // 0x4078f6
            int32_t v5 = result; // 0x4078ee
            int32_t v6 = result; // 0x4079b337
            int32_t v7 = 0; // bp+044
            int32_t v8 = 0; // bp+041
            // branch -> 0x4078e9
            while (true) {
                int32_t v9 = hMem2 + v5; // 0x4078ee
                g1 = v9;
                ((int32_t (*)(int32_t, int32_t, int32_t))v4)(v9, (int32_t)".text", 8);
                int32_t v10 = hMem2; // 0x4078fd
                int32_t v11; // 0x407948
                int32_t v12; // 0x40794b
                int32_t v13; // bp+042
                int32_t v14; // bp+043
                int32_t v15; // bp+038
                int32_t v16; // bp+039
                if (g1 == 0) {
                    // 0x407902
                    g4 = g5 + v10;
                    v13 = 1;
                    v15 = v8;
                    // branch -> 0x40793b
                  lab_0x40793b:
                    // 0x40793b
                    if ((v15 & 255) != 0) {
                        // 0x407953
                        if (v3 == 0) {
                            // 0x407959
                            // branch -> 0x4079cc
                            // 0x4079cc
                            LocalFree((char *)hMem);
                            LocalFree((char *)hMem2);
                            g5 = v2;
                            g7 = v1;
                            return -15;
                        }
                        // 0x40795e
                        g4 = g7 + 4;
                        g6 = &v3;
                        function_4077a8((int32_t)a1);
                        // branch -> 0x4079c9
                        // 0x4079c9
                        // branch -> 0x4079cc
                        // 0x4079cc
                        LocalFree((char *)hMem);
                        LocalFree((char *)hMem2);
                        g5 = v2;
                        g7 = v1;
                        return result;
                    }
                    v14 = v13;
                    v16 = v15;
                } else {
                    int32_t v17 = g5 + v10; // 0x407916
                    g1 = v17;
                    ((int32_t (*)(int32_t, int32_t, int32_t))g3)(v17, (int32_t)".data", 8);
                    if (g1 == 0) {
                        // 0x407927
                        v3 = *(int32_t *)(hMem2 + 20 + g5);
                        v8 = 1;
                        // branch -> 0x407935
                    }
                    // 0x407935
                    if ((v7 & 255) != 0) {
                        v13 = v7;
                        v15 = v8;
                        goto lab_0x40793b;
                    }
                    v14 = v7;
                    v16 = v8;
                    // 0x407941
                    v11 = v6 + 1;
                    v12 = g5 + 40;
                    g5 = v12;
                    if (v11 >= (int32_t)*(int16_t *)(hMem + 6)) {
                        // 0x407953
                        if (v3 == 0) {
                            // 0x407959
                            // branch -> 0x4079cc
                            // 0x4079cc
                            LocalFree((char *)hMem);
                            LocalFree((char *)hMem2);
                            g5 = v2;
                            g7 = v1;
                            return -15;
                        }
                        // 0x40795e
                        g4 = g7 + 4;
                        g6 = &v3;
                        function_4077a8((int32_t)a1);
                        // branch -> 0x4079c9
                        // 0x4079c9
                        // branch -> 0x4079cc
                        // 0x4079cc
                        LocalFree((char *)hMem);
                        LocalFree((char *)hMem2);
                        g5 = v2;
                        g7 = v1;
                        return result;
                    }
                  lab_0x407941:
                    // 0x407941
                    v4 = g3;
                    v5 = v12;
                    v6 = v11;
                    v7 = v14;
                    v8 = v16;
                    // branch -> 0x4078e9
                    continue;
                }
                // 0x407941
                v11 = v6 + 1;
                v12 = g5 + 40;
                g5 = v12;
                if (v11 < (int32_t)*(int16_t *)(hMem + 6)) {
                    goto lab_0x407941;
                }
                // 0x407953
                if (v3 != 0) {
                    // 0x40795e
                    g4 = g7 + 4;
                    g6 = &v3;
                    function_4077a8((int32_t)a1);
                    // branch -> 0x4079c9
                    // 0x4079c9
                    // branch -> 0x4079cc
                    // 0x4079cc
                    LocalFree((char *)hMem);
                    LocalFree((char *)hMem2);
                    g5 = v2;
                    g7 = v1;
                    return result;
                }
            }
        }
        // 0x407959
        result2 = -15;
        // branch -> 0x4079cc
    } else {
        // 0x4079c9
        result2 = result;
        // branch -> 0x4079cc
    }
    // 0x4079cc
    LocalFree((char *)hMem);
    LocalFree((char *)hMem2);
    g5 = v2;
    g7 = v1;
    return result2;
}

// Address range: 0x4079e3 - 0x407a31
char * function_4079e3(char * a1, int32_t * a2, int32_t * a3, int32_t * a4, int32_t * a5, int32_t * a6) {
    int32_t v1;
    memset((char *)&v1, 0, 20);
    g1 = &v1;
    int32_t v2 = function_407898(a1, (int32_t)(char *)&v1); // 0x4079fc
    if (v2 == 0) {
        // 0x407a08
        *a2 = v1;
        int32_t v3;
        *a3 = v3;
        int32_t v4;
        *a4 = v4;
        int32_t v5;
        *a5 = v5;
        g4 = (int32_t)a6;
        int32_t v6;
        g6 = v6;
        *a6 = v6;
        // branch -> 0x407a30
    }
    // 0x407a30
    return (char *)v2;
}

// Address range: 0x407a32 - 0x407b7f
int32_t function_407a32(void) {
    // 0x407a32
    function_4082b0((int32_t)&g60, 36);
    int32_t v1 = *(int32_t *)(g2 + 8); // 0x407a43
    g7 = v1;
    g5 = function_405371((int32_t *)v1, "IoAllocateMdl", (int32_t)&g60);
    int32_t v2 = g7; // 0x407a53
    int32_t v3 = function_405371((int32_t *)v2, "IoFreeMdl", v1); // 0x407a54
    *(int32_t *)(g2 - 32) = v3;
    int32_t v4 = g7; // 0x407a61
    int32_t v5 = function_405371((int32_t *)v4, "MmBuildMdlForNonPagedPool", v2); // 0x407a62
    *(int32_t *)(g2 - 40) = v5;
    int32_t v6 = g7; // 0x407a6f
    int32_t v7 = function_405371((int32_t *)v6, "MmMapLockedPagesSpecifyCache", (int32_t)(char *)v4); // 0x407a70
    *(int32_t *)(g2 - 44) = v7;
    int32_t v8 = g7; // 0x407a7d
    int32_t v9 = function_405371((int32_t *)v8, "MmProbeAndLockPages", (int32_t)(char *)v6); // 0x407a7e
    *(int32_t *)(g2 - 36) = v9;
    int32_t v10 = g7; // 0x407a8b
    int32_t v11 = function_405371((int32_t *)v10, "MmUnlockPages", v8); // 0x407a8c
    *(int32_t *)(g2 - 28) = v11;
    int32_t v12 = function_405371((int32_t *)g7, "MmUnmapLockedPages", v10); // 0x407a9a
    g1 = v12;
    *(int32_t *)(g2 - 52) = v12;
    g3 = 0;
    int32_t v13 = g5; // 0x407aa7
    int32_t v14;
    if (v13 == 0) {
        // 0x407b71
        g1 = 1;
        // branch -> 0x407b74
        // 0x407b74
        function_4082e9(v14, 0, 0);
        return 0;
    }
    int32_t v15 = g2; // 0x407aaf
    if (*(int32_t *)(v15 - 32) == 0 || *(int32_t *)(v15 - 40) == 0 || *(int32_t *)(v15 - 44) == 0 || *(int32_t *)(v15 - 36) == 0 || v12 == 0 | *(int32_t *)(v15 - 28) == 0) {
        // 0x407b71
        g1 = 1;
        // branch -> 0x407b74
        // 0x407b74
        function_4082e9(v14, 0, 0);
        return 0;
    }
    int32_t v16 = *(int32_t *)(v15 + 20); // 0x407ae7
    ((int32_t (*)(int32_t, int32_t, int32_t, int32_t, int32_t))v13)(*(int32_t *)(v15 + 12), v16, 0, 0, 0);
    g7 = v12;
    *(int32_t *)(g2 - 48) = v12;
    int32_t v17 = g7; // 0x407af4
    int32_t v18 = g3; // 0x407af4
    if (v17 == v18) {
        // 0x407af8
        g1 = -72;
        // branch -> 0x407b74
    } else {
        int32_t v19 = g2; // 0x407afc
        if ((int32_t)*(char *)(v19 + 24) == v18) {
            // 0x407b26
            ((int32_t (*)(int32_t))*(int32_t *)(v19 - 40))(v17);
            // branch -> 0x407b2a
        } else {
            // 0x407b01
            *(int32_t *)(v19 - 4) = v18;
            int32_t v20 = g3; // 0x407b04
            ((int32_t (*)(int32_t, int32_t, int32_t))*(int32_t *)(g2 - 36))(g7, v20, v20);
            *(int32_t *)(g2 - 4) = -1;
            // branch -> 0x407b2a
        }
        char * v21 = (char *)(g7 + 7); // 0x407b2a_0
        *v21 = *v21 | 32;
        int32_t v22 = g3; // 0x407b2e
        ((int32_t (*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t))*(int32_t *)(g2 - 44))(g7, v22, 1, v22, v22, v22);
        g5 = v12;
        int32_t v23 = g2; // 0x407b3e
        if (v12 == g3) {
            // 0x407b3e
            if ((int32_t)*(char *)(v23 + 24) != v12) {
                // 0x407b43
                ((int32_t (*)(int32_t))*(int32_t *)(v23 - 28))(g7);
                // branch -> 0x407b47
            }
            // 0x407b47
            *(int32_t *)(g8 - 4) = -73;
            g3 = -73;
            // branch -> 0x407b69
        } else {
            int32_t v24 = *(int32_t *)(v23 + 20); // 0x407b4c
            int32_t v25 = *(int32_t *)(v23 + 16); // 0x407b4f
            g1 = (int32_t)memcpy((char *)v12, (char *)v25, v24);
            ((int32_t (*)(int32_t, int32_t))*(int32_t *)(g2 - 52))(g5, g7);
            int32_t v26 = g2; // 0x407b60
            if ((int32_t)*(char *)(v26 + 24) != g3) {
                // 0x407b65
                ((int32_t (*)(int32_t))*(int32_t *)(v26 - 28))(g7);
                // branch -> 0x407b69
            }
        }
        int32_t v27 = g8; // 0x407b69
        *(int32_t *)(v27 - 4) = g7;
        *(int32_t *)(v27 - 8) = 0x407b6d;
        ((int32_t (*)())*(int32_t *)(g2 - 32))();
        g1 = g3;
        // branch -> 0x407b74
    }
    // 0x407b74
    function_4082e9(v14, 0, 0);
    return 0;
}

// Address range: 0x407b80 - 0x407bbf
int32_t function_407b80(int32_t a1) {
    // 0x407b80
    int32_t v1; // 0x407b99_6
    if (a1 == 0) {
        int32_t (**func)() = GetProcAddress(GetModuleHandleA("msvcrt"), "_except_handler3"); // 0x407b99
        v1 = (int32_t)func;
        g73 = (int32_t (*)())func;
        if (func == NULL) {
            // 0x407ba8
            return v1 & -256;
        }
    } else {
        // 0x407bab
        g73 = (int32_t (*)())a1;
        v1 = a1;
        // branch -> 0x407bb0
    }
    // 0x407bb0
    return v1 & -256 | 1;
}

// Address range: 0x407bc0 - 0x407bef
int32_t function_407bc0(void) {
    int32_t v1 = g2; // 0x407bc0
    int32_t (*v2)() = g73;
    if (v2 != NULL) {
        // 0x407be3
        g2 = v1;
        v2();
        // branch -> 0x407bee
        // 0x407bee
        g2 = v1;
        return 0;
    }
    // 0x407bcc
    g1 = function_407b80(0);
    int32_t (*v3)() = g73;
    if (v3 != NULL) {
        // 0x407bcc
        // branch -> 0x407be3
        // 0x407be3
        g2 = v1;
        v3();
        // branch -> 0x407bee
    }
    // 0x407bee
    g2 = v1;
    return 0;
}

// Address range: 0x407bf0 - 0x407ca1
int32_t function_407bf0(void) {
    int32_t v1 = 24; // bp-4
    int32_t v2 = &g61; // bp-8
    function_4082b0((int32_t)&g61, 24);
    g3 = 0;
    *(int32_t *)(g2 - 28) = 0;
    *(int32_t *)(g2 - 32) = g3;
    int32_t v3 = g2; // 0x407c05
    int32_t v4 = v3 - 28; // 0x407c09
    g1 = v4;
    char * v5 = (char *)g3;
    int32_t v6;
    if (function_407d11(3, v5, (int32_t *)v4, (int32_t *)(v3 - 32), v5) == NULL) {
        // 0x407c9c
        function_4082e9(v2, v1, v6);
        return 0;
    }
    // 0x407c1c
    if (*(int32_t *)(g2 - 32) == g3) {
        // 0x407c90
        free((char *)*(int32_t *)(g2 - 28));
        // branch -> 0x407c9c
        // 0x407c9c
        function_4082e9(v2, v1, v6);
        return 0;
    }
    int32_t * v7 = (int32_t *)(g2 - 28); // 0x407c21_0
    int32_t v8 = *v7 + 4; // esi
    int32_t v9 = 0; // edi
    if (*(int32_t *)*v7 != 0) {
        while (true) {
            // 0x407c30
            *(int32_t *)(g2 - 4) = g3;
            if (_wcsicmp((int16_t *)*(int32_t *)(v8 + 4), L"WinStaObj") == 0) {
                // 0x407c47
                g3 = g3 & -256 | 1;
                free((char *)*(int32_t *)(g2 - 28));
                *(int32_t *)(g2 - 4) = -1;
                // branch -> 0x407c9c
                // 0x407c9c
                function_4082e9(v2, v1, v6);
                return 0;
            }
            int32_t v10 = wcslen((int16_t *)*(int32_t *)(v8 + 4)); // 0x407c4e
            int32_t v11 = 2 * v10 + 2 + *(int32_t *)(v8 + 4); // 0x407c58
            v8 = v11;
            *(int32_t *)(g2 - 36) = v11;
            *(int32_t *)(g2 - 40) = v8;
            int32_t v12 = v8; // 0x407c62
            int32_t v13 = v12 & 3; // 0x407c64
            if (v12 != 3) {
                int32_t v14 = v13 + v12; // 0x407c69
                v8 = v14;
                *(int32_t *)(g2 - 36) = v14;
                // branch -> 0x407c6e
            }
            // 0x407c6e
            *(int32_t *)(g2 - 4) = -1;
            int32_t v15 = v9 + 1; // 0x407c72
            v9 = v15;
            if (v15 >= *(int32_t *)*(int32_t *)(g2 - 28)) {
                // 0x407c90
                free((char *)*(int32_t *)(g2 - 28));
                // branch -> 0x407c9c
                // 0x407c9c
                function_4082e9(v2, v1, v6);
                return 0;
            }
            // 0x407c6e
            // branch -> 0x407c30
        }
    }
    // 0x407c90
    free((char *)*(int32_t *)(g2 - 28));
    // branch -> 0x407c9c
    // 0x407c9c
    function_4082e9(v2, v1, v6);
    return 0;
}

// Address range: 0x407ca2 - 0x407d10
char * function_407ca2(void) {
    // 0x407ca2
    function_4082b0((int32_t)&g62, 20);
    g3 = 0;
    int32_t v1;
    if (*(int32_t *)(g2 + 8) == 0) {
        // 0x407d09
        // branch -> 0x407d0b
        // 0x407d0b
        function_4082e9(v1, 0, 0);
        return NULL;
    }
    char * moduleHandle = GetModuleHandleA("ntdll.dll"); // 0x407cba
    int32_t lpProcName = *(int32_t *)(g2 + 8); // 0x407cc0
    int32_t func = (int32_t)GetProcAddress(moduleHandle, (char *)lpProcName); // 0x407cc4_6
    int32_t v2 = func; // eax
    if (func != g3) {
        // 0x407cce
        *(int32_t *)(g2 - 4) = g3;
        *(int32_t *)(g2 - 28) = g3;
        if (*(int32_t *)(g2 - 28) <= 9) {
            int32_t v3 = g2; // 0x407cd422
            while (true) {
                int32_t v4 = v2; // 0x407cda
                if (*(char *)v4 == -72) {
                    char v5 = *(char *)(v4 + 3); // 0x407cdf
                    if ((int32_t)v5 == g3) {
                        // 0x407ce4
                        if (*(char *)(v4 + 4) == v5) {
                            // 0x407ce9
                            *(int32_t *)(v3 - 32) = v4 + 1;
                            *(int32_t *)(g2 - 4) = -1;
                            // branch -> 0x407d0b
                            // 0x407d0b
                            function_4082e9(v1, 0, 0);
                            return NULL;
                        }
                    }
                }
                int32_t v6 = v4 + 1; // 0x407cf5
                v2 = v6;
                *(int32_t *)(v3 - 36) = v6;
                int32_t * v7 = (int32_t *)(g2 - 28); // 0x407cf9_0
                *v7 = *v7 + 1;
                if (*(int32_t *)(g2 - 28) > 9) {
                    // break -> 0x407d05
                    break;
                }
                v3 = g2;
                // continue -> 0x407cda
            }
            // 0x407d05
            *(int32_t *)(g2 - 4) = -1;
            // branch -> 0x407d09
            // 0x407d09
            // branch -> 0x407d0b
            // 0x407d0b
            function_4082e9(v1, 0, 0);
            return NULL;
        }
        // 0x407d05
        *(int32_t *)(g2 - 4) = -1;
        // branch -> 0x407d09
    }
    // 0x407d09
    // branch -> 0x407d0b
    // 0x407d0b
    function_4082e9(v1, 0, 0);
    return NULL;
}

// Address range: 0x407d11 - 0x407dd2
char * function_407d11(int32_t a1, char * a2, int32_t * a3, int32_t * a4, char * a5) {
    int32_t v1;
    char * v2 = (char *)v1; // bp-40
    int32_t v3;
    char * v4 = (char *)v3; // bp-24
    int32_t v5 = (int32_t)a3;
    int32_t v6 = (int32_t)a4;
    int32_t v7;
    g2 = &v7;
    int32_t v8 = g4; // bp-8
    int32_t v9 = &v8; // 0x407d14_0
    int32_t v10 = g3; // 0x407d15
    g5 = 0;
    if (a3 == NULL || a4 == NULL) {
        // 0x407dbb
        // branch -> 0x407dbd
        // 0x407dbd
        g3 = v10;
        g2 = v7;
        return (char *)(g1 & -256);
    }
    // 0x407d30
    int32_t v11; // 0x407d67
    int32_t v12; // 0x407d77_6
    char * mem; // 0x407d77
    int32_t v13;
    int32_t v14; // 0x407d75
    int32_t v15; // 0x407da8
    if (g74 != NULL) {
        // 0x407d58
        v8 = 0;
        *(int32_t *)v5 = 0;
        g3 = (int32_t)a5;
        *(int32_t *)v6 = g5;
        if (a5 == NULL) {
            // 0x407d67
            v11 = g3 + 1024;
            g3 = v11;
            if (v11 <= 0x2800) {
                v14 = v11;
                goto lab_0x407d75;
            }
            // 0x407da8
            v15 = g5;
            if (v15 != 0) {
                // 0x407dac
                v4 = (char *)v15;
                v13 = (int32_t)&v4;
                // branch -> 0x407db4
                // 0x407db4
                *(int32_t *)(v13 - 4) = (int32_t)&g15;
                free(v2);
                // branch -> 0x407dbb
            }
            // 0x407dbb
            // branch -> 0x407dbd
            // 0x407dbd
            g3 = v10;
            g2 = v7;
            return (char *)(g1 & -256);
        }
        // 0x407d58
        v14 = g3;
        // branch -> 0x407d75
        // 0x407d75
        v4 = (char *)v14;
        mem = realloc((char *)g5, v14);
        v12 = (int32_t)mem;
        g1 = v12;
        g7 = v12;
        g4 = (int32_t)v4;
        if (mem != NULL) {
            goto lab_0x407d85;
        }
        // 0x407da8
        v15 = g5;
        if (v15 != 0) {
            // 0x407dac
            v4 = (char *)v15;
            v13 = (int32_t)&v4;
            // branch -> 0x407db4
            // 0x407db4
            *(int32_t *)(v13 - 4) = (int32_t)&g15;
            free(v2);
            // branch -> 0x407dbb
        }
        // 0x407dbb
        // branch -> 0x407dbd
        // 0x407dbd
        g3 = v10;
        g2 = v7;
        return (char *)(g1 & -256);
    }
    // 0x407d38
    v4 = "ntdll.dll";
    v4 = "NtQueryObject";
    int32_t (**func)() = GetProcAddress(GetModuleHandleA("ntdll.dll"), "NtQueryObject"); // 0x407d49
    int32_t v16 = (int32_t)func; // 0x407d49_6
    g1 = v16;
    int32_t v17 = g5; // 0x407d4f
    g74 = (int32_t (*)(int32_t, int32_t, int32_t, int32_t, int32_t))func;
    if (v16 == v17) {
        // 0x407dbb
        // branch -> 0x407dbd
        // 0x407dbd
        g3 = v10;
        g2 = v7;
        return (char *)(g1 & -256);
    }
    // 0x407d38
    // branch -> 0x407d58
    // 0x407d58
    v8 = 0;
    *(int32_t *)v5 = v17;
    g3 = (int32_t)a5;
    *(int32_t *)v6 = g5;
    if (a5 == NULL) {
      lab_0x407d67:
        // 0x407d67
        v11 = g3 + 1024;
        g3 = v11;
        if (v11 > 0x2800) {
            // 0x407da8
            v15 = g5;
            if (v15 != 0) {
                // 0x407dac
                v4 = (char *)v15;
                v13 = (int32_t)&v4;
                // branch -> 0x407db4
                // 0x407db4
                *(int32_t *)(v13 - 4) = (int32_t)&g15;
                free(v2);
                // branch -> 0x407dbb
            }
            // 0x407dbb
            // branch -> 0x407dbd
            // 0x407dbd
            g3 = v10;
            g2 = v7;
            return (char *)(g1 & -256);
        }
        v14 = v11;
    } else {
        // 0x407d58
        v14 = g3;
        // branch -> 0x407d75
    }
  lab_0x407d75:
    // 0x407d75
    v4 = (char *)v14;
    mem = realloc((char *)g5, v14);
    v12 = (int32_t)mem;
    g1 = v12;
    g7 = v12;
    g4 = (int32_t)v4;
    if (mem == NULL) {
        // 0x407da8
        v15 = g5;
        if (v15 != 0) {
            // 0x407dac
            v4 = (char *)v15;
            v13 = (int32_t)&v4;
            // branch -> 0x407db4
            // 0x407db4
            *(int32_t *)(v13 - 4) = (int32_t)&g15;
            free(v2);
            // branch -> 0x407dbb
        }
        // 0x407dbb
        // branch -> 0x407dbd
        // 0x407dbd
        g3 = v10;
        g2 = v7;
        return (char *)(g1 & -256);
    }
  lab_0x407d85:
    // 0x407d85
    g1 = v9;
    v4 = (char *)&v8;
    g5 = v12;
    v2 = a2;
    g74((int32_t)a2, a1, v12, g3, v9);
    int32_t v18;
    int32_t v19;
    switch (g1) {
        case -0x3ffffffc: {
            // 0x407da0
            if (a5 == NULL) {
                goto lab_0x407d67;
            }
            // 0x407db3
            v18 = g7;
            v19 = &v18;
            // branch -> 0x407db4
            // 0x407db4
            *(int32_t *)(v19 - 4) = (int32_t)&g15;
            free(v2);
            // branch -> 0x407dbb
            // 0x407dbb
            // branch -> 0x407dbd
            // 0x407dbd
            g3 = v10;
            g2 = v7;
            return (char *)(g1 & -256);
        }
        case 0: {
            // 0x407dc2
            *a3 = g7;
            int32_t v20 = v8; // 0x407dca
            *a4 = v20;
            // branch -> 0x407dbd
            // 0x407dbd
            g3 = v10;
            g2 = v7;
            return (char *)(v20 & -256 | 1);
        }
    }
    // 0x407db3
    v18 = g7;
    v19 = &v18;
    // branch -> 0x407db4
    // 0x407db4
    *(int32_t *)(v19 - 4) = (int32_t)&g15;
    free(v2);
    // branch -> 0x407dbb
    // 0x407dbb
    // branch -> 0x407dbd
    // 0x407dbd
    g3 = v10;
    g2 = v7;
    return (char *)(g1 & -256);
}

// Address range: 0x407dd3 - 0x407e35
int32_t function_407dd3(char * hFile, int32_t * a2) {
    int32_t lpFileSizeHigh = (int32_t)a2;
    int32_t v1 = g5; // 0x407dda
    int32_t lpFileMappingAttributes = 0; // edi
    int32_t v2;
    if (a2 == NULL) {
        // 0x407e2c
        // branch -> 0x407e32
        // 0x407e32
        g5 = v1;
        g2 = v2;
        return g1 & -256;
    }
    // 0x407de1
    lpFileSizeHigh = 0;
    int32_t v3 = GetFileSize(hFile, &lpFileSizeHigh); // 0x407deb
    char * dwMaximumSizeLow = (char *)lpFileMappingAttributes;
    *(int32_t *)(lpFileSizeHigh + 8) = v3;
    *(int32_t *)(lpFileSizeHigh + 12) = lpFileSizeHigh;
    int32_t v4 = (int32_t)CreateFileMappingA(hFile, (struct _SECURITY_ATTRIBUTES *)lpFileMappingAttributes, 2, lpFileMappingAttributes, (int32_t)dwMaximumSizeLow, dwMaximumSizeLow); // 0x407e03_14
    g1 = v4;
    *(int32_t *)lpFileSizeHigh = v4;
    if (v4 == lpFileMappingAttributes) {
        // 0x407e2c
        // branch -> 0x407e32
        // 0x407e32
        g5 = v1;
        g2 = v2;
        return g1 & -256;
    }
    int32_t v5 = (int32_t)MapViewOfFile((char *)g1, 4, lpFileMappingAttributes, lpFileMappingAttributes, lpFileMappingAttributes); // 0x407e15_12
    *(int32_t *)(lpFileSizeHigh + 4) = v5;
    int32_t result;
    if (v5 == lpFileMappingAttributes) {
        // 0x407e22
        g1 = CloseHandle((char *)*(int32_t *)lpFileSizeHigh);
        *(int32_t *)lpFileSizeHigh = lpFileMappingAttributes;
        // branch -> 0x407e2c
        // 0x407e2c
        result = g1 & -256;
        // branch -> 0x407e32
    } else {
        // 0x407e30
        result = v5 & -256 | 1;
        // branch -> 0x407e32
    }
    // 0x407e32
    g5 = v1;
    g2 = v2;
    return result;
}

// Address range: 0x407e36 - 0x407e55
int32_t function_407e36(int32_t * hObject) {
    int32_t v1 = (int32_t)hObject; // esi
    int32_t v2;
    if (hObject == NULL) {
        // 0x407e3f
        g7 = v2;
        return g1 & -256;
    }
    bool handleClosed = CloseHandle((char *)*hObject); // 0x407e45
    *(int32_t *)v1 = 0;
    *(int32_t *)(v1 + 4) = 0;
    g7 = v2;
    return handleClosed ? -255 : 1;
}

// Address range: 0x407e56 - 0x407f0d
int32_t function_407e56(void) {
    // 0x407e56
    function_4082b0((int32_t)&g63, 32);
    g5 = 0;
    int32_t v1 = g2; // 0x407e64
    int32_t v2;
    if (*(int32_t *)(v1 + 8) == 0) {
        // 0x407f08
        g1 = 0;
        function_4082e9(v2, 0, 0);
        return 0;
    }
    // 0x407e6d
    *(int32_t *)(v1 - 28) = 0;
    *(int32_t *)(g2 - 36) = g5;
    *(int32_t *)(g2 - 4) = g5;
    int32_t v3 = g2; // 0x407e77
    int32_t v4 = v3 - 28; // 0x407e7b
    g1 = v4;
    if (function_408338((char *)11, (int32_t *)v4, (int32_t *)(v3 - 36), (char *)g5) == NULL) {
        // 0x407ee0
        _local_unwind2(g2 - 16, -1);
        // branch -> 0x407f08
        // 0x407f08
        g1 = g5;
        function_4082e9(v2, 0, 0);
        return 0;
    }
    int32_t v5 = *(int32_t *)(g2 - 28); // 0x407e8d
    int32_t v6 = g5; // 0x407e90
    if (v5 == v6 || *(int32_t *)(g2 - 36) == v6) {
        // 0x407ee0
        _local_unwind2(g2 - 16, -1);
        // branch -> 0x407f08
        // 0x407f08
        g1 = g5;
        function_4082e9(v2, 0, 0);
        return 0;
    }
    // 0x407e99
    g3 = v5;
    *(int32_t *)(g2 - 40) = v5;
    int32_t v7 = v5 + 4; // 0x407e9e
    g7 = v7;
    *(int32_t *)(g2 - 44) = v7;
    int32_t * v8 = (int32_t *)(g2 - 32); // 0x407ea4_0
    *v8 = g5 & *v8;
    uint32_t v9 = *(int32_t *)(g2 - 32); // 0x407ea729
    if (v9 < *(int32_t *)g3) {
        while (true) {
            int32_t v10 = 284 * v9; // 0x407eae
            int32_t v11 = g7 + v10; // 0x407eb4
            int32_t v12 = v11; // edi
            int32_t v13 = g7 + 28 + (int32_t)*(int16_t *)(v11 + 26) + v10; // 0x407ebd
            *(int32_t *)(g2 - 48) = v13;
            if (_stricmp((char *)v13, (char *)*(int32_t *)(g2 + 8)) == 0) {
                // 0x407ed4
                g5 = *(int32_t *)(v12 + 8);
                // branch -> 0x407ee0
                // 0x407ee0
                _local_unwind2(g2 - 16, -1);
                // branch -> 0x407f08
                // 0x407f08
                g1 = g5;
                function_4082e9(v2, 0, 0);
                return 0;
            }
            int32_t * v14 = (int32_t *)(g2 - 32); // 0x407ed9_0
            *v14 = *v14 + 1;
            uint32_t v15 = *(int32_t *)(g2 - 32); // 0x407ea7
            if (v15 >= *(int32_t *)g3) {
                // break -> 0x407ede
                break;
            }
            v9 = v15;
            // continue -> 0x407eae
        }
        // 0x407ede
        g5 = 0;
        // branch -> 0x407ee0
    } else {
        // 0x407ede
        g5 = 0;
        // branch -> 0x407ee0
    }
    // 0x407ee0
    _local_unwind2(g2 - 16, -1);
    // branch -> 0x407f08
    // 0x407f08
    g1 = g5;
    function_4082e9(v2, 0, 0);
    return 0;
}

// Address range: 0x407f0e - 0x407f70
int32_t function_407f0e(void) {
    // 0x407f0e
    function_4082b0((int32_t)&g64, 8);
    int32_t v1 = *(int32_t *)(g2 + 8); // 0x407f1a
    g6 = 0;
    int32_t v2;
    if (v1 == 0 || *(int32_t *)(g2 + 16) == 0) {
        // 0x407f69
        // branch -> 0x407f6b
        // 0x407f6b
        function_4082e9(v2, 0, 0);
        return 0;
    }
    int32_t v3 = *(int32_t *)(g2 + 20); // 0x407f28
    g7 = v3;
    if (v3 == 0) {
        // 0x407f69
        // branch -> 0x407f6b
        // 0x407f6b
        function_4082e9(v2, 0, 0);
        return 0;
    }
    int32_t v4 = *(int32_t *)(g2 + 12); // 0x407f2f
    g5 = v4;
    if (*(int32_t *)(v1 + 12) == 0) {
        // 0x407f3c
        if (v4 + v3 > *(int32_t *)(v1 + 8)) {
            // 0x407f69
            // branch -> 0x407f6b
            // 0x407f6b
            function_4082e9(v2, 0, 0);
            return 0;
        }
    }
    // 0x407f41
    *(int32_t *)(g2 - 4) = 0;
    int32_t v5 = *(int32_t *)(v1 + 4); // 0x407f45
    memcpy((char *)*(int32_t *)(g2 + 16), (char *)(g5 + v5), g7);
    *(int32_t *)(g2 - 4) = -1;
    // branch -> 0x407f6b
    // 0x407f6b
    function_4082e9(v2, 0, 0);
    return 0;
}

// Address range: 0x407f71 - 0x407f97
int32_t function_407f71(int32_t a1, char * a2, int32_t a3, int32_t a4) {
    // 0x407f71
    if (a3 < 1) {
        // 0x407f93
        return 0;
    }
    int32_t v1 = (int32_t)a2;
    int32_t v2 = 0; // 0x407f8e
    int32_t v3 = g1; // 0x407f87
    int32_t v4 = v1; // 0x407f8f
    // branch -> 0x407f87
    int32_t result; // 0x407f8e9
    while (true) {
        int32_t v5 = (int32_t)*(char *)(v4 + a1 - v1) | v3 & -256; // 0x407f87
        result = v2;
        if (v5 == (int32_t)*(char *)v4) {
            // 0x407f8e
            result = v2 + 1;
            // branch -> 0x407f8f
        }
        int32_t v6 = v4 + 1; // 0x407f8f
        g6 = v6;
        int32_t v7 = a3 - 1; // 0x407f90
        if (v7 == 0) {
            // break -> 0x407f93
            break;
        }
        a3 = v7;
        v2 = result;
        v3 = v5;
        v4 = v6;
        // continue -> 0x407f87
    }
    // 0x407f93
    return result;
}

// Address range: 0x407f98 - 0x40806d
int32_t function_407f98(char * hFile, int32_t * a2, int32_t * hMem2, int32_t a4) {
    int32_t lpNumberOfBytesRead = g4; // bp-8
    int32_t v1 = &lpNumberOfBytesRead; // 0x407f9b_0
    int32_t v2 = g7; // 0x407f9e
    int32_t lpOverlapped = 0; // ebx
    int32_t lpBuffer = 0; // bp-12
    int32_t result2; // 0x40806d_2
    int32_t v3;
    if (SetFilePointer(hFile, 60, NULL, 0) == 60) {
        int32_t v4 = g5; // bp-24
        ReadFile(hFile, (char *)&lpBuffer, 4, &lpNumberOfBytesRead, (struct _OVERLAPPED *)lpOverlapped);
        int32_t lpDistanceToMoveHigh = lpOverlapped; // 0x407fd7
        lpNumberOfBytesRead = lpDistanceToMoveHigh;
        if (SetFilePointer(hFile, lpBuffer, (int32_t *)lpDistanceToMoveHigh, lpDistanceToMoveHigh) == lpBuffer) {
            int32_t nNumberOfBytesToRead = 248; // esi
            char * memoryHandle = LocalAlloc(64, 248); // 0x407ff6
            lpOverlapped = (int32_t)a2;
            g4 = v1;
            *a2 = (int32_t)memoryHandle;
            ReadFile(hFile, memoryHandle, nNumberOfBytesToRead, &lpNumberOfBytesRead, NULL);
            int32_t hMem = *(int32_t *)lpOverlapped; // 0x408020
            if (lpNumberOfBytesRead != nNumberOfBytesToRead) {
                // 0x408013
                LocalFree((char *)hMem);
                *(int32_t *)lpOverlapped = 0;
                // branch -> 0x407feb
                // 0x407feb
                // branch -> 0x408069
                // 0x408069
                g5 = v4;
                // branch -> 0x40806a
                // 0x40806a
                g7 = v2;
                g2 = v3;
                return (int32_t)(struct _OVERLAPPED *)-4;
            }
            int32_t uBytes = 40 * (int32_t)*(int16_t *)(hMem + 6); // 0x408029
            nNumberOfBytesToRead = uBytes;
            char * memoryHandle2 = LocalAlloc(64, uBytes); // 0x40802f
            *hMem2 = (int32_t)memoryHandle2;
            g4 = v1;
            ReadFile(hFile, memoryHandle2, nNumberOfBytesToRead, &lpNumberOfBytesRead, NULL);
            int32_t result; // 0x40806d_28
            if (lpNumberOfBytesRead == nNumberOfBytesToRead) {
                // 0x408067
                result = 0;
                // branch -> 0x408069
            } else {
                // 0x40804c
                LocalFree((char *)*(int32_t *)lpOverlapped);
                LocalFree((char *)*hMem2);
                *(int32_t *)lpOverlapped = 0;
                *(int32_t *)(int32_t)hMem2 = 0;
                // branch -> 0x407feb
                // 0x407feb
                result = (int32_t)(struct _OVERLAPPED *)-4;
                // branch -> 0x408069
            }
            // 0x408069
            g5 = v4;
            // branch -> 0x40806a
            // 0x40806a
            g7 = v2;
            g2 = v3;
            return result;
        }
        // 0x407feb
        // branch -> 0x408069
        // 0x408069
        g5 = v4;
        result2 = (int32_t)(struct _OVERLAPPED *)-3;
        // branch -> 0x40806a
    } else {
        // 0x407fb8
        result2 = -3;
        // branch -> 0x40806a
    }
    // 0x40806a
    g7 = v2;
    g2 = v3;
    return result2;
}

// Address range: 0x40806e - 0x4080b5
int32_t function_40806e(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x40806e
    g6 = 0;
    int32_t v1 = g5; // 0x408079
    int32_t result = 87;
    int32_t v2;
    if (a1 == 0 || a3 == 0) {
        // 0x4080b0
        g1 = result;
        // branch -> 0x4080b1
        // 0x4080b1
        g5 = v1;
        g2 = v2;
        return result;
    }
    // 0x408081
    g5 = a4;
    if (*(int32_t *)(a1 + 12) == 0) {
        // 0x408091
        if (a4 + a2 > *(int32_t *)(a1 + 8)) {
            result = -3;
            // 0x4080b0
            g1 = result;
            // branch -> 0x4080b1
            // 0x4080b1
            g5 = v1;
            g2 = v2;
            return result;
        }
    }
    int32_t v3 = *(int32_t *)(a1 + 4) + a2; // 0x40809e
    g1 = v3;
    int32_t result2 = function_407f71(a3, (char *)v3, a4, v1); // 0x4080a4
    g1 = result2;
    // branch -> 0x4080b1
    // 0x4080b1
    g5 = v1;
    g2 = v2;
    return result2;
}

// Address range: 0x4080b6 - 0x4080d7
void function_4080b6(void) {
    // 0x4080b6
    unknown_40914c();
}

// Address range: 0x4080d8 - 0x40814f
int32_t function_4080d8(void) {
    int32_t v1 = g76;
    int32_t v2 = (float32_t)g76; // 0x4080fd
    int32_t v3;
    if (v1 == 0) {
        // 0x408137
        int32_t v4;
        if (v4 == 0x7fffffff) {
            // 0x40814b
            g2 = v3;
            return 0;
        }
        v2 = v4;
    }
    float80_t v5 = g76 - (float80_t)v1; // 0x4080fb
    int32_t result; // 0x408113
    if (v2 < 0) {
        // 0x408101
        g4 = (int32_t)(float32_t)v5 - 1;
        result = (int32_t)(((int32_t)(float32_t)v5 ^ -0x80000000) > 0x80000000) + v1;
        // branch -> 0x40814b
    } else {
        // 0x40811f
        g4 = 0x7fffffff;
        result = v1;
        // branch -> 0x40814b
    }
    // 0x40814b
    g2 = v3;
    return result;
}

// Address range: 0x408150 - 0x40828d
int32_t entry_point(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    int32_t v1;
    g2 = &v1;
    abort();
    // UNREACHABLE
}

// Address range: 0x40828e - 0x4082a1
int32_t function_40828e(int32_t a1, int32_t a2, int32_t a3) {
    int32_t v1 = *(int32_t *)(g2 - 20); // 0x40828e
    int32_t v2 = *(int32_t *)*(int32_t *)v1; // 0x408293
    *(int32_t *)(g2 - 120) = v2;
    int32_t result = _XcptFilter(v2, (char *)v1); // 0x40829a
    g1 = result;
    return result;
}

// Address range: 0x4082a2 - 0x4082af
int32_t function_4082a2(int32_t status) {
    int32_t v1 = *(int32_t *)(g2 - 24); // 0x4082a2
    int32_t result = v1 - 4; // 0x4082a5
    *(int32_t *)result = *(int32_t *)(g2 - 120);
    *(int32_t *)(v1 - 8) = (int32_t)&g16;
    _exit(status);
    return result;
}

// Address range: 0x4082b0 - 0x4082e8
int32_t function_4082b0(int32_t a1, int32_t a2) {
    // 0x4082b0
    abort();
    // UNREACHABLE
}

// Address range: 0x4082e9 - 0x4082f9
int32_t function_4082e9(int32_t a1, int32_t a2, int32_t a3) {
    // 0x4082e9
    g4 = *(int32_t *)(g2 - 16);
    abort();
    // UNREACHABLE
}

// Address range: 0x4082fa - 0x40831b
void function_4082fa(void) {
    // 0x4082fa
    unknown_409184();
}

// Address range: 0x40831c - 0x40832d
int32_t function_40831c(void) {
    // 0x40831c
    return _controlfp(0x10000, 0x30000);
}

// Address range: 0x40832e - 0x408330
int32_t function_40832e(void) {
    // 0x40832e
    return 0;
}

// Address range: 0x408331 - 0x408331
int32_t function_408331(void) {
    // 0x408331
    return g1;
}

// Address range: 0x408332 - 0x408337
void function_408332(void) {
    // 0x408332
    unknown_409148();
}

// Address range: 0x408338 - 0x4083f6
char * function_408338(char * a1, int32_t * a2, int32_t * a3, char * a4) {
    int32_t v1;
    char * v2 = (char *)v1; // bp-36
    int32_t v3;
    char * v4 = (char *)v3; // bp-24
    int32_t v5 = (int32_t)a2;
    int32_t v6 = (int32_t)a3;
    int32_t v7;
    g2 = &v7;
    int32_t v8 = g4; // bp-8
    int32_t v9 = &v8; // 0x40833b_0
    int32_t v10 = g3; // 0x40833c
    int32_t v11 = g7; // 0x408340
    int32_t v12 = g5; // 0x408341
    g5 = 0;
    if (a2 == NULL || a3 == NULL) {
        // 0x4083df
        // branch -> 0x4083e1
        // 0x4083e1
        g5 = v12;
        g7 = v11;
        g3 = v10;
        g2 = v7;
        return (char *)(g1 & -256);
    }
    // 0x408357
    int32_t v13; // 0x40838e
    int32_t v14; // 0x40839e_6
    char * mem; // 0x40839e
    int32_t v15;
    int32_t v16; // 0x40839c
    int32_t v17; // 0x4083cc
    if (g75 != NULL) {
        // 0x40837f
        v8 = 0;
        *(int32_t *)v5 = 0;
        g3 = (int32_t)a4;
        *(int32_t *)v6 = g5;
        if (a4 == NULL) {
            // 0x40838e
            v13 = g3 + 0x1400;
            g3 = v13;
            if (v13 <= 0x3e800) {
                v16 = v13;
                goto lab_0x40839c;
            }
            // 0x4083cc
            v17 = g5;
            if (v17 != 0) {
                // 0x4083d0
                v4 = (char *)v17;
                v15 = (int32_t)&v4;
                // branch -> 0x4083d8
                // 0x4083d8
                *(int32_t *)(v15 - 4) = (int32_t)&g17;
                free(v2);
                // branch -> 0x4083df
            }
            // 0x4083df
            // branch -> 0x4083e1
            // 0x4083e1
            g5 = v12;
            g7 = v11;
            g3 = v10;
            g2 = v7;
            return (char *)(g1 & -256);
        }
        // 0x40837f
        v16 = g3;
        // branch -> 0x40839c
        // 0x40839c
        v4 = (char *)v16;
        mem = realloc((char *)g5, v16);
        v14 = (int32_t)mem;
        g1 = v14;
        g7 = v14;
        g4 = (int32_t)v4;
        if (mem != NULL) {
            goto lab_0x4083ac;
        }
        // 0x4083cc
        v17 = g5;
        if (v17 != 0) {
            // 0x4083d0
            v4 = (char *)v17;
            v15 = (int32_t)&v4;
            // branch -> 0x4083d8
            // 0x4083d8
            *(int32_t *)(v15 - 4) = (int32_t)&g17;
            free(v2);
            // branch -> 0x4083df
        }
        // 0x4083df
        // branch -> 0x4083e1
        // 0x4083e1
        g5 = v12;
        g7 = v11;
        g3 = v10;
        g2 = v7;
        return (char *)(g1 & -256);
    }
    // 0x40835f
    v4 = "ntdll.dll";
    v4 = "NtQuerySystemInformation";
    int32_t (**func)() = GetProcAddress(GetModuleHandleA("ntdll.dll"), "NtQuerySystemInformation"); // 0x408370
    int32_t v18 = (int32_t)func; // 0x408370_6
    g1 = v18;
    int32_t v19 = g5; // 0x408376
    g75 = (int32_t (*)(int32_t, int32_t, int32_t, int32_t))func;
    if (v18 == v19) {
        // 0x4083df
        // branch -> 0x4083e1
        // 0x4083e1
        g5 = v12;
        g7 = v11;
        g3 = v10;
        g2 = v7;
        return (char *)(g1 & -256);
    }
    // 0x40835f
    // branch -> 0x40837f
    // 0x40837f
    v8 = 0;
    *(int32_t *)v5 = v19;
    g3 = (int32_t)a4;
    *(int32_t *)v6 = g5;
    if (a4 == NULL) {
      lab_0x40838e:
        // 0x40838e
        v13 = g3 + 0x1400;
        g3 = v13;
        if (v13 > 0x3e800) {
            // 0x4083cc
            v17 = g5;
            if (v17 != 0) {
                // 0x4083d0
                v4 = (char *)v17;
                v15 = (int32_t)&v4;
                // branch -> 0x4083d8
                // 0x4083d8
                *(int32_t *)(v15 - 4) = (int32_t)&g17;
                free(v2);
                // branch -> 0x4083df
            }
            // 0x4083df
            // branch -> 0x4083e1
            // 0x4083e1
            g5 = v12;
            g7 = v11;
            g3 = v10;
            g2 = v7;
            return (char *)(g1 & -256);
        }
        v16 = v13;
    } else {
        // 0x40837f
        v16 = g3;
        // branch -> 0x40839c
    }
  lab_0x40839c:
    // 0x40839c
    v4 = (char *)v16;
    mem = realloc((char *)g5, v16);
    v14 = (int32_t)mem;
    g1 = v14;
    g7 = v14;
    g4 = (int32_t)v4;
    if (mem == NULL) {
        // 0x4083cc
        v17 = g5;
        if (v17 != 0) {
            // 0x4083d0
            v4 = (char *)v17;
            v15 = (int32_t)&v4;
            // branch -> 0x4083d8
            // 0x4083d8
            *(int32_t *)(v15 - 4) = (int32_t)&g17;
            free(v2);
            // branch -> 0x4083df
        }
        // 0x4083df
        // branch -> 0x4083e1
        // 0x4083e1
        g5 = v12;
        g7 = v11;
        g3 = v10;
        g2 = v7;
        return (char *)(g1 & -256);
    }
  lab_0x4083ac:
    // 0x4083ac
    g1 = v9;
    v4 = (char *)&v8;
    v2 = a1;
    g5 = v14;
    g75((int32_t)a1, v14, g3, v9);
    int32_t v20;
    int32_t v21;
    switch (g1) {
        case -0x3ffffffc: {
            // 0x4083c4
            if (a4 == NULL) {
                goto lab_0x40838e;
            }
            // 0x4083d7
            v20 = g7;
            v21 = &v20;
            // branch -> 0x4083d8
            // 0x4083d8
            *(int32_t *)(v21 - 4) = (int32_t)&g17;
            free(v2);
            // branch -> 0x4083df
            // 0x4083df
            // branch -> 0x4083e1
            // 0x4083e1
            g5 = v12;
            g7 = v11;
            g3 = v10;
            g2 = v7;
            return (char *)(g1 & -256);
        }
        case 0: {
            // 0x4083e6
            *a2 = g7;
            int32_t v22 = v8; // 0x4083ee
            *a3 = v22;
            // branch -> 0x4083e1
            // 0x4083e1
            g5 = v12;
            g7 = v11;
            g3 = v10;
            g2 = v7;
            return (char *)(v22 & -256 | 1);
        }
    }
    // 0x4083d7
    v20 = g7;
    v21 = &v20;
    // branch -> 0x4083d8
    // 0x4083d8
    *(int32_t *)(v21 - 4) = (int32_t)&g17;
    free(v2);
    // branch -> 0x4083df
    // 0x4083df
    // branch -> 0x4083e1
    // 0x4083e1
    g5 = v12;
    g7 = v11;
    g3 = v10;
    g2 = v7;
    return (char *)(g1 & -256);
}

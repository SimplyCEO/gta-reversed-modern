#include "StdInc.h"
#include "detours.h"

#pragma comment(lib, "detours.lib")

auto OLD_CTaskComplexWanderCop_LookForCriminals = (CTask * (__thiscall*)(CTaskComplexWanderCop* pThis, CCopPed * pPed))0x66B300;

void __fastcall CTaskComplexWanderCop_LookForCriminals (CTaskComplexWanderCop* pThis, void* padding, CCopPed* pPed);

void __cdecl HOOK_THEFUNCTION();

void InjectHooksMain(void)
{
    /*CAnimManager::InjectHooks();
    pTaskManager->InjectHooks();
    std::printf("okay, only CAnimManager and CTaskManager hooks\n ");
    CStreaming::InjectHooks();
    CRenderer::InjectHooks();*/

    //InjectHook(0x0681C10, &HOOK_THEFUNCTION, PATCH_JUMP);


    ///*
    DetourRestoreAfterWith();
    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());

    std::printf("GOING TO HOOK FUNC NOW\n");
    DetourAttach(&(PVOID&)OLD_CTaskComplexWanderCop_LookForCriminals, CTaskComplexWanderCop_LookForCriminals);
    DetourTransactionCommit();
   // */
}
/*
enum eFunctionReturnValue
{
    FUNCTION_RETURN = 0,
    FUNCTION_INSIDE_IF = 1,
    FUNCTION_OUTSIDE_IF = 2
}; 
*/
/*
dwReturnLocation:
0 means that the function should return.
1 means continue the function and it is inside of the "if" condition
2 means continue the function and it is outside of the "if" condition
*/

enum eFunctionReturnValue
{
    FUNCTION_RETURN = 0,
    FUNCTION_INSIDE_IF = 1,
    FUNCTION_OUTSIDE_IF = 2,
    FUNCTION_SWITCH_CASE_2 = 3,
    FUNCTION_SOMELABEL = 4
};


void __fastcall CTaskComplexWanderCop_LookForCriminals(CTaskComplexWanderCop* pThis, void* padding, CCopPed* pPed)
{
    printf(" calling CTaskComplexWanderCop_LookForCriminals \n");

}

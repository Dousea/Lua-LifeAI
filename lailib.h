// void laiReset();
FUNC(Reset)
CALL_NO_RET(Reset)
END_FUNC
// void laiLoad( std::string name );
FUNC(Load)
STR_ARG(name)
CALL_NO_RET(Load, name)
END_FUNC
// void laiSave( std::string name, bool save_links = LAI_TRUE, bool cut_default = LAI_TRUE );
FUNC(Save)
STR_ARG(name)
OPT_BOOL_ARG(save_links, LAI_TRUE)
OPT_BOOL_ARG(cut_default, LAI_TRUE)
CALL_NO_RET(Save, name, save_links, cut_default)
END_FUNC
// void laiSync( bool reverse = LAI_FALSE );
FUNC(Sync)
OPT_BOOL_ARG(reverse, LAI_FALSE)
CALL_NO_RET(Sync, reverse)
END_FUNC
// void laiUpdate();
FUNC(Update)
CALL_NO_RET(Update)
END_FUNC
// void laiUpdateAll();
FUNC(UpdateAll)
CALL_NO_RET(UpdateAll)
END_FUNC
// bool laiCheckReq( int act, int ent0, int ent1 = LAI_NULL, int ent2 = LAI_NULL, int ent3 = LAI_NULL, int role = LAI_ALL, int req = LAI_ALL );
FUNC(CheckReq)
NUM_ARG(int, act)
NUM_ARG(int, ent0)
OPT_NUM_ARG(int, ent1, LAI_NULL)
OPT_NUM_ARG(int, ent2, LAI_NULL)
OPT_NUM_ARG(int, ent3, LAI_NULL)
OPT_NUM_ARG(int, role, LAI_ALL)
OPT_NUM_ARG(int, req, LAI_ALL)
CALL(CheckReq, bool, act, ent0, ent1, ent2, ent3, role, req)
PUSH_BOOL(ret)
END_FUNC
// bool laiCheckBest( int ent, int role = LAI_ALL, int req = LAI_ALL );
FUNC(CheckBest)
NUM_ARG(int, ent)
OPT_NUM_ARG(int, role, LAI_ALL)
OPT_NUM_ARG(int, req, LAI_ALL)
CALL(CheckBest, bool, ent, role, req)
PUSH_BOOL(ret)
END_FUNC
// void laiApplyMod( int act, int ent0, int ent1 = LAI_NULL, int ent2 = LAI_NULL, int ent3 = LAI_NULL, int role = LAI_ALL, int mod = LAI_ALL, float percent = 1.0f );
FUNC(ApplyMod)
NUM_ARG(int, act)
NUM_ARG(int, ent0)
OPT_NUM_ARG(int, ent1, LAI_NULL)
OPT_NUM_ARG(int, ent2, LAI_NULL)
OPT_NUM_ARG(int, ent3, LAI_NULL)
OPT_NUM_ARG(int, role, LAI_ALL)
OPT_NUM_ARG(int, mod, LAI_ALL)
OPT_NUM_ARG(float, percent, 1.0f)
CALL_NO_RET(ApplyMod, act, ent0, ent1, ent2, ent3, role, mod, percent)
END_FUNC
// void laiApplyBest( int ent, int role = LAI_ALL, int mod = LAI_ALL, float percent = 1.0f );
FUNC(ApplyBest)
NUM_ARG(int, ent)
OPT_NUM_ARG(int, role, LAI_ALL)
OPT_NUM_ARG(int, mod, LAI_ALL)
OPT_NUM_ARG(float, percent, 1.0f)
CALL_NO_RET(ApplyBest, ent, role, mod, percent)
END_FUNC
// void laiRemoveBest( int ent );
FUNC(RemoveBest)
NUM_ARG(int, ent)
CALL_NO_RET(RemoveBest, ent)
END_FUNC
// void laiSetBestManual( int manual_ent, int act, int ent0, int ent1 = LAI_NULL, int ent2 = LAI_NULL, int ent3 = LAI_NULL, float manual_val = 0 );
FUNC(SetBestManual)
NUM_ARG(int, manual_ent)
NUM_ARG(int, act)
NUM_ARG(int, ent0)
OPT_NUM_ARG(int, ent1, LAI_NULL)
OPT_NUM_ARG(int, ent2, LAI_NULL)
OPT_NUM_ARG(int, ent3, LAI_NULL)
OPT_NUM_ARG(float, manual_val, 0)
CALL_NO_RET(SetBestManual, manual_ent, act, ent0, ent1, ent2, ent3, manual_val)
END_FUNC
// int laiGetOffer( int manual_ent );
FUNC(GetOffer)
NUM_ARG(int, manual_ent)
CALL(GetOffer, int, manual_ent)
PUSH_NUM(manual_ent)
END_FUNC
// void laiReplyOffer( int manual_ent, int offer_ent, bool accept = LAI_TRUE, float manual_val = 0 );
FUNC(ReplyOffer)
NUM_ARG(int, manual_ent)
NUM_ARG(int, offer_ent)
OPT_BOOL_ARG(accept, LAI_TRUE)
OPT_NUM_ARG(float, manual_val, 0)
CALL_NO_RET(ReplyOffer, manual_ent, offer_ent, accept, manual_val)
END_FUNC
// void laiSetUpdateNum( int num_act );
FUNC(SetUpdateNum)
NUM_ARG(int, num_act)
CALL_NO_RET(SetUpdateNum, num_act)
END_FUNC
// void laiSetUpdateAct( int act = 0 );
FUNC(SetUpdateAct)
OPT_NUM_ARG(int, act, 0)
CALL_NO_RET(SetUpdateAct, act)
END_FUNC
// void laiSetVar( int var, float amt );
FUNC(SetVar)
NUM_ARG(int, var)
NUM_ARG(float, amt)
CALL_NO_RET(SetVar, var, amt)
END_FUNC
// void laiSetStat( int ent, int stat, float amt );
FUNC(SetStat)
NUM_ARG(int, ent)
NUM_ARG(int, stat)
NUM_ARG(float, amt)
CALL_NO_RET(SetStat, ent, stat, amt)
END_FUNC
// void laiSetEstat( int ent, int estat, int ent2, float amt );
FUNC(SetEstat)
NUM_ARG(int, ent)
NUM_ARG(int, estat)
NUM_ARG(int, ent2)
NUM_ARG(float, amt)
CALL_NO_RET(SetEstat, ent, estat, ent2, amt)
END_FUNC
// void laiSetAstat( int ent, int astat, int act, float amt );
FUNC(SetAstat)
NUM_ARG(int, ent)
NUM_ARG(int, astat)
NUM_ARG(int, act)
NUM_ARG(float, amt)
CALL_NO_RET(SetAstat, ent, astat, act, amt)
END_FUNC
// void laiSetStr( int str_num, std::string str );
FUNC(SetStr)
NUM_ARG(int, str_num)
STR_ARG(str)
CALL_NO_RET(SetStr, str_num, str)
END_FUNC
// void laiShiftVar( int var, float amt );
FUNC(ShiftVar)
NUM_ARG(int, var)
NUM_ARG(float, amt)
CALL_NO_RET(ShiftVar, var, amt)
END_FUNC
// void laiShiftStat( int ent, int stat, float amt );
FUNC(ShiftState)
NUM_ARG(int, ent)
NUM_ARG(int, stat)
NUM_ARG(float, amt)
CALL_NO_RET(ShiftStat, ent, stat, amt)
END_FUNC
// void laiShiftEstat( int ent, int estat, int ent2, float amt );
FUNC(ShiftEstat)
NUM_ARG(int, ent)
NUM_ARG(int, estat)
NUM_ARG(int, ent2)
NUM_ARG(float, amt)
CALL_NO_RET(ShiftEstat, ent, estat, ent2, amt)
END_FUNC
// void laiShiftAstat( int ent, int astat, int act, float amt );
FUNC(ShiftAstat)
NUM_ARG(int, ent)
NUM_ARG(int, astat)
NUM_ARG(int, act)
NUM_ARG(float, amt)
CALL_NO_RET(ShiftAstat, ent, astat, act, amt)
END_FUNC
// void laiLinkVar( int var, float *link );
FUNC(LinkVar)
NUM_ARG(int, var)
NUM_PTR_ARG(float, link)
CALL_NO_RET(LinkVar, var, link)
END_NUM_PTR_ARG(link)
END_FUNC
// void laiLinkStat( int ent, int stat, float *link );
FUNC(LinkStat)
NUM_ARG(int, ent)
NUM_ARG(int, stat)
NUM_PTR_ARG(float, link)
CALL_NO_RET(LinkStat, ent, stat, link)
END_NUM_PTR_ARG(link)
END_FUNC
// void laiLinkEstat( int ent, int estat, int ent2, float *link );
FUNC(LinkEstat)
NUM_ARG(int, ent)
NUM_ARG(int, estat)
NUM_ARG(int, ent2)
NUM_PTR_ARG(float, link)
CALL_NO_RET(LinkEstat, ent, estat, ent2, link)
END_NUM_PTR_ARG(link)
END_FUNC
// void laiLinkAstat( int ent, int astat, int act, float *link );
FUNC(LinkAstat)
NUM_ARG(int, ent)
NUM_ARG(int, astat)
NUM_ARG(int, act)
NUM_PTR_ARG(float, link)
CALL_NO_RET(LinkAstat, ent, astat, act, link)
END_NUM_PTR_ARG(link)
END_FUNC
// void laiLinkStr( int str_num, std::string *link );
FUNC(LinkStr)
NUM_ARG(int, str_num)
STR_PTR_ARG(link)
CALL_NO_RET(LinkStr, str_num, link)
END_STR_PTR_ARG(link)
END_FUNC
// void laiSetManual( int ent, bool manual = LAI_TRUE );
FUNC(SetManual)
NUM_ARG(int, ent)
OPT_BOOL_ARG(manual, LAI_TRUE)
CALL_NO_RET(SetManual, ent, manual)
END_FUNC
// void laiSetHistCt( int ent, int act, int ct );
FUNC(SetHistCt)
NUM_ARG(int, ent)
NUM_ARG(int, act)
NUM_ARG(int, ct)
CALL_NO_RET(SetHistCt, ent, act, ct)
END_FUNC
// void laiSetHistBest( int ent, int act, int ct_best );
FUNC(SetHistBest)
NUM_ARG(int, ent)
NUM_ARG(int, act)
NUM_ARG(int, ct_best)
CALL_NO_RET(SetHistBest, ent, act, ct_best)
END_FUNC
// void laiSetHistLow( int ent, int act, float low );
FUNC(SetHistLow)
NUM_ARG(int, ent)
NUM_ARG(int, act)
NUM_ARG(float, low)
CALL_NO_RET(SetHistLow, ent, act, low)
END_FUNC
// void laiSetHistHigh( int ent, int act, float high );
FUNC(SetHistHigh)
NUM_ARG(int, ent)
NUM_ARG(int, act)
NUM_ARG(float, high)
CALL_NO_RET(SetHistHigh, ent, act, high)
END_FUNC
// void laiSetHistSum( int ent, int act, float sum );
FUNC(SetHistSum)
NUM_ARG(int, ent)
NUM_ARG(int, act)
NUM_ARG(float, sum)
CALL_NO_RET(SetHistSum, ent, act, sum)
END_FUNC
// void laiSetRoleEnt( int act, int role, int ent );
FUNC(SetRoleEnt)
NUM_ARG(int, act)
NUM_ARG(int, role)
NUM_ARG(int, ent)
CALL_NO_RET(SetRoleEnt, act, role, ent)
END_FUNC
// void laiSetActor( int act, int role, bool actor );
FUNC(SetActor)
NUM_ARG(int, act)
NUM_ARG(int, role)
BOOL_ARG(actor)
CALL_NO_RET(SetActor, act, role, actor)
END_FUNC
// int laiGetMaxEnt();
FUNC(GetMaxEnt)
CALL(GetMaxEnt, int)
PUSH_NUM(ret)
END_FUNC
// int laiGetMaxAct();
FUNC(GetMaxAct)
CALL(GetMaxAct, int)
PUSH_NUM(ret)
END_FUNC
// int laiGetMaxRole();
FUNC(GetMaxRole)
CALL(GetMaxRole, int)
PUSH_NUM(ret)
END_FUNC
// int laiGetUpdateNum();
FUNC(GetUpdateNum)
CALL(GetUpdateNum, int)
PUSH_NUM(ret)
END_FUNC
// int laiGetUpdateAct();
FUNC(GetUpdateAct)
CALL(GetUpdateAct, int)
PUSH_NUM(ret)
END_FUNC
// int laiGetVarNum( std::string name );
FUNC(GetVarNum)
STR_ARG(name)
CALL(GetVarNum, int, name)
PUSH_NUM(ret)
END_FUNC
// int laiGetStatNum( std::string name );
FUNC(GetStatNum)
STR_ARG(name)
CALL(GetStatNum, int, name)
PUSH_NUM(ret)
END_FUNC
// int laiGetEstatNum( std::string name );
FUNC(GetEstatNum)
STR_ARG(name)
CALL(GetEstatNum, int, name)
PUSH_NUM(ret)
END_FUNC
// int laiGetAstatNum( std::string name );
FUNC(GetAstatNum)
STR_ARG(name)
CALL(GetAstatNum, int, name)
PUSH_NUM(ret)
END_FUNC
// int laiGetStrNum( std::string name );
FUNC(GetStrNum)
STR_ARG(name)
CALL(GetStrNum, int, name)
PUSH_NUM(ret)
END_FUNC
// int laiGetEntNum( std::string name );
FUNC(GetEntNum)
STR_ARG(name)
CALL(GetEntNum, int, name)
PUSH_NUM(ret)
END_FUNC
// int laiGetActNum( std::string name );
FUNC(GetActNum)
STR_ARG(name)
CALL(GetActNum, int, name)
PUSH_NUM(ret)
END_FUNC
// float laiGetVar( int var );
FUNC(GetVar)
NUM_ARG(int, var)
CALL(GetVar, float, var)
PUSH_NUM(ret)
END_FUNC
// float laiGetStat( int ent, int stat );
FUNC(GetStat)
NUM_ARG(int, ent)
NUM_ARG(int, stat)
CALL(GetStat, float, ent, stat)
PUSH_NUM(ret)
END_FUNC
// float laiGetEstat( int ent, int estat, int ent2 );
FUNC(GetEstat)
NUM_ARG(int, ent)
NUM_ARG(int, estat)
NUM_ARG(int, ent2)
CALL(GetEstat, float, ent, estat, ent2)
PUSH_NUM(ret)
END_FUNC
// float laiGetAstat( int ent, int astat, int act );
FUNC(GetAstat)
NUM_ARG(int, ent)
NUM_ARG(int, astat)
NUM_ARG(int, act)
CALL(GetAstat, float, ent, astat, act)
PUSH_NUM(ret)
END_FUNC
// std::string laiGetStr( int str_num );
FUNC(GetStr)
NUM_ARG(int, str_num)
CALL(GetStr, std::string, str_num)
PUSH_STR(ret)
END_FUNC
// float laiGetSat( int ent );
FUNC(GetSat)
NUM_ARG(int, ent)
CALL(GetSat, float, ent)
PUSH_NUM(ret)
END_FUNC
// bool laiGetEntExist( int ent );
FUNC(GetEntExist)
NUM_ARG(int, ent)
CALL(GetEntExist, bool, ent)
PUSH_BOOL(ret)
END_FUNC
// bool laiGetEntActive( int ent );
FUNC(GetEntActive)
NUM_ARG(int, ent)
CALL(GetEntActive, bool, ent)
PUSH_BOOL(ret)
END_FUNC
// bool laiGetManual( int ent );
FUNC(GetManual)
NUM_ARG(int, ent)
CALL(GetManual, bool, ent)
PUSH_BOOL(ret)
END_FUNC
// bool laiGetSkip( int ent );
FUNC(GetSkip)
NUM_ARG(int, ent)
CALL(GetSkip, bool, ent)
PUSH_BOOL(ret)
END_FUNC
// bool laiGetRoleExist( int act, int role );
FUNC(GetRoleExist)
NUM_ARG(int, act)
NUM_ARG(int, role)
CALL(GetRoleExist, bool, act, role)
PUSH_BOOL(ret)
END_FUNC
// bool laiGetBestExist( int ent );
FUNC(GetBestExist)
NUM_ARG(int, ent)
CALL(GetBestExist, bool, ent)
PUSH_BOOL(ret)
END_FUNC
// bool laiGetBestChange( int ent );
FUNC(GetBestChange)
NUM_ARG(int, ent)
CALL(GetBestChange, bool, ent)
PUSH_BOOL(ret)
END_FUNC
// int laiGetBestAct( int ent );
FUNC(GetBestAct)
NUM_ARG(int, ent)
CALL(GetBestAct, int, ent)
PUSH_NUM(ret)
END_FUNC
// int laiGetBestRole( int ent );
FUNC(GetBestRole)
NUM_ARG(int, ent)
CALL(GetBestRole, int, ent)
PUSH_NUM(ret)
END_FUNC
// int laiGetBestCoRole( int ent );
FUNC(GetBestCoRole)
NUM_ARG(int, ent)
CALL(GetBestCoRole, int, ent)
PUSH_NUM(ret)
END_FUNC
// int laiGetBestCoEnt( int ent );
FUNC(GetBestCoEnt)
NUM_ARG(int, ent)
CALL(GetBestCoEnt, int, ent)
PUSH_NUM(ret)
END_FUNC
// int laiGetBestStatus( int ent );
FUNC(GetBestStatus)
NUM_ARG(int, ent)
CALL(GetBestStatus, int, ent)
PUSH_NUM(ret)
END_FUNC
// int laiGetBestEnt( int ent, int role );
FUNC(GetBestEnt)
NUM_ARG(int, ent)
NUM_ARG(int, role)
CALL(GetBestEnt, int, ent, role)
PUSH_NUM(ret)
END_FUNC
// float laiGetBestVal( int ent, int role = LAI_SELF );
FUNC(GetBestVal)
NUM_ARG(int, ent)
OPT_NUM_ARG(int, role, LAI_SELF)
CALL(GetBestVal, float, ent, role)
PUSH_NUM(ret)
END_FUNC
// std::string laiGetBestActName( int ent );
FUNC(GetBestActName)
NUM_ARG(int, ent)
CALL(GetBestActName, std::string, ent)
PUSH_STR(ret)
END_FUNC
// std::string laiGetBestRoleName( int ent, int role = LAI_NULL );
FUNC(GetBestRoleName)
NUM_ARG(int, ent)
OPT_NUM_ARG(int, role, LAI_NULL)
CALL(GetBestRoleName, std::string, ent, role)
PUSH_STR(ret)
END_FUNC
// std::string laiGetBestCoRoleName( int ent );
FUNC(GetBestCoRoleName)
NUM_ARG(int, ent)
CALL(GetBestCoRoleName, std::string, ent)
PUSH_STR(ret)
END_FUNC
// std::string laiGetBestCoEntName( int ent );
FUNC(GetBestCoEntName)
NUM_ARG(int, ent)
CALL(GetBestCoEntName, std::string, ent)
PUSH_STR(ret)
END_FUNC
// std::string laiGetBestEntName( int ent, int role );
FUNC(GetBestEntName)
NUM_ARG(int, ent)
NUM_ARG(int, role)
CALL(GetBestEntName, std::string, ent, role)
PUSH_STR(ret)
END_FUNC
// int laiGetHistCt( int ent, int act );
FUNC(GetHistCt)
NUM_ARG(int, ent)
NUM_ARG(int, act)
CALL(GetHistCt, int, ent, act)
PUSH_NUM(ret)
END_FUNC
// int laiGetHistBest( int ent, int act );
FUNC(GetHistBest)
NUM_ARG(int, ent)
NUM_ARG(int, act)
CALL(GetHistBest, int, ent, act)
PUSH_NUM(ret)
END_FUNC
// float laiGetHistLow( int ent, int act );
FUNC(GetHistLow)
NUM_ARG(int, ent)
NUM_ARG(int, act)
CALL(GetHistLow, float, ent, act)
PUSH_NUM(ret)
END_FUNC
// float laiGetHistHigh( int ent, int act );
FUNC(GetHistHigh)
NUM_ARG(int, ent)
NUM_ARG(int, act)
CALL(GetHistHigh, float, ent, act)
PUSH_NUM(ret)
END_FUNC
// float laiGetHistAvg( int ent, int act );
FUNC(GetHistAvg)
NUM_ARG(int, ent)
NUM_ARG(int, act)
CALL(GetHistAvg, float, ent, act)
PUSH_NUM(ret)
END_FUNC
// double laiGetHistSum( int ent, int act );
FUNC(GetHistSum)
NUM_ARG(int, ent)
NUM_ARG(int, act)
CALL(GetHistSum, double, ent, act)
PUSH_NUM(ret)
END_FUNC
// int laiGetRoleEnt( int act, int role );
FUNC(GetRoleEnt)
NUM_ARG(int, act)
NUM_ARG(int, role)
CALL(GetRoleEnt, int, act, role)
PUSH_NUM(ret)
END_FUNC
// bool laiGetActor( int act, int role );
FUNC(GetActor)
NUM_ARG(int, act)
NUM_ARG(int, role)
CALL(GetActor, int, act, role)
PUSH_BOOL(ret)
END_FUNC
// int laiMake( int type, std::string name = "" );
FUNC(Make)
NUM_ARG(int, type)
STR_ARG(name)
CALL(Make, int, type, name)
PUSH_NUM(ret)
END_FUNC
// int laiMake( int type, int num0, std::string name = "" );
FUNC(Make2)
NUM_ARG(int, type)
NUM_ARG(int, num0)
OPT_STR_ARG(name, "")
CALL(Make, int, type, num0, name)
PUSH_NUM(ret)
END_FUNC
// int laiMake( int type, int num0 = LAI_NULL, int num1 = LAI_NULL, int num2 = LAI_NULL );
FUNC(Make3)
NUM_ARG(int, type)
OPT_NUM_ARG(int, num0, LAI_NULL)
OPT_NUM_ARG(int, num1, LAI_NULL)
OPT_NUM_ARG(int, num2, LAI_NULL)
CALL(Make, int, type, num0, num1, num2)
PUSH_NUM(ret)
END_FUNC
// int laiClone( int type, int num0, int num_clones, std::string name );
FUNC(Clone)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num_clones)
STR_ARG(name)
CALL(Clone, int, type, num0, num_clones, name)
PUSH_NUM(ret)
END_FUNC
// void laiRemove( int type, int num0, int num1 = LAI_NULL, int num2 = LAI_NULL, int num3 = LAI_NULL );
FUNC(Remove)
NUM_ARG(int, type)
OPT_NUM_ARG(int, num0, LAI_NULL)
OPT_NUM_ARG(int, num1, LAI_NULL)
OPT_NUM_ARG(int, num2, LAI_NULL)
OPT_NUM_ARG(int, num3, LAI_NULL)
CALL_NO_RET(Remove, type, num0, num1, num2, num3)
END_FUNC
// void laiRemoveAll( int type, int num0, int num1 = LAI_NULL, int num2 = LAI_NULL );
FUNC(RemoveAll)
NUM_ARG(int, type)
NUM_ARG(int, num0)
OPT_NUM_ARG(int, num1, LAI_NULL)
OPT_NUM_ARG(int, num2, LAI_NULL)
CALL_NO_RET(RemoveAll, type, num0, num1, num2)
END_FUNC
// void laiSetName( int type, int num0, std::string name );
FUNC(SetName)
NUM_ARG(int, type)
NUM_ARG(int, num0)
STR_ARG(name)
CALL_NO_RET(SetName, type, num0, name)
END_FUNC
// void laiSetName( int type, int num0, int num1, std::string name );
FUNC(SetName2)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
STR_ARG(name)
CALL_NO_RET(SetName, type, num0, num1, name)
END_FUNC
// void laiSetActive( int type, int num0, bool active );
FUNC(SetActive)
NUM_ARG(int, type)
NUM_ARG(int, num0)
BOOL_ARG(active)
CALL_NO_RET(SetActive, type, num0, active)
END_FUNC
// void laiSetSave( int type, bool save );
FUNC(SetSave)
NUM_ARG(int, type)
BOOL_ARG(save)
CALL_NO_RET(SetSave, type, save)
END_FUNC
// void laiSetSave( int type, int num0, bool save );
FUNC(SetSave2)
NUM_ARG(int, type)
NUM_ARG(int, num0)
BOOL_ARG(save)
CALL_NO_RET(SetSave, type, num0, save)
END_FUNC
// void laiSetSync( int type, bool sync );
FUNC(SetSync)
NUM_ARG(int, type)
BOOL_ARG(sync)
CALL_NO_RET(SetSync, type, sync)
END_FUNC
// void laiSetNorm( int type, int num0, float norm );
FUNC(SetNorm)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(float, norm)
CALL_NO_RET(SetNorm, type, num0, norm)
END_FUNC
// void laiSetAmt( int type, int num0, float amt );
FUNC(SetAmt)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(float, amt)
CALL_NO_RET(SetAmt, type, num0, amt)
END_FUNC
// void laiSetAmt( int type, int num0, int num1, float amt );
FUNC(SetAmt2)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(float, amt)
CALL_NO_RET(SetAmt, type, num0, num1, amt)
END_FUNC
// void laiSetAmt( int type, int num0, int num1, int num2, float amt );
FUNC(SetAmt3)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(float, amt)
CALL_NO_RET(SetAmt, type, num0, num1, num2, amt)
END_FUNC
// void laiSetVal( int type, int num0, int num1, float val );
FUNC(SetVal)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(float, val)
CALL_NO_RET(SetVal, type, num0, num1, val)
END_FUNC
// void laiSetVal( int type, int num0, int num1, int num2, float val );
FUNC(SetVal2)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(float, val)
CALL_NO_RET(SetVal, type, num0, num1, num2, val)
END_FUNC
// void laiSetMin( int type, int num0, int num1, float min );
FUNC(SetMin)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(float, min)
CALL_NO_RET(SetMin, type, num0, num1, min)
END_FUNC
// void laiSetMin( int type, int num0, int num1, int num2, float min );
FUNC(SetMin2)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(float, min)
CALL_NO_RET(SetMin, type, num0, num1, num2, min)
END_FUNC
// void laiSetMin( int type, int num0, int num1, int num2, int num3, float min );
FUNC(SetMin3)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, num3)
NUM_ARG(float, min)
CALL_NO_RET(SetMin, type, num0, num1, num2, num3, min)
END_FUNC
// void laiSetMax( int type, int num0, int num1, float max );
FUNC(SetMax)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(float, max)
CALL_NO_RET(SetMax, type, num0, num1, max)
END_FUNC
// void laiSetMax( int type, int num0, int num1, int num2, float max );
FUNC(SetMax2)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(float, max)
CALL_NO_RET(SetMax, type, num0, num1, num2, max)
END_FUNC
// void laiSetMax( int type, int num0, int num1, int num2, int num3, float max );
FUNC(SetMax3)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, num3)
NUM_ARG(float, max)
CALL_NO_RET(SetMax, type, num0, num1, num2, num3, max)
END_FUNC
// void laiSetLink( int type, int num0, float *link );
FUNC(SetLink)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_PTR_ARG(float, link)
CALL_NO_RET(SetLink, type, num0, link)
END_NUM_PTR_ARG(link)
END_FUNC
// void laiSetLink( int type, int num0, std::string *link );
FUNC(SetLink2)
NUM_ARG(int, type)
NUM_ARG(int, num0)
STR_PTR_ARG(link)
CALL_NO_RET(SetLink, type, num0, link)
END_STR_PTR_ARG(link)
END_FUNC
// void laiSetLink( int type, int num0, int num1, float *link );
FUNC(SetLink3)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_PTR_ARG(float, link)
CALL_NO_RET(SetLink, type, num0, num1, link)
END_NUM_PTR_ARG(link)
END_FUNC
// void laiSetLink( int type, int num0, int num1, int num2, float *link );
FUNC(SetLink4)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_PTR_ARG(float, link)
CALL_NO_RET(SetLink, type, num0, num1, num2, link)
END_NUM_PTR_ARG(link)
END_FUNC
// void laiSetWeight( int type, int num0, int num1, int num2, float weight );
FUNC(SetWeight)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(float, weight)
CALL_NO_RET(SetWeight, type, num0, num1, num2, weight)
END_FUNC
// void laiSetWeight( int type, int num0, int num1, int num2, int num3, float weight );
FUNC(SetWeight2)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, num3)
NUM_ARG(float, weight)
CALL_NO_RET(SetWeight, type, num0, num1, num2, num3, weight)
END_FUNC
// void laiSetInverse( int type, int num0, int num1, int num2, bool inverse );
FUNC(SetInverse)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
BOOL_ARG(inverse)
CALL_NO_RET(SetInverse, type, num0, num1, num2, inverse)
END_FUNC
// void laiSetInverse( int type, int num0, int num1, int num2, int num3, bool inverse );
FUNC(SetInverse2)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, num3)
BOOL_ARG(inverse)
CALL_NO_RET(SetInverse, type, num0, num1, num2, num3, inverse)
END_FUNC
// void laiSetOp( int type, int num0, int num1, int num2, int op );
FUNC(SetOp)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, op)
CALL_NO_RET(SetOp, type, num0, num1, num2, op)
END_FUNC
// void laiSetSubType( int type, int num0, int num1, int num2, int num3, int sub_type );
FUNC(SetSubType)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, num3)
NUM_ARG(int, sub_type)
CALL_NO_RET(SetSubType, type, num0, num1, num2, num3, sub_type)
END_FUNC
// void laiSetSubType( int type, int num0, int num1, int num2, int num3, int num4, int sub_type );
FUNC(SetSubType2)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, num3)
NUM_ARG(int, num4)
NUM_ARG(int, sub_type)
CALL_NO_RET(SetSubType, type, num0, num1, num2, num3, num4, sub_type)
END_FUNC
// void laiSetSubNum( int type, int num0, int num1, int num2, int num3, int sub_num );
FUNC(SetSubNum)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, num3)
NUM_ARG(int, sub_num)
CALL_NO_RET(SetSubNum, type, num0, num1, num2, num3, sub_num)
END_FUNC
// void laiSetSubNum( int type, int num0, int num1, int num2, int num3, int num4, int sub_num );
FUNC(SetSubNum2)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, num3)
NUM_ARG(int, num4)
NUM_ARG(int, sub_num)
CALL_NO_RET(SetSubNum, type, num0, num1, num2, num3, num4, sub_num)
END_FUNC
// void laiSetRefType( int type, int num0, int num1, int num2, int num3, int ref_type );
FUNC(SetRefType)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, num3)
NUM_ARG(int, ref_type)
CALL_NO_RET(SetRefType, type, num0, num1, num2, num3, ref_type)
END_FUNC
// void laiSetRefNum( int type, int num0, int num1, int num2, int num3, int ref_num );
FUNC(SetRefNum)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, num3)
NUM_ARG(int, ref_num)
CALL_NO_RET(SetRefNum, type, num0, num1, num2, num3, ref_num)
END_FUNC
// void laiSetRefMinType( int type, int num0, int num1, int num2, int num3, int ref_type );
FUNC(SetRefMinType)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, num3)
NUM_ARG(int, ref_type)
CALL_NO_RET(SetRefMinType, type, num0, num1, num2, num3, ref_type)
END_FUNC
// void laiSetRefMinNum( int type, int num0, int num1, int num2, int num3, int ref_num );
FUNC(SetRefMinNum)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, num3)
NUM_ARG(int, ref_num)
CALL_NO_RET(SetRefMinNum, type, num0, num1, num2, num3, ref_num)
END_FUNC
// void laiSetRefMaxType( int type, int num0, int num1, int num2, int num3, int ref_type );
FUNC(SetRefMaxType)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, num3)
NUM_ARG(int, ref_type)
CALL_NO_RET(SetRefMaxType, type, num0, num1, num2, num3, ref_type)
END_FUNC
// void laiSetRefMaxNum( int type, int num0, int num1, int num2, int num3, int ref_num );
FUNC(SetRefMaxNum)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, num3)
NUM_ARG(int, ref_num)
CALL_NO_RET(SetRefMaxNum, type, num0, num1, num2, num3, ref_num)
END_FUNC
// void laiSetBest( int type, int num0, int best );
FUNC(SetBest)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, best)
CALL_NO_RET(SetBest, type, num0, best)
END_FUNC
// void laiSetBest( int type, int num0, int num1, int best );
FUNC(SetBest2)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, best)
CALL_NO_RET(SetBest, type, num0, num1, best)
END_FUNC
// void laiSetBest( int type, int num0, int num1, float best_val );
FUNC(SetBest3)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(float, best_val)
CALL_NO_RET(SetBest, type, num0, num1, best_val)
END_FUNC
// int laiGetMaxNum( int type );
FUNC(GetMaxNum)
NUM_ARG(int, type)
CALL(GetMaxNum, int, type)
PUSH_NUM(ret)
END_FUNC
// int laiGetType();
FUNC(GetType)
CALL(GetType, int)
PUSH_NUM(ret)
END_FUNC
// int laiGetType( std::string name );
FUNC(GetType2)
STR_ARG(name)
CALL(GetType, int, name)
PUSH_NUM(ret)
END_FUNC
// int laiGetNum();
FUNC(GetNum)
CALL(GetNum, int)
PUSH_NUM(ret)
END_FUNC
// int laiGetNum( int type, std::string name, int act_num = LAI_NULL );
FUNC(GetNum2)
NUM_ARG(int, type)
STR_ARG(name)
OPT_NUM_ARG(int, act_num, LAI_NULL)
CALL(GetNum, int, type, name, act_num)
PUSH_NUM(ret)
END_FUNC
// bool laiGetExist( int type, int num0, int num1 = LAI_NULL, int num2 = LAI_NULL, int num3 = LAI_NULL );
FUNC(GetExist)
NUM_ARG(int, type)
NUM_ARG(int, num0)
OPT_NUM_ARG(int, num1, LAI_NULL)
OPT_NUM_ARG(int, num2, LAI_NULL)
OPT_NUM_ARG(int, num3, LAI_NULL)
CALL(GetExist, bool, type, num0, num1, num2, num3)
PUSH_BOOL(ret)
END_FUNC
// int laiGetCt( int type, int num0 = LAI_NULL, int num1 = LAI_NULL, int num2 = LAI_NULL );
FUNC(GetCt)
NUM_ARG(int, type)
OPT_NUM_ARG(int, num0, LAI_NULL)
OPT_NUM_ARG(int, num1, LAI_NULL)
OPT_NUM_ARG(int, num2, LAI_NULL)
CALL(GetCt, int, type, num0, num1, num2)
PUSH_NUM(ret)
END_FUNC
// bool laiGetHas( int type, int num0, int num1, int num2 = LAI_NULL );
FUNC(GetHas)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
OPT_NUM_ARG(int, num2, LAI_NULL)
CALL(GetHas, bool, type, num0, num1, num2)
PUSH_BOOL(ret)
END_FUNC
// std::string laiGetName( int type, int num0, int num1 = LAI_NULL );
FUNC(GetName)
NUM_ARG(int, type)
NUM_ARG(int, num0)
OPT_NUM_ARG(int, num1, LAI_NULL)
CALL(GetName, std::string, type, num0, num1)
PUSH_STR(ret)
END_FUNC
// bool laiGetActive( int type, int num0, int num1 = LAI_NULL );
FUNC(GetActive)
NUM_ARG(int, type)
NUM_ARG(int, num0)
OPT_NUM_ARG(int, num1, LAI_NULL)
CALL(GetActive, bool, type, num0, num1)
PUSH_BOOL(ret)
END_FUNC
// bool laiGetSave( int type, int num0 = LAI_NULL );
FUNC(GetSave)
NUM_ARG(int, type)
OPT_NUM_ARG(int, num0, LAI_NULL)
CALL(GetSave, bool, type, num0)
PUSH_BOOL(ret)
END_FUNC
// bool laiGetSync( int type );
FUNC(GetSync)
NUM_ARG(int, type)
CALL(GetSync, bool, type)
PUSH_BOOL(ret)
END_FUNC
// float laiGetNorm( int type, int num0 );
FUNC(GetNorm)
NUM_ARG(int, type)
NUM_ARG(int, num0)
CALL(GetNorm, float, type, num0)
PUSH_NUM(ret)
END_FUNC
// float laiGetAmt( int type, int num0, int num1 = LAI_NULL, int num2 = LAI_NULL );
FUNC(GetAmt)
NUM_ARG(int, type)
NUM_ARG(int, num0)
OPT_NUM_ARG(int, num1, LAI_NULL)
OPT_NUM_ARG(int, num2, LAI_NULL)
CALL(GetAmt, float, type, num0, num1, num2)
PUSH_NUM(ret)
END_FUNC
// float laiGetVal( int type, int num0, int num1, int num2 = LAI_NULL );
FUNC(GetVal)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
OPT_NUM_ARG(int, num2, LAI_NULL)
CALL(GetVal, float, type, num0, num1, num2)
PUSH_NUM(ret)
END_FUNC
// float laiGetMin( int type, int num0, int num1, int num2 = LAI_NULL, int num3 = LAI_NULL );
FUNC(GetMin)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
OPT_NUM_ARG(int, num2, LAI_NULL)
OPT_NUM_ARG(int, num3, LAI_NULL)
CALL(GetMin, float, type, num0, num1, num2, num3)
PUSH_NUM(ret)
END_FUNC
// float laiGetMax( int type, int num0, int num1, int num2 = LAI_NULL, int num3 = LAI_NULL );
FUNC(GetMax)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
OPT_NUM_ARG(int, num2, LAI_NULL)
OPT_NUM_ARG(int, num3, LAI_NULL)
CALL(GetMax, float, type, num0, num1, num2, num3)
PUSH_NUM(ret)
END_FUNC
// float *laiGetLink( int type, int num0, int num1 = LAI_NULL, int num2 = LAI_NULL );
// std::string *laiGetLinkStr( int num0 );
// float laiGetWeight( int type, int num0, int num1, int num2, int num3 = LAI_NULL );
FUNC(GetWeight)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
OPT_NUM_ARG(int, num3, LAI_NULL)
CALL(GetWeight, float, type, num0, num1, num2, num3)
PUSH_NUM(ret)
END_FUNC
// bool laiGetInverse( int type, int num0, int num1, int num2, int num3 = LAI_NULL );
FUNC(GetInverse)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
OPT_NUM_ARG(int, num3, LAI_NULL)
CALL(GetInverse, bool, type, num0, num1, num2, num3)
PUSH_BOOL(ret)
END_FUNC
// int laiGetOp( int type, int num0, int num1, int num2 );
FUNC(GetOp)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
CALL(GetOp, int, type, num0, num1, num2)
PUSH_NUM(ret)
END_FUNC
// int laiGetSubType( int type, int num0, int num1, int num2, int num3, int num4 = LAI_NULL );
FUNC(GetSubType)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, num3)
OPT_NUM_ARG(int, num4, LAI_NULL)
CALL(GetSubType, int, type, num0, num1, num2, num3, num4)
PUSH_NUM(ret)
END_FUNC
// int laiGetSubNum( int type, int num0, int num1, int num2, int num3, int num4 = LAI_NULL );
FUNC(GetSubNum)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, num3)
OPT_NUM_ARG(int, num4, LAI_NULL)
CALL(GetSubNum, int, type, num0, num1, num2, num3, num4)
PUSH_NUM(ret)
END_FUNC
// int laiGetRefType( int type, int num0, int num1, int num2, int num3 );
FUNC(GetRefType)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, num3)
CALL(GetRefType, int, type, num0, num1, num2, num3)
PUSH_NUM(ret)
END_FUNC
// int laiGetRefNum( int type, int num0, int num1, int num2, int num3 );
FUNC(GetRefNum)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, num3)
CALL(GetRefNum, int, type, num0, num1, num2, num3)
PUSH_NUM(ret)
END_FUNC
// int laiGetRefMinType( int type, int num0, int num1, int num2, int num3 );
FUNC(GetRefMinType)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, num3)
CALL(GetRefMinType, int, type, num0, num1, num2, num3)
PUSH_NUM(ret)
END_FUNC
// int laiGetRefMinNum( int type, int num0, int num1, int num2, int num3 );
FUNC(GetRefMinNum)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, num3)
CALL(GetRefMinNum, int, type, num0, num1, num2, num3)
PUSH_NUM(ret)
END_FUNC
// int laiGetRefMaxType( int type, int num0, int num1, int num2, int num3 );
FUNC(GetRefMaxType)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, num3)
CALL(GetRefMaxType, int, type, num0, num1, num2, num3)
PUSH_NUM(ret)
END_FUNC
// int laiGetRefMaxNum( int type, int num0, int num1, int num2, int num3 );
FUNC(GetRefMaxNum)
NUM_ARG(int, type)
NUM_ARG(int, num0)
NUM_ARG(int, num1)
NUM_ARG(int, num2)
NUM_ARG(int, num3)
CALL(GetRefMaxNum, int, type, num0, num1, num2, num3)
PUSH_NUM(ret)
END_FUNC
Simulink.importExternalCTypes('./C_Files/ex_myTypes_LCT.h');
def = legacy_code('initialize');
def.SFunctionName = 'sfun_ex_mySrc_LCT';
def.SourceFiles = {'ex_mySrc_LCT.c'};
def.HeaderFiles = {'ex_myTypes_LCT.h'};
def.IncPaths = {'./C_Files'};
def.SrcPaths = {'./C_Files'};
def.OutputFcnSpec = ['void myFcn(sigStructType u1[1], ',...
    'paramStructType p1[1], sigStructType y1[1])'];
legacy_code('generate_for_sim',def);
legacy_code('sfcn_tlc_generate',def)
legacy_code('slblock_generate', def);
movefile sfun_ex_mySr* ./Sfunction_TLC/
structParam = struct;
structParam.param1 = 15;
structParam.param2 = 20;
structParam.param3 = 5;
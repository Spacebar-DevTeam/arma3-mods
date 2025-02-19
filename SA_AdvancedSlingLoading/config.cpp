////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.89
//https://mikero.bytex.digital/Downloads
//'now' is Wed Feb 19 14:58:18 2025 : 'file' last modified on Tue Sep 06 20:24:42 2016
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class SA_AdvancedSlingLoading
	{
		units[] = {"SA_AdvancedSlingLoading"};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Modules_F"};
	};
};
class CfgNetworkMessages
{
	class AdvancedSlingLoadingRemoteExecClient
	{
		module = "AdvancedSlingLoading";
		parameters[] = {"ARRAY","STRING","OBJECT","BOOL"};
	};
	class AdvancedSlingLoadingRemoteExecServer
	{
		module = "AdvancedSlingLoading";
		parameters[] = {"ARRAY","STRING","BOOL"};
	};
};
class CfgFunctions
{
	class SA
	{
		class AdvancedSlingLoading
		{
			file = "\SA_AdvancedSlingLoading\functions";
			class advancedSlingLoadingInit
			{
				postInit = 1;
			};
		};
	};
};
class cfgMods
{
	author = "76561198131707990";
	timepacked = "1473204282";
};

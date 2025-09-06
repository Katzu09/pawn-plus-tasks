/*
    * pp-tasks.inc - pawnplus tasks system
    * Created by: Katzu - 03/08/2025 10.22

    * This file provides a simple way to create repeating tasks using PawnPlus.
*/

#if defined _pptask_included
    #endinput
#endif
#define _pptask_included

#if !defined _PawnPlus_included
	#tryinclude <PawnPlus>
	#if !defined _PawnPlus_included
		#error "Please include PawnPlus before pp-tasks."
	#endif
#endif

native SetTimer_s(ConstAmxString:fName, const interval, bool:repeating) = SetTimer;

#define task%0[%1](%2) forward @pT_%0_%1();public @pT_%0_%1()
#define @pT_%8\32; @pT_

forward _pp@on_init@PPTasks();
public _pp@on_init@PPTasks()
{
    new count = amx_num_publics();
    for (new i = 0; i < count; i++)
    {
        new String:funcname = amx_public_name_s(i);
        new List:regex = str_extract(funcname, "^@pT_(.*?)_(\\d+)$");
        if (regex) {
            new interval_str[10];
            list_get_str(regex, 2, interval_str);
            list_delete_deep(regex);

            new interval = strval(interval_str);
            SetTimer_s(funcname, interval, true);
        }
    }
    return 1;
}

_tu144d = _this select 0;
sleep(0.01);
while {(alive _tu144d)} do
{
	if (((_tu144d animationPhase "gear_trigger")==1) and ((_tu144d animationPhase "ngear")==0)) then
	{
		_tu144d say "tu144gup";			
		_tu144d animate["nose",1]; 
		_tu144d animate["kryl_l",1];
		_tu144d animate["kryl_r",1]; 
		_tu144d animate["gear_l_st",1];
		_tu144d animate["gear_r_st",1];
		sleep(2);
		_tu144d animate["ngear",1];
		_tu144d animate["damper_f",1];
		_tu144d animate["gear_l",1];
		_tu144d animate["gear_r",1];		
		_tu144d animate["shnjaga",1];
		_tu144d animate["shnjaga_st",1];
		sleep(2);
		_tu144d animate["ngear_door_l",1]; 
		_tu144d animate["ngear_door_r",1];
		_tu144d animate["gear_l_door_l",1]; 
		_tu144d animate["gear_l_door_r",1]; 
		_tu144d animate["gear_r_door_l",1];
		_tu144d animate["gear_r_door_r",1];
	};
	if (((_tu144d animationPhase "gear_trigger")==0) and ((_tu144d animationPhase "ngear")==1)) then
	{
		_tu144d say "tu144gd";		
		_tu144d animate["kryl_l",0]; 
		_tu144d animate["kryl_r",0];
		_tu144d animate["nose",0];		
		_tu144d animate["ngear_door_l",0]; 
		_tu144d animate["ngear_door_r",0];
		_tu144d animate["gear_l_door_l",0]; 
		_tu144d animate["gear_l_door_r",0]; 
		_tu144d animate["gear_r_door_l",0];
		_tu144d animate["gear_r_door_r",0];
		sleep(2);		
		_tu144d animate["ngear",0];
		_tu144d animate["damper_f",0];
		_tu144d animate["gear_l",0];
		_tu144d animate["gear_r",0];
		_tu144d animate["shnjaga",0];
		_tu144d animate["shnjaga_st",0];
		sleep(2);
		_tu144d animate["gear_l_st",0];
		_tu144d animate["gear_r_st",0];		
	};
	sleep(0.1);
};
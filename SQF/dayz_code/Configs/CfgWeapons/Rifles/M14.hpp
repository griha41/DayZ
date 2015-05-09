/* Iron sight */

class M14_DZ : M14_EP1
{
	model = "z\addons\dayz_communityweapons\m14\m14.p3d";
	displayName = $STR_DZ_WPN_M14_NAME;
	
	distanceZoomMin = 300;
	distanceZoomMax = 300;
	
	modes[] = {Single};
	
	class Attachments
	{
		attachments[] =
		{
			"Attachment_CCO",
			"Attachment_Holo",
			"Attachment_Ghillie"
		};
		
		Attachment_CCO = "M14_CCO_DZ";
		Attachment_Holo = "M14_Holo_DZ";
		Attachment_Ghillie = "M14_Gh_DZ";
	};
};

class M14_Gh_DZ : M14_DZ
{
	model = "z\addons\dayz_communityweapons\m14\m14_ghillie.p3d";
	displayName = $STR_DZ_WPN_M14_GH_NAME;
	
	class Attachments
	{
		attachments[] =
		{
			"Attachment_CCO",
			"Attachment_Holo"
		};
		
		Attachment_CCO = "M14_CCO_Gh_DZ";
		Attachment_Holo = "M14_Holo_Gh_DZ";
	};
	
	class ItemActions
	{
		class RemoveGhillie
		{
			text = $STR_DZ_ATT_GHIL_RMVE;
			script = "; ['Attachment_Ghillie',_id,'M14_DZ'] call player_removeAttachment";
		};
	};
};

/* CCO */

class M14_CCO_DZ : M14_DZ
{
	model = "ca\weapons_e\m14\m14.p3d";
	displayName = $STR_DZ_WPN_M14_CCO_NAME;
	
	class Attachments
	{
		attachments[] =
		{
			"Attachment_Ghillie"
		};
		
		Attachment_Ghillie = "M14_CCO_Gh_DZ";
	};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M14_DZ'] call player_removeAttachment";
		};
	};
};

class M14_CCO_Gh_DZ : M14_CCO_DZ
{
	model = "z\addons\dayz_communityweapons\m14\m14_ghillie_cco.p3d";
	displayName = $STR_DZ_WPN_M14_CCO_GH_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveCCO
		{
			text = $STR_DZ_ATT_CCO_RMVE;
			script = "; ['Attachment_CCO',_id,'M14_Gh_DZ'] call player_removeAttachment";
		};
		class RemoveGhillie
		{
			text = $STR_DZ_ATT_GHIL_RMVE;
			script = "; ['Attachment_Ghillie',_id,'M14_CCO_DZ'] call player_removeAttachment";
		};
	};
};

/* Holo */

class M14_Holo_DZ : M14_DZ
{
	model = "z\addons\dayz_communityweapons\m14\m14_holo.p3d";
	displayName = $STR_DZ_WPN_M14_HOLO_NAME;
	
	class Attachments
	{
		attachments[] =
		{
			"Attachment_Ghillie"
		};
		
		Attachment_Ghillie = "M14_Holo_Gh_DZ";
	};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M14_DZ'] call player_removeAttachment";
		};
	};
};

class M14_Holo_Gh_DZ : M14_Holo_DZ
{
	model = "z\addons\dayz_communityweapons\m14\m14_ghillie_holo.p3d";
	displayName = $STR_DZ_WPN_M14_HOLO_GH_NAME;
	
	class Attachments {};
	
	class ItemActions
	{
		class RemoveHolo
		{
			text = $STR_DZ_ATT_HOLO_RMVE;
			script = "; ['Attachment_Holo',_id,'M14_Gh_DZ'] call player_removeAttachment";
		};
		class RemoveGhillie
		{
			text = $STR_DZ_ATT_GHIL_RMVE;
			script = "; ['Attachment_Ghillie',_id,'M14_Holo_DZ'] call player_removeAttachment";
		};
	};
};
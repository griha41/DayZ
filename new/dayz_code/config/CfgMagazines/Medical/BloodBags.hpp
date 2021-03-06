class ItemBloodBagBase : ItemMedicalBase
{
	type = WeaponSlotItem;
	
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_full_ca.paa";
};

class ItemBloodBagANneg : ItemBloodBagBase
{
	scope = public;
	displayName = $STR_BLD_name_bloodBagANEG;
	model = "z\addons\dayz_communityassets\models\bbag_full_m_A.p3d";
	descriptionShort = $STR_BLD_desc_bloodBagANEG;
};

class ItemBloodBagAPos : ItemBloodBagBase
{
	scope = public;
	displayName = $STR_BLD_name_bloodBagAPOS;
	model = "z\addons\dayz_communityassets\models\bbag_full_p_A.p3d";
	descriptionShort = $STR_BLD_desc_bloodBagAPOS;
};

class ItemBloodBagBNeg : ItemBloodBagBase
{
	scope = public;
	displayName = $STR_BLD_name_bloodBagBNEG;
	model = "z\addons\dayz_communityassets\models\bbag_full_m_B.p3d";
	descriptionShort = $STR_BLD_desc_bloodBagBNEG;
};

class ItemBloodBagBPos : ItemBloodBagBase
{
	scope = public;
	displayName = $STR_BLD_name_bloodBagBPOS;
	model = "z\addons\dayz_communityassets\models\bbag_full_p_B.p3d";
	descriptionShort = $STR_BLD_desc_bloodBagBPOS;
};

class ItemBloodBagABNeg : ItemBloodBagBase
{
	scope = public;
	displayName = $STR_BLD_name_bloodBagABNEG;
	model = "z\addons\dayz_communityassets\models\bbag_full_m_AB.p3d";
	descriptionShort = $STR_BLD_desc_bloodBagABNEG;
};

class ItemBloodBagABPos : ItemBloodBagBase
{
	scope = public;
	displayName = $STR_BLD_name_bloodBagABPOS;
	model = "z\addons\dayz_communityassets\models\bbag_full_p_AB.p3d";
	descriptionShort = $STR_BLD_desc_bloodBagABPOS;
};

class ItemBloodBagONeg : ItemBloodBagBase
{
	scope = public;
	displayName = $STR_BLD_name_bloodBagONEG;
	model = "z\addons\dayz_communityassets\models\bbag_full_m_O.p3d";
	descriptionShort = $STR_BLD_desc_bloodBagONEG;
};

class ItemBloodBagOPos : ItemBloodBagBase
{
	scope = public;
	displayName = $STR_BLD_name_bloodBagOPOS;
	model = "z\addons\dayz_communityassets\models\bbag_full_p_O.p3d";
	descriptionShort = $STR_BLD_desc_bloodBagOPOS;
};



//Whole blood bags -- Can only be obtained by taking blood from another player.
class wholeBloodBagBase : ItemBloodBagBase
{
	class ItemActions
	{
		class Use
		{
			text = $STR_BLD_use;
			script = "spawn player_useMeds;";
		};
	};
};

class wholeBloodBagANEG : wholeBloodBagBase
{
	scope = public;
	displayName = $STR_BLD_name_wholeBloodBagANEG;
	model = "z\addons\dayz_communityassets\models\bbag_full_m_A.p3d";
	descriptionShort = $STR_BLD_desc_wholeBloodBagANEG;
};
class wholeBloodBagAPOS : wholeBloodBagBase
{
	scope = public;
	displayName = $STR_BLD_name_wholeBloodBagAPOS;
	model = "z\addons\dayz_communityassets\models\bbag_full_p_A.p3d";
	descriptionShort = $STR_BLD_desc_wholeBloodBagAPOS;
};
class wholeBloodBagBNEG : wholeBloodBagBase
{
	scope = public;
	displayName = $STR_BLD_name_wholeBloodBagBNEG;
	model = "z\addons\dayz_communityassets\models\bbag_full_m_B.p3d";
	descriptionShort = $STR_BLD_desc_wholeBloodBagBNEG;
};
class wholeBloodBagBPOS : wholeBloodBagBase
{
	scope = public;
	displayName = $STR_BLD_name_wholeBloodBagBPOS;
	model = "z\addons\dayz_communityassets\models\bbag_full_p_B.p3d";
	descriptionShort = $STR_BLD_desc_wholeBloodBagBPOS;
};
class wholeBloodBagABNEG : wholeBloodBagBase
{
	scope = public;
	displayName = $STR_BLD_name_wholeBloodBagABNEG;
	model = "z\addons\dayz_communityassets\models\bbag_full_m_AB.p3d";
	descriptionShort = $STR_BLD_desc_wholeBloodBagABNEG;
};
class wholeBloodBagABPOS : wholeBloodBagBase
{
	scope = public;
	displayName = $STR_BLD_name_wholeBloodBagABPOS;
	model = "z\addons\dayz_communityassets\models\bbag_full_p_AB.p3d";
	descriptionShort = $STR_BLD_desc_wholeBloodBagABPOS;
};
class wholeBloodBagONEG : wholeBloodBagBase
{
	scope = public;
	displayName = $STR_BLD_name_wholeBloodBagONEG;
	model = "z\addons\dayz_communityassets\models\bbag_full_m_O.p3d";
	descriptionShort = $STR_BLD_desc_wholeBloodBagONEG;
};
class wholeBloodBagOPOS : wholeBloodBagBase
{
	scope = public;
	displayName = $STR_BLD_name_wholeBloodBagOPOS;
	model = "z\addons\dayz_communityassets\models\bbag_full_p_O.p3d";
	descriptionShort = $STR_BLD_desc_wholeBloodBagOPOS;
};

//MISC tools needed
class ItemBloodTester : ItemMedicalBase
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\blood_test.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_blood_test_ca.paa";
	displayName = $STR_BLD_name_bloodTester;
	descriptionShort = $STR_BLD_desc_bloodTester;
	
	class ItemActions
	{
		class Use
		{
			text = $STR_BLD_use_bloodTester;
			action = "_this call dz_fn_testBlood";
		};
	};
};

class ItemTransfusionKit : ItemMedicalBase
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\blood_transfuse.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bloodbag_transfuse_CA.paa";
	displayName = $STR_BLD_name_transfusionKit;
	descriptionShort = $STR_BLD_desc_transfusionKit;
};

class ItemBloodBagEmpty : ItemMedicalBase
{
	scope = public;
	
	model = "z\addons\dayz_communityassets\models\bbag_empty.p3d";
	picture = "\z\addons\dayz_communityassets\pictures\equip_bbag_empty_ca.paa";
	displayName = $STR_BLD_name_emptyBloodBag;
	descriptionShort = $STR_BLD_desc_emptyBloodBag;
};

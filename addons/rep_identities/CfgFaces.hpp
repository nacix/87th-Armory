class CfgFaces
{
	class Default;
	class Man_A3: Default
	{
		class lsd_gar_cloneA_head;
		NEW_CLASS(face_clone): lsd_gar_cloneA_head
		{
			name = TAG_NAME(Clone Trooper);
			displayName = TAG_NAME(Clone Trooper);
			identityTypes[]=
			{
				CLASS(Clone)
			};
		};
    };
};
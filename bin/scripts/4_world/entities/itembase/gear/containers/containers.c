modded class FirstAidKit : Container_Base 
{
	override bool CanReceiveItemIntoCargo(EntityAI item)
	{
		return true;
	}
};
#ifndef _INCLUDE_CCYCLER_FIX_H_
#define _INCLUDE_CCYCLER_FIX_H_

#include "CEntityManager.h"
#include "CEntity.h"
#include "CAI_NPC.h"

class CTakeDamageInfo;

abstract_class CE_Cycler_Fix : public CAI_NPC
{
public:
	CE_DECLARE_CLASS(CE_Cycler_Fix, CAI_NPC);
	
public:
	virtual void Spawn(void);
	virtual void Precache(void);
	virtual int ObjectCaps(void) { return (BaseClass::ObjectCaps() | FCAP_NOTIFY_ON_TRANSITION); }
	virtual void Think(void);
	virtual int OnTakeDamage(CEntityTakeDamageInfo& info);
	virtual bool IsAlive(void);

	virtual Disposition_t IRelationType ( CBaseEntity *pTarget );
};

#endif

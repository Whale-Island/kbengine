// Copyright 2008-2018 Yolo Technogies, Inc. All Rights Reserved. https://www.comblockengine.com

#ifndef KBE_MOVETOENTITYHANDLER_H
#define KBE_MOVETOENTITYHANDLER_H

#include "moveto_point_handler.h"	


namespace KBEngine{

class MoveToEntityHandler : public MoveToPointHandler
{
public:
	MoveToEntityHandler(KBEShared_ptr<Controller>& pController, ENTITY_ID pTargetID, float velocity, float range, bool faceMovement, 
		bool moveVertically, PyObject* userarg);

	MoveToEntityHandler();
	virtual ~MoveToEntityHandler();
	
	void addToStream(KBEngine::MemoryStream& s);
	void createFromStream(KBEngine::MemoryStream& s);

	virtual bool update();

	virtual const Position3D& destPos();

	virtual MoveType type() const{ return MOVE_TYPE_ENTITY; }

protected:
	ENTITY_ID pTargetID_;
};
 
}
#endif // KBE_MOVETOENTITYHANDLER_H


// this file is generated via daScript automatic C++ binder
// all user modifications will be lost after this file is re-generated

b2Shape * _phys2d_virtual_0_Clone(const b2ChainShape & self,b2BlockAllocator * allocator) {
	return self.Clone(allocator);
}

int _phys2d_virtual_1_GetChildCount(const b2ChainShape & self) {
	return self.GetChildCount();
}

bool _phys2d_virtual_2_TestPoint(const b2ChainShape & self,const b2Transform & transform,const b2Vec2 & p) {
	return self.TestPoint(transform,p);
}

bool _phys2d_virtual_3_RayCast(const b2ChainShape & self,b2RayCastOutput * output,const b2RayCastInput & input,const b2Transform & transform,int childIndex) {
	return self.RayCast(output,input,transform,childIndex);
}

void _phys2d_virtual_4_ComputeAABB(const b2ChainShape & self,b2AABB * aabb,const b2Transform & transform,int childIndex) {
	self.ComputeAABB(aabb,transform,childIndex);
}

void _phys2d_virtual_5_ComputeMass(const b2ChainShape & self,b2MassData * massData,float density) {
	self.ComputeMass(massData,density);
}

b2Shape * _phys2d_virtual_6_Clone(const b2CircleShape & self,b2BlockAllocator * allocator) {
	return self.Clone(allocator);
}

int _phys2d_virtual_7_GetChildCount(const b2CircleShape & self) {
	return self.GetChildCount();
}

bool _phys2d_virtual_8_TestPoint(const b2CircleShape & self,const b2Transform & transform,const b2Vec2 & p) {
	return self.TestPoint(transform,p);
}

bool _phys2d_virtual_9_RayCast(const b2CircleShape & self,b2RayCastOutput * output,const b2RayCastInput & input,const b2Transform & transform,int childIndex) {
	return self.RayCast(output,input,transform,childIndex);
}

void _phys2d_virtual_10_ComputeAABB(const b2CircleShape & self,b2AABB * aabb,const b2Transform & transform,int childIndex) {
	self.ComputeAABB(aabb,transform,childIndex);
}

void _phys2d_virtual_11_ComputeMass(const b2CircleShape & self,b2MassData * massData,float density) {
	self.ComputeMass(massData,density);
}

b2Shape * _phys2d_virtual_12_Clone(const b2EdgeShape & self,b2BlockAllocator * allocator) {
	return self.Clone(allocator);
}

int _phys2d_virtual_13_GetChildCount(const b2EdgeShape & self) {
	return self.GetChildCount();
}

bool _phys2d_virtual_14_TestPoint(const b2EdgeShape & self,const b2Transform & transform,const b2Vec2 & p) {
	return self.TestPoint(transform,p);
}

bool _phys2d_virtual_15_RayCast(const b2EdgeShape & self,b2RayCastOutput * output,const b2RayCastInput & input,const b2Transform & transform,int childIndex) {
	return self.RayCast(output,input,transform,childIndex);
}

void _phys2d_virtual_16_ComputeAABB(const b2EdgeShape & self,b2AABB * aabb,const b2Transform & transform,int childIndex) {
	self.ComputeAABB(aabb,transform,childIndex);
}

void _phys2d_virtual_17_ComputeMass(const b2EdgeShape & self,b2MassData * massData,float density) {
	self.ComputeMass(massData,density);
}

b2Shape * _phys2d_virtual_18_Clone(const b2PolygonShape & self,b2BlockAllocator * allocator) {
	return self.Clone(allocator);
}

int _phys2d_virtual_19_GetChildCount(const b2PolygonShape & self) {
	return self.GetChildCount();
}

bool _phys2d_virtual_20_TestPoint(const b2PolygonShape & self,const b2Transform & transform,const b2Vec2 & p) {
	return self.TestPoint(transform,p);
}

bool _phys2d_virtual_21_RayCast(const b2PolygonShape & self,b2RayCastOutput * output,const b2RayCastInput & input,const b2Transform & transform,int childIndex) {
	return self.RayCast(output,input,transform,childIndex);
}

void _phys2d_virtual_22_ComputeAABB(const b2PolygonShape & self,b2AABB * aabb,const b2Transform & transform,int childIndex) {
	self.ComputeAABB(aabb,transform,childIndex);
}

void _phys2d_virtual_23_ComputeMass(const b2PolygonShape & self,b2MassData * massData,float density) {
	self.ComputeMass(massData,density);
}

bool _phys2d_virtual_24_ShouldCollide(b2ContactFilter & self,b2Fixture * fixtureA,b2Fixture * fixtureB) {
	return self.ShouldCollide(fixtureA,fixtureB);
}

void _phys2d_virtual_25_BeginContact(b2ContactListener & self,b2Contact * contact) {
	self.BeginContact(contact);
}

void _phys2d_virtual_26_EndContact(b2ContactListener & self,b2Contact * contact) {
	self.EndContact(contact);
}

void _phys2d_virtual_27_PreSolve(b2ContactListener & self,b2Contact * contact,const b2Manifold * oldManifold) {
	self.PreSolve(contact,oldManifold);
}

void _phys2d_virtual_28_PostSolve(b2ContactListener & self,b2Contact * contact,const b2ContactImpulse * impulse) {
	self.PostSolve(contact,impulse);
}

void _phys2d_virtual_29_Dump(b2Joint & self) {
	self.Dump();
}

void _phys2d_virtual_30_ShiftOrigin(b2Joint & self,const b2Vec2 & newOrigin) {
	self.ShiftOrigin(newOrigin);
}

void _phys2d_virtual_31_Draw(const b2Joint & self,b2Draw * draw) {
	self.Draw(draw);
}

b2Vec2 _phys2d_virtual_32_GetAnchorA(const b2DistanceJoint & self) {
	return self.GetAnchorA();
}

b2Vec2 _phys2d_virtual_33_GetAnchorB(const b2DistanceJoint & self) {
	return self.GetAnchorB();
}

b2Vec2 _phys2d_virtual_34_GetReactionForce(const b2DistanceJoint & self,float inv_dt) {
	return self.GetReactionForce(inv_dt);
}

float _phys2d_virtual_35_GetReactionTorque(const b2DistanceJoint & self,float inv_dt) {
	return self.GetReactionTorque(inv_dt);
}

void _phys2d_virtual_36_Dump(b2DistanceJoint & self) {
	self.Dump();
}

void _phys2d_virtual_37_Draw(const b2DistanceJoint & self,b2Draw * draw) {
	self.Draw(draw);
}

b2Vec2 _phys2d_virtual_38_GetAnchorA(const b2FrictionJoint & self) {
	return self.GetAnchorA();
}

b2Vec2 _phys2d_virtual_39_GetAnchorB(const b2FrictionJoint & self) {
	return self.GetAnchorB();
}

b2Vec2 _phys2d_virtual_40_GetReactionForce(const b2FrictionJoint & self,float inv_dt) {
	return self.GetReactionForce(inv_dt);
}

float _phys2d_virtual_41_GetReactionTorque(const b2FrictionJoint & self,float inv_dt) {
	return self.GetReactionTorque(inv_dt);
}

void _phys2d_virtual_42_Dump(b2FrictionJoint & self) {
	self.Dump();
}

b2Vec2 _phys2d_virtual_43_GetAnchorA(const b2GearJoint & self) {
	return self.GetAnchorA();
}

b2Vec2 _phys2d_virtual_44_GetAnchorB(const b2GearJoint & self) {
	return self.GetAnchorB();
}

b2Vec2 _phys2d_virtual_45_GetReactionForce(const b2GearJoint & self,float inv_dt) {
	return self.GetReactionForce(inv_dt);
}

float _phys2d_virtual_46_GetReactionTorque(const b2GearJoint & self,float inv_dt) {
	return self.GetReactionTorque(inv_dt);
}

void _phys2d_virtual_47_Dump(b2GearJoint & self) {
	self.Dump();
}

b2Vec2 _phys2d_virtual_48_GetAnchorA(const b2MotorJoint & self) {
	return self.GetAnchorA();
}

b2Vec2 _phys2d_virtual_49_GetAnchorB(const b2MotorJoint & self) {
	return self.GetAnchorB();
}

b2Vec2 _phys2d_virtual_50_GetReactionForce(const b2MotorJoint & self,float inv_dt) {
	return self.GetReactionForce(inv_dt);
}

float _phys2d_virtual_51_GetReactionTorque(const b2MotorJoint & self,float inv_dt) {
	return self.GetReactionTorque(inv_dt);
}

void _phys2d_virtual_52_Dump(b2MotorJoint & self) {
	self.Dump();
}

b2Vec2 _phys2d_virtual_53_GetAnchorA(const b2MouseJoint & self) {
	return self.GetAnchorA();
}

b2Vec2 _phys2d_virtual_54_GetAnchorB(const b2MouseJoint & self) {
	return self.GetAnchorB();
}

b2Vec2 _phys2d_virtual_55_GetReactionForce(const b2MouseJoint & self,float inv_dt) {
	return self.GetReactionForce(inv_dt);
}

float _phys2d_virtual_56_GetReactionTorque(const b2MouseJoint & self,float inv_dt) {
	return self.GetReactionTorque(inv_dt);
}

void _phys2d_virtual_57_Dump(b2MouseJoint & self) {
	self.Dump();
}

void _phys2d_virtual_58_ShiftOrigin(b2MouseJoint & self,const b2Vec2 & newOrigin) {
	self.ShiftOrigin(newOrigin);
}

b2Vec2 _phys2d_virtual_59_GetAnchorA(const b2PrismaticJoint & self) {
	return self.GetAnchorA();
}

b2Vec2 _phys2d_virtual_60_GetAnchorB(const b2PrismaticJoint & self) {
	return self.GetAnchorB();
}

b2Vec2 _phys2d_virtual_61_GetReactionForce(const b2PrismaticJoint & self,float inv_dt) {
	return self.GetReactionForce(inv_dt);
}

float _phys2d_virtual_62_GetReactionTorque(const b2PrismaticJoint & self,float inv_dt) {
	return self.GetReactionTorque(inv_dt);
}

void _phys2d_virtual_63_Dump(b2PrismaticJoint & self) {
	self.Dump();
}

void _phys2d_virtual_64_Draw(const b2PrismaticJoint & self,b2Draw * draw) {
	self.Draw(draw);
}

b2Vec2 _phys2d_virtual_65_GetAnchorA(const b2PulleyJoint & self) {
	return self.GetAnchorA();
}

b2Vec2 _phys2d_virtual_66_GetAnchorB(const b2PulleyJoint & self) {
	return self.GetAnchorB();
}

b2Vec2 _phys2d_virtual_67_GetReactionForce(const b2PulleyJoint & self,float inv_dt) {
	return self.GetReactionForce(inv_dt);
}

float _phys2d_virtual_68_GetReactionTorque(const b2PulleyJoint & self,float inv_dt) {
	return self.GetReactionTorque(inv_dt);
}

void _phys2d_virtual_69_Dump(b2PulleyJoint & self) {
	self.Dump();
}

void _phys2d_virtual_70_ShiftOrigin(b2PulleyJoint & self,const b2Vec2 & newOrigin) {
	self.ShiftOrigin(newOrigin);
}

b2Vec2 _phys2d_virtual_71_GetAnchorA(const b2RevoluteJoint & self) {
	return self.GetAnchorA();
}

b2Vec2 _phys2d_virtual_72_GetAnchorB(const b2RevoluteJoint & self) {
	return self.GetAnchorB();
}

b2Vec2 _phys2d_virtual_73_GetReactionForce(const b2RevoluteJoint & self,float inv_dt) {
	return self.GetReactionForce(inv_dt);
}

float _phys2d_virtual_74_GetReactionTorque(const b2RevoluteJoint & self,float inv_dt) {
	return self.GetReactionTorque(inv_dt);
}

void _phys2d_virtual_75_Dump(b2RevoluteJoint & self) {
	self.Dump();
}

void _phys2d_virtual_76_Draw(const b2RevoluteJoint & self,b2Draw * draw) {
	self.Draw(draw);
}

b2Vec2 _phys2d_virtual_77_GetAnchorA(const b2WeldJoint & self) {
	return self.GetAnchorA();
}

b2Vec2 _phys2d_virtual_78_GetAnchorB(const b2WeldJoint & self) {
	return self.GetAnchorB();
}

b2Vec2 _phys2d_virtual_79_GetReactionForce(const b2WeldJoint & self,float inv_dt) {
	return self.GetReactionForce(inv_dt);
}

float _phys2d_virtual_80_GetReactionTorque(const b2WeldJoint & self,float inv_dt) {
	return self.GetReactionTorque(inv_dt);
}

void _phys2d_virtual_81_Dump(b2WeldJoint & self) {
	self.Dump();
}

b2Vec2 _phys2d_virtual_82_GetAnchorA(const b2WheelJoint & self) {
	return self.GetAnchorA();
}

b2Vec2 _phys2d_virtual_83_GetAnchorB(const b2WheelJoint & self) {
	return self.GetAnchorB();
}

b2Vec2 _phys2d_virtual_84_GetReactionForce(const b2WheelJoint & self,float inv_dt) {
	return self.GetReactionForce(inv_dt);
}

float _phys2d_virtual_85_GetReactionTorque(const b2WheelJoint & self,float inv_dt) {
	return self.GetReactionTorque(inv_dt);
}

void _phys2d_virtual_86_Dump(b2WheelJoint & self) {
	self.Dump();
}

void _phys2d_virtual_87_Draw(const b2WheelJoint & self,b2Draw * draw) {
	self.Draw(draw);
}


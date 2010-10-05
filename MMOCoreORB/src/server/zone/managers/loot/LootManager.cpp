/*
 *	server/zone/managers/loot/LootManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "LootManager.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/Zone.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/managers/crafting/CraftingManager.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/managers/loot/lootgroup/LootGroupObject.h"

#include "server/zone/managers/loot/lootgroup/LootObject.h"

/*
 *	LootManagerStub
 */

LootManager::LootManager(ZoneServer* serv, ZoneProcessServerImplementation* proc, CraftingManager* craftman) : ManagedService(DummyConstructorParameter::instance()) {
	LootManagerImplementation* _implementation = new LootManagerImplementation(serv, proc, craftman);
	_impl = _implementation;
	_impl->_setStub(this);
}

LootManager::LootManager(DummyConstructorParameter* param) : ManagedService(param) {
}

LootManager::~LootManager() {
}


void LootManager::initialize() {
	LootManagerImplementation* _implementation = (LootManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initialize();
}

bool LootManager::contains(unsigned int lootGroup) {
	LootManagerImplementation* _implementation = (LootManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addUnsignedIntParameter(lootGroup);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->contains(lootGroup);
}

void LootManager::createLoot(PlayerCreature* receiver, SceneObject* container, int level, unsigned int lootGroup, int objectCount) {
	LootManagerImplementation* _implementation = (LootManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(receiver);
		method.addObjectParameter(container);
		method.addSignedIntParameter(level);
		method.addUnsignedIntParameter(lootGroup);
		method.addSignedIntParameter(objectCount);

		method.executeWithVoidReturn();
	} else
		_implementation->createLoot(receiver, container, level, lootGroup, objectCount);
}

void LootManager::createLoot(PlayerCreature* receiver, SceneObject* container, int level, Vector<unsigned int>* lootGroup) {
	LootManagerImplementation* _implementation = (LootManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->createLoot(receiver, container, level, lootGroup);
}

void LootManager::testLoot(PlayerCreature* receiver, SceneObject* container) {
	LootManagerImplementation* _implementation = (LootManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(receiver);
		method.addObjectParameter(container);

		method.executeWithVoidReturn();
	} else
		_implementation->testLoot(receiver, container);
}

DistributedObjectServant* LootManager::_getImplementation() {
	return _impl;}

void LootManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;}

/*
 *	LootManagerImplementation
 */

LootManagerImplementation::LootManagerImplementation(DummyConstructorParameter* param) : ManagedServiceImplementation(param) {
	_initializeImplementation();
}


LootManagerImplementation::~LootManagerImplementation() {
}


void LootManagerImplementation::finalize() {
}

void LootManagerImplementation::_initializeImplementation() {
	_setClassHelper(LootManagerHelper::instance());

	_serializationHelperMethod();
}

void LootManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (LootManager*) stub;
	ManagedServiceImplementation::_setStub(stub);
}

DistributedObjectStub* LootManagerImplementation::_getStub() {
	return _this;
}

LootManagerImplementation::operator const LootManager*() {
	return _this;
}

void LootManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void LootManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void LootManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void LootManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void LootManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void LootManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void LootManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void LootManagerImplementation::_serializationHelperMethod() {
	ManagedServiceImplementation::_serializationHelperMethod();

	_setClassName("LootManager");

	addSerializableVariable("lootGroups", &lootGroups);
}

LootManagerImplementation::LootManagerImplementation(ZoneServer* serv, ZoneProcessServerImplementation* proc, CraftingManager* craftman) {
	_initializeImplementation();
	// server/zone/managers/loot/LootManager.idl(82):  		Logger.setLoggingName("LootManager");
	Logger::setLoggingName("LootManager");
	// server/zone/managers/loot/LootManager.idl(84):  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/managers/loot/LootManager.idl(85):  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/managers/loot/LootManager.idl(87):  		lootGroups.setNullValue(null);
	(&lootGroups)->setNullValue(NULL);
	// server/zone/managers/loot/LootManager.idl(88):  		lootGroups.setNoDuplicateInsertPlan();
	(&lootGroups)->setNoDuplicateInsertPlan();
	// server/zone/managers/loot/LootManager.idl(90):  		zoneServer = serv;
	zoneServer = serv;
	// server/zone/managers/loot/LootManager.idl(91):  		zoneProcessor = proc;
	zoneProcessor = proc;
	// server/zone/managers/loot/LootManager.idl(92):  		craftingManager = craftman;
	craftingManager = craftman;
}

bool LootManagerImplementation::contains(unsigned int lootGroup) {
	// server/zone/managers/loot/LootManager.idl(101):  		return (lootGroups.contains(lootGroup));
	return ((&lootGroups)->contains(lootGroup));
}

/*
 *	LootManagerAdapter
 */

LootManagerAdapter::LootManagerAdapter(LootManagerImplementation* obj) : ManagedServiceAdapter(obj) {
}

Packet* LootManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initialize();
		break;
	case 7:
		resp->insertBoolean(contains(inv->getUnsignedIntParameter()));
		break;
	case 8:
		createLoot((PlayerCreature*) inv->getObjectParameter(), (SceneObject*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getUnsignedIntParameter(), inv->getSignedIntParameter());
		break;
	case 9:
		testLoot((PlayerCreature*) inv->getObjectParameter(), (SceneObject*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void LootManagerAdapter::initialize() {
	((LootManagerImplementation*) impl)->initialize();
}

bool LootManagerAdapter::contains(unsigned int lootGroup) {
	return ((LootManagerImplementation*) impl)->contains(lootGroup);
}

void LootManagerAdapter::createLoot(PlayerCreature* receiver, SceneObject* container, int level, unsigned int lootGroup, int objectCount) {
	((LootManagerImplementation*) impl)->createLoot(receiver, container, level, lootGroup, objectCount);
}

void LootManagerAdapter::testLoot(PlayerCreature* receiver, SceneObject* container) {
	((LootManagerImplementation*) impl)->testLoot(receiver, container);
}

/*
 *	LootManagerHelper
 */

LootManagerHelper* LootManagerHelper::staticInitializer = LootManagerHelper::instance();

LootManagerHelper::LootManagerHelper() {
	className = "LootManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void LootManagerHelper::finalizeHelper() {
	LootManagerHelper::finalize();
}

DistributedObject* LootManagerHelper::instantiateObject() {
	return new LootManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* LootManagerHelper::instantiateServant() {
	return new LootManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* LootManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new LootManagerAdapter((LootManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}


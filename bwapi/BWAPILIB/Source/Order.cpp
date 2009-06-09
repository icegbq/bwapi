#include <string>
#include <map>
#include <set>
#include <BWAPI/Order.h>

namespace BWAPI
{
  std::string orderName[191];
  std::map<std::string, Order> orderMap;
  std::set< Order > orderSet;
  namespace Orders
  {
    const Order Die(0);
    const Order Stop(1);
    const Order Guard(2);
    const Order PlayerGuard(3);
    const Order TurretGuard(4);
    const Order BunkerGuard(5);
    const Order Move(6);
    const Order ReaverStop(7);
    const Order Attack1(8);
    const Order Attack2(9);
    const Order AttackUnit(10);
    const Order AttackFixedRange(11);
    const Order AttackTile(12);
    const Order Hover(13);
    const Order AttackMove(14);
    const Order InfestMine1(15);
    const Order Nothing1(16);
    const Order Powerup1(17);
    const Order TowerGuard(18);
    const Order TowerAttack(19);
    const Order VultureMine(20);
    const Order StayinRange(21);
    const Order TurretAttack(22);
    const Order Nothing2(23);
    const Order Nothing3(24);
    const Order DroneStartBuild(25);
    const Order DroneBuild(26);
    const Order InfestMine2(27);
    const Order InfestMine3(28);
    const Order InfestMine4(29);
    const Order BuildTerran(30);
    const Order BuildProtoss1(31);
    const Order BuildProtoss2(32);
    const Order ConstructingBuilding(33);
    const Order Repair1(34);
    const Order Repair2(35);
    const Order PlaceAddon(36);
    const Order BuildAddon(37);
    const Order Train(38);
    const Order RallyPoint1(39);
    const Order RallyPoint2(40);
    const Order ZergBirth(41);
    const Order Morph1(42);
    const Order Morph2(43);
    const Order BuildSelf1(44);
    const Order ZergBuildSelf(45);
    const Order Build5(46);
    const Order Enternyduscanal(47);
    const Order BuildSelf2(48);
    const Order Follow(49);
    const Order Carrier(50);
    const Order CarrierIgnore1(51);
    const Order CarrierStop(52);
    const Order CarrierAttack1(53);
    const Order CarrierAttack2(54);
    const Order CarrierIgnore2(55);
    const Order CarrierFight(56);
    const Order HoldPosition1(57);
    const Order Reaver(58);
    const Order ReaverAttack1(59);
    const Order ReaverAttack2(60);
    const Order ReaverFight(61);
    const Order ReaverHold(62);
    const Order TrainFighter(63);
    const Order StrafeUnit1(64);
    const Order StrafeUnit2(65);
    const Order RechargeShields1(66);
    const Order Rechargeshields2(67);
    const Order ShieldBattery(68);
    const Order Return(69);
    const Order DroneLand(70);
    const Order BuildingLand(71);
    const Order BuildingLiftoff(72);
    const Order DroneLiftoff(73);
    const Order Liftoff(74);
    const Order ResearchTech(75);
    const Order Upgrade(76);
    const Order Larva(77);
    const Order SpawningLarva(78);
    const Order Harvest1(79);
    const Order Harvest2(80);
    const Order HarvestGas1(81);
    const Order HarvestGas2(82);
    const Order HarvestGas3(83);
    const Order ReturnGas(84);
    const Order MoveToMinerals(85);
    const Order HarvestMinerals2(86);
    const Order MiningMinerals(87);
    const Order Harvest3(88);
    const Order Harvest4(89);
    const Order ReturnMinerals(90);
    const Order Harvest5(91);
    const Order EnterTransport(92);
    const Order Pickup1(93);
    const Order Pickup2(94);
    const Order Pickup3(95);
    const Order Pickup4(96);
    const Order Powerup2(97);
    const Order SiegeMode(98);
    const Order TankMode(99);
    const Order WatchTarget(100);
    const Order InitCreepGrowth(101);
    const Order SpreadCreep(102);
    const Order StoppingCreepGrowth(103);
    const Order GuardianAspect(104);
    const Order WarpingArchon(105);
    const Order CompletingArchonsummon(106);
    const Order HoldPosition2(107);
    const Order HoldPosition3(108);
    const Order Cloak(109);
    const Order Decloak(110);
    const Order Unload(111);
    const Order MoveUnload(112);
    const Order FireYamatoGun1(113);
    const Order FireYamatoGun2(114);
    const Order MagnaPulse(115);
    const Order Burrow(116);
    const Order Burrowed(117);
    const Order Unburrow(118);
    const Order DarkSwarm(119);
    const Order CastParasite(120);
    const Order SummonBroodlings(121);
    const Order EmpShockwave(122);
    const Order NukeWait(123);
    const Order NukeTrain(124);
    const Order NukeLaunch(125);
    const Order NukePaint(126);
    const Order NukeUnit(127);
    const Order NukeGround(128);
    const Order NukeTrack(129);
    const Order InitArbiter(130);
    const Order CloakNearbyUnits(131);
    const Order PlaceMine(132);
    const Order Rightclickaction(133);
    const Order SapUnit(134);
    const Order SapLocation(135);
    const Order HoldPosition4(136);
    const Order Teleport(137);
    const Order TeleporttoLocation(138);
    const Order PlaceScanner(139);
    const Order Scanner(140);
    const Order DefensiveMatrix(141);
    const Order PsiStorm(142);
    const Order Irradiate(143);
    const Order Plague(144);
    const Order Consume(145);
    const Order Ensnare(146);
    const Order StasisField(147);
    const Order Hallucianation1(148);
    const Order Hallucination2(149);
    const Order ResetCollision1(150);
    const Order ResetCollision2(151);
    const Order Patrol(152);
    const Order CTFCOPInit(153);
    const Order CTFCOP1(154);
    const Order CTFCOP2(155);
    const Order ComputerAI(156);
    const Order AtkMoveEP(157);
    const Order HarassMove(158);
    const Order AIPatrol(159);
    const Order GuardPost(160);
    const Order RescuePassive(161);
    const Order Neutral(162);
    const Order ComputerReturn(163);
    const Order InitPsiProvider(164);
    const Order SelfDestrucing(165);
    const Order Critter(166);
    const Order HiddenGun(167);
    const Order OpenDoor(168);
    const Order CloseDoor(169);
    const Order HideTrap(170);
    const Order RevealTrap(171);
    const Order Enabledoodad(172);
    const Order Disabledoodad(173);
    const Order Warpin(174);
    const Order Medic(175);
    const Order MedicHeal1(176);
    const Order HealMove(177);
    const Order MedicHoldPosition(178);
    const Order MedicHeal2(179);
    const Order Restoration(180);
    const Order CastDisruptionWeb(181);
    const Order CastMindControl(182);
    const Order WarpingDarkArchon(183);
    const Order CastFeedback(184);
    const Order CastOpticalFlare(185);
    const Order CastMaelstrom(186);
    const Order JunkYardDog(187);
    const Order Fatal(188);
    const Order None(189);
    const Order Unknown(190);
    void init()
    {
      orderName[Orders::Die.getID()]="Die";
      orderName[Orders::Stop.getID()]="Stop";
      orderName[Orders::Guard.getID()]="Guard";
      orderName[Orders::PlayerGuard.getID()]="PlayerGuard";
      orderName[Orders::TurretGuard.getID()]="TurretGuard";
      orderName[Orders::BunkerGuard.getID()]="BunkerGuard";
      orderName[Orders::Move.getID()]="Move";
      orderName[Orders::ReaverStop.getID()]="ReaverStop";
      orderName[Orders::Attack1.getID()]="Attack1";
      orderName[Orders::Attack2.getID()]="Attack2";
      orderName[Orders::AttackUnit.getID()]="AttackUnit";
      orderName[Orders::AttackFixedRange.getID()]="AttackFixedRange";
      orderName[Orders::AttackTile.getID()]="AttackTile";
      orderName[Orders::Hover.getID()]="Hover";
      orderName[Orders::AttackMove.getID()]="AttackMove";
      orderName[Orders::InfestMine1.getID()]="InfestMine1";
      orderName[Orders::Nothing1.getID()]="Nothing1";
      orderName[Orders::Powerup1.getID()]="Powerup1";
      orderName[Orders::TowerGuard.getID()]="TowerGuard";
      orderName[Orders::TowerAttack.getID()]="TowerAttack";
      orderName[Orders::VultureMine.getID()]="VultureMine";
      orderName[Orders::StayinRange.getID()]="StayinRange";
      orderName[Orders::TurretAttack.getID()]="TurretAttack";
      orderName[Orders::Nothing2.getID()]="Nothing2";
      orderName[Orders::Nothing3.getID()]="Nothing3";
      orderName[Orders::DroneStartBuild.getID()]="DroneStartBuild";
      orderName[Orders::DroneBuild.getID()]="DroneBuild";
      orderName[Orders::InfestMine2.getID()]="InfestMine2";
      orderName[Orders::InfestMine3.getID()]="InfestMine3";
      orderName[Orders::InfestMine4.getID()]="InfestMine4";
      orderName[Orders::BuildTerran.getID()]="BuildTerran";
      orderName[Orders::BuildProtoss1.getID()]="BuildProtoss1";
      orderName[Orders::BuildProtoss2.getID()]="BuildProtoss2";
      orderName[Orders::ConstructingBuilding.getID()]="ConstructingBuilding";
      orderName[Orders::Repair1.getID()]="Repair1";
      orderName[Orders::Repair2.getID()]="Repair2";
      orderName[Orders::PlaceAddon.getID()]="PlaceAddon";
      orderName[Orders::BuildAddon.getID()]="BuildAddon";
      orderName[Orders::Train.getID()]="Train";
      orderName[Orders::RallyPoint1.getID()]="RallyPoint1";
      orderName[Orders::RallyPoint2.getID()]="RallyPoint2";
      orderName[Orders::ZergBirth.getID()]="ZergBirth";
      orderName[Orders::Morph1.getID()]="Morph1";
      orderName[Orders::Morph2.getID()]="Morph2";
      orderName[Orders::BuildSelf1.getID()]="BuildSelf1";
      orderName[Orders::ZergBuildSelf.getID()]="ZergBuildSelf";
      orderName[Orders::Build5.getID()]="Build5";
      orderName[Orders::Enternyduscanal.getID()]="Enternyduscanal";
      orderName[Orders::BuildSelf2.getID()]="BuildSelf2";
      orderName[Orders::Follow.getID()]="Follow";
      orderName[Orders::Carrier.getID()]="Carrier";
      orderName[Orders::CarrierIgnore1.getID()]="CarrierIgnore1";
      orderName[Orders::CarrierStop.getID()]="CarrierStop";
      orderName[Orders::CarrierAttack1.getID()]="CarrierAttack1";
      orderName[Orders::CarrierAttack2.getID()]="CarrierAttack2";
      orderName[Orders::CarrierIgnore2.getID()]="CarrierIgnore2";
      orderName[Orders::CarrierFight.getID()]="CarrierFight";
      orderName[Orders::HoldPosition1.getID()]="HoldPosition1";
      orderName[Orders::Reaver.getID()]="Reaver";
      orderName[Orders::ReaverAttack1.getID()]="ReaverAttack1";
      orderName[Orders::ReaverAttack2.getID()]="ReaverAttack2";
      orderName[Orders::ReaverFight.getID()]="ReaverFight";
      orderName[Orders::ReaverHold.getID()]="ReaverHold";
      orderName[Orders::TrainFighter.getID()]="TrainFighter";
      orderName[Orders::StrafeUnit1.getID()]="StrafeUnit1";
      orderName[Orders::StrafeUnit2.getID()]="StrafeUnit2";
      orderName[Orders::RechargeShields1.getID()]="RechargeShields1";
      orderName[Orders::Rechargeshields2.getID()]="Rechargeshields2";
      orderName[Orders::ShieldBattery.getID()]="ShieldBattery";
      orderName[Orders::Return.getID()]="Return";
      orderName[Orders::DroneLand.getID()]="DroneLand";
      orderName[Orders::BuildingLand.getID()]="BuildingLand";
      orderName[Orders::BuildingLiftoff.getID()]="BuildingLiftoff";
      orderName[Orders::DroneLiftoff.getID()]="DroneLiftoff";
      orderName[Orders::Liftoff.getID()]="Liftoff";
      orderName[Orders::ResearchTech.getID()]="ResearchTech";
      orderName[Orders::Upgrade.getID()]="Upgrade";
      orderName[Orders::Larva.getID()]="Larva";
      orderName[Orders::SpawningLarva.getID()]="SpawningLarva";
      orderName[Orders::Harvest1.getID()]="Harvest1";
      orderName[Orders::Harvest2.getID()]="Harvest2";
      orderName[Orders::HarvestGas1.getID()]="HarvestGas1";
      orderName[Orders::HarvestGas2.getID()]="HarvestGas2";
      orderName[Orders::HarvestGas3.getID()]="HarvestGas3";
      orderName[Orders::ReturnGas.getID()]="ReturnGas";
      orderName[Orders::MoveToMinerals.getID()]="MoveToMinerals";
      orderName[Orders::HarvestMinerals2.getID()]="HarvestMinerals2";
      orderName[Orders::MiningMinerals.getID()]="MiningMinerals";
      orderName[Orders::Harvest3.getID()]="Harvest3";
      orderName[Orders::Harvest4.getID()]="Harvest4";
      orderName[Orders::ReturnMinerals.getID()]="ReturnMinerals";
      orderName[Orders::Harvest5.getID()]="Harvest5";
      orderName[Orders::EnterTransport.getID()]="EnterTransport";
      orderName[Orders::Pickup1.getID()]="Pickup1";
      orderName[Orders::Pickup2.getID()]="Pickup2";
      orderName[Orders::Pickup3.getID()]="Pickup3";
      orderName[Orders::Pickup4.getID()]="Pickup4";
      orderName[Orders::Powerup2.getID()]="Powerup2";
      orderName[Orders::SiegeMode.getID()]="SiegeMode";
      orderName[Orders::TankMode.getID()]="TankMode";
      orderName[Orders::WatchTarget.getID()]="WatchTarget";
      orderName[Orders::InitCreepGrowth.getID()]="InitCreepGrowth";
      orderName[Orders::SpreadCreep.getID()]="SpreadCreep";
      orderName[Orders::StoppingCreepGrowth.getID()]="StoppingCreepGrowth";
      orderName[Orders::GuardianAspect.getID()]="GuardianAspect";
      orderName[Orders::WarpingArchon.getID()]="WarpingArchon";
      orderName[Orders::CompletingArchonsummon.getID()]="CompletingArchonsummon";
      orderName[Orders::HoldPosition2.getID()]="HoldPosition2";
      orderName[Orders::HoldPosition3.getID()]="HoldPosition3";
      orderName[Orders::Cloak.getID()]="Cloak";
      orderName[Orders::Decloak.getID()]="Decloak";
      orderName[Orders::Unload.getID()]="Unload";
      orderName[Orders::MoveUnload.getID()]="MoveUnload";
      orderName[Orders::FireYamatoGun1.getID()]="FireYamatoGun1";
      orderName[Orders::FireYamatoGun2.getID()]="FireYamatoGun2";
      orderName[Orders::MagnaPulse.getID()]="MagnaPulse";
      orderName[Orders::Burrow.getID()]="Burrow";
      orderName[Orders::Burrowed.getID()]="Burrowed";
      orderName[Orders::Unburrow.getID()]="Unburrow";
      orderName[Orders::DarkSwarm.getID()]="DarkSwarm";
      orderName[Orders::CastParasite.getID()]="CastParasite";
      orderName[Orders::SummonBroodlings.getID()]="SummonBroodlings";
      orderName[Orders::EmpShockwave.getID()]="EmpShockwave";
      orderName[Orders::NukeWait.getID()]="NukeWait";
      orderName[Orders::NukeTrain.getID()]="NukeTrain";
      orderName[Orders::NukeLaunch.getID()]="NukeLaunch";
      orderName[Orders::NukePaint.getID()]="NukePaint";
      orderName[Orders::NukeUnit.getID()]="NukeUnit";
      orderName[Orders::NukeGround.getID()]="NukeGround";
      orderName[Orders::NukeTrack.getID()]="NukeTrack";
      orderName[Orders::InitArbiter.getID()]="InitArbiter";
      orderName[Orders::CloakNearbyUnits.getID()]="CloakNearbyUnits";
      orderName[Orders::PlaceMine.getID()]="PlaceMine";
      orderName[Orders::Rightclickaction.getID()]="Rightclickaction";
      orderName[Orders::SapUnit.getID()]="SapUnit";
      orderName[Orders::SapLocation.getID()]="SapLocation";
      orderName[Orders::HoldPosition4.getID()]="HoldPosition4";
      orderName[Orders::Teleport.getID()]="Teleport";
      orderName[Orders::TeleporttoLocation.getID()]="TeleporttoLocation";
      orderName[Orders::PlaceScanner.getID()]="PlaceScanner";
      orderName[Orders::Scanner.getID()]="Scanner";
      orderName[Orders::DefensiveMatrix.getID()]="DefensiveMatrix";
      orderName[Orders::PsiStorm.getID()]="PsiStorm";
      orderName[Orders::Irradiate.getID()]="Irradiate";
      orderName[Orders::Plague.getID()]="Plague";
      orderName[Orders::Consume.getID()]="Consume";
      orderName[Orders::Ensnare.getID()]="Ensnare";
      orderName[Orders::StasisField.getID()]="StasisField";
      orderName[Orders::Hallucianation1.getID()]="Hallucianation1";
      orderName[Orders::Hallucination2.getID()]="Hallucination2";
      orderName[Orders::ResetCollision1.getID()]="ResetCollision1";
      orderName[Orders::ResetCollision2.getID()]="ResetCollision2";
      orderName[Orders::Patrol.getID()]="Patrol";
      orderName[Orders::CTFCOPInit.getID()]="CTFCOPInit";
      orderName[Orders::CTFCOP1.getID()]="CTFCOP1";
      orderName[Orders::CTFCOP2.getID()]="CTFCOP2";
      orderName[Orders::ComputerAI.getID()]="ComputerAI";
      orderName[Orders::AtkMoveEP.getID()]="AtkMoveEP";
      orderName[Orders::HarassMove.getID()]="HarassMove";
      orderName[Orders::AIPatrol.getID()]="AIPatrol";
      orderName[Orders::GuardPost.getID()]="GuardPost";
      orderName[Orders::RescuePassive.getID()]="RescuePassive";
      orderName[Orders::Neutral.getID()]="Neutral";
      orderName[Orders::ComputerReturn.getID()]="ComputerReturn";
      orderName[Orders::InitPsiProvider.getID()]="InitPsiProvider";
      orderName[Orders::SelfDestrucing.getID()]="SelfDestrucing";
      orderName[Orders::Critter.getID()]="Critter";
      orderName[Orders::HiddenGun.getID()]="HiddenGun";
      orderName[Orders::OpenDoor.getID()]="OpenDoor";
      orderName[Orders::CloseDoor.getID()]="CloseDoor";
      orderName[Orders::HideTrap.getID()]="HideTrap";
      orderName[Orders::RevealTrap.getID()]="RevealTrap";
      orderName[Orders::Enabledoodad.getID()]="Enabledoodad";
      orderName[Orders::Disabledoodad.getID()]="Disabledoodad";
      orderName[Orders::Warpin.getID()]="Warpin";
      orderName[Orders::Medic.getID()]="Medic";
      orderName[Orders::MedicHeal1.getID()]="MedicHeal1";
      orderName[Orders::HealMove.getID()]="HealMove";
      orderName[Orders::MedicHoldPosition.getID()]="MedicHoldPosition";
      orderName[Orders::MedicHeal2.getID()]="MedicHeal2";
      orderName[Orders::Restoration.getID()]="Restoration";
      orderName[Orders::CastDisruptionWeb.getID()]="CastDisruptionWeb";
      orderName[Orders::CastMindControl.getID()]="CastMindControl";
      orderName[Orders::WarpingDarkArchon.getID()]="WarpingDarkArchon";
      orderName[Orders::CastFeedback.getID()]="CastFeedback";
      orderName[Orders::CastOpticalFlare.getID()]="CastOpticalFlare";
      orderName[Orders::CastMaelstrom.getID()]="CastMaelstrom";
      orderName[Orders::JunkYardDog.getID()]="JunkYardDog";
      orderName[Orders::Fatal.getID()]="Fatal";
      orderName[Orders::None.getID()]="None";
      orderName[Orders::Unknown.getID()]="Unknown";

      orderSet.insert(Orders::Die);
      orderSet.insert(Orders::Stop);
      orderSet.insert(Orders::Guard);
      orderSet.insert(Orders::PlayerGuard);
      orderSet.insert(Orders::TurretGuard);
      orderSet.insert(Orders::BunkerGuard);
      orderSet.insert(Orders::Move);
      orderSet.insert(Orders::ReaverStop);
      orderSet.insert(Orders::Attack1);
      orderSet.insert(Orders::Attack2);
      orderSet.insert(Orders::AttackUnit);
      orderSet.insert(Orders::AttackFixedRange);
      orderSet.insert(Orders::AttackTile);
      orderSet.insert(Orders::Hover);
      orderSet.insert(Orders::AttackMove);
      orderSet.insert(Orders::InfestMine1);
      orderSet.insert(Orders::Nothing1);
      orderSet.insert(Orders::Powerup1);
      orderSet.insert(Orders::TowerGuard);
      orderSet.insert(Orders::TowerAttack);
      orderSet.insert(Orders::VultureMine);
      orderSet.insert(Orders::StayinRange);
      orderSet.insert(Orders::TurretAttack);
      orderSet.insert(Orders::Nothing2);
      orderSet.insert(Orders::Nothing3);
      orderSet.insert(Orders::DroneStartBuild);
      orderSet.insert(Orders::DroneBuild);
      orderSet.insert(Orders::InfestMine2);
      orderSet.insert(Orders::InfestMine3);
      orderSet.insert(Orders::InfestMine4);
      orderSet.insert(Orders::BuildTerran);
      orderSet.insert(Orders::BuildProtoss1);
      orderSet.insert(Orders::BuildProtoss2);
      orderSet.insert(Orders::ConstructingBuilding);
      orderSet.insert(Orders::Repair1);
      orderSet.insert(Orders::Repair2);
      orderSet.insert(Orders::PlaceAddon);
      orderSet.insert(Orders::BuildAddon);
      orderSet.insert(Orders::Train);
      orderSet.insert(Orders::RallyPoint1);
      orderSet.insert(Orders::RallyPoint2);
      orderSet.insert(Orders::ZergBirth);
      orderSet.insert(Orders::Morph1);
      orderSet.insert(Orders::Morph2);
      orderSet.insert(Orders::BuildSelf1);
      orderSet.insert(Orders::ZergBuildSelf);
      orderSet.insert(Orders::Build5);
      orderSet.insert(Orders::Enternyduscanal);
      orderSet.insert(Orders::BuildSelf2);
      orderSet.insert(Orders::Follow);
      orderSet.insert(Orders::Carrier);
      orderSet.insert(Orders::CarrierIgnore1);
      orderSet.insert(Orders::CarrierStop);
      orderSet.insert(Orders::CarrierAttack1);
      orderSet.insert(Orders::CarrierAttack2);
      orderSet.insert(Orders::CarrierIgnore2);
      orderSet.insert(Orders::CarrierFight);
      orderSet.insert(Orders::HoldPosition1);
      orderSet.insert(Orders::Reaver);
      orderSet.insert(Orders::ReaverAttack1);
      orderSet.insert(Orders::ReaverAttack2);
      orderSet.insert(Orders::ReaverFight);
      orderSet.insert(Orders::ReaverHold);
      orderSet.insert(Orders::TrainFighter);
      orderSet.insert(Orders::StrafeUnit1);
      orderSet.insert(Orders::StrafeUnit2);
      orderSet.insert(Orders::RechargeShields1);
      orderSet.insert(Orders::Rechargeshields2);
      orderSet.insert(Orders::ShieldBattery);
      orderSet.insert(Orders::Return);
      orderSet.insert(Orders::DroneLand);
      orderSet.insert(Orders::BuildingLand);
      orderSet.insert(Orders::BuildingLiftoff);
      orderSet.insert(Orders::DroneLiftoff);
      orderSet.insert(Orders::Liftoff);
      orderSet.insert(Orders::ResearchTech);
      orderSet.insert(Orders::Upgrade);
      orderSet.insert(Orders::Larva);
      orderSet.insert(Orders::SpawningLarva);
      orderSet.insert(Orders::Harvest1);
      orderSet.insert(Orders::Harvest2);
      orderSet.insert(Orders::HarvestGas1);
      orderSet.insert(Orders::HarvestGas2);
      orderSet.insert(Orders::HarvestGas3);
      orderSet.insert(Orders::ReturnGas);
      orderSet.insert(Orders::MoveToMinerals);
      orderSet.insert(Orders::HarvestMinerals2);
      orderSet.insert(Orders::MiningMinerals);
      orderSet.insert(Orders::Harvest3);
      orderSet.insert(Orders::Harvest4);
      orderSet.insert(Orders::ReturnMinerals);
      orderSet.insert(Orders::Harvest5);
      orderSet.insert(Orders::EnterTransport);
      orderSet.insert(Orders::Pickup1);
      orderSet.insert(Orders::Pickup2);
      orderSet.insert(Orders::Pickup3);
      orderSet.insert(Orders::Pickup4);
      orderSet.insert(Orders::Powerup2);
      orderSet.insert(Orders::SiegeMode);
      orderSet.insert(Orders::TankMode);
      orderSet.insert(Orders::WatchTarget);
      orderSet.insert(Orders::InitCreepGrowth);
      orderSet.insert(Orders::SpreadCreep);
      orderSet.insert(Orders::StoppingCreepGrowth);
      orderSet.insert(Orders::GuardianAspect);
      orderSet.insert(Orders::WarpingArchon);
      orderSet.insert(Orders::CompletingArchonsummon);
      orderSet.insert(Orders::HoldPosition2);
      orderSet.insert(Orders::HoldPosition3);
      orderSet.insert(Orders::Cloak);
      orderSet.insert(Orders::Decloak);
      orderSet.insert(Orders::Unload);
      orderSet.insert(Orders::MoveUnload);
      orderSet.insert(Orders::FireYamatoGun1);
      orderSet.insert(Orders::FireYamatoGun2);
      orderSet.insert(Orders::MagnaPulse);
      orderSet.insert(Orders::Burrow);
      orderSet.insert(Orders::Burrowed);
      orderSet.insert(Orders::Unburrow);
      orderSet.insert(Orders::DarkSwarm);
      orderSet.insert(Orders::CastParasite);
      orderSet.insert(Orders::SummonBroodlings);
      orderSet.insert(Orders::EmpShockwave);
      orderSet.insert(Orders::NukeWait);
      orderSet.insert(Orders::NukeTrain);
      orderSet.insert(Orders::NukeLaunch);
      orderSet.insert(Orders::NukePaint);
      orderSet.insert(Orders::NukeUnit);
      orderSet.insert(Orders::NukeGround);
      orderSet.insert(Orders::NukeTrack);
      orderSet.insert(Orders::InitArbiter);
      orderSet.insert(Orders::CloakNearbyUnits);
      orderSet.insert(Orders::PlaceMine);
      orderSet.insert(Orders::Rightclickaction);
      orderSet.insert(Orders::SapUnit);
      orderSet.insert(Orders::SapLocation);
      orderSet.insert(Orders::HoldPosition4);
      orderSet.insert(Orders::Teleport);
      orderSet.insert(Orders::TeleporttoLocation);
      orderSet.insert(Orders::PlaceScanner);
      orderSet.insert(Orders::Scanner);
      orderSet.insert(Orders::DefensiveMatrix);
      orderSet.insert(Orders::PsiStorm);
      orderSet.insert(Orders::Irradiate);
      orderSet.insert(Orders::Plague);
      orderSet.insert(Orders::Consume);
      orderSet.insert(Orders::Ensnare);
      orderSet.insert(Orders::StasisField);
      orderSet.insert(Orders::Hallucianation1);
      orderSet.insert(Orders::Hallucination2);
      orderSet.insert(Orders::ResetCollision1);
      orderSet.insert(Orders::ResetCollision2);
      orderSet.insert(Orders::Patrol);
      orderSet.insert(Orders::CTFCOPInit);
      orderSet.insert(Orders::CTFCOP1);
      orderSet.insert(Orders::CTFCOP2);
      orderSet.insert(Orders::ComputerAI);
      orderSet.insert(Orders::AtkMoveEP);
      orderSet.insert(Orders::HarassMove);
      orderSet.insert(Orders::AIPatrol);
      orderSet.insert(Orders::GuardPost);
      orderSet.insert(Orders::RescuePassive);
      orderSet.insert(Orders::Neutral);
      orderSet.insert(Orders::ComputerReturn);
      orderSet.insert(Orders::InitPsiProvider);
      orderSet.insert(Orders::SelfDestrucing);
      orderSet.insert(Orders::Critter);
      orderSet.insert(Orders::HiddenGun);
      orderSet.insert(Orders::OpenDoor);
      orderSet.insert(Orders::CloseDoor);
      orderSet.insert(Orders::HideTrap);
      orderSet.insert(Orders::RevealTrap);
      orderSet.insert(Orders::Enabledoodad);
      orderSet.insert(Orders::Disabledoodad);
      orderSet.insert(Orders::Warpin);
      orderSet.insert(Orders::Medic);
      orderSet.insert(Orders::MedicHeal1);
      orderSet.insert(Orders::HealMove);
      orderSet.insert(Orders::MedicHoldPosition);
      orderSet.insert(Orders::MedicHeal2);
      orderSet.insert(Orders::Restoration);
      orderSet.insert(Orders::CastDisruptionWeb);
      orderSet.insert(Orders::CastMindControl);
      orderSet.insert(Orders::WarpingDarkArchon);
      orderSet.insert(Orders::CastFeedback);
      orderSet.insert(Orders::CastOpticalFlare);
      orderSet.insert(Orders::CastMaelstrom);
      orderSet.insert(Orders::JunkYardDog);
      orderSet.insert(Orders::Fatal);
      orderSet.insert(Orders::None);
      orderSet.insert(Orders::Unknown);

      for(std::set<Order>::iterator i=orderSet.begin();i!=orderSet.end();i++)
      {
        orderMap.insert(std::make_pair((*i).getName(),*i));
      }
    }
  }

  Order::Order()
  {
    this->id=Orders::None.id;
  }
  Order::Order(int id)
  {
    this->id=id;
  }
  Order::Order(const Order &other)
  {
    this->id=other.id;
  }
  Order& Order::operator=(const Order &other)
  {
    this->id=other.id;
    return *this;
  }
  bool Order::operator==(const Order &other) const
  {
    return this->id==other.id;
  }
  bool Order::operator!=(const Order &other) const
  {
    return this->id!=other.id;
  }
  bool Order::operator<(const Order &other) const
  {
    return this->id<other.id;
  }
  int Order::getID() const
  {
    return this->id;
  }
  std::string Order::getName() const
  {
    return orderName[this->id];
  }
  Order Orders::getOrder(std::string &name)
  {
    std::map<std::string, Order>::iterator i=orderMap.find(name);
    if (i==orderMap.end()) return Orders::Unknown;
    return (*i).second;
  }
  std::set<Order>& Orders::allOrders()
  {
    return orderSet;
  }
}
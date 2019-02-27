/*
 * This file is part of the CMaNGOS Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "PlayerbotWarriorAI.h"
#include "../Base/PlayerbotMgr.h"

class PlayerbotAI;
PlayerbotWarriorAI::PlayerbotWarriorAI(Player* const master, Player* const bot, PlayerbotAI* const ai) : PlayerbotClassAI(master, bot, ai)
{
    AUTO_SHOT               = m_ai->initSpell(AUTO_SHOT_2); // GENERAL

    BATTLE_STANCE           = m_ai->initSpell(BATTLE_STANCE_1); //ARMS
    CHARGE                  = m_ai->initSpell(CHARGE_1); //ARMS
    OVERPOWER               = m_ai->initSpell(OVERPOWER_1); // ARMS
    HEROIC_STRIKE           = m_ai->initSpell(HEROIC_STRIKE_1); //ARMS
    REND                    = m_ai->initSpell(REND_1); //ARMS
    THUNDER_CLAP            = m_ai->initSpell(THUNDER_CLAP_1);  //ARMS
    HAMSTRING               = m_ai->initSpell(HAMSTRING_1);  //ARMS
    MOCKING_BLOW            = m_ai->initSpell(MOCKING_BLOW_1);  //ARMS
    RETALIATION             = m_ai->initSpell(RETALIATION_1);  //ARMS
    SWEEPING_STRIKES        = m_ai->initSpell(SWEEPING_STRIKES_1); //ARMS
    MORTAL_STRIKE           = m_ai->initSpell(MORTAL_STRIKE_1);  //ARMS
    BLADESTORM              = m_ai->initSpell(BLADESTORM_1);  //ARMS
    HEROIC_THROW            = m_ai->initSpell(HEROIC_THROW_1);  //ARMS
    SHATTERING_THROW        = m_ai->initSpell(SHATTERING_THROW_1);  //ARMS
    BLOODRAGE               = m_ai->initSpell(BLOODRAGE_1); //PROTECTION
    DEFENSIVE_STANCE        = m_ai->initSpell(DEFENSIVE_STANCE_1); //PROTECTION
    DEVASTATE               = m_ai->initSpell(DEVASTATE_1); //PROTECTION
    SUNDER_ARMOR            = m_ai->initSpell(SUNDER_ARMOR_1); //PROTECTION
    TAUNT                   = m_ai->initSpell(TAUNT_1); //PROTECTION
    SHIELD_BASH             = m_ai->initSpell(SHIELD_BASH_1); //PROTECTION
    REVENGE                 = m_ai->initSpell(REVENGE_1); //PROTECTION
    SHIELD_BLOCK            = m_ai->initSpell(SHIELD_BLOCK_1); //PROTECTION
    DISARM                  = m_ai->initSpell(DISARM_1); //PROTECTION
    SHIELD_WALL             = m_ai->initSpell(SHIELD_WALL_1); //PROTECTION
    SHIELD_SLAM             = m_ai->initSpell(SHIELD_SLAM_1); //PROTECTION
    VIGILANCE               = m_ai->initSpell(VIGILANCE_1); //PROTECTION
    DEVASTATE               = m_ai->initSpell(DEVASTATE_1); //PROTECTION
    SHOCKWAVE               = m_ai->initSpell(SHOCKWAVE_1); //PROTECTION
    CONCUSSION_BLOW         = m_ai->initSpell(CONCUSSION_BLOW_1); //PROTECTION
    SPELL_REFLECTION        = m_ai->initSpell(SPELL_REFLECTION_1); //PROTECTION
    LAST_STAND              = m_ai->initSpell(LAST_STAND_1); //PROTECTION
    BATTLE_SHOUT            = m_ai->initSpell(BATTLE_SHOUT_1); //FURY
    DEMORALIZING_SHOUT      = m_ai->initSpell(DEMORALIZING_SHOUT_1); //FURY
    CLEAVE                  = m_ai->initSpell(CLEAVE_1); //FURY
    INTIMIDATING_SHOUT      = m_ai->initSpell(INTIMIDATING_SHOUT_1); //FURY
    EXECUTE                 = m_ai->initSpell(EXECUTE_1); //FURY
    CHALLENGING_SHOUT       = m_ai->initSpell(CHALLENGING_SHOUT_1); //FURY
    SLAM                    = m_ai->initSpell(SLAM_1); //FURY
    BERSERKER_STANCE        = m_ai->initSpell(BERSERKER_STANCE_1); //FURY
    INTERCEPT               = m_ai->initSpell(INTERCEPT_1); //FURY
    DEATH_WISH              = m_ai->initSpell(DEATH_WISH_1); //FURY
    BERSERKER_RAGE          = m_ai->initSpell(BERSERKER_RAGE_1); //FURY
    WHIRLWIND               = m_ai->initSpell(WHIRLWIND_1); //FURY
    PUMMEL                  = m_ai->initSpell(PUMMEL_1); //FURY
    BLOODTHIRST             = m_ai->initSpell(BLOODTHIRST_1); //FURY
    RECKLESSNESS            = m_ai->initSpell(RECKLESSNESS_1); //FURY
    RAMPAGE                 = 0; // passive
    HEROIC_FURY             = m_ai->initSpell(HEROIC_FURY_1); //FURY
    COMMANDING_SHOUT        = m_ai->initSpell(COMMANDING_SHOUT_1); //FURY
    ENRAGED_REGENERATION    = m_ai->initSpell(ENRAGED_REGENERATION_1); //FURY
    PIERCING_HOWL           = m_ai->initSpell(PIERCING_HOWL_1); //FURY

    RECENTLY_BANDAGED       = 11196; // first aid check

    // racial
    GIFT_OF_THE_NAARU       = m_ai->initSpell(GIFT_OF_THE_NAARU_WARRIOR); // draenei
    STONEFORM               = m_ai->initSpell(STONEFORM_ALL); // dwarf
    ESCAPE_ARTIST           = m_ai->initSpell(ESCAPE_ARTIST_ALL); // gnome
    EVERY_MAN_FOR_HIMSELF   = m_ai->initSpell(EVERY_MAN_FOR_HIMSELF_ALL); // human
    SHADOWMELD              = m_ai->initSpell(SHADOWMELD_ALL); // night elf
    BLOOD_FURY              = m_ai->initSpell(BLOOD_FURY_MELEE_CLASSES); // orc
    WAR_STOMP               = m_ai->initSpell(WAR_STOMP_ALL); // tauren
    BERSERKING              = m_ai->initSpell(BERSERKING_ALL); // troll
    WILL_OF_THE_FORSAKEN    = m_ai->initSpell(WILL_OF_THE_FORSAKEN_ALL); // undead

    //Procs
    SLAM_PROC               = m_ai->initSpell(SLAM_PROC_1);
    BLOODSURGE              = m_ai->initSpell(BLOODSURGE_1);
    TASTE_FOR_BLOOD         = m_ai->initSpell(TASTE_FOR_BLOOD_1);
    SUDDEN_DEATH            = m_ai->initSpell(SUDDEN_DEATH_1);

	
}
PlayerbotWarriorAI::~PlayerbotWarriorAI() {}

CombatManeuverReturns PlayerbotWarriorAI::DoFirstCombatManeuver(Unit* pTarget)
{
	// reset the rotation index
	m_combatRotationIndex = 0;
	SetRotation(m_bot->GetSpec());
    // There are NPCs in BGs and Open World PvP, so don't filter this on PvP scenarios (of course if PvP targets anyone but tank, all bets are off anyway)
    // Wait until the tank says so, until any non-tank gains aggro or X seconds - whichever is shortest
    if (m_ai->GetCombatOrder() & PlayerbotAI::ORDERS_TEMP_WAIT_TANKAGGRO)
    {
        if (m_WaitUntil > m_ai->CurrentTime() && m_ai->GroupTankHoldsAggro())
        {
            if (PlayerbotAI::ORDERS_TANK & m_ai->GetCombatOrder())
            {
                if (m_bot->GetDistance(pTarget, true, DIST_CALC_COMBAT_REACH_WITH_MELEE) <= ATTACK_DISTANCE)
                {
                    // Set everyone's UpdateAI() waiting to 2 seconds
                    m_ai->SetGroupIgnoreUpdateTime(2);
                    // Clear their TEMP_WAIT_TANKAGGRO flag
                    m_ai->ClearGroupCombatOrder(PlayerbotAI::ORDERS_TEMP_WAIT_TANKAGGRO);
                    // Start attacking, force target on current target
                    m_ai->Attack(m_ai->GetCurrentTarget());

                    // While everyone else is waiting 2 second, we need to build up aggro, so don't return
                }
                else
                {
                    // TODO: add check if target is ranged
                    return RETURN_NO_ACTION_OK; // wait for target to get nearer
                }
            }
            else
                return RETURN_NO_ACTION_OK; // wait it out
        }
        else
        {
            m_ai->ClearGroupCombatOrder(PlayerbotAI::ORDERS_TEMP_WAIT_TANKAGGRO);
        }
    }

    if (m_ai->GetCombatOrder() & PlayerbotAI::ORDERS_TEMP_WAIT_OOC)
    {
        if (m_WaitUntil > m_ai->CurrentTime() && m_ai->IsGroupReady())
            return RETURN_NO_ACTION_OK; // wait it out
        else
            m_ai->ClearGroupCombatOrder(PlayerbotAI::ORDERS_TEMP_WAIT_OOC);
    }

    switch (m_ai->GetScenarioType())
    {
        case PlayerbotAI::SCENARIO_PVP_DUEL:
        case PlayerbotAI::SCENARIO_PVP_BG:
        case PlayerbotAI::SCENARIO_PVP_ARENA:
        case PlayerbotAI::SCENARIO_PVP_OPENWORLD:
            return DoFirstCombatManeuverPVP(pTarget);
        case PlayerbotAI::SCENARIO_PVE:
        case PlayerbotAI::SCENARIO_PVE_ELITE:
        case PlayerbotAI::SCENARIO_PVE_RAID:
        default:
            return DoFirstCombatManeuverPVE(pTarget);
            break;
    }

    return RETURN_NO_ACTION_ERROR;
}

CombatManeuverReturns PlayerbotWarriorAI::DoFirstCombatManeuverPVE(Unit* pTarget)
{
    if (!m_ai)  return RETURN_NO_ACTION_ERROR;
    if (!m_bot) return RETURN_NO_ACTION_ERROR;

    float fTargetDist = m_bot->GetDistance(pTarget, true, DIST_CALC_COMBAT_REACH_WITH_MELEE);

    if (DEFENSIVE_STANCE && (m_ai->GetCombatOrder() & PlayerbotAI::ORDERS_TANK))
    {
        if (!m_bot->HasAura(DEFENSIVE_STANCE, EFFECT_INDEX_0) && m_ai->CastSpell(DEFENSIVE_STANCE))
            return RETURN_CONTINUE;
        else if (TAUNT > 0 && m_bot->HasAura(DEFENSIVE_STANCE, EFFECT_INDEX_0) && m_ai->CastSpell(TAUNT, *pTarget))
            return RETURN_FINISHED_FIRST_MOVES;
    }

    if (BERSERKER_STANCE)
    {
        if (!m_bot->HasAura(BERSERKER_STANCE, EFFECT_INDEX_0) && m_ai->CastSpell(BERSERKER_STANCE))
            return RETURN_CONTINUE;
        if (BLOODRAGE > 0 && m_bot->HasAura(BERSERKER_STANCE, EFFECT_INDEX_0) && m_ai->GetRageAmount() <= 10)
            return m_ai->CastSpell(BLOODRAGE) ? RETURN_FINISHED_FIRST_MOVES : RETURN_NO_ACTION_ERROR;
        if (INTERCEPT > 0 && m_bot->HasAura(BERSERKER_STANCE, EFFECT_INDEX_0))
        {
            if (fTargetDist < 8.0f)
                return RETURN_NO_ACTION_OK;
            else if (fTargetDist > 25.0f)
                return RETURN_CONTINUE; // wait to come into range
            else if (INTERCEPT > 0 && m_ai->CastSpell(INTERCEPT, *pTarget))
            {
                float x, y, z;
                pTarget->GetContactPoint(m_bot, x, y, z, 3.666666f);
                m_bot->Relocate(x, y, z);
                return RETURN_FINISHED_FIRST_MOVES;
            }
        }
    }

    if (BATTLE_STANCE)
    {
        if (!m_bot->HasAura(BATTLE_STANCE, EFFECT_INDEX_0) && m_ai->CastSpell(BATTLE_STANCE))
            return RETURN_CONTINUE;
        if (CHARGE > 0 && m_bot->HasAura(BATTLE_STANCE, EFFECT_INDEX_0))
        {
            if (fTargetDist < 8.0f)
                return RETURN_NO_ACTION_OK;
            if (fTargetDist > 25.0f)
                return RETURN_CONTINUE; // wait to come into range
            else if (CHARGE > 0 && m_ai->CastSpell(CHARGE, *pTarget))
            {
                float x, y, z;
                pTarget->GetContactPoint(m_bot, x, y, z, 3.666666f);
                m_bot->Relocate(x, y, z);
                return RETURN_FINISHED_FIRST_MOVES;
            }
        }
    }

    return RETURN_NO_ACTION_OK;
}

// TODO: blatant copy of PVE for now, please PVP-port it
CombatManeuverReturns PlayerbotWarriorAI::DoFirstCombatManeuverPVP(Unit* pTarget)
{
    if (!m_ai)  return RETURN_NO_ACTION_ERROR;
    if (!m_bot) return RETURN_NO_ACTION_ERROR;

    float fTargetDist = m_bot->GetDistance(pTarget, true, DIST_CALC_COMBAT_REACH_WITH_MELEE);

    if (DEFENSIVE_STANCE && (m_ai->GetCombatOrder() & PlayerbotAI::ORDERS_TANK))
    {
        if (!m_bot->HasAura(DEFENSIVE_STANCE, EFFECT_INDEX_0) && m_ai->CastSpell(DEFENSIVE_STANCE))
            return RETURN_CONTINUE;
        else if (TAUNT > 0 && m_bot->HasAura(DEFENSIVE_STANCE, EFFECT_INDEX_0) && m_ai->CastSpell(TAUNT, *pTarget))
            return RETURN_FINISHED_FIRST_MOVES;
    }

    if (BERSERKER_STANCE)
    {
        if (!m_bot->HasAura(BERSERKER_STANCE, EFFECT_INDEX_0) && m_ai->CastSpell(BERSERKER_STANCE))
            return RETURN_CONTINUE;
        if (BLOODRAGE > 0 && m_bot->HasAura(BERSERKER_STANCE, EFFECT_INDEX_0) && m_ai->GetRageAmount() <= 10)
            return m_ai->CastSpell(BLOODRAGE) ? RETURN_FINISHED_FIRST_MOVES : RETURN_NO_ACTION_ERROR;
        if (INTERCEPT > 0 && m_bot->HasAura(BERSERKER_STANCE, EFFECT_INDEX_0))
        {
            if (fTargetDist < 8.0f)
                return RETURN_NO_ACTION_OK;
            else if (fTargetDist > 25.0f)
                return RETURN_CONTINUE; // wait to come into range
            else if (INTERCEPT > 0 && m_ai->CastSpell(INTERCEPT, *pTarget))
            {
                float x, y, z;
                pTarget->GetContactPoint(m_bot, x, y, z, 3.666666f);
                m_bot->Relocate(x, y, z);
                return RETURN_FINISHED_FIRST_MOVES;
            }
        }
    }

    if (BATTLE_STANCE)
    {
        if (!m_bot->HasAura(BATTLE_STANCE, EFFECT_INDEX_0) && m_ai->CastSpell(BATTLE_STANCE))
            return RETURN_CONTINUE;
        if (CHARGE > 0 && m_bot->HasAura(BATTLE_STANCE, EFFECT_INDEX_0))
        {
            if (fTargetDist < 8.0f)
                return RETURN_NO_ACTION_OK;
            if (fTargetDist > 25.0f)
                return RETURN_CONTINUE; // wait to come into range
            else if (CHARGE > 0 && m_ai->CastSpell(CHARGE, *pTarget))
            {
                float x, y, z;
                pTarget->GetContactPoint(m_bot, x, y, z, 3.666666f);
                m_bot->Relocate(x, y, z);
                return RETURN_FINISHED_FIRST_MOVES;
            }
        }
    }

    return RETURN_NO_ACTION_OK;
}

CombatManeuverReturns PlayerbotWarriorAI::DoNextCombatManeuver(Unit* pTarget)
{
    switch (m_ai->GetScenarioType())
    {
        case PlayerbotAI::SCENARIO_PVP_DUEL:
        case PlayerbotAI::SCENARIO_PVP_BG:
        case PlayerbotAI::SCENARIO_PVP_ARENA:
        case PlayerbotAI::SCENARIO_PVP_OPENWORLD:
            return DoNextCombatManeuverPVP(pTarget);
        case PlayerbotAI::SCENARIO_PVE:
        case PlayerbotAI::SCENARIO_PVE_ELITE:
        case PlayerbotAI::SCENARIO_PVE_RAID:
        default:
            return DoNextCombatManeuverPVE(pTarget);
            break;
    }

    return RETURN_NO_ACTION_ERROR;
}

CombatManeuverReturns PlayerbotWarriorAI::DoNextCombatManeuverPVE(Unit* pTarget)
{
    if (!m_ai)  return RETURN_NO_ACTION_ERROR;
    if (!m_bot) return RETURN_NO_ACTION_ERROR;
	CombatManeuverReturns rotationResult = RETURN_NO_ACTION_OK;

    uint32 spec = m_bot->GetSpec();

	// Try to interrupt a caster
	//
	if (CombatInterruptCaster(pTarget))
		return RETURN_CONTINUE;

    // do shouts, berserker rage, etc...
    if (BERSERKER_RAGE > 0 && !m_bot->HasAura(BERSERKER_RAGE, EFFECT_INDEX_0))
        m_ai->CastSpell(BERSERKER_RAGE);
    else if (BLOODRAGE > 0 && m_ai->GetRageAmount() <= 10)
        m_ai->CastSpell(BLOODRAGE);

    CheckShouts();

    switch (spec)
    {
        case WARRIOR_SPEC_ARMS:
		{
			// bypass rotation if proc'ing sudden death or taste for blood
			//
			if (EXECUTE > 0 && (pTarget->GetHealthPercent() < 20 || m_bot->HasAura(SUDDEN_DEATH)) && m_ai->GetRageAmount() < 30 && m_ai->CastSpell(EXECUTE, *pTarget))
				return RETURN_CONTINUE;

			if (OVERPOWER > 0 && m_bot->HasAura(TASTE_FOR_BLOOD) && m_ai->CastSpell(OVERPOWER, *pTarget))
				return RETURN_CONTINUE;

			rotationResult = NextCombatRotation(pTarget);

			// no action came out of rotation - slam filler
			//
			if (rotationResult == RETURN_NO_ACTION_OK)
				if (SLAM > 0 && m_ai->CastSpell(SLAM, *pTarget))
				{
					m_ai->SetIgnoreUpdateTime(1);
					return RETURN_CONTINUE;
				}
		}
        case WARRIOR_SPEC_FURY:
		{
			// don't spam execute, add it to the rotation
			//
			bool executeInRotation = std::find(m_rotationMap[ROTATION_NORMAL].begin(), m_rotationMap[ROTATION_NORMAL].end(), EXECUTE) != m_rotationMap[ROTATION_NORMAL].end();
			if (EXECUTE > 0 && !executeInRotation && pTarget->GetHealthPercent() < 20 && m_ai->CastSpell(EXECUTE, *pTarget))
			{
				m_rotationMap[ROTATION_NORMAL].push_back(EXECUTE);
				return RETURN_CONTINUE;
			}
			
			// slam on bloodsurge proc
			if (SLAM > 0 && m_bot->HasAura(BLOODSURGE, EFFECT_INDEX_0) && m_ai->CastSpell(SLAM, *pTarget))
				return RETURN_CONTINUE;

			// normal rotation
			rotationResult = NextCombatRotation(pTarget);

			// filler
			if (rotationResult == RETURN_NO_ACTION_OK)
				if (HEROIC_STRIKE > 0 && m_ai->CastSpell(HEROIC_STRIKE, *pTarget))
					return RETURN_CONTINUE;
		}
        case WARRIOR_SPEC_PROTECTION:
		{
			//Used to determine if this bot is highest on threat
			Unit* newTarget = m_ai->FindAttacker((PlayerbotAI::ATTACKERINFOTYPE)(PlayerbotAI::AIT_VICTIMSELF | PlayerbotAI::AIT_HIGHESTTHREAT), m_bot);

			// check if i can taunt
			//
			if (m_ai->GetCombatOrder() && PlayerbotAI::ORDERS_TANK && !newTarget && TAUNT > 0 && m_bot->IsSpellReady(TAUNT) && m_ai->CastSpell(TAUNT, *pTarget))
				return RETURN_CONTINUE;

			rotationResult = NextCombatRotation(pTarget);

			// heroic strike filler
			//
			if (rotationResult == RETURN_NO_ACTION_OK)
				if (HEROIC_STRIKE > 0 && m_ai->CastSpell(HEROIC_STRIKE, *pTarget))
					return RETURN_CONTINUE;
		}
    }

    return rotationResult;
}

bool PlayerbotWarriorAI::CombatInterruptCaster(Unit* pTarget)
{
	// interrupt casters
//
	Spell *pSpell = pTarget->GetCurrentSpell(CURRENT_GENERIC_SPELL);
	if (!pSpell)
		pSpell = pTarget->GetCurrentSpell(CURRENT_CHANNELED_SPELL);
	if (pSpell) {
		if (PUMMEL > 0 && m_ai->CastSpell(PUMMEL, *pTarget))
			return RETURN_CONTINUE;
		if (SPELL_REFLECTION > 0 && !m_bot->HasAura(SPELL_REFLECTION, EFFECT_INDEX_0) && m_ai->CastSpell(SPELL_REFLECTION, *m_bot))
			return RETURN_CONTINUE;
	}
}
/*
* Parameters: pTarget - the target of the combat move
* Description: AI for protection warrior combat move
*/
CombatManeuverReturns PlayerbotWarriorAI::NextCombatRotation(Unit* pTarget) 
{
	if (CombatInterruptCaster(pTarget))
		return RETURN_CONTINUE;

	// emergency? % check should be configurable
	if (m_bot->GetHealthPercent() < 20 && m_rotationMap[ROTATION_EMERGENCY].size()) {
		for (std::vector<uint32>::iterator eit = m_rotationMap[ROTATION_EMERGENCY].begin(); eit != m_rotationMap[ROTATION_EMERGENCY].end(); ++eit)
		{
			if (*eit > 0 && !m_bot->HasAura(*eit) && m_bot->IsSpellReady(*eit) && m_ai->CastSpell(*eit, *m_bot))
			{
				std::string spellName(GetSpellStore()->LookupEntry<SpellEntry>(*eit)->SpellName[0]);
				m_ai->TellMaster("EMERGENCY CAST: " + spellName);
				return RETURN_CONTINUE;
			}
		}
	}

	// Check my debuffs on the target
	//
	for (std::vector<uint32>::iterator dbiter = m_rotationMap[ROTATION_DEBUFF].begin(); dbiter != m_rotationMap[ROTATION_DEBUFF].end(); dbiter++)
	{
		if (*dbiter > 0 && !pTarget->HasAura(*dbiter) && m_bot->IsSpellReady(*dbiter) && m_ai->CastSpell(*dbiter, *pTarget)) {
			std::string spellName(GetSpellStore()->LookupEntry<SpellEntry>(*dbiter)->SpellName[0]);

			m_ai->SendWhisper("Casting Debuff index " + spellName, *m_master);

			return RETURN_CONTINUE;
		}
	}

	// check my self combat buffs
	//
	for (std::vector<uint32>::iterator iter = m_rotationMap[ROTATION_BUFF].begin(); iter != m_rotationMap[ROTATION_BUFF].end(); iter++)
	{
		if (*iter > 0 && !m_bot->HasAura(*iter) && m_bot->IsSpellReady(*iter) && m_ai->CastSpell(*iter, *m_bot)) {
			std::string spellName(GetSpellStore()->LookupEntry<SpellEntry>(*iter)->SpellName[0]);
			m_ai->TellMaster("Casting Buff " + spellName);
			return RETURN_CONTINUE;
		}
	}

	// buffs and debuffs handled - do next in our rotation.
	//
	if (m_rotationMap[ROTATION_NORMAL][m_combatRotationIndex] > 0 && m_bot->IsSpellReady(m_rotationMap[ROTATION_NORMAL][m_combatRotationIndex]) && m_ai->CastSpell(m_rotationMap[ROTATION_NORMAL][m_combatRotationIndex]))
	{
		std::string spellName(GetSpellStore()->LookupEntry<SpellEntry>(m_rotationMap[ROTATION_NORMAL][m_combatRotationIndex])->SpellName[0]);
		m_ai->TellMaster("Casting Rotation -  " + spellName);
		if (++m_combatRotationIndex == m_rotationMap[ROTATION_NORMAL].size())
			m_combatRotationIndex = 0;
		return RETURN_CONTINUE;
	}
	else {
		// if we couldn't do our next rotation, leave the rotation index alone and try a heroic strike
		//
		if (HEROIC_STRIKE > 0 && m_ai->CastSpell(HEROIC_STRIKE, *pTarget))
			return RETURN_CONTINUE;
	}
	return RETURN_NO_ACTION_OK;
}

// set the rotations  
void PlayerbotWarriorAI::SetRotation(uint32 spec)
{
	std::vector<uint32> rotation;
	std::vector<uint32> debuffs;
	std::vector<uint32> buffs;
	std::vector<uint32> lowHealthBuffs;

	switch (spec)
	{
		case WARRIOR_SPEC_PROTECTION:
		{
			// TODO: for protection, might want to look at multi target rotation if tanking
			//

			//If we have devastate it will replace SA in our rotation
			uint32 SUNDER = (DEVASTATE > 0 ? DEVASTATE : SUNDER_ARMOR);

			// standard rotation for prot warrior
			rotation.push_back(SHIELD_BASH);
			rotation.push_back(SUNDER);
			rotation.push_back(HEROIC_STRIKE);
			m_rotationMap.insert(RotationMap::value_type(ROTATION_NORMAL, rotation));

			// debuffs to keep on the target
			debuffs.push_back(THUNDER_CLAP);
			debuffs.push_back(DEMORALIZING_SHOUT);
			m_rotationMap.insert(RotationMap::value_type(ROTATION_DEBUFF, debuffs));

			// buffs to have up all the time.
			buffs.push_back(BLOODRAGE);
			buffs.push_back(BATTLE_SHOUT);
			// shield block seems to be broken - says its ready when its not.
			//buffs.push_back(SHIELD_BLOCK);
			m_rotationMap.insert(RotationMap::value_type(ROTATION_BUFF, buffs));

			// emergency skills 
			lowHealthBuffs.push_back(LAST_STAND);
			lowHealthBuffs.push_back(SHIELD_WALL);
			m_rotationMap.insert(RotationMap::value_type(ROTATION_EMERGENCY, lowHealthBuffs));


			return;
		}
		case WARRIOR_SPEC_ARMS:
			// debuffs to keep on the target
			debuffs.push_back(REND);
			m_rotationMap.insert(RotationMap::value_type(ROTATION_DEBUFF, debuffs));

			// buffs to have up all the time.
			buffs.push_back(BLOODRAGE);
			buffs.push_back(BATTLE_SHOUT);

			m_rotationMap.insert(RotationMap::value_type(ROTATION_BUFF, buffs));

			// standard rotation for Arms warrior
			rotation.push_back(MORTAL_STRIKE);
			rotation.push_back(OVERPOWER);
			rotation.push_back(EXECUTE);
			rotation.push_back(BLADESTORM);
			m_rotationMap.insert(RotationMap::value_type(ROTATION_NORMAL, rotation));
			return;

		case WARRIOR_SPEC_FURY:

			// fury warrior pretty simple. out of rotation heroic strikes filled in above
			//
			rotation.push_back(BLOODTHIRST);
			rotation.push_back(WHIRLWIND);
			rotation.push_back(HEROIC_STRIKE);
			break;
		default:
			break;
	}

}
CombatManeuverReturns PlayerbotWarriorAI::DoNextCombatManeuverPVP(Unit* pTarget)
{
    if (m_ai->CastSpell(HEROIC_STRIKE))
        return RETURN_CONTINUE;

    return DoNextCombatManeuverPVE(pTarget); // TODO: bad idea perhaps, but better than the alternative
}

//Buff and rebuff shouts
void PlayerbotWarriorAI::CheckShouts()
{
    if (!m_ai)  return;
    if (!m_bot) return;

    if (m_bot->GetSpec() == WARRIOR_SPEC_PROTECTION && COMMANDING_SHOUT > 0)
    {
        if (!m_bot->HasAura(COMMANDING_SHOUT, EFFECT_INDEX_0) && m_ai->CastSpell(COMMANDING_SHOUT))
            return;
    }
    else // Not prot, or prot but no Commanding Shout yet
    {
        if (!m_bot->HasAura(BATTLE_SHOUT, EFFECT_INDEX_0) && m_ai->CastSpell(BATTLE_SHOUT))
            return;
    }
}

void PlayerbotWarriorAI::DoNonCombatActions()
{
    if (!m_ai)  return;
    if (!m_bot) return;
	//if (!m_bot->IsMounted() && m_master->IsMounted())
	//{
	//	// mount up if possible.
	//	m_bot->Mount()
	//}
    uint32 spec = m_bot->GetSpec();

    //Stance Check
    if (spec == WARRIOR_SPEC_ARMS && !m_bot->HasAura(BATTLE_STANCE, EFFECT_INDEX_0))
        m_ai->CastSpell(BATTLE_STANCE);
    else if (spec == WARRIOR_SPEC_FURY && !m_bot->HasAura(BERSERKER_STANCE, EFFECT_INDEX_0))
        m_ai->CastSpell(BERSERKER_STANCE);
    else if (spec == WARRIOR_SPEC_PROTECTION && !m_bot->HasAura(DEFENSIVE_STANCE, EFFECT_INDEX_0))
        m_ai->CastSpell(DEFENSIVE_STANCE);

    // buff master with VIGILANCE
    if (VIGILANCE > 0)
        (!GetMaster()->HasAura(VIGILANCE, EFFECT_INDEX_0) && m_ai->CastSpell(VIGILANCE, *GetMaster()));

    // hp check
    if (EatDrinkBandage(false))
        return;

    if (m_bot->getRace() == RACE_DRAENEI && !m_bot->HasAura(GIFT_OF_THE_NAARU, EFFECT_INDEX_0) && m_ai->GetHealthPercent() < 70)
    {
        m_ai->TellMaster("I'm casting gift of the naaru.");
        m_ai->CastSpell(GIFT_OF_THE_NAARU, *m_bot);
        return;
    }
} // end DoNonCombatActions

// Match up with "Pull()" below
bool PlayerbotWarriorAI::CanPull()
{
    if (!m_bot) return false;
    if (!m_ai) return false;
	
	if (HEROIC_THROW && m_bot->IsSpellReady(HEROIC_THROW))
		return true;
	else
		if (m_bot->GetUInt32Value(PLAYER_AMMO_ID)) // Having ammo equipped means a weapon is equipped as well. Probably. [TODO: does this work with throwing knives? Can a playerbot 'cheat' ammo into the slot without a proper weapon?]
		{
			// Can't do this, CanPull CANNOT check for anything that requires a target
			//if (!m_ai->IsInRange(m_ai->GetCurrentTarget(), AUTO_SHOT))
			//{
			//    m_ai->TellMaster("I'm out of range.");
			//    return false;
			//}
			return true;
		}


    return false;
}

// Match up with "CanPull()" above
bool PlayerbotWarriorAI::Pull()
{
    if (!m_bot) return false;
    if (!m_ai)  return false;

    if (m_bot->GetDistance(m_ai->GetCurrentTarget(), true, DIST_CALC_COMBAT_REACH_WITH_MELEE) > ATTACK_DISTANCE)
    {
        if (!m_ai->In_Range(m_ai->GetCurrentTarget(), HEROIC_THROW))
        {
            m_ai->TellMaster("I'm out of range.");
            return false;
        }

		// pull with heroic throw + charge
		if (HEROIC_THROW && m_ai->CastSpell(HEROIC_THROW))
		{
			if (CHARGE && m_ai->CastSpell(CHARGE))
				return true;
			
			// can pull with just heroic throw
			return true;
		}
		// activate auto shot: Reworked to account for AUTO_SHOT being a triggered spell
		if (AUTO_SHOT && m_ai->GetCurrentSpellId() != AUTO_SHOT)
		{
			m_bot->CastSpell(m_ai->GetCurrentTarget(), AUTO_SHOT, TRIGGERED_OLD_TRIGGERED);
			return true;
		}
		return false;
    }
    else // target is in melee range
    {
        m_ai->Attack(m_ai->GetCurrentTarget());
        return true;
    }

    return false;
}

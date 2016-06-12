/*
* This source file is part of an OSTIS project. For the latest info, see http://ostis.net
* Distributed under the MIT License
* (See accompanying file COPYING.MIT or copy at http://opensource.org/licenses/MIT)
*/

#pragma once

#include "wrap/sc_addr.hpp"
#include "wrap/sc_object.hpp"

#include "iotKeynodes.generated.hpp"

namespace iot
{
    SC_CLASS()
	class Keynodes : public ScObject
	{
        SC_GENERATED_BODY()

	public:

        SC_PROPERTY(Keynode, SysIdtf("device"), ForceCreate)
        static ScAddr device;

        SC_PROPERTY(Keynode, SysIdtf("device_enabled"), ForceCreate)
        static ScAddr device_enabled;

        SC_PROPERTY(Keynode, SysIdtf("nrel_energy_usage"), ForceCreate)
        static ScAddr device_energy_usage;

        SC_PROPERTY(Keynode, SysIdtf("nrel_standby_energy_usage"), ForceCreate)
        static ScAddr device_standby_energy_usage;

        SC_PROPERTY(Keynode, SysIdtf("nrel_real_energy_usage"), ForceCreate)
        static ScAddr device_real_energy_usage;

		/// Commands
        SC_PROPERTY(Keynode, SysIdtf("command_device_group_enable"), ForceCreate)
        static ScAddr command_device_group_enable;

        SC_PROPERTY(Keynode, SysIdtf("command_device_group_disable"), ForceCreate)
        static ScAddr command_device_group_disable;

        SC_PROPERTY(Keynode, SysIdtf("command_add_content"), ForceCreate)
        static ScAddr command_add_content;

        SC_PROPERTY(Keynode, SysIdtf("command_who_are_you"), ForceCreate)
        static ScAddr command_who_are_you;

        SC_PROPERTY(Keynode, SysIdtf("command_generate_text_from_template"), ForceCreate)
        static ScAddr command_generate_text_from_template;

        SC_PROPERTY(Keynode, SysIdtf("command_change_tv_program"), ForceCreate)
        static ScAddr command_change_tv_program;

		/// quesions
        SC_PROPERTY(Keynode, SysIdtf("command_get_content"), ForceCreate)
		static ScAddr command_get_content;
		
		/// common
        SC_PROPERTY(Keynode, SysIdtf("self"), ForceCreate)
		static ScAddr self;

        SC_PROPERTY(Keynode, SysIdtf("group_volume"), ForceCreate)
		static ScAddr group_volume;

        SC_PROPERTY(Keynode, SysIdtf("command_initiated"), ForceCreate)
		static ScAddr command_initiated;

        SC_PROPERTY(Keynode, SysIdtf("command"), ForceCreate)
		static ScAddr command;

        SC_PROPERTY(Keynode, SysIdtf("question_initiated"), ForceCreate)
		static ScAddr question_initiated;

		/// relations
        SC_PROPERTY(Keynode, SysIdtf("nrel_content"), ForceCreate)
		static ScAddr nrel_content;

        SC_PROPERTY(Keynode, SysIdtf("nrel_mass"), ForceCreate)
		static ScAddr nrel_mass;

        SC_PROPERTY(Keynode, SysIdtf("nrel_answer"), ForceCreate)
		static ScAddr nrel_answer;

        SC_PROPERTY(Keynode, SysIdtf("nrel_result"), ForceCreate)
		static ScAddr nrel_result;

        SC_PROPERTY(Keynode, SysIdtf("nrel_speech_templates"), ForceCreate)
		static ScAddr nrel_speech_templates;

        SC_PROPERTY(Keynode, SysIdtf("nrel_main_idtf"), ForceCreate)
		static ScAddr nrel_main_idtf;

        SC_PROPERTY(Keynode, SysIdtf("nrel_tv_program"), ForceCreate)
		static ScAddr nrel_tv_program;

		SC_PROPERTY(Keynode, SysIdtf("nrel_period"), ForceCreate)
		static ScAddr nrel_period;

		SC_PROPERTY(Keynode, SysIdtf("nrel_time"), ForceCreate)
		static ScAddr nrel_time;

        SC_PROPERTY(Keynode, SysIdtf("rrel_1"), ForceCreate)
		static ScAddr rrel_1;

        SC_PROPERTY(Keynode, SysIdtf("rrel_2"), ForceCreate)
		static ScAddr rrel_2;

        SC_PROPERTY(Keynode, SysIdtf("rrel_3"), ForceCreate)
		static ScAddr rrel_3;

        SC_PROPERTY(Keynode, SysIdtf("rrel_gram"), ForceCreate)
		static ScAddr rrel_gram;

		SC_PROPERTY(Keynode, SysIdtf("rrel_seconds"), ForceCreate)
		static ScAddr rrel_seconds;

		SC_PROPERTY(Keynode, SysIdtf("rrel_epoch"), ForceCreate)
		static ScAddr rrel_epoch;

		SC_PROPERTY(Keynode, SysIdtf("binary_float"), ForceCreate)
		static ScAddr binary_float;

		SC_PROPERTY(Keynode, SysIdtf("binary_int8"), ForceCreate)
		static ScAddr binary_int8;
		
		SC_PROPERTY(Keynode, SysIdtf("binary_int16"), ForceCreate)
		static ScAddr binary_int16;

		SC_PROPERTY(Keynode, SysIdtf("binary_int32"), ForceCreate)
		static ScAddr binary_int32;

		SC_PROPERTY(Keynode, SysIdtf("binary_int64"), ForceCreate)
		static ScAddr binary_int64;
	};

}
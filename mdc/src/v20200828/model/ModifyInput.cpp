/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/mdc/v20200828/model/ModifyInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdc::V20200828::Model;
using namespace std;

ModifyInput::ModifyInput() :
    m_inputIdHasBeenSet(false),
    m_inputNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_allowIpListHasBeenSet(false),
    m_sRTSettingsHasBeenSet(false),
    m_rTPSettingsHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_failOverHasBeenSet(false)
{
}

CoreInternalOutcome ModifyInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputId") && !value["InputId"].IsNull())
    {
        if (!value["InputId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInput.InputId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputId = string(value["InputId"].GetString());
        m_inputIdHasBeenSet = true;
    }

    if (value.HasMember("InputName") && !value["InputName"].IsNull())
    {
        if (!value["InputName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInput.InputName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputName = string(value["InputName"].GetString());
        m_inputNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInput.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("AllowIpList") && !value["AllowIpList"].IsNull())
    {
        if (!value["AllowIpList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyInput.AllowIpList` is not array type"));

        const rapidjson::Value &tmpValue = value["AllowIpList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allowIpList.push_back((*itr).GetString());
        }
        m_allowIpListHasBeenSet = true;
    }

    if (value.HasMember("SRTSettings") && !value["SRTSettings"].IsNull())
    {
        if (!value["SRTSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInput.SRTSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sRTSettings.Deserialize(value["SRTSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sRTSettingsHasBeenSet = true;
    }

    if (value.HasMember("RTPSettings") && !value["RTPSettings"].IsNull())
    {
        if (!value["RTPSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInput.RTPSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rTPSettings.Deserialize(value["RTPSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rTPSettingsHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInput.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("FailOver") && !value["FailOver"].IsNull())
    {
        if (!value["FailOver"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyInput.FailOver` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failOver = string(value["FailOver"].GetString());
        m_failOverHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputId.c_str(), allocator).Move(), allocator);
    }

    if (m_inputNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_allowIpListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowIpList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowIpList.begin(); itr != m_allowIpList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sRTSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SRTSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sRTSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rTPSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTPSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rTPSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_failOverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailOver";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failOver.c_str(), allocator).Move(), allocator);
    }

}


string ModifyInput::GetInputId() const
{
    return m_inputId;
}

void ModifyInput::SetInputId(const string& _inputId)
{
    m_inputId = _inputId;
    m_inputIdHasBeenSet = true;
}

bool ModifyInput::InputIdHasBeenSet() const
{
    return m_inputIdHasBeenSet;
}

string ModifyInput::GetInputName() const
{
    return m_inputName;
}

void ModifyInput::SetInputName(const string& _inputName)
{
    m_inputName = _inputName;
    m_inputNameHasBeenSet = true;
}

bool ModifyInput::InputNameHasBeenSet() const
{
    return m_inputNameHasBeenSet;
}

string ModifyInput::GetDescription() const
{
    return m_description;
}

void ModifyInput::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyInput::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> ModifyInput::GetAllowIpList() const
{
    return m_allowIpList;
}

void ModifyInput::SetAllowIpList(const vector<string>& _allowIpList)
{
    m_allowIpList = _allowIpList;
    m_allowIpListHasBeenSet = true;
}

bool ModifyInput::AllowIpListHasBeenSet() const
{
    return m_allowIpListHasBeenSet;
}

CreateInputSRTSettings ModifyInput::GetSRTSettings() const
{
    return m_sRTSettings;
}

void ModifyInput::SetSRTSettings(const CreateInputSRTSettings& _sRTSettings)
{
    m_sRTSettings = _sRTSettings;
    m_sRTSettingsHasBeenSet = true;
}

bool ModifyInput::SRTSettingsHasBeenSet() const
{
    return m_sRTSettingsHasBeenSet;
}

CreateInputRTPSettings ModifyInput::GetRTPSettings() const
{
    return m_rTPSettings;
}

void ModifyInput::SetRTPSettings(const CreateInputRTPSettings& _rTPSettings)
{
    m_rTPSettings = _rTPSettings;
    m_rTPSettingsHasBeenSet = true;
}

bool ModifyInput::RTPSettingsHasBeenSet() const
{
    return m_rTPSettingsHasBeenSet;
}

string ModifyInput::GetProtocol() const
{
    return m_protocol;
}

void ModifyInput::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ModifyInput::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string ModifyInput::GetFailOver() const
{
    return m_failOver;
}

void ModifyInput::SetFailOver(const string& _failOver)
{
    m_failOver = _failOver;
    m_failOverHasBeenSet = true;
}

bool ModifyInput::FailOverHasBeenSet() const
{
    return m_failOverHasBeenSet;
}


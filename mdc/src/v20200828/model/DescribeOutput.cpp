/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/mdc/v20200828/model/DescribeOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdc::V20200828::Model;
using namespace std;

DescribeOutput::DescribeOutput() :
    m_outputIdHasBeenSet(false),
    m_outputNameHasBeenSet(false),
    m_outputTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_outputAddressListHasBeenSet(false),
    m_outputRegionHasBeenSet(false),
    m_sRTSettingsHasBeenSet(false),
    m_rTPSettingsHasBeenSet(false),
    m_rTMPSettingsHasBeenSet(false),
    m_rTMPPullSettingsHasBeenSet(false),
    m_allowIpListHasBeenSet(false),
    m_rTSPPullSettingsHasBeenSet(false),
    m_hLSPullSettingsHasBeenSet(false),
    m_maxConcurrentHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutputId") && !value["OutputId"].IsNull())
    {
        if (!value["OutputId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOutput.OutputId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputId = string(value["OutputId"].GetString());
        m_outputIdHasBeenSet = true;
    }

    if (value.HasMember("OutputName") && !value["OutputName"].IsNull())
    {
        if (!value["OutputName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOutput.OutputName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputName = string(value["OutputName"].GetString());
        m_outputNameHasBeenSet = true;
    }

    if (value.HasMember("OutputType") && !value["OutputType"].IsNull())
    {
        if (!value["OutputType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOutput.OutputType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputType = string(value["OutputType"].GetString());
        m_outputTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOutput.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOutput.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("OutputAddressList") && !value["OutputAddressList"].IsNull())
    {
        if (!value["OutputAddressList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeOutput.OutputAddressList` is not array type"));

        const rapidjson::Value &tmpValue = value["OutputAddressList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OutputAddress item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outputAddressList.push_back(item);
        }
        m_outputAddressListHasBeenSet = true;
    }

    if (value.HasMember("OutputRegion") && !value["OutputRegion"].IsNull())
    {
        if (!value["OutputRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOutput.OutputRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputRegion = string(value["OutputRegion"].GetString());
        m_outputRegionHasBeenSet = true;
    }

    if (value.HasMember("SRTSettings") && !value["SRTSettings"].IsNull())
    {
        if (!value["SRTSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOutput.SRTSettings` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DescribeOutput.RTPSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rTPSettings.Deserialize(value["RTPSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rTPSettingsHasBeenSet = true;
    }

    if (value.HasMember("RTMPSettings") && !value["RTMPSettings"].IsNull())
    {
        if (!value["RTMPSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOutput.RTMPSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rTMPSettings.Deserialize(value["RTMPSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rTMPSettingsHasBeenSet = true;
    }

    if (value.HasMember("RTMPPullSettings") && !value["RTMPPullSettings"].IsNull())
    {
        if (!value["RTMPPullSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOutput.RTMPPullSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rTMPPullSettings.Deserialize(value["RTMPPullSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rTMPPullSettingsHasBeenSet = true;
    }

    if (value.HasMember("AllowIpList") && !value["AllowIpList"].IsNull())
    {
        if (!value["AllowIpList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeOutput.AllowIpList` is not array type"));

        const rapidjson::Value &tmpValue = value["AllowIpList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allowIpList.push_back((*itr).GetString());
        }
        m_allowIpListHasBeenSet = true;
    }

    if (value.HasMember("RTSPPullSettings") && !value["RTSPPullSettings"].IsNull())
    {
        if (!value["RTSPPullSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOutput.RTSPPullSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rTSPPullSettings.Deserialize(value["RTSPPullSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rTSPPullSettingsHasBeenSet = true;
    }

    if (value.HasMember("HLSPullSettings") && !value["HLSPullSettings"].IsNull())
    {
        if (!value["HLSPullSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOutput.HLSPullSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hLSPullSettings.Deserialize(value["HLSPullSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hLSPullSettingsHasBeenSet = true;
    }

    if (value.HasMember("MaxConcurrent") && !value["MaxConcurrent"].IsNull())
    {
        if (!value["MaxConcurrent"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeOutput.MaxConcurrent` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxConcurrent = value["MaxConcurrent"].GetUint64();
        m_maxConcurrentHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupIds") && !value["SecurityGroupIds"].IsNull())
    {
        if (!value["SecurityGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeOutput.SecurityGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_securityGroupIds.push_back((*itr).GetString());
        }
        m_securityGroupIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outputIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputId.c_str(), allocator).Move(), allocator);
    }

    if (m_outputNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputName.c_str(), allocator).Move(), allocator);
    }

    if (m_outputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_outputAddressListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputAddressList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputAddressList.begin(); itr != m_outputAddressList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputRegion.c_str(), allocator).Move(), allocator);
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

    if (m_rTMPSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTMPSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rTMPSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rTMPPullSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTMPPullSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rTMPPullSettings.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_rTSPPullSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTSPPullSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rTSPPullSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hLSPullSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HLSPullSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hLSPullSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_maxConcurrentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxConcurrent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxConcurrent, allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DescribeOutput::GetOutputId() const
{
    return m_outputId;
}

void DescribeOutput::SetOutputId(const string& _outputId)
{
    m_outputId = _outputId;
    m_outputIdHasBeenSet = true;
}

bool DescribeOutput::OutputIdHasBeenSet() const
{
    return m_outputIdHasBeenSet;
}

string DescribeOutput::GetOutputName() const
{
    return m_outputName;
}

void DescribeOutput::SetOutputName(const string& _outputName)
{
    m_outputName = _outputName;
    m_outputNameHasBeenSet = true;
}

bool DescribeOutput::OutputNameHasBeenSet() const
{
    return m_outputNameHasBeenSet;
}

string DescribeOutput::GetOutputType() const
{
    return m_outputType;
}

void DescribeOutput::SetOutputType(const string& _outputType)
{
    m_outputType = _outputType;
    m_outputTypeHasBeenSet = true;
}

bool DescribeOutput::OutputTypeHasBeenSet() const
{
    return m_outputTypeHasBeenSet;
}

string DescribeOutput::GetDescription() const
{
    return m_description;
}

void DescribeOutput::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DescribeOutput::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeOutput::GetProtocol() const
{
    return m_protocol;
}

void DescribeOutput::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DescribeOutput::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

vector<OutputAddress> DescribeOutput::GetOutputAddressList() const
{
    return m_outputAddressList;
}

void DescribeOutput::SetOutputAddressList(const vector<OutputAddress>& _outputAddressList)
{
    m_outputAddressList = _outputAddressList;
    m_outputAddressListHasBeenSet = true;
}

bool DescribeOutput::OutputAddressListHasBeenSet() const
{
    return m_outputAddressListHasBeenSet;
}

string DescribeOutput::GetOutputRegion() const
{
    return m_outputRegion;
}

void DescribeOutput::SetOutputRegion(const string& _outputRegion)
{
    m_outputRegion = _outputRegion;
    m_outputRegionHasBeenSet = true;
}

bool DescribeOutput::OutputRegionHasBeenSet() const
{
    return m_outputRegionHasBeenSet;
}

DescribeOutputSRTSettings DescribeOutput::GetSRTSettings() const
{
    return m_sRTSettings;
}

void DescribeOutput::SetSRTSettings(const DescribeOutputSRTSettings& _sRTSettings)
{
    m_sRTSettings = _sRTSettings;
    m_sRTSettingsHasBeenSet = true;
}

bool DescribeOutput::SRTSettingsHasBeenSet() const
{
    return m_sRTSettingsHasBeenSet;
}

DescribeOutputRTPSettings DescribeOutput::GetRTPSettings() const
{
    return m_rTPSettings;
}

void DescribeOutput::SetRTPSettings(const DescribeOutputRTPSettings& _rTPSettings)
{
    m_rTPSettings = _rTPSettings;
    m_rTPSettingsHasBeenSet = true;
}

bool DescribeOutput::RTPSettingsHasBeenSet() const
{
    return m_rTPSettingsHasBeenSet;
}

DescribeOutputRTMPSettings DescribeOutput::GetRTMPSettings() const
{
    return m_rTMPSettings;
}

void DescribeOutput::SetRTMPSettings(const DescribeOutputRTMPSettings& _rTMPSettings)
{
    m_rTMPSettings = _rTMPSettings;
    m_rTMPSettingsHasBeenSet = true;
}

bool DescribeOutput::RTMPSettingsHasBeenSet() const
{
    return m_rTMPSettingsHasBeenSet;
}

DescribeOutputRTMPPullSettings DescribeOutput::GetRTMPPullSettings() const
{
    return m_rTMPPullSettings;
}

void DescribeOutput::SetRTMPPullSettings(const DescribeOutputRTMPPullSettings& _rTMPPullSettings)
{
    m_rTMPPullSettings = _rTMPPullSettings;
    m_rTMPPullSettingsHasBeenSet = true;
}

bool DescribeOutput::RTMPPullSettingsHasBeenSet() const
{
    return m_rTMPPullSettingsHasBeenSet;
}

vector<string> DescribeOutput::GetAllowIpList() const
{
    return m_allowIpList;
}

void DescribeOutput::SetAllowIpList(const vector<string>& _allowIpList)
{
    m_allowIpList = _allowIpList;
    m_allowIpListHasBeenSet = true;
}

bool DescribeOutput::AllowIpListHasBeenSet() const
{
    return m_allowIpListHasBeenSet;
}

DescribeOutputRTSPPullSettings DescribeOutput::GetRTSPPullSettings() const
{
    return m_rTSPPullSettings;
}

void DescribeOutput::SetRTSPPullSettings(const DescribeOutputRTSPPullSettings& _rTSPPullSettings)
{
    m_rTSPPullSettings = _rTSPPullSettings;
    m_rTSPPullSettingsHasBeenSet = true;
}

bool DescribeOutput::RTSPPullSettingsHasBeenSet() const
{
    return m_rTSPPullSettingsHasBeenSet;
}

DescribeOutputHLSPullSettings DescribeOutput::GetHLSPullSettings() const
{
    return m_hLSPullSettings;
}

void DescribeOutput::SetHLSPullSettings(const DescribeOutputHLSPullSettings& _hLSPullSettings)
{
    m_hLSPullSettings = _hLSPullSettings;
    m_hLSPullSettingsHasBeenSet = true;
}

bool DescribeOutput::HLSPullSettingsHasBeenSet() const
{
    return m_hLSPullSettingsHasBeenSet;
}

uint64_t DescribeOutput::GetMaxConcurrent() const
{
    return m_maxConcurrent;
}

void DescribeOutput::SetMaxConcurrent(const uint64_t& _maxConcurrent)
{
    m_maxConcurrent = _maxConcurrent;
    m_maxConcurrentHasBeenSet = true;
}

bool DescribeOutput::MaxConcurrentHasBeenSet() const
{
    return m_maxConcurrentHasBeenSet;
}

vector<string> DescribeOutput::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void DescribeOutput::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool DescribeOutput::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}


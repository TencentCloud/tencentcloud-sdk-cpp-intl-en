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

#include <tencentcloud/mdl/v20200326/model/StreamLiveOutputGroupsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

StreamLiveOutputGroupsInfo::StreamLiveOutputGroupsInfo() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_destinationsHasBeenSet(false),
    m_hlsRemuxSettingsHasBeenSet(false),
    m_drmSettingsHasBeenSet(false),
    m_dashRemuxSettingsHasBeenSet(false),
    m_streamPackageSettingsHasBeenSet(false),
    m_timeShiftSettingsHasBeenSet(false)
{
}

CoreInternalOutcome StreamLiveOutputGroupsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamLiveOutputGroupsInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StreamLiveOutputGroupsInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Outputs") && !value["Outputs"].IsNull())
    {
        if (!value["Outputs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StreamLiveOutputGroupsInfo.Outputs` is not array type"));

        const rapidjson::Value &tmpValue = value["Outputs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OutputInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outputs.push_back(item);
        }
        m_outputsHasBeenSet = true;
    }

    if (value.HasMember("Destinations") && !value["Destinations"].IsNull())
    {
        if (!value["Destinations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StreamLiveOutputGroupsInfo.Destinations` is not array type"));

        const rapidjson::Value &tmpValue = value["Destinations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DestinationInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_destinations.push_back(item);
        }
        m_destinationsHasBeenSet = true;
    }

    if (value.HasMember("HlsRemuxSettings") && !value["HlsRemuxSettings"].IsNull())
    {
        if (!value["HlsRemuxSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StreamLiveOutputGroupsInfo.HlsRemuxSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hlsRemuxSettings.Deserialize(value["HlsRemuxSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hlsRemuxSettingsHasBeenSet = true;
    }

    if (value.HasMember("DrmSettings") && !value["DrmSettings"].IsNull())
    {
        if (!value["DrmSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StreamLiveOutputGroupsInfo.DrmSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_drmSettings.Deserialize(value["DrmSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_drmSettingsHasBeenSet = true;
    }

    if (value.HasMember("DashRemuxSettings") && !value["DashRemuxSettings"].IsNull())
    {
        if (!value["DashRemuxSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StreamLiveOutputGroupsInfo.DashRemuxSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dashRemuxSettings.Deserialize(value["DashRemuxSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dashRemuxSettingsHasBeenSet = true;
    }

    if (value.HasMember("StreamPackageSettings") && !value["StreamPackageSettings"].IsNull())
    {
        if (!value["StreamPackageSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StreamLiveOutputGroupsInfo.StreamPackageSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_streamPackageSettings.Deserialize(value["StreamPackageSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_streamPackageSettingsHasBeenSet = true;
    }

    if (value.HasMember("TimeShiftSettings") && !value["TimeShiftSettings"].IsNull())
    {
        if (!value["TimeShiftSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StreamLiveOutputGroupsInfo.TimeShiftSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_timeShiftSettings.Deserialize(value["TimeShiftSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timeShiftSettingsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StreamLiveOutputGroupsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_outputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Outputs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputs.begin(); itr != m_outputs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_destinationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Destinations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_destinations.begin(); itr != m_destinations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hlsRemuxSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HlsRemuxSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hlsRemuxSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_drmSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrmSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_drmSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dashRemuxSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DashRemuxSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dashRemuxSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_streamPackageSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamPackageSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_streamPackageSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_timeShiftSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeShiftSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timeShiftSettings.ToJsonObject(value[key.c_str()], allocator);
    }

}


string StreamLiveOutputGroupsInfo::GetName() const
{
    return m_name;
}

void StreamLiveOutputGroupsInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool StreamLiveOutputGroupsInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string StreamLiveOutputGroupsInfo::GetType() const
{
    return m_type;
}

void StreamLiveOutputGroupsInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool StreamLiveOutputGroupsInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<OutputInfo> StreamLiveOutputGroupsInfo::GetOutputs() const
{
    return m_outputs;
}

void StreamLiveOutputGroupsInfo::SetOutputs(const vector<OutputInfo>& _outputs)
{
    m_outputs = _outputs;
    m_outputsHasBeenSet = true;
}

bool StreamLiveOutputGroupsInfo::OutputsHasBeenSet() const
{
    return m_outputsHasBeenSet;
}

vector<DestinationInfo> StreamLiveOutputGroupsInfo::GetDestinations() const
{
    return m_destinations;
}

void StreamLiveOutputGroupsInfo::SetDestinations(const vector<DestinationInfo>& _destinations)
{
    m_destinations = _destinations;
    m_destinationsHasBeenSet = true;
}

bool StreamLiveOutputGroupsInfo::DestinationsHasBeenSet() const
{
    return m_destinationsHasBeenSet;
}

HlsRemuxSettingsInfo StreamLiveOutputGroupsInfo::GetHlsRemuxSettings() const
{
    return m_hlsRemuxSettings;
}

void StreamLiveOutputGroupsInfo::SetHlsRemuxSettings(const HlsRemuxSettingsInfo& _hlsRemuxSettings)
{
    m_hlsRemuxSettings = _hlsRemuxSettings;
    m_hlsRemuxSettingsHasBeenSet = true;
}

bool StreamLiveOutputGroupsInfo::HlsRemuxSettingsHasBeenSet() const
{
    return m_hlsRemuxSettingsHasBeenSet;
}

DrmSettingsInfo StreamLiveOutputGroupsInfo::GetDrmSettings() const
{
    return m_drmSettings;
}

void StreamLiveOutputGroupsInfo::SetDrmSettings(const DrmSettingsInfo& _drmSettings)
{
    m_drmSettings = _drmSettings;
    m_drmSettingsHasBeenSet = true;
}

bool StreamLiveOutputGroupsInfo::DrmSettingsHasBeenSet() const
{
    return m_drmSettingsHasBeenSet;
}

DashRemuxSettingsInfo StreamLiveOutputGroupsInfo::GetDashRemuxSettings() const
{
    return m_dashRemuxSettings;
}

void StreamLiveOutputGroupsInfo::SetDashRemuxSettings(const DashRemuxSettingsInfo& _dashRemuxSettings)
{
    m_dashRemuxSettings = _dashRemuxSettings;
    m_dashRemuxSettingsHasBeenSet = true;
}

bool StreamLiveOutputGroupsInfo::DashRemuxSettingsHasBeenSet() const
{
    return m_dashRemuxSettingsHasBeenSet;
}

StreamPackageSettingsInfo StreamLiveOutputGroupsInfo::GetStreamPackageSettings() const
{
    return m_streamPackageSettings;
}

void StreamLiveOutputGroupsInfo::SetStreamPackageSettings(const StreamPackageSettingsInfo& _streamPackageSettings)
{
    m_streamPackageSettings = _streamPackageSettings;
    m_streamPackageSettingsHasBeenSet = true;
}

bool StreamLiveOutputGroupsInfo::StreamPackageSettingsHasBeenSet() const
{
    return m_streamPackageSettingsHasBeenSet;
}

TimeShiftSettingsInfo StreamLiveOutputGroupsInfo::GetTimeShiftSettings() const
{
    return m_timeShiftSettings;
}

void StreamLiveOutputGroupsInfo::SetTimeShiftSettings(const TimeShiftSettingsInfo& _timeShiftSettings)
{
    m_timeShiftSettings = _timeShiftSettings;
    m_timeShiftSettingsHasBeenSet = true;
}

bool StreamLiveOutputGroupsInfo::TimeShiftSettingsHasBeenSet() const
{
    return m_timeShiftSettingsHasBeenSet;
}


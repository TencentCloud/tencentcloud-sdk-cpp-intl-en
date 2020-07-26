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

#include <tencentcloud/mdl/v20200326/model/OutputGroupsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace rapidjson;
using namespace std;

OutputGroupsInfo::OutputGroupsInfo() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_destinationsHasBeenSet(false),
    m_hlsRemuxSettingsHasBeenSet(false),
    m_dashRemuxSettingsHasBeenSet(false),
    m_drmSettingsHasBeenSet(false),
    m_mediaPackageSettingsHasBeenSet(false)
{
}

CoreInternalOutcome OutputGroupsInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `OutputGroupsInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Error("response `OutputGroupsInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Outputs") && !value["Outputs"].IsNull())
    {
        if (!value["Outputs"].IsArray())
            return CoreInternalOutcome(Error("response `OutputGroupsInfo.Outputs` is not array type"));

        const Value &tmpValue = value["Outputs"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `OutputGroupsInfo.Destinations` is not array type"));

        const Value &tmpValue = value["Destinations"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `OutputGroupsInfo.HlsRemuxSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hlsRemuxSettings.Deserialize(value["HlsRemuxSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hlsRemuxSettingsHasBeenSet = true;
    }

    if (value.HasMember("DashRemuxSettings") && !value["DashRemuxSettings"].IsNull())
    {
        if (!value["DashRemuxSettings"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OutputGroupsInfo.DashRemuxSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dashRemuxSettings.Deserialize(value["DashRemuxSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dashRemuxSettingsHasBeenSet = true;
    }

    if (value.HasMember("DrmSettings") && !value["DrmSettings"].IsNull())
    {
        if (!value["DrmSettings"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OutputGroupsInfo.DrmSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_drmSettings.Deserialize(value["DrmSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_drmSettingsHasBeenSet = true;
    }

    if (value.HasMember("MediaPackageSettings") && !value["MediaPackageSettings"].IsNull())
    {
        if (!value["MediaPackageSettings"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OutputGroupsInfo.MediaPackageSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mediaPackageSettings.Deserialize(value["MediaPackageSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mediaPackageSettingsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputGroupsInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_outputsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Outputs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputs.begin(); itr != m_outputs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_destinationsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Destinations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_destinations.begin(); itr != m_destinations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hlsRemuxSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HlsRemuxSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_hlsRemuxSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dashRemuxSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DashRemuxSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_dashRemuxSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_drmSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DrmSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_drmSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_mediaPackageSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MediaPackageSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_mediaPackageSettings.ToJsonObject(value[key.c_str()], allocator);
    }

}


string OutputGroupsInfo::GetName() const
{
    return m_name;
}

void OutputGroupsInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool OutputGroupsInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string OutputGroupsInfo::GetType() const
{
    return m_type;
}

void OutputGroupsInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool OutputGroupsInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<OutputInfo> OutputGroupsInfo::GetOutputs() const
{
    return m_outputs;
}

void OutputGroupsInfo::SetOutputs(const vector<OutputInfo>& _outputs)
{
    m_outputs = _outputs;
    m_outputsHasBeenSet = true;
}

bool OutputGroupsInfo::OutputsHasBeenSet() const
{
    return m_outputsHasBeenSet;
}

vector<DestinationInfo> OutputGroupsInfo::GetDestinations() const
{
    return m_destinations;
}

void OutputGroupsInfo::SetDestinations(const vector<DestinationInfo>& _destinations)
{
    m_destinations = _destinations;
    m_destinationsHasBeenSet = true;
}

bool OutputGroupsInfo::DestinationsHasBeenSet() const
{
    return m_destinationsHasBeenSet;
}

HlsRemuxSettingsInfo OutputGroupsInfo::GetHlsRemuxSettings() const
{
    return m_hlsRemuxSettings;
}

void OutputGroupsInfo::SetHlsRemuxSettings(const HlsRemuxSettingsInfo& _hlsRemuxSettings)
{
    m_hlsRemuxSettings = _hlsRemuxSettings;
    m_hlsRemuxSettingsHasBeenSet = true;
}

bool OutputGroupsInfo::HlsRemuxSettingsHasBeenSet() const
{
    return m_hlsRemuxSettingsHasBeenSet;
}

DashRemuxSettingsInfo OutputGroupsInfo::GetDashRemuxSettings() const
{
    return m_dashRemuxSettings;
}

void OutputGroupsInfo::SetDashRemuxSettings(const DashRemuxSettingsInfo& _dashRemuxSettings)
{
    m_dashRemuxSettings = _dashRemuxSettings;
    m_dashRemuxSettingsHasBeenSet = true;
}

bool OutputGroupsInfo::DashRemuxSettingsHasBeenSet() const
{
    return m_dashRemuxSettingsHasBeenSet;
}

DrmSettingsInfo OutputGroupsInfo::GetDrmSettings() const
{
    return m_drmSettings;
}

void OutputGroupsInfo::SetDrmSettings(const DrmSettingsInfo& _drmSettings)
{
    m_drmSettings = _drmSettings;
    m_drmSettingsHasBeenSet = true;
}

bool OutputGroupsInfo::DrmSettingsHasBeenSet() const
{
    return m_drmSettingsHasBeenSet;
}

MediaPackageSettingsInfo OutputGroupsInfo::GetMediaPackageSettings() const
{
    return m_mediaPackageSettings;
}

void OutputGroupsInfo::SetMediaPackageSettings(const MediaPackageSettingsInfo& _mediaPackageSettings)
{
    m_mediaPackageSettings = _mediaPackageSettings;
    m_mediaPackageSettingsHasBeenSet = true;
}

bool OutputGroupsInfo::MediaPackageSettingsHasBeenSet() const
{
    return m_mediaPackageSettingsHasBeenSet;
}


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

#include <tencentcloud/mdl/v20200326/model/DrmSettingsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

DrmSettingsInfo::DrmSettingsInfo() :
    m_stateHasBeenSet(false),
    m_schemeHasBeenSet(false),
    m_contentIdHasBeenSet(false),
    m_keysHasBeenSet(false),
    m_sDMCSettingsHasBeenSet(false),
    m_drmTypeHasBeenSet(false)
{
}

CoreInternalOutcome DrmSettingsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrmSettingsInfo.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Scheme") && !value["Scheme"].IsNull())
    {
        if (!value["Scheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrmSettingsInfo.Scheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheme = string(value["Scheme"].GetString());
        m_schemeHasBeenSet = true;
    }

    if (value.HasMember("ContentId") && !value["ContentId"].IsNull())
    {
        if (!value["ContentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrmSettingsInfo.ContentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentId = string(value["ContentId"].GetString());
        m_contentIdHasBeenSet = true;
    }

    if (value.HasMember("Keys") && !value["Keys"].IsNull())
    {
        if (!value["Keys"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DrmSettingsInfo.Keys` is not array type"));

        const rapidjson::Value &tmpValue = value["Keys"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DrmKey item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_keys.push_back(item);
        }
        m_keysHasBeenSet = true;
    }

    if (value.HasMember("SDMCSettings") && !value["SDMCSettings"].IsNull())
    {
        if (!value["SDMCSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DrmSettingsInfo.SDMCSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sDMCSettings.Deserialize(value["SDMCSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sDMCSettingsHasBeenSet = true;
    }

    if (value.HasMember("DrmType") && !value["DrmType"].IsNull())
    {
        if (!value["DrmType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrmSettingsInfo.DrmType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drmType = string(value["DrmType"].GetString());
        m_drmTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DrmSettingsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_schemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheme.c_str(), allocator).Move(), allocator);
    }

    if (m_contentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentId.c_str(), allocator).Move(), allocator);
    }

    if (m_keysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keys.begin(); itr != m_keys.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sDMCSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SDMCSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sDMCSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_drmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrmType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drmType.c_str(), allocator).Move(), allocator);
    }

}


string DrmSettingsInfo::GetState() const
{
    return m_state;
}

void DrmSettingsInfo::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DrmSettingsInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string DrmSettingsInfo::GetScheme() const
{
    return m_scheme;
}

void DrmSettingsInfo::SetScheme(const string& _scheme)
{
    m_scheme = _scheme;
    m_schemeHasBeenSet = true;
}

bool DrmSettingsInfo::SchemeHasBeenSet() const
{
    return m_schemeHasBeenSet;
}

string DrmSettingsInfo::GetContentId() const
{
    return m_contentId;
}

void DrmSettingsInfo::SetContentId(const string& _contentId)
{
    m_contentId = _contentId;
    m_contentIdHasBeenSet = true;
}

bool DrmSettingsInfo::ContentIdHasBeenSet() const
{
    return m_contentIdHasBeenSet;
}

vector<DrmKey> DrmSettingsInfo::GetKeys() const
{
    return m_keys;
}

void DrmSettingsInfo::SetKeys(const vector<DrmKey>& _keys)
{
    m_keys = _keys;
    m_keysHasBeenSet = true;
}

bool DrmSettingsInfo::KeysHasBeenSet() const
{
    return m_keysHasBeenSet;
}

SDMCSettingsInfo DrmSettingsInfo::GetSDMCSettings() const
{
    return m_sDMCSettings;
}

void DrmSettingsInfo::SetSDMCSettings(const SDMCSettingsInfo& _sDMCSettings)
{
    m_sDMCSettings = _sDMCSettings;
    m_sDMCSettingsHasBeenSet = true;
}

bool DrmSettingsInfo::SDMCSettingsHasBeenSet() const
{
    return m_sDMCSettingsHasBeenSet;
}

string DrmSettingsInfo::GetDrmType() const
{
    return m_drmType;
}

void DrmSettingsInfo::SetDrmType(const string& _drmType)
{
    m_drmType = _drmType;
    m_drmTypeHasBeenSet = true;
}

bool DrmSettingsInfo::DrmTypeHasBeenSet() const
{
    return m_drmTypeHasBeenSet;
}


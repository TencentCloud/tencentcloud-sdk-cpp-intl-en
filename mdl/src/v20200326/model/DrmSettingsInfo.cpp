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

#include <tencentcloud/mdl/v20200326/model/DrmSettingsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace rapidjson;
using namespace std;

DrmSettingsInfo::DrmSettingsInfo() :
    m_stateHasBeenSet(false),
    m_contentIdHasBeenSet(false),
    m_schemeHasBeenSet(false),
    m_keysHasBeenSet(false)
{
}

CoreInternalOutcome DrmSettingsInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Error("response `DrmSettingsInfo.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("ContentId") && !value["ContentId"].IsNull())
    {
        if (!value["ContentId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DrmSettingsInfo.ContentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentId = string(value["ContentId"].GetString());
        m_contentIdHasBeenSet = true;
    }

    if (value.HasMember("Scheme") && !value["Scheme"].IsNull())
    {
        if (!value["Scheme"].IsString())
        {
            return CoreInternalOutcome(Error("response `DrmSettingsInfo.Scheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheme = string(value["Scheme"].GetString());
        m_schemeHasBeenSet = true;
    }

    if (value.HasMember("Keys") && !value["Keys"].IsNull())
    {
        if (!value["Keys"].IsArray())
            return CoreInternalOutcome(Error("response `DrmSettingsInfo.Keys` is not array type"));

        const Value &tmpValue = value["Keys"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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


    return CoreInternalOutcome(true);
}

void DrmSettingsInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_stateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_contentIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ContentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_contentId.c_str(), allocator).Move(), allocator);
    }

    if (m_schemeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Scheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_scheme.c_str(), allocator).Move(), allocator);
    }

    if (m_keysHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Keys";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keys.begin(); itr != m_keys.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


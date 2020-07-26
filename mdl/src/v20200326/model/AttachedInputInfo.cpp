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

#include <tencentcloud/mdl/v20200326/model/AttachedInputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace rapidjson;
using namespace std;

AttachedInputInfo::AttachedInputInfo() :
    m_idHasBeenSet(false),
    m_audioSelectorsHasBeenSet(false)
{
}

CoreInternalOutcome AttachedInputInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Error("response `AttachedInputInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AudioSelectors") && !value["AudioSelectors"].IsNull())
    {
        if (!value["AudioSelectors"].IsArray())
            return CoreInternalOutcome(Error("response `AttachedInputInfo.AudioSelectors` is not array type"));

        const Value &tmpValue = value["AudioSelectors"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AudioSelectorInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_audioSelectors.push_back(item);
        }
        m_audioSelectorsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttachedInputInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_audioSelectorsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AudioSelectors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audioSelectors.begin(); itr != m_audioSelectors.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AttachedInputInfo::GetId() const
{
    return m_id;
}

void AttachedInputInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AttachedInputInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<AudioSelectorInfo> AttachedInputInfo::GetAudioSelectors() const
{
    return m_audioSelectors;
}

void AttachedInputInfo::SetAudioSelectors(const vector<AudioSelectorInfo>& _audioSelectors)
{
    m_audioSelectors = _audioSelectors;
    m_audioSelectorsHasBeenSet = true;
}

bool AttachedInputInfo::AudioSelectorsHasBeenSet() const
{
    return m_audioSelectorsHasBeenSet;
}


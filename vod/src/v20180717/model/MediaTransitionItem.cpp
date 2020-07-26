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

#include <tencentcloud/vod/v20180717/model/MediaTransitionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

MediaTransitionItem::MediaTransitionItem() :
    m_durationHasBeenSet(false),
    m_transitionsHasBeenSet(false)
{
}

CoreInternalOutcome MediaTransitionItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `MediaTransitionItem.Duration` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Transitions") && !value["Transitions"].IsNull())
    {
        if (!value["Transitions"].IsArray())
            return CoreInternalOutcome(Error("response `MediaTransitionItem.Transitions` is not array type"));

        const Value &tmpValue = value["Transitions"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TransitionOpertion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_transitions.push_back(item);
        }
        m_transitionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaTransitionItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_durationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_transitionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Transitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_transitions.begin(); itr != m_transitions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


double MediaTransitionItem::GetDuration() const
{
    return m_duration;
}

void MediaTransitionItem::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool MediaTransitionItem::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

vector<TransitionOpertion> MediaTransitionItem::GetTransitions() const
{
    return m_transitions;
}

void MediaTransitionItem::SetTransitions(const vector<TransitionOpertion>& _transitions)
{
    m_transitions = _transitions;
    m_transitionsHasBeenSet = true;
}

bool MediaTransitionItem::TransitionsHasBeenSet() const
{
    return m_transitionsHasBeenSet;
}


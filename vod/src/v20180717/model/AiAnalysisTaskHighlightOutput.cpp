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

#include <tencentcloud/vod/v20180717/model/AiAnalysisTaskHighlightOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

AiAnalysisTaskHighlightOutput::AiAnalysisTaskHighlightOutput() :
    m_highlightSetHasBeenSet(false)
{
}

CoreInternalOutcome AiAnalysisTaskHighlightOutput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("HighlightSet") && !value["HighlightSet"].IsNull())
    {
        if (!value["HighlightSet"].IsArray())
            return CoreInternalOutcome(Error("response `AiAnalysisTaskHighlightOutput.HighlightSet` is not array type"));

        const Value &tmpValue = value["HighlightSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaAiAnalysisHighlightItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_highlightSet.push_back(item);
        }
        m_highlightSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiAnalysisTaskHighlightOutput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_highlightSetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HighlightSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_highlightSet.begin(); itr != m_highlightSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MediaAiAnalysisHighlightItem> AiAnalysisTaskHighlightOutput::GetHighlightSet() const
{
    return m_highlightSet;
}

void AiAnalysisTaskHighlightOutput::SetHighlightSet(const vector<MediaAiAnalysisHighlightItem>& _highlightSet)
{
    m_highlightSet = _highlightSet;
    m_highlightSetHasBeenSet = true;
}

bool AiAnalysisTaskHighlightOutput::HighlightSetHasBeenSet() const
{
    return m_highlightSetHasBeenSet;
}


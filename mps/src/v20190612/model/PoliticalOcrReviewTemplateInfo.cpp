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

#include <tencentcloud/mps/v20190612/model/PoliticalOcrReviewTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

PoliticalOcrReviewTemplateInfo::PoliticalOcrReviewTemplateInfo() :
    m_switchHasBeenSet(false),
    m_blockConfidenceHasBeenSet(false),
    m_reviewConfidenceHasBeenSet(false)
{
}

CoreInternalOutcome PoliticalOcrReviewTemplateInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Error("response `PoliticalOcrReviewTemplateInfo.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("BlockConfidence") && !value["BlockConfidence"].IsNull())
    {
        if (!value["BlockConfidence"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PoliticalOcrReviewTemplateInfo.BlockConfidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockConfidence = value["BlockConfidence"].GetInt64();
        m_blockConfidenceHasBeenSet = true;
    }

    if (value.HasMember("ReviewConfidence") && !value["ReviewConfidence"].IsNull())
    {
        if (!value["ReviewConfidence"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `PoliticalOcrReviewTemplateInfo.ReviewConfidence` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reviewConfidence = value["ReviewConfidence"].GetInt64();
        m_reviewConfidenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PoliticalOcrReviewTemplateInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_blockConfidenceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BlockConfidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockConfidence, allocator);
    }

    if (m_reviewConfidenceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReviewConfidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reviewConfidence, allocator);
    }

}


string PoliticalOcrReviewTemplateInfo::GetSwitch() const
{
    return m_switch;
}

void PoliticalOcrReviewTemplateInfo::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool PoliticalOcrReviewTemplateInfo::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

int64_t PoliticalOcrReviewTemplateInfo::GetBlockConfidence() const
{
    return m_blockConfidence;
}

void PoliticalOcrReviewTemplateInfo::SetBlockConfidence(const int64_t& _blockConfidence)
{
    m_blockConfidence = _blockConfidence;
    m_blockConfidenceHasBeenSet = true;
}

bool PoliticalOcrReviewTemplateInfo::BlockConfidenceHasBeenSet() const
{
    return m_blockConfidenceHasBeenSet;
}

int64_t PoliticalOcrReviewTemplateInfo::GetReviewConfidence() const
{
    return m_reviewConfidence;
}

void PoliticalOcrReviewTemplateInfo::SetReviewConfidence(const int64_t& _reviewConfidence)
{
    m_reviewConfidence = _reviewConfidence;
    m_reviewConfidenceHasBeenSet = true;
}

bool PoliticalOcrReviewTemplateInfo::ReviewConfidenceHasBeenSet() const
{
    return m_reviewConfidenceHasBeenSet;
}


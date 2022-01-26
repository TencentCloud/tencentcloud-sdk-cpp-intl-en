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

#include <tencentcloud/mdl/v20200326/model/FailOverSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

FailOverSettings::FailOverSettings() :
    m_secondaryInputIdHasBeenSet(false),
    m_lossThresholdHasBeenSet(false),
    m_recoverBehaviorHasBeenSet(false)
{
}

CoreInternalOutcome FailOverSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecondaryInputId") && !value["SecondaryInputId"].IsNull())
    {
        if (!value["SecondaryInputId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailOverSettings.SecondaryInputId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryInputId = string(value["SecondaryInputId"].GetString());
        m_secondaryInputIdHasBeenSet = true;
    }

    if (value.HasMember("LossThreshold") && !value["LossThreshold"].IsNull())
    {
        if (!value["LossThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FailOverSettings.LossThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lossThreshold = value["LossThreshold"].GetInt64();
        m_lossThresholdHasBeenSet = true;
    }

    if (value.HasMember("RecoverBehavior") && !value["RecoverBehavior"].IsNull())
    {
        if (!value["RecoverBehavior"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailOverSettings.RecoverBehavior` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recoverBehavior = string(value["RecoverBehavior"].GetString());
        m_recoverBehaviorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FailOverSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_secondaryInputIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryInputId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondaryInputId.c_str(), allocator).Move(), allocator);
    }

    if (m_lossThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LossThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lossThreshold, allocator);
    }

    if (m_recoverBehaviorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecoverBehavior";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recoverBehavior.c_str(), allocator).Move(), allocator);
    }

}


string FailOverSettings::GetSecondaryInputId() const
{
    return m_secondaryInputId;
}

void FailOverSettings::SetSecondaryInputId(const string& _secondaryInputId)
{
    m_secondaryInputId = _secondaryInputId;
    m_secondaryInputIdHasBeenSet = true;
}

bool FailOverSettings::SecondaryInputIdHasBeenSet() const
{
    return m_secondaryInputIdHasBeenSet;
}

int64_t FailOverSettings::GetLossThreshold() const
{
    return m_lossThreshold;
}

void FailOverSettings::SetLossThreshold(const int64_t& _lossThreshold)
{
    m_lossThreshold = _lossThreshold;
    m_lossThresholdHasBeenSet = true;
}

bool FailOverSettings::LossThresholdHasBeenSet() const
{
    return m_lossThresholdHasBeenSet;
}

string FailOverSettings::GetRecoverBehavior() const
{
    return m_recoverBehavior;
}

void FailOverSettings::SetRecoverBehavior(const string& _recoverBehavior)
{
    m_recoverBehavior = _recoverBehavior;
    m_recoverBehaviorHasBeenSet = true;
}

bool FailOverSettings::RecoverBehaviorHasBeenSet() const
{
    return m_recoverBehaviorHasBeenSet;
}


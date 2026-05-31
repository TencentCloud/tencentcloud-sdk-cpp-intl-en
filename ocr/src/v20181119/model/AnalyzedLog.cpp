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

#include <tencentcloud/ocr/v20181119/model/AnalyzedLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

AnalyzedLog::AnalyzedLog() :
    m_stepKeyHasBeenSet(false),
    m_decisionHasBeenSet(false),
    m_decisionMessageHasBeenSet(false),
    m_costTimeHasBeenSet(false)
{
}

CoreInternalOutcome AnalyzedLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StepKey") && !value["StepKey"].IsNull())
    {
        if (!value["StepKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyzedLog.StepKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stepKey = string(value["StepKey"].GetString());
        m_stepKeyHasBeenSet = true;
    }

    if (value.HasMember("Decision") && !value["Decision"].IsNull())
    {
        if (!value["Decision"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyzedLog.Decision` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_decision = string(value["Decision"].GetString());
        m_decisionHasBeenSet = true;
    }

    if (value.HasMember("DecisionMessage") && !value["DecisionMessage"].IsNull())
    {
        if (!value["DecisionMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyzedLog.DecisionMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_decisionMessage = string(value["DecisionMessage"].GetString());
        m_decisionMessageHasBeenSet = true;
    }

    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalyzedLog.CostTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = value["CostTime"].GetInt64();
        m_costTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AnalyzedLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stepKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stepKey.c_str(), allocator).Move(), allocator);
    }

    if (m_decisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Decision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_decision.c_str(), allocator).Move(), allocator);
    }

    if (m_decisionMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DecisionMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_decisionMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_costTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costTime, allocator);
    }

}


string AnalyzedLog::GetStepKey() const
{
    return m_stepKey;
}

void AnalyzedLog::SetStepKey(const string& _stepKey)
{
    m_stepKey = _stepKey;
    m_stepKeyHasBeenSet = true;
}

bool AnalyzedLog::StepKeyHasBeenSet() const
{
    return m_stepKeyHasBeenSet;
}

string AnalyzedLog::GetDecision() const
{
    return m_decision;
}

void AnalyzedLog::SetDecision(const string& _decision)
{
    m_decision = _decision;
    m_decisionHasBeenSet = true;
}

bool AnalyzedLog::DecisionHasBeenSet() const
{
    return m_decisionHasBeenSet;
}

string AnalyzedLog::GetDecisionMessage() const
{
    return m_decisionMessage;
}

void AnalyzedLog::SetDecisionMessage(const string& _decisionMessage)
{
    m_decisionMessage = _decisionMessage;
    m_decisionMessageHasBeenSet = true;
}

bool AnalyzedLog::DecisionMessageHasBeenSet() const
{
    return m_decisionMessageHasBeenSet;
}

int64_t AnalyzedLog::GetCostTime() const
{
    return m_costTime;
}

void AnalyzedLog::SetCostTime(const int64_t& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool AnalyzedLog::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}


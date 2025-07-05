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

#include <tencentcloud/rce/v20201103/model/OutputRiskAssessmentInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

OutputRiskAssessmentInfo::OutputRiskAssessmentInfo() :
    m_riskLevelHasBeenSet(false),
    m_riskTypeHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_extraInfoHasBeenSet(false),
    m_tokenTimeHasBeenSet(false)
{
}

CoreInternalOutcome OutputRiskAssessmentInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRiskAssessmentInfo.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("RiskType") && !value["RiskType"].IsNull())
    {
        if (!value["RiskType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutputRiskAssessmentInfo.RiskType` is not array type"));

        const rapidjson::Value &tmpValue = value["RiskType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_riskType.push_back((*itr).GetInt64());
        }
        m_riskTypeHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRiskAssessmentInfo.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("ExtraInfo") && !value["ExtraInfo"].IsNull())
    {
        if (!value["ExtraInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OutputRiskAssessmentInfo.ExtraInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["ExtraInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OutputRiskAssessmentExtraInfoPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_extraInfo.push_back(item);
        }
        m_extraInfoHasBeenSet = true;
    }

    if (value.HasMember("TokenTime") && !value["TokenTime"].IsNull())
    {
        if (!value["TokenTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutputRiskAssessmentInfo.TokenTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tokenTime = string(value["TokenTime"].GetString());
        m_tokenTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutputRiskAssessmentInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_riskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_riskType.begin(); itr != m_riskType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_extraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extraInfo.begin(); itr != m_extraInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tokenTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tokenTime.c_str(), allocator).Move(), allocator);
    }

}


string OutputRiskAssessmentInfo::GetRiskLevel() const
{
    return m_riskLevel;
}

void OutputRiskAssessmentInfo::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool OutputRiskAssessmentInfo::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

vector<int64_t> OutputRiskAssessmentInfo::GetRiskType() const
{
    return m_riskType;
}

void OutputRiskAssessmentInfo::SetRiskType(const vector<int64_t>& _riskType)
{
    m_riskType = _riskType;
    m_riskTypeHasBeenSet = true;
}

bool OutputRiskAssessmentInfo::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}

string OutputRiskAssessmentInfo::GetDeviceId() const
{
    return m_deviceId;
}

void OutputRiskAssessmentInfo::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool OutputRiskAssessmentInfo::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

vector<OutputRiskAssessmentExtraInfoPair> OutputRiskAssessmentInfo::GetExtraInfo() const
{
    return m_extraInfo;
}

void OutputRiskAssessmentInfo::SetExtraInfo(const vector<OutputRiskAssessmentExtraInfoPair>& _extraInfo)
{
    m_extraInfo = _extraInfo;
    m_extraInfoHasBeenSet = true;
}

bool OutputRiskAssessmentInfo::ExtraInfoHasBeenSet() const
{
    return m_extraInfoHasBeenSet;
}

string OutputRiskAssessmentInfo::GetTokenTime() const
{
    return m_tokenTime;
}

void OutputRiskAssessmentInfo::SetTokenTime(const string& _tokenTime)
{
    m_tokenTime = _tokenTime;
    m_tokenTimeHasBeenSet = true;
}

bool OutputRiskAssessmentInfo::TokenTimeHasBeenSet() const
{
    return m_tokenTimeHasBeenSet;
}


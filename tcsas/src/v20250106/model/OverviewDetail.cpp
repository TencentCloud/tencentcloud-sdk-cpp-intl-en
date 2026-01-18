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

#include <tencentcloud/tcsas/v20250106/model/OverviewDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

OverviewDetail::OverviewDetail() :
    m_dataTimeHasBeenSet(false),
    m_mNPNameHasBeenSet(false),
    m_mNPTypeHasBeenSet(false),
    m_estimatedEarningsHasBeenSet(false),
    m_requestsNumberHasBeenSet(false),
    m_impressionsHasBeenSet(false),
    m_eCPMHasBeenSet(false),
    m_clicksNumberHasBeenSet(false)
{
}

CoreInternalOutcome OverviewDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataTime") && !value["DataTime"].IsNull())
    {
        if (!value["DataTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewDetail.DataTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataTime = string(value["DataTime"].GetString());
        m_dataTimeHasBeenSet = true;
    }

    if (value.HasMember("MNPName") && !value["MNPName"].IsNull())
    {
        if (!value["MNPName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewDetail.MNPName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPName = string(value["MNPName"].GetString());
        m_mNPNameHasBeenSet = true;
    }

    if (value.HasMember("MNPType") && !value["MNPType"].IsNull())
    {
        if (!value["MNPType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewDetail.MNPType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPType = string(value["MNPType"].GetString());
        m_mNPTypeHasBeenSet = true;
    }

    if (value.HasMember("EstimatedEarnings") && !value["EstimatedEarnings"].IsNull())
    {
        if (!value["EstimatedEarnings"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewDetail.EstimatedEarnings` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_estimatedEarnings = string(value["EstimatedEarnings"].GetString());
        m_estimatedEarningsHasBeenSet = true;
    }

    if (value.HasMember("RequestsNumber") && !value["RequestsNumber"].IsNull())
    {
        if (!value["RequestsNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewDetail.RequestsNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_requestsNumber = value["RequestsNumber"].GetInt64();
        m_requestsNumberHasBeenSet = true;
    }

    if (value.HasMember("Impressions") && !value["Impressions"].IsNull())
    {
        if (!value["Impressions"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewDetail.Impressions` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_impressions = value["Impressions"].GetInt64();
        m_impressionsHasBeenSet = true;
    }

    if (value.HasMember("ECPM") && !value["ECPM"].IsNull())
    {
        if (!value["ECPM"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewDetail.ECPM` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eCPM = string(value["ECPM"].GetString());
        m_eCPMHasBeenSet = true;
    }

    if (value.HasMember("ClicksNumber") && !value["ClicksNumber"].IsNull())
    {
        if (!value["ClicksNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewDetail.ClicksNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clicksNumber = value["ClicksNumber"].GetInt64();
        m_clicksNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverviewDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataTime.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPName.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPType.c_str(), allocator).Move(), allocator);
    }

    if (m_estimatedEarningsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EstimatedEarnings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_estimatedEarnings.c_str(), allocator).Move(), allocator);
    }

    if (m_requestsNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestsNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestsNumber, allocator);
    }

    if (m_impressionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Impressions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_impressions, allocator);
    }

    if (m_eCPMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ECPM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eCPM.c_str(), allocator).Move(), allocator);
    }

    if (m_clicksNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClicksNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clicksNumber, allocator);
    }

}


string OverviewDetail::GetDataTime() const
{
    return m_dataTime;
}

void OverviewDetail::SetDataTime(const string& _dataTime)
{
    m_dataTime = _dataTime;
    m_dataTimeHasBeenSet = true;
}

bool OverviewDetail::DataTimeHasBeenSet() const
{
    return m_dataTimeHasBeenSet;
}

string OverviewDetail::GetMNPName() const
{
    return m_mNPName;
}

void OverviewDetail::SetMNPName(const string& _mNPName)
{
    m_mNPName = _mNPName;
    m_mNPNameHasBeenSet = true;
}

bool OverviewDetail::MNPNameHasBeenSet() const
{
    return m_mNPNameHasBeenSet;
}

string OverviewDetail::GetMNPType() const
{
    return m_mNPType;
}

void OverviewDetail::SetMNPType(const string& _mNPType)
{
    m_mNPType = _mNPType;
    m_mNPTypeHasBeenSet = true;
}

bool OverviewDetail::MNPTypeHasBeenSet() const
{
    return m_mNPTypeHasBeenSet;
}

string OverviewDetail::GetEstimatedEarnings() const
{
    return m_estimatedEarnings;
}

void OverviewDetail::SetEstimatedEarnings(const string& _estimatedEarnings)
{
    m_estimatedEarnings = _estimatedEarnings;
    m_estimatedEarningsHasBeenSet = true;
}

bool OverviewDetail::EstimatedEarningsHasBeenSet() const
{
    return m_estimatedEarningsHasBeenSet;
}

int64_t OverviewDetail::GetRequestsNumber() const
{
    return m_requestsNumber;
}

void OverviewDetail::SetRequestsNumber(const int64_t& _requestsNumber)
{
    m_requestsNumber = _requestsNumber;
    m_requestsNumberHasBeenSet = true;
}

bool OverviewDetail::RequestsNumberHasBeenSet() const
{
    return m_requestsNumberHasBeenSet;
}

int64_t OverviewDetail::GetImpressions() const
{
    return m_impressions;
}

void OverviewDetail::SetImpressions(const int64_t& _impressions)
{
    m_impressions = _impressions;
    m_impressionsHasBeenSet = true;
}

bool OverviewDetail::ImpressionsHasBeenSet() const
{
    return m_impressionsHasBeenSet;
}

string OverviewDetail::GetECPM() const
{
    return m_eCPM;
}

void OverviewDetail::SetECPM(const string& _eCPM)
{
    m_eCPM = _eCPM;
    m_eCPMHasBeenSet = true;
}

bool OverviewDetail::ECPMHasBeenSet() const
{
    return m_eCPMHasBeenSet;
}

int64_t OverviewDetail::GetClicksNumber() const
{
    return m_clicksNumber;
}

void OverviewDetail::SetClicksNumber(const int64_t& _clicksNumber)
{
    m_clicksNumber = _clicksNumber;
    m_clicksNumberHasBeenSet = true;
}

bool OverviewDetail::ClicksNumberHasBeenSet() const
{
    return m_clicksNumberHasBeenSet;
}


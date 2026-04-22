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

#include <tencentcloud/tcsas/v20250106/model/MNPAdOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

MNPAdOverview::MNPAdOverview() :
    m_estimatedEarningsHasBeenSet(false),
    m_eCPMHasBeenSet(false),
    m_requestsNumberHasBeenSet(false),
    m_impressionsHasBeenSet(false),
    m_clicksNumberHasBeenSet(false)
{
}

CoreInternalOutcome MNPAdOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EstimatedEarnings") && !value["EstimatedEarnings"].IsNull())
    {
        if (!value["EstimatedEarnings"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNPAdOverview.EstimatedEarnings` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_estimatedEarnings = string(value["EstimatedEarnings"].GetString());
        m_estimatedEarningsHasBeenSet = true;
    }

    if (value.HasMember("ECPM") && !value["ECPM"].IsNull())
    {
        if (!value["ECPM"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNPAdOverview.ECPM` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eCPM = string(value["ECPM"].GetString());
        m_eCPMHasBeenSet = true;
    }

    if (value.HasMember("RequestsNumber") && !value["RequestsNumber"].IsNull())
    {
        if (!value["RequestsNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MNPAdOverview.RequestsNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_requestsNumber = value["RequestsNumber"].GetInt64();
        m_requestsNumberHasBeenSet = true;
    }

    if (value.HasMember("Impressions") && !value["Impressions"].IsNull())
    {
        if (!value["Impressions"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MNPAdOverview.Impressions` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_impressions = value["Impressions"].GetInt64();
        m_impressionsHasBeenSet = true;
    }

    if (value.HasMember("ClicksNumber") && !value["ClicksNumber"].IsNull())
    {
        if (!value["ClicksNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MNPAdOverview.ClicksNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clicksNumber = value["ClicksNumber"].GetInt64();
        m_clicksNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MNPAdOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_estimatedEarningsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EstimatedEarnings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_estimatedEarnings.c_str(), allocator).Move(), allocator);
    }

    if (m_eCPMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ECPM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eCPM.c_str(), allocator).Move(), allocator);
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

    if (m_clicksNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClicksNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clicksNumber, allocator);
    }

}


string MNPAdOverview::GetEstimatedEarnings() const
{
    return m_estimatedEarnings;
}

void MNPAdOverview::SetEstimatedEarnings(const string& _estimatedEarnings)
{
    m_estimatedEarnings = _estimatedEarnings;
    m_estimatedEarningsHasBeenSet = true;
}

bool MNPAdOverview::EstimatedEarningsHasBeenSet() const
{
    return m_estimatedEarningsHasBeenSet;
}

string MNPAdOverview::GetECPM() const
{
    return m_eCPM;
}

void MNPAdOverview::SetECPM(const string& _eCPM)
{
    m_eCPM = _eCPM;
    m_eCPMHasBeenSet = true;
}

bool MNPAdOverview::ECPMHasBeenSet() const
{
    return m_eCPMHasBeenSet;
}

int64_t MNPAdOverview::GetRequestsNumber() const
{
    return m_requestsNumber;
}

void MNPAdOverview::SetRequestsNumber(const int64_t& _requestsNumber)
{
    m_requestsNumber = _requestsNumber;
    m_requestsNumberHasBeenSet = true;
}

bool MNPAdOverview::RequestsNumberHasBeenSet() const
{
    return m_requestsNumberHasBeenSet;
}

int64_t MNPAdOverview::GetImpressions() const
{
    return m_impressions;
}

void MNPAdOverview::SetImpressions(const int64_t& _impressions)
{
    m_impressions = _impressions;
    m_impressionsHasBeenSet = true;
}

bool MNPAdOverview::ImpressionsHasBeenSet() const
{
    return m_impressionsHasBeenSet;
}

int64_t MNPAdOverview::GetClicksNumber() const
{
    return m_clicksNumber;
}

void MNPAdOverview::SetClicksNumber(const int64_t& _clicksNumber)
{
    m_clicksNumber = _clicksNumber;
    m_clicksNumberHasBeenSet = true;
}

bool MNPAdOverview::ClicksNumberHasBeenSet() const
{
    return m_clicksNumberHasBeenSet;
}


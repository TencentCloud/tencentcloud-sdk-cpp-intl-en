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

#include <tencentcloud/tcsas/v20250106/model/AdvertDataOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

AdvertDataOverview::AdvertDataOverview() :
    m_estimatedEarningsHasBeenSet(false),
    m_requestsNumberHasBeenSet(false),
    m_impressionsHasBeenSet(false),
    m_clicksNumberHasBeenSet(false),
    m_eCPMHasBeenSet(false)
{
}

CoreInternalOutcome AdvertDataOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EstimatedEarnings") && !value["EstimatedEarnings"].IsNull())
    {
        if (!value["EstimatedEarnings"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvertDataOverview.EstimatedEarnings` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_estimatedEarnings = string(value["EstimatedEarnings"].GetString());
        m_estimatedEarningsHasBeenSet = true;
    }

    if (value.HasMember("RequestsNumber") && !value["RequestsNumber"].IsNull())
    {
        if (!value["RequestsNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AdvertDataOverview.RequestsNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_requestsNumber = value["RequestsNumber"].GetInt64();
        m_requestsNumberHasBeenSet = true;
    }

    if (value.HasMember("Impressions") && !value["Impressions"].IsNull())
    {
        if (!value["Impressions"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AdvertDataOverview.Impressions` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_impressions = value["Impressions"].GetInt64();
        m_impressionsHasBeenSet = true;
    }

    if (value.HasMember("ClicksNumber") && !value["ClicksNumber"].IsNull())
    {
        if (!value["ClicksNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AdvertDataOverview.ClicksNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_clicksNumber = value["ClicksNumber"].GetInt64();
        m_clicksNumberHasBeenSet = true;
    }

    if (value.HasMember("ECPM") && !value["ECPM"].IsNull())
    {
        if (!value["ECPM"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvertDataOverview.ECPM` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eCPM = string(value["ECPM"].GetString());
        m_eCPMHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdvertDataOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_clicksNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClicksNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clicksNumber, allocator);
    }

    if (m_eCPMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ECPM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eCPM.c_str(), allocator).Move(), allocator);
    }

}


string AdvertDataOverview::GetEstimatedEarnings() const
{
    return m_estimatedEarnings;
}

void AdvertDataOverview::SetEstimatedEarnings(const string& _estimatedEarnings)
{
    m_estimatedEarnings = _estimatedEarnings;
    m_estimatedEarningsHasBeenSet = true;
}

bool AdvertDataOverview::EstimatedEarningsHasBeenSet() const
{
    return m_estimatedEarningsHasBeenSet;
}

int64_t AdvertDataOverview::GetRequestsNumber() const
{
    return m_requestsNumber;
}

void AdvertDataOverview::SetRequestsNumber(const int64_t& _requestsNumber)
{
    m_requestsNumber = _requestsNumber;
    m_requestsNumberHasBeenSet = true;
}

bool AdvertDataOverview::RequestsNumberHasBeenSet() const
{
    return m_requestsNumberHasBeenSet;
}

int64_t AdvertDataOverview::GetImpressions() const
{
    return m_impressions;
}

void AdvertDataOverview::SetImpressions(const int64_t& _impressions)
{
    m_impressions = _impressions;
    m_impressionsHasBeenSet = true;
}

bool AdvertDataOverview::ImpressionsHasBeenSet() const
{
    return m_impressionsHasBeenSet;
}

int64_t AdvertDataOverview::GetClicksNumber() const
{
    return m_clicksNumber;
}

void AdvertDataOverview::SetClicksNumber(const int64_t& _clicksNumber)
{
    m_clicksNumber = _clicksNumber;
    m_clicksNumberHasBeenSet = true;
}

bool AdvertDataOverview::ClicksNumberHasBeenSet() const
{
    return m_clicksNumberHasBeenSet;
}

string AdvertDataOverview::GetECPM() const
{
    return m_eCPM;
}

void AdvertDataOverview::SetECPM(const string& _eCPM)
{
    m_eCPM = _eCPM;
    m_eCPMHasBeenSet = true;
}

bool AdvertDataOverview::ECPMHasBeenSet() const
{
    return m_eCPMHasBeenSet;
}


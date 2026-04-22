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

#include <tencentcloud/tcsas/v20250106/model/AdTrendChart.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

AdTrendChart::AdTrendChart() :
    m_estimatedEarningsHasBeenSet(false),
    m_requestsNumberHasBeenSet(false),
    m_impressionsHasBeenSet(false),
    m_eCPMHasBeenSet(false),
    m_clicksNumberHasBeenSet(false)
{
}

CoreInternalOutcome AdTrendChart::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EstimatedEarnings") && !value["EstimatedEarnings"].IsNull())
    {
        if (!value["EstimatedEarnings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdTrendChart.EstimatedEarnings` is not array type"));

        const rapidjson::Value &tmpValue = value["EstimatedEarnings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalysisData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_estimatedEarnings.push_back(item);
        }
        m_estimatedEarningsHasBeenSet = true;
    }

    if (value.HasMember("RequestsNumber") && !value["RequestsNumber"].IsNull())
    {
        if (!value["RequestsNumber"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdTrendChart.RequestsNumber` is not array type"));

        const rapidjson::Value &tmpValue = value["RequestsNumber"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalysisData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_requestsNumber.push_back(item);
        }
        m_requestsNumberHasBeenSet = true;
    }

    if (value.HasMember("Impressions") && !value["Impressions"].IsNull())
    {
        if (!value["Impressions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdTrendChart.Impressions` is not array type"));

        const rapidjson::Value &tmpValue = value["Impressions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalysisData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_impressions.push_back(item);
        }
        m_impressionsHasBeenSet = true;
    }

    if (value.HasMember("ECPM") && !value["ECPM"].IsNull())
    {
        if (!value["ECPM"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdTrendChart.ECPM` is not array type"));

        const rapidjson::Value &tmpValue = value["ECPM"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalysisData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eCPM.push_back(item);
        }
        m_eCPMHasBeenSet = true;
    }

    if (value.HasMember("ClicksNumber") && !value["ClicksNumber"].IsNull())
    {
        if (!value["ClicksNumber"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdTrendChart.ClicksNumber` is not array type"));

        const rapidjson::Value &tmpValue = value["ClicksNumber"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AnalysisData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_clicksNumber.push_back(item);
        }
        m_clicksNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdTrendChart::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_estimatedEarningsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EstimatedEarnings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_estimatedEarnings.begin(); itr != m_estimatedEarnings.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_requestsNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestsNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_requestsNumber.begin(); itr != m_requestsNumber.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_impressionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Impressions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_impressions.begin(); itr != m_impressions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_eCPMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ECPM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eCPM.begin(); itr != m_eCPM.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_clicksNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClicksNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clicksNumber.begin(); itr != m_clicksNumber.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<AnalysisData> AdTrendChart::GetEstimatedEarnings() const
{
    return m_estimatedEarnings;
}

void AdTrendChart::SetEstimatedEarnings(const vector<AnalysisData>& _estimatedEarnings)
{
    m_estimatedEarnings = _estimatedEarnings;
    m_estimatedEarningsHasBeenSet = true;
}

bool AdTrendChart::EstimatedEarningsHasBeenSet() const
{
    return m_estimatedEarningsHasBeenSet;
}

vector<AnalysisData> AdTrendChart::GetRequestsNumber() const
{
    return m_requestsNumber;
}

void AdTrendChart::SetRequestsNumber(const vector<AnalysisData>& _requestsNumber)
{
    m_requestsNumber = _requestsNumber;
    m_requestsNumberHasBeenSet = true;
}

bool AdTrendChart::RequestsNumberHasBeenSet() const
{
    return m_requestsNumberHasBeenSet;
}

vector<AnalysisData> AdTrendChart::GetImpressions() const
{
    return m_impressions;
}

void AdTrendChart::SetImpressions(const vector<AnalysisData>& _impressions)
{
    m_impressions = _impressions;
    m_impressionsHasBeenSet = true;
}

bool AdTrendChart::ImpressionsHasBeenSet() const
{
    return m_impressionsHasBeenSet;
}

vector<AnalysisData> AdTrendChart::GetECPM() const
{
    return m_eCPM;
}

void AdTrendChart::SetECPM(const vector<AnalysisData>& _eCPM)
{
    m_eCPM = _eCPM;
    m_eCPMHasBeenSet = true;
}

bool AdTrendChart::ECPMHasBeenSet() const
{
    return m_eCPMHasBeenSet;
}

vector<AnalysisData> AdTrendChart::GetClicksNumber() const
{
    return m_clicksNumber;
}

void AdTrendChart::SetClicksNumber(const vector<AnalysisData>& _clicksNumber)
{
    m_clicksNumber = _clicksNumber;
    m_clicksNumberHasBeenSet = true;
}

bool AdTrendChart::ClicksNumberHasBeenSet() const
{
    return m_clicksNumberHasBeenSet;
}


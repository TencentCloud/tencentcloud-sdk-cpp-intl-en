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

#include <tencentcloud/tcsas/v20250106/model/AccessAnalysisOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

AccessAnalysisOverview::AccessAnalysisOverview() :
    m_baseDataHasBeenSet(false),
    m_overviewHasBeenSet(false),
    m_pageDataHasBeenSet(false),
    m_paymentHasBeenSet(false)
{
}

CoreInternalOutcome AccessAnalysisOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BaseData") && !value["BaseData"].IsNull())
    {
        if (!value["BaseData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccessAnalysisOverview.BaseData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_baseData.Deserialize(value["BaseData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_baseDataHasBeenSet = true;
    }

    if (value.HasMember("Overview") && !value["Overview"].IsNull())
    {
        if (!value["Overview"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccessAnalysisOverview.Overview` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_overview.Deserialize(value["Overview"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_overviewHasBeenSet = true;
    }

    if (value.HasMember("PageData") && !value["PageData"].IsNull())
    {
        if (!value["PageData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccessAnalysisOverview.PageData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pageData.Deserialize(value["PageData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pageDataHasBeenSet = true;
    }

    if (value.HasMember("Payment") && !value["Payment"].IsNull())
    {
        if (!value["Payment"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccessAnalysisOverview.Payment` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_payment.Deserialize(value["Payment"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_paymentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessAnalysisOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_baseDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_baseData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_overviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Overview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_overview.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pageDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pageData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_paymentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_payment.ToJsonObject(value[key.c_str()], allocator);
    }

}


AccessAnalysisDetail AccessAnalysisOverview::GetBaseData() const
{
    return m_baseData;
}

void AccessAnalysisOverview::SetBaseData(const AccessAnalysisDetail& _baseData)
{
    m_baseData = _baseData;
    m_baseDataHasBeenSet = true;
}

bool AccessAnalysisOverview::BaseDataHasBeenSet() const
{
    return m_baseDataHasBeenSet;
}

Overview AccessAnalysisOverview::GetOverview() const
{
    return m_overview;
}

void AccessAnalysisOverview::SetOverview(const Overview& _overview)
{
    m_overview = _overview;
    m_overviewHasBeenSet = true;
}

bool AccessAnalysisOverview::OverviewHasBeenSet() const
{
    return m_overviewHasBeenSet;
}

AccessAnalysisDetail AccessAnalysisOverview::GetPageData() const
{
    return m_pageData;
}

void AccessAnalysisOverview::SetPageData(const AccessAnalysisDetail& _pageData)
{
    m_pageData = _pageData;
    m_pageDataHasBeenSet = true;
}

bool AccessAnalysisOverview::PageDataHasBeenSet() const
{
    return m_pageDataHasBeenSet;
}

AccessAnalysisDetail AccessAnalysisOverview::GetPayment() const
{
    return m_payment;
}

void AccessAnalysisOverview::SetPayment(const AccessAnalysisDetail& _payment)
{
    m_payment = _payment;
    m_paymentHasBeenSet = true;
}

bool AccessAnalysisOverview::PaymentHasBeenSet() const
{
    return m_paymentHasBeenSet;
}


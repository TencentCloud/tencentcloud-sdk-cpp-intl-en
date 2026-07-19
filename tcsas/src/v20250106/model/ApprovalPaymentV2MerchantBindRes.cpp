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

#include <tencentcloud/tcsas/v20250106/model/ApprovalPaymentV2MerchantBindRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

ApprovalPaymentV2MerchantBindRes::ApprovalPaymentV2MerchantBindRes() :
    m_resultHasBeenSet(false),
    m_iDHasBeenSet(false)
{
}

CoreInternalOutcome ApprovalPaymentV2MerchantBindRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApprovalPaymentV2MerchantBindRes.Result` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_result = value["Result"].GetBool();
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApprovalPaymentV2MerchantBindRes.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApprovalPaymentV2MerchantBindRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

}


bool ApprovalPaymentV2MerchantBindRes::GetResult() const
{
    return m_result;
}

void ApprovalPaymentV2MerchantBindRes::SetResult(const bool& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool ApprovalPaymentV2MerchantBindRes::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

uint64_t ApprovalPaymentV2MerchantBindRes::GetID() const
{
    return m_iD;
}

void ApprovalPaymentV2MerchantBindRes::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ApprovalPaymentV2MerchantBindRes::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}


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

#include <tencentcloud/tcsas/v20250106/model/MerchantBindApprovalResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

MerchantBindApprovalResp::MerchantBindApprovalResp() :
    m_approvalResultHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

CoreInternalOutcome MerchantBindApprovalResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApprovalResult") && !value["ApprovalResult"].IsNull())
    {
        if (!value["ApprovalResult"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantBindApprovalResp.ApprovalResult` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_approvalResult = value["ApprovalResult"].GetBool();
        m_approvalResultHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantBindApprovalResp.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MerchantBindApprovalResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_approvalResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approvalResult, allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

}


bool MerchantBindApprovalResp::GetApprovalResult() const
{
    return m_approvalResult;
}

void MerchantBindApprovalResp::SetApprovalResult(const bool& _approvalResult)
{
    m_approvalResult = _approvalResult;
    m_approvalResultHasBeenSet = true;
}

bool MerchantBindApprovalResp::ApprovalResultHasBeenSet() const
{
    return m_approvalResultHasBeenSet;
}

string MerchantBindApprovalResp::GetResourceId() const
{
    return m_resourceId;
}

void MerchantBindApprovalResp::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool MerchantBindApprovalResp::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}


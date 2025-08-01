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

#include <tencentcloud/tcss/v20201101/model/ScanComplianceAssetsByPolicyItemRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ScanComplianceAssetsByPolicyItemRequest::ScanComplianceAssetsByPolicyItemRequest() :
    m_customerPolicyItemIdHasBeenSet(false),
    m_customerAssetIdSetHasBeenSet(false)
{
}

string ScanComplianceAssetsByPolicyItemRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_customerPolicyItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerPolicyItemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_customerPolicyItemId, allocator);
    }

    if (m_customerAssetIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerAssetIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customerAssetIdSet.begin(); itr != m_customerAssetIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ScanComplianceAssetsByPolicyItemRequest::GetCustomerPolicyItemId() const
{
    return m_customerPolicyItemId;
}

void ScanComplianceAssetsByPolicyItemRequest::SetCustomerPolicyItemId(const uint64_t& _customerPolicyItemId)
{
    m_customerPolicyItemId = _customerPolicyItemId;
    m_customerPolicyItemIdHasBeenSet = true;
}

bool ScanComplianceAssetsByPolicyItemRequest::CustomerPolicyItemIdHasBeenSet() const
{
    return m_customerPolicyItemIdHasBeenSet;
}

vector<uint64_t> ScanComplianceAssetsByPolicyItemRequest::GetCustomerAssetIdSet() const
{
    return m_customerAssetIdSet;
}

void ScanComplianceAssetsByPolicyItemRequest::SetCustomerAssetIdSet(const vector<uint64_t>& _customerAssetIdSet)
{
    m_customerAssetIdSet = _customerAssetIdSet;
    m_customerAssetIdSetHasBeenSet = true;
}

bool ScanComplianceAssetsByPolicyItemRequest::CustomerAssetIdSetHasBeenSet() const
{
    return m_customerAssetIdSetHasBeenSet;
}



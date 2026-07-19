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

#include <tencentcloud/tcsas/v20250106/model/DescribeMNPTeamMerchantInfoRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeMNPTeamMerchantInfoRes::DescribeMNPTeamMerchantInfoRes() :
    m_merchantIDHasBeenSet(false),
    m_approvalStatusHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_merchantNameHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMNPTeamMerchantInfoRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MerchantID") && !value["MerchantID"].IsNull())
    {
        if (!value["MerchantID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPTeamMerchantInfoRes.MerchantID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantID = string(value["MerchantID"].GetString());
        m_merchantIDHasBeenSet = true;
    }

    if (value.HasMember("ApprovalStatus") && !value["ApprovalStatus"].IsNull())
    {
        if (!value["ApprovalStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPTeamMerchantInfoRes.ApprovalStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_approvalStatus = value["ApprovalStatus"].GetInt64();
        m_approvalStatusHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPTeamMerchantInfoRes.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("MerchantName") && !value["MerchantName"].IsNull())
    {
        if (!value["MerchantName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPTeamMerchantInfoRes.MerchantName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantName = string(value["MerchantName"].GetString());
        m_merchantNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeMNPTeamMerchantInfoRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_merchantIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantID.c_str(), allocator).Move(), allocator);
    }

    if (m_approvalStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_approvalStatus, allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantName.c_str(), allocator).Move(), allocator);
    }

}


string DescribeMNPTeamMerchantInfoRes::GetMerchantID() const
{
    return m_merchantID;
}

void DescribeMNPTeamMerchantInfoRes::SetMerchantID(const string& _merchantID)
{
    m_merchantID = _merchantID;
    m_merchantIDHasBeenSet = true;
}

bool DescribeMNPTeamMerchantInfoRes::MerchantIDHasBeenSet() const
{
    return m_merchantIDHasBeenSet;
}

int64_t DescribeMNPTeamMerchantInfoRes::GetApprovalStatus() const
{
    return m_approvalStatus;
}

void DescribeMNPTeamMerchantInfoRes::SetApprovalStatus(const int64_t& _approvalStatus)
{
    m_approvalStatus = _approvalStatus;
    m_approvalStatusHasBeenSet = true;
}

bool DescribeMNPTeamMerchantInfoRes::ApprovalStatusHasBeenSet() const
{
    return m_approvalStatusHasBeenSet;
}

string DescribeMNPTeamMerchantInfoRes::GetID() const
{
    return m_iD;
}

void DescribeMNPTeamMerchantInfoRes::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DescribeMNPTeamMerchantInfoRes::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string DescribeMNPTeamMerchantInfoRes::GetMerchantName() const
{
    return m_merchantName;
}

void DescribeMNPTeamMerchantInfoRes::SetMerchantName(const string& _merchantName)
{
    m_merchantName = _merchantName;
    m_merchantNameHasBeenSet = true;
}

bool DescribeMNPTeamMerchantInfoRes::MerchantNameHasBeenSet() const
{
    return m_merchantNameHasBeenSet;
}


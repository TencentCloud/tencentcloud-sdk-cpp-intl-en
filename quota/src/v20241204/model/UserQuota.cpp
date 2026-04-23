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

#include <tencentcloud/quota/v20241204/model/UserQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Quota::V20241204::Model;
using namespace std;

UserQuota::UserQuota() :
    m_memberUinHasBeenSet(false),
    m_memberNameHasBeenSet(false),
    m_quotaInstanceIdHasBeenSet(false),
    m_quotaIdHasBeenSet(false),
    m_quotaNameHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_quotaUnitHasBeenSet(false),
    m_applyTypeHasBeenSet(false),
    m_totalQuotaHasBeenSet(false),
    m_totalUsageHasBeenSet(false),
    m_quotaDescriptionHasBeenSet(false),
    m_quotaDimensionsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome UserQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MemberUin") && !value["MemberUin"].IsNull())
    {
        if (!value["MemberUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.MemberUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memberUin = value["MemberUin"].GetInt64();
        m_memberUinHasBeenSet = true;
    }

    if (value.HasMember("MemberName") && !value["MemberName"].IsNull())
    {
        if (!value["MemberName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.MemberName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberName = string(value["MemberName"].GetString());
        m_memberNameHasBeenSet = true;
    }

    if (value.HasMember("QuotaInstanceId") && !value["QuotaInstanceId"].IsNull())
    {
        if (!value["QuotaInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.QuotaInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaInstanceId = string(value["QuotaInstanceId"].GetString());
        m_quotaInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("QuotaId") && !value["QuotaId"].IsNull())
    {
        if (!value["QuotaId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.QuotaId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_quotaId = value["QuotaId"].GetInt64();
        m_quotaIdHasBeenSet = true;
    }

    if (value.HasMember("QuotaName") && !value["QuotaName"].IsNull())
    {
        if (!value["QuotaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.QuotaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaName = string(value["QuotaName"].GetString());
        m_quotaNameHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("QuotaUnit") && !value["QuotaUnit"].IsNull())
    {
        if (!value["QuotaUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.QuotaUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaUnit = string(value["QuotaUnit"].GetString());
        m_quotaUnitHasBeenSet = true;
    }

    if (value.HasMember("ApplyType") && !value["ApplyType"].IsNull())
    {
        if (!value["ApplyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.ApplyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applyType = value["ApplyType"].GetInt64();
        m_applyTypeHasBeenSet = true;
    }

    if (value.HasMember("TotalQuota") && !value["TotalQuota"].IsNull())
    {
        if (!value["TotalQuota"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.TotalQuota` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalQuota = value["TotalQuota"].GetInt64();
        m_totalQuotaHasBeenSet = true;
    }

    if (value.HasMember("TotalUsage") && !value["TotalUsage"].IsNull())
    {
        if (!value["TotalUsage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.TotalUsage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalUsage = value["TotalUsage"].GetInt64();
        m_totalUsageHasBeenSet = true;
    }

    if (value.HasMember("QuotaDescription") && !value["QuotaDescription"].IsNull())
    {
        if (!value["QuotaDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.QuotaDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaDescription = string(value["QuotaDescription"].GetString());
        m_quotaDescriptionHasBeenSet = true;
    }

    if (value.HasMember("QuotaDimensions") && !value["QuotaDimensions"].IsNull())
    {
        if (!value["QuotaDimensions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserQuota.QuotaDimensions` is not array type"));

        const rapidjson::Value &tmpValue = value["QuotaDimensions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QuotaDimension item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_quotaDimensions.push_back(item);
        }
        m_quotaDimensionsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserQuota.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_memberUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memberUin, allocator);
    }

    if (m_memberNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberName.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_quotaId, allocator);
    }

    if (m_quotaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaName.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_applyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applyType, allocator);
    }

    if (m_totalQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalQuota, allocator);
    }

    if (m_totalUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalUsage, allocator);
    }

    if (m_quotaDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaDimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaDimensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_quotaDimensions.begin(); itr != m_quotaDimensions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


int64_t UserQuota::GetMemberUin() const
{
    return m_memberUin;
}

void UserQuota::SetMemberUin(const int64_t& _memberUin)
{
    m_memberUin = _memberUin;
    m_memberUinHasBeenSet = true;
}

bool UserQuota::MemberUinHasBeenSet() const
{
    return m_memberUinHasBeenSet;
}

string UserQuota::GetMemberName() const
{
    return m_memberName;
}

void UserQuota::SetMemberName(const string& _memberName)
{
    m_memberName = _memberName;
    m_memberNameHasBeenSet = true;
}

bool UserQuota::MemberNameHasBeenSet() const
{
    return m_memberNameHasBeenSet;
}

string UserQuota::GetQuotaInstanceId() const
{
    return m_quotaInstanceId;
}

void UserQuota::SetQuotaInstanceId(const string& _quotaInstanceId)
{
    m_quotaInstanceId = _quotaInstanceId;
    m_quotaInstanceIdHasBeenSet = true;
}

bool UserQuota::QuotaInstanceIdHasBeenSet() const
{
    return m_quotaInstanceIdHasBeenSet;
}

int64_t UserQuota::GetQuotaId() const
{
    return m_quotaId;
}

void UserQuota::SetQuotaId(const int64_t& _quotaId)
{
    m_quotaId = _quotaId;
    m_quotaIdHasBeenSet = true;
}

bool UserQuota::QuotaIdHasBeenSet() const
{
    return m_quotaIdHasBeenSet;
}

string UserQuota::GetQuotaName() const
{
    return m_quotaName;
}

void UserQuota::SetQuotaName(const string& _quotaName)
{
    m_quotaName = _quotaName;
    m_quotaNameHasBeenSet = true;
}

bool UserQuota::QuotaNameHasBeenSet() const
{
    return m_quotaNameHasBeenSet;
}

string UserQuota::GetProductName() const
{
    return m_productName;
}

void UserQuota::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool UserQuota::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string UserQuota::GetQuotaUnit() const
{
    return m_quotaUnit;
}

void UserQuota::SetQuotaUnit(const string& _quotaUnit)
{
    m_quotaUnit = _quotaUnit;
    m_quotaUnitHasBeenSet = true;
}

bool UserQuota::QuotaUnitHasBeenSet() const
{
    return m_quotaUnitHasBeenSet;
}

int64_t UserQuota::GetApplyType() const
{
    return m_applyType;
}

void UserQuota::SetApplyType(const int64_t& _applyType)
{
    m_applyType = _applyType;
    m_applyTypeHasBeenSet = true;
}

bool UserQuota::ApplyTypeHasBeenSet() const
{
    return m_applyTypeHasBeenSet;
}

int64_t UserQuota::GetTotalQuota() const
{
    return m_totalQuota;
}

void UserQuota::SetTotalQuota(const int64_t& _totalQuota)
{
    m_totalQuota = _totalQuota;
    m_totalQuotaHasBeenSet = true;
}

bool UserQuota::TotalQuotaHasBeenSet() const
{
    return m_totalQuotaHasBeenSet;
}

int64_t UserQuota::GetTotalUsage() const
{
    return m_totalUsage;
}

void UserQuota::SetTotalUsage(const int64_t& _totalUsage)
{
    m_totalUsage = _totalUsage;
    m_totalUsageHasBeenSet = true;
}

bool UserQuota::TotalUsageHasBeenSet() const
{
    return m_totalUsageHasBeenSet;
}

string UserQuota::GetQuotaDescription() const
{
    return m_quotaDescription;
}

void UserQuota::SetQuotaDescription(const string& _quotaDescription)
{
    m_quotaDescription = _quotaDescription;
    m_quotaDescriptionHasBeenSet = true;
}

bool UserQuota::QuotaDescriptionHasBeenSet() const
{
    return m_quotaDescriptionHasBeenSet;
}

vector<QuotaDimension> UserQuota::GetQuotaDimensions() const
{
    return m_quotaDimensions;
}

void UserQuota::SetQuotaDimensions(const vector<QuotaDimension>& _quotaDimensions)
{
    m_quotaDimensions = _quotaDimensions;
    m_quotaDimensionsHasBeenSet = true;
}

bool UserQuota::QuotaDimensionsHasBeenSet() const
{
    return m_quotaDimensionsHasBeenSet;
}

int64_t UserQuota::GetStatus() const
{
    return m_status;
}

void UserQuota::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UserQuota::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


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

#include <tencentcloud/tcsas/v20250106/model/DescribeMNGVersionAuditInfoResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeMNGVersionAuditInfoResp::DescribeMNGVersionAuditInfoResp() :
    m_auditNoHasBeenSet(false),
    m_mNPIdHasBeenSet(false),
    m_mNPNameHasBeenSet(false),
    m_mNPIconHasBeenSet(false),
    m_mNPTypeHasBeenSet(false),
    m_mNPIntroHasBeenSet(false),
    m_mNPVersionHasBeenSet(false),
    m_mNPVersionIntroHasBeenSet(false),
    m_applyUserHasBeenSet(false),
    m_applyTimeHasBeenSet(false),
    m_auditUserHasBeenSet(false),
    m_auditTimeHasBeenSet(false),
    m_auditStatusHasBeenSet(false),
    m_mNPRelAppCountHasBeenSet(false),
    m_ageRatingsHasBeenSet(false),
    m_auditAppListHasBeenSet(false),
    m_mNPVersionIdHasBeenSet(false),
    m_isAutoAuditHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMNGVersionAuditInfoResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuditNo") && !value["AuditNo"].IsNull())
    {
        if (!value["AuditNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionAuditInfoResp.AuditNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditNo = string(value["AuditNo"].GetString());
        m_auditNoHasBeenSet = true;
    }

    if (value.HasMember("MNPId") && !value["MNPId"].IsNull())
    {
        if (!value["MNPId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionAuditInfoResp.MNPId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPId = string(value["MNPId"].GetString());
        m_mNPIdHasBeenSet = true;
    }

    if (value.HasMember("MNPName") && !value["MNPName"].IsNull())
    {
        if (!value["MNPName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionAuditInfoResp.MNPName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPName = string(value["MNPName"].GetString());
        m_mNPNameHasBeenSet = true;
    }

    if (value.HasMember("MNPIcon") && !value["MNPIcon"].IsNull())
    {
        if (!value["MNPIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionAuditInfoResp.MNPIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPIcon = string(value["MNPIcon"].GetString());
        m_mNPIconHasBeenSet = true;
    }

    if (value.HasMember("MNPType") && !value["MNPType"].IsNull())
    {
        if (!value["MNPType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionAuditInfoResp.MNPType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPType = string(value["MNPType"].GetString());
        m_mNPTypeHasBeenSet = true;
    }

    if (value.HasMember("MNPIntro") && !value["MNPIntro"].IsNull())
    {
        if (!value["MNPIntro"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionAuditInfoResp.MNPIntro` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPIntro = string(value["MNPIntro"].GetString());
        m_mNPIntroHasBeenSet = true;
    }

    if (value.HasMember("MNPVersion") && !value["MNPVersion"].IsNull())
    {
        if (!value["MNPVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionAuditInfoResp.MNPVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersion = string(value["MNPVersion"].GetString());
        m_mNPVersionHasBeenSet = true;
    }

    if (value.HasMember("MNPVersionIntro") && !value["MNPVersionIntro"].IsNull())
    {
        if (!value["MNPVersionIntro"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionAuditInfoResp.MNPVersionIntro` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersionIntro = string(value["MNPVersionIntro"].GetString());
        m_mNPVersionIntroHasBeenSet = true;
    }

    if (value.HasMember("ApplyUser") && !value["ApplyUser"].IsNull())
    {
        if (!value["ApplyUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionAuditInfoResp.ApplyUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyUser = string(value["ApplyUser"].GetString());
        m_applyUserHasBeenSet = true;
    }

    if (value.HasMember("ApplyTime") && !value["ApplyTime"].IsNull())
    {
        if (!value["ApplyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionAuditInfoResp.ApplyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyTime = string(value["ApplyTime"].GetString());
        m_applyTimeHasBeenSet = true;
    }

    if (value.HasMember("AuditUser") && !value["AuditUser"].IsNull())
    {
        if (!value["AuditUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionAuditInfoResp.AuditUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditUser = string(value["AuditUser"].GetString());
        m_auditUserHasBeenSet = true;
    }

    if (value.HasMember("AuditTime") && !value["AuditTime"].IsNull())
    {
        if (!value["AuditTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionAuditInfoResp.AuditTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditTime = string(value["AuditTime"].GetString());
        m_auditTimeHasBeenSet = true;
    }

    if (value.HasMember("AuditStatus") && !value["AuditStatus"].IsNull())
    {
        if (!value["AuditStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionAuditInfoResp.AuditStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_auditStatus = value["AuditStatus"].GetInt64();
        m_auditStatusHasBeenSet = true;
    }

    if (value.HasMember("MNPRelAppCount") && !value["MNPRelAppCount"].IsNull())
    {
        if (!value["MNPRelAppCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionAuditInfoResp.MNPRelAppCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mNPRelAppCount = value["MNPRelAppCount"].GetInt64();
        m_mNPRelAppCountHasBeenSet = true;
    }

    if (value.HasMember("AgeRatings") && !value["AgeRatings"].IsNull())
    {
        if (!value["AgeRatings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionAuditInfoResp.AgeRatings` is not array type"));

        const rapidjson::Value &tmpValue = value["AgeRatings"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AgeRatingItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ageRatings.push_back(item);
        }
        m_ageRatingsHasBeenSet = true;
    }

    if (value.HasMember("AuditAppList") && !value["AuditAppList"].IsNull())
    {
        if (!value["AuditAppList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionAuditInfoResp.AuditAppList` is not array type"));

        const rapidjson::Value &tmpValue = value["AuditAppList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeMNGAuditListAppInfoResp item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_auditAppList.push_back(item);
        }
        m_auditAppListHasBeenSet = true;
    }

    if (value.HasMember("MNPVersionId") && !value["MNPVersionId"].IsNull())
    {
        if (!value["MNPVersionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionAuditInfoResp.MNPVersionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersionId = value["MNPVersionId"].GetInt64();
        m_mNPVersionIdHasBeenSet = true;
    }

    if (value.HasMember("IsAutoAudit") && !value["IsAutoAudit"].IsNull())
    {
        if (!value["IsAutoAudit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGVersionAuditInfoResp.IsAutoAudit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAutoAudit = value["IsAutoAudit"].GetInt64();
        m_isAutoAuditHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeMNGVersionAuditInfoResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_auditNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditNo.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPId.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPName.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPIconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPIcon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPIcon.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPType.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPIntroHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPIntro";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPIntro.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPVersionIntroHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersionIntro";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPVersionIntro.c_str(), allocator).Move(), allocator);
    }

    if (m_applyUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyUser.c_str(), allocator).Move(), allocator);
    }

    if (m_applyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_auditUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditUser.c_str(), allocator).Move(), allocator);
    }

    if (m_auditTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditTime.c_str(), allocator).Move(), allocator);
    }

    if (m_auditStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_auditStatus, allocator);
    }

    if (m_mNPRelAppCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPRelAppCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mNPRelAppCount, allocator);
    }

    if (m_ageRatingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgeRatings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ageRatings.begin(); itr != m_ageRatings.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_auditAppListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditAppList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_auditAppList.begin(); itr != m_auditAppList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_mNPVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mNPVersionId, allocator);
    }

    if (m_isAutoAuditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAutoAudit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAutoAudit, allocator);
    }

}


string DescribeMNGVersionAuditInfoResp::GetAuditNo() const
{
    return m_auditNo;
}

void DescribeMNGVersionAuditInfoResp::SetAuditNo(const string& _auditNo)
{
    m_auditNo = _auditNo;
    m_auditNoHasBeenSet = true;
}

bool DescribeMNGVersionAuditInfoResp::AuditNoHasBeenSet() const
{
    return m_auditNoHasBeenSet;
}

string DescribeMNGVersionAuditInfoResp::GetMNPId() const
{
    return m_mNPId;
}

void DescribeMNGVersionAuditInfoResp::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool DescribeMNGVersionAuditInfoResp::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string DescribeMNGVersionAuditInfoResp::GetMNPName() const
{
    return m_mNPName;
}

void DescribeMNGVersionAuditInfoResp::SetMNPName(const string& _mNPName)
{
    m_mNPName = _mNPName;
    m_mNPNameHasBeenSet = true;
}

bool DescribeMNGVersionAuditInfoResp::MNPNameHasBeenSet() const
{
    return m_mNPNameHasBeenSet;
}

string DescribeMNGVersionAuditInfoResp::GetMNPIcon() const
{
    return m_mNPIcon;
}

void DescribeMNGVersionAuditInfoResp::SetMNPIcon(const string& _mNPIcon)
{
    m_mNPIcon = _mNPIcon;
    m_mNPIconHasBeenSet = true;
}

bool DescribeMNGVersionAuditInfoResp::MNPIconHasBeenSet() const
{
    return m_mNPIconHasBeenSet;
}

string DescribeMNGVersionAuditInfoResp::GetMNPType() const
{
    return m_mNPType;
}

void DescribeMNGVersionAuditInfoResp::SetMNPType(const string& _mNPType)
{
    m_mNPType = _mNPType;
    m_mNPTypeHasBeenSet = true;
}

bool DescribeMNGVersionAuditInfoResp::MNPTypeHasBeenSet() const
{
    return m_mNPTypeHasBeenSet;
}

string DescribeMNGVersionAuditInfoResp::GetMNPIntro() const
{
    return m_mNPIntro;
}

void DescribeMNGVersionAuditInfoResp::SetMNPIntro(const string& _mNPIntro)
{
    m_mNPIntro = _mNPIntro;
    m_mNPIntroHasBeenSet = true;
}

bool DescribeMNGVersionAuditInfoResp::MNPIntroHasBeenSet() const
{
    return m_mNPIntroHasBeenSet;
}

string DescribeMNGVersionAuditInfoResp::GetMNPVersion() const
{
    return m_mNPVersion;
}

void DescribeMNGVersionAuditInfoResp::SetMNPVersion(const string& _mNPVersion)
{
    m_mNPVersion = _mNPVersion;
    m_mNPVersionHasBeenSet = true;
}

bool DescribeMNGVersionAuditInfoResp::MNPVersionHasBeenSet() const
{
    return m_mNPVersionHasBeenSet;
}

string DescribeMNGVersionAuditInfoResp::GetMNPVersionIntro() const
{
    return m_mNPVersionIntro;
}

void DescribeMNGVersionAuditInfoResp::SetMNPVersionIntro(const string& _mNPVersionIntro)
{
    m_mNPVersionIntro = _mNPVersionIntro;
    m_mNPVersionIntroHasBeenSet = true;
}

bool DescribeMNGVersionAuditInfoResp::MNPVersionIntroHasBeenSet() const
{
    return m_mNPVersionIntroHasBeenSet;
}

string DescribeMNGVersionAuditInfoResp::GetApplyUser() const
{
    return m_applyUser;
}

void DescribeMNGVersionAuditInfoResp::SetApplyUser(const string& _applyUser)
{
    m_applyUser = _applyUser;
    m_applyUserHasBeenSet = true;
}

bool DescribeMNGVersionAuditInfoResp::ApplyUserHasBeenSet() const
{
    return m_applyUserHasBeenSet;
}

string DescribeMNGVersionAuditInfoResp::GetApplyTime() const
{
    return m_applyTime;
}

void DescribeMNGVersionAuditInfoResp::SetApplyTime(const string& _applyTime)
{
    m_applyTime = _applyTime;
    m_applyTimeHasBeenSet = true;
}

bool DescribeMNGVersionAuditInfoResp::ApplyTimeHasBeenSet() const
{
    return m_applyTimeHasBeenSet;
}

string DescribeMNGVersionAuditInfoResp::GetAuditUser() const
{
    return m_auditUser;
}

void DescribeMNGVersionAuditInfoResp::SetAuditUser(const string& _auditUser)
{
    m_auditUser = _auditUser;
    m_auditUserHasBeenSet = true;
}

bool DescribeMNGVersionAuditInfoResp::AuditUserHasBeenSet() const
{
    return m_auditUserHasBeenSet;
}

string DescribeMNGVersionAuditInfoResp::GetAuditTime() const
{
    return m_auditTime;
}

void DescribeMNGVersionAuditInfoResp::SetAuditTime(const string& _auditTime)
{
    m_auditTime = _auditTime;
    m_auditTimeHasBeenSet = true;
}

bool DescribeMNGVersionAuditInfoResp::AuditTimeHasBeenSet() const
{
    return m_auditTimeHasBeenSet;
}

int64_t DescribeMNGVersionAuditInfoResp::GetAuditStatus() const
{
    return m_auditStatus;
}

void DescribeMNGVersionAuditInfoResp::SetAuditStatus(const int64_t& _auditStatus)
{
    m_auditStatus = _auditStatus;
    m_auditStatusHasBeenSet = true;
}

bool DescribeMNGVersionAuditInfoResp::AuditStatusHasBeenSet() const
{
    return m_auditStatusHasBeenSet;
}

int64_t DescribeMNGVersionAuditInfoResp::GetMNPRelAppCount() const
{
    return m_mNPRelAppCount;
}

void DescribeMNGVersionAuditInfoResp::SetMNPRelAppCount(const int64_t& _mNPRelAppCount)
{
    m_mNPRelAppCount = _mNPRelAppCount;
    m_mNPRelAppCountHasBeenSet = true;
}

bool DescribeMNGVersionAuditInfoResp::MNPRelAppCountHasBeenSet() const
{
    return m_mNPRelAppCountHasBeenSet;
}

vector<AgeRatingItem> DescribeMNGVersionAuditInfoResp::GetAgeRatings() const
{
    return m_ageRatings;
}

void DescribeMNGVersionAuditInfoResp::SetAgeRatings(const vector<AgeRatingItem>& _ageRatings)
{
    m_ageRatings = _ageRatings;
    m_ageRatingsHasBeenSet = true;
}

bool DescribeMNGVersionAuditInfoResp::AgeRatingsHasBeenSet() const
{
    return m_ageRatingsHasBeenSet;
}

vector<DescribeMNGAuditListAppInfoResp> DescribeMNGVersionAuditInfoResp::GetAuditAppList() const
{
    return m_auditAppList;
}

void DescribeMNGVersionAuditInfoResp::SetAuditAppList(const vector<DescribeMNGAuditListAppInfoResp>& _auditAppList)
{
    m_auditAppList = _auditAppList;
    m_auditAppListHasBeenSet = true;
}

bool DescribeMNGVersionAuditInfoResp::AuditAppListHasBeenSet() const
{
    return m_auditAppListHasBeenSet;
}

int64_t DescribeMNGVersionAuditInfoResp::GetMNPVersionId() const
{
    return m_mNPVersionId;
}

void DescribeMNGVersionAuditInfoResp::SetMNPVersionId(const int64_t& _mNPVersionId)
{
    m_mNPVersionId = _mNPVersionId;
    m_mNPVersionIdHasBeenSet = true;
}

bool DescribeMNGVersionAuditInfoResp::MNPVersionIdHasBeenSet() const
{
    return m_mNPVersionIdHasBeenSet;
}

int64_t DescribeMNGVersionAuditInfoResp::GetIsAutoAudit() const
{
    return m_isAutoAudit;
}

void DescribeMNGVersionAuditInfoResp::SetIsAutoAudit(const int64_t& _isAutoAudit)
{
    m_isAutoAudit = _isAutoAudit;
    m_isAutoAuditHasBeenSet = true;
}

bool DescribeMNGVersionAuditInfoResp::IsAutoAuditHasBeenSet() const
{
    return m_isAutoAuditHasBeenSet;
}


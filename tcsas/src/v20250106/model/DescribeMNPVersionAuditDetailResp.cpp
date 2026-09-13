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

#include <tencentcloud/tcsas/v20250106/model/DescribeMNPVersionAuditDetailResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeMNPVersionAuditDetailResp::DescribeMNPVersionAuditDetailResp() :
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
    m_qRCodeContentHasBeenSet(false),
    m_auditNoteHasBeenSet(false),
    m_mNPVersionIdHasBeenSet(false),
    m_ageRatingsHasBeenSet(false),
    m_appAuditListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMNPVersionAuditDetailResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuditNo") && !value["AuditNo"].IsNull())
    {
        if (!value["AuditNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionAuditDetailResp.AuditNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditNo = string(value["AuditNo"].GetString());
        m_auditNoHasBeenSet = true;
    }

    if (value.HasMember("MNPId") && !value["MNPId"].IsNull())
    {
        if (!value["MNPId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionAuditDetailResp.MNPId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPId = string(value["MNPId"].GetString());
        m_mNPIdHasBeenSet = true;
    }

    if (value.HasMember("MNPName") && !value["MNPName"].IsNull())
    {
        if (!value["MNPName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionAuditDetailResp.MNPName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPName = string(value["MNPName"].GetString());
        m_mNPNameHasBeenSet = true;
    }

    if (value.HasMember("MNPIcon") && !value["MNPIcon"].IsNull())
    {
        if (!value["MNPIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionAuditDetailResp.MNPIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPIcon = string(value["MNPIcon"].GetString());
        m_mNPIconHasBeenSet = true;
    }

    if (value.HasMember("MNPType") && !value["MNPType"].IsNull())
    {
        if (!value["MNPType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionAuditDetailResp.MNPType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPType = string(value["MNPType"].GetString());
        m_mNPTypeHasBeenSet = true;
    }

    if (value.HasMember("MNPIntro") && !value["MNPIntro"].IsNull())
    {
        if (!value["MNPIntro"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionAuditDetailResp.MNPIntro` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPIntro = string(value["MNPIntro"].GetString());
        m_mNPIntroHasBeenSet = true;
    }

    if (value.HasMember("MNPVersion") && !value["MNPVersion"].IsNull())
    {
        if (!value["MNPVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionAuditDetailResp.MNPVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersion = string(value["MNPVersion"].GetString());
        m_mNPVersionHasBeenSet = true;
    }

    if (value.HasMember("MNPVersionIntro") && !value["MNPVersionIntro"].IsNull())
    {
        if (!value["MNPVersionIntro"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionAuditDetailResp.MNPVersionIntro` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersionIntro = string(value["MNPVersionIntro"].GetString());
        m_mNPVersionIntroHasBeenSet = true;
    }

    if (value.HasMember("ApplyUser") && !value["ApplyUser"].IsNull())
    {
        if (!value["ApplyUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionAuditDetailResp.ApplyUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyUser = string(value["ApplyUser"].GetString());
        m_applyUserHasBeenSet = true;
    }

    if (value.HasMember("ApplyTime") && !value["ApplyTime"].IsNull())
    {
        if (!value["ApplyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionAuditDetailResp.ApplyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyTime = string(value["ApplyTime"].GetString());
        m_applyTimeHasBeenSet = true;
    }

    if (value.HasMember("AuditUser") && !value["AuditUser"].IsNull())
    {
        if (!value["AuditUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionAuditDetailResp.AuditUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditUser = string(value["AuditUser"].GetString());
        m_auditUserHasBeenSet = true;
    }

    if (value.HasMember("AuditTime") && !value["AuditTime"].IsNull())
    {
        if (!value["AuditTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionAuditDetailResp.AuditTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditTime = string(value["AuditTime"].GetString());
        m_auditTimeHasBeenSet = true;
    }

    if (value.HasMember("AuditStatus") && !value["AuditStatus"].IsNull())
    {
        if (!value["AuditStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionAuditDetailResp.AuditStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_auditStatus = value["AuditStatus"].GetInt64();
        m_auditStatusHasBeenSet = true;
    }

    if (value.HasMember("MNPRelAppCount") && !value["MNPRelAppCount"].IsNull())
    {
        if (!value["MNPRelAppCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionAuditDetailResp.MNPRelAppCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mNPRelAppCount = value["MNPRelAppCount"].GetInt64();
        m_mNPRelAppCountHasBeenSet = true;
    }

    if (value.HasMember("QRCodeContent") && !value["QRCodeContent"].IsNull())
    {
        if (!value["QRCodeContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionAuditDetailResp.QRCodeContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qRCodeContent = string(value["QRCodeContent"].GetString());
        m_qRCodeContentHasBeenSet = true;
    }

    if (value.HasMember("AuditNote") && !value["AuditNote"].IsNull())
    {
        if (!value["AuditNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionAuditDetailResp.AuditNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_auditNote = string(value["AuditNote"].GetString());
        m_auditNoteHasBeenSet = true;
    }

    if (value.HasMember("MNPVersionId") && !value["MNPVersionId"].IsNull())
    {
        if (!value["MNPVersionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionAuditDetailResp.MNPVersionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mNPVersionId = value["MNPVersionId"].GetInt64();
        m_mNPVersionIdHasBeenSet = true;
    }

    if (value.HasMember("AgeRatings") && !value["AgeRatings"].IsNull())
    {
        if (!value["AgeRatings"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionAuditDetailResp.AgeRatings` is not array type"));

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

    if (value.HasMember("AppAuditList") && !value["AppAuditList"].IsNull())
    {
        if (!value["AppAuditList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeMNPVersionAuditDetailResp.AppAuditList` is not array type"));

        const rapidjson::Value &tmpValue = value["AppAuditList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeMNPAuditDetailAppAuditInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_appAuditList.push_back(item);
        }
        m_appAuditListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeMNPVersionAuditDetailResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_qRCodeContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QRCodeContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qRCodeContent.c_str(), allocator).Move(), allocator);
    }

    if (m_auditNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_auditNote.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mNPVersionId, allocator);
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

    if (m_appAuditListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppAuditList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_appAuditList.begin(); itr != m_appAuditList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DescribeMNPVersionAuditDetailResp::GetAuditNo() const
{
    return m_auditNo;
}

void DescribeMNPVersionAuditDetailResp::SetAuditNo(const string& _auditNo)
{
    m_auditNo = _auditNo;
    m_auditNoHasBeenSet = true;
}

bool DescribeMNPVersionAuditDetailResp::AuditNoHasBeenSet() const
{
    return m_auditNoHasBeenSet;
}

string DescribeMNPVersionAuditDetailResp::GetMNPId() const
{
    return m_mNPId;
}

void DescribeMNPVersionAuditDetailResp::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool DescribeMNPVersionAuditDetailResp::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string DescribeMNPVersionAuditDetailResp::GetMNPName() const
{
    return m_mNPName;
}

void DescribeMNPVersionAuditDetailResp::SetMNPName(const string& _mNPName)
{
    m_mNPName = _mNPName;
    m_mNPNameHasBeenSet = true;
}

bool DescribeMNPVersionAuditDetailResp::MNPNameHasBeenSet() const
{
    return m_mNPNameHasBeenSet;
}

string DescribeMNPVersionAuditDetailResp::GetMNPIcon() const
{
    return m_mNPIcon;
}

void DescribeMNPVersionAuditDetailResp::SetMNPIcon(const string& _mNPIcon)
{
    m_mNPIcon = _mNPIcon;
    m_mNPIconHasBeenSet = true;
}

bool DescribeMNPVersionAuditDetailResp::MNPIconHasBeenSet() const
{
    return m_mNPIconHasBeenSet;
}

string DescribeMNPVersionAuditDetailResp::GetMNPType() const
{
    return m_mNPType;
}

void DescribeMNPVersionAuditDetailResp::SetMNPType(const string& _mNPType)
{
    m_mNPType = _mNPType;
    m_mNPTypeHasBeenSet = true;
}

bool DescribeMNPVersionAuditDetailResp::MNPTypeHasBeenSet() const
{
    return m_mNPTypeHasBeenSet;
}

string DescribeMNPVersionAuditDetailResp::GetMNPIntro() const
{
    return m_mNPIntro;
}

void DescribeMNPVersionAuditDetailResp::SetMNPIntro(const string& _mNPIntro)
{
    m_mNPIntro = _mNPIntro;
    m_mNPIntroHasBeenSet = true;
}

bool DescribeMNPVersionAuditDetailResp::MNPIntroHasBeenSet() const
{
    return m_mNPIntroHasBeenSet;
}

string DescribeMNPVersionAuditDetailResp::GetMNPVersion() const
{
    return m_mNPVersion;
}

void DescribeMNPVersionAuditDetailResp::SetMNPVersion(const string& _mNPVersion)
{
    m_mNPVersion = _mNPVersion;
    m_mNPVersionHasBeenSet = true;
}

bool DescribeMNPVersionAuditDetailResp::MNPVersionHasBeenSet() const
{
    return m_mNPVersionHasBeenSet;
}

string DescribeMNPVersionAuditDetailResp::GetMNPVersionIntro() const
{
    return m_mNPVersionIntro;
}

void DescribeMNPVersionAuditDetailResp::SetMNPVersionIntro(const string& _mNPVersionIntro)
{
    m_mNPVersionIntro = _mNPVersionIntro;
    m_mNPVersionIntroHasBeenSet = true;
}

bool DescribeMNPVersionAuditDetailResp::MNPVersionIntroHasBeenSet() const
{
    return m_mNPVersionIntroHasBeenSet;
}

string DescribeMNPVersionAuditDetailResp::GetApplyUser() const
{
    return m_applyUser;
}

void DescribeMNPVersionAuditDetailResp::SetApplyUser(const string& _applyUser)
{
    m_applyUser = _applyUser;
    m_applyUserHasBeenSet = true;
}

bool DescribeMNPVersionAuditDetailResp::ApplyUserHasBeenSet() const
{
    return m_applyUserHasBeenSet;
}

string DescribeMNPVersionAuditDetailResp::GetApplyTime() const
{
    return m_applyTime;
}

void DescribeMNPVersionAuditDetailResp::SetApplyTime(const string& _applyTime)
{
    m_applyTime = _applyTime;
    m_applyTimeHasBeenSet = true;
}

bool DescribeMNPVersionAuditDetailResp::ApplyTimeHasBeenSet() const
{
    return m_applyTimeHasBeenSet;
}

string DescribeMNPVersionAuditDetailResp::GetAuditUser() const
{
    return m_auditUser;
}

void DescribeMNPVersionAuditDetailResp::SetAuditUser(const string& _auditUser)
{
    m_auditUser = _auditUser;
    m_auditUserHasBeenSet = true;
}

bool DescribeMNPVersionAuditDetailResp::AuditUserHasBeenSet() const
{
    return m_auditUserHasBeenSet;
}

string DescribeMNPVersionAuditDetailResp::GetAuditTime() const
{
    return m_auditTime;
}

void DescribeMNPVersionAuditDetailResp::SetAuditTime(const string& _auditTime)
{
    m_auditTime = _auditTime;
    m_auditTimeHasBeenSet = true;
}

bool DescribeMNPVersionAuditDetailResp::AuditTimeHasBeenSet() const
{
    return m_auditTimeHasBeenSet;
}

int64_t DescribeMNPVersionAuditDetailResp::GetAuditStatus() const
{
    return m_auditStatus;
}

void DescribeMNPVersionAuditDetailResp::SetAuditStatus(const int64_t& _auditStatus)
{
    m_auditStatus = _auditStatus;
    m_auditStatusHasBeenSet = true;
}

bool DescribeMNPVersionAuditDetailResp::AuditStatusHasBeenSet() const
{
    return m_auditStatusHasBeenSet;
}

int64_t DescribeMNPVersionAuditDetailResp::GetMNPRelAppCount() const
{
    return m_mNPRelAppCount;
}

void DescribeMNPVersionAuditDetailResp::SetMNPRelAppCount(const int64_t& _mNPRelAppCount)
{
    m_mNPRelAppCount = _mNPRelAppCount;
    m_mNPRelAppCountHasBeenSet = true;
}

bool DescribeMNPVersionAuditDetailResp::MNPRelAppCountHasBeenSet() const
{
    return m_mNPRelAppCountHasBeenSet;
}

string DescribeMNPVersionAuditDetailResp::GetQRCodeContent() const
{
    return m_qRCodeContent;
}

void DescribeMNPVersionAuditDetailResp::SetQRCodeContent(const string& _qRCodeContent)
{
    m_qRCodeContent = _qRCodeContent;
    m_qRCodeContentHasBeenSet = true;
}

bool DescribeMNPVersionAuditDetailResp::QRCodeContentHasBeenSet() const
{
    return m_qRCodeContentHasBeenSet;
}

string DescribeMNPVersionAuditDetailResp::GetAuditNote() const
{
    return m_auditNote;
}

void DescribeMNPVersionAuditDetailResp::SetAuditNote(const string& _auditNote)
{
    m_auditNote = _auditNote;
    m_auditNoteHasBeenSet = true;
}

bool DescribeMNPVersionAuditDetailResp::AuditNoteHasBeenSet() const
{
    return m_auditNoteHasBeenSet;
}

int64_t DescribeMNPVersionAuditDetailResp::GetMNPVersionId() const
{
    return m_mNPVersionId;
}

void DescribeMNPVersionAuditDetailResp::SetMNPVersionId(const int64_t& _mNPVersionId)
{
    m_mNPVersionId = _mNPVersionId;
    m_mNPVersionIdHasBeenSet = true;
}

bool DescribeMNPVersionAuditDetailResp::MNPVersionIdHasBeenSet() const
{
    return m_mNPVersionIdHasBeenSet;
}

vector<AgeRatingItem> DescribeMNPVersionAuditDetailResp::GetAgeRatings() const
{
    return m_ageRatings;
}

void DescribeMNPVersionAuditDetailResp::SetAgeRatings(const vector<AgeRatingItem>& _ageRatings)
{
    m_ageRatings = _ageRatings;
    m_ageRatingsHasBeenSet = true;
}

bool DescribeMNPVersionAuditDetailResp::AgeRatingsHasBeenSet() const
{
    return m_ageRatingsHasBeenSet;
}

vector<DescribeMNPAuditDetailAppAuditInfo> DescribeMNPVersionAuditDetailResp::GetAppAuditList() const
{
    return m_appAuditList;
}

void DescribeMNPVersionAuditDetailResp::SetAppAuditList(const vector<DescribeMNPAuditDetailAppAuditInfo>& _appAuditList)
{
    m_appAuditList = _appAuditList;
    m_appAuditListHasBeenSet = true;
}

bool DescribeMNPVersionAuditDetailResp::AppAuditListHasBeenSet() const
{
    return m_appAuditListHasBeenSet;
}


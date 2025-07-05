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

#include <tencentcloud/tcmpp/v20240801/model/MNPDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

MNPDetail::MNPDetail() :
    m_mNPTypeHasBeenSet(false),
    m_mNPIdHasBeenSet(false),
    m_mNPNameHasBeenSet(false),
    m_mNPIconHasBeenSet(false),
    m_mNPIntroHasBeenSet(false),
    m_mNPDescHasBeenSet(false),
    m_createUserHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_onlineStatusHasBeenSet(false),
    m_applicationsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome MNPDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MNPType") && !value["MNPType"].IsNull())
    {
        if (!value["MNPType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNPDetail.MNPType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPType = string(value["MNPType"].GetString());
        m_mNPTypeHasBeenSet = true;
    }

    if (value.HasMember("MNPId") && !value["MNPId"].IsNull())
    {
        if (!value["MNPId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNPDetail.MNPId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPId = string(value["MNPId"].GetString());
        m_mNPIdHasBeenSet = true;
    }

    if (value.HasMember("MNPName") && !value["MNPName"].IsNull())
    {
        if (!value["MNPName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNPDetail.MNPName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPName = string(value["MNPName"].GetString());
        m_mNPNameHasBeenSet = true;
    }

    if (value.HasMember("MNPIcon") && !value["MNPIcon"].IsNull())
    {
        if (!value["MNPIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNPDetail.MNPIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPIcon = string(value["MNPIcon"].GetString());
        m_mNPIconHasBeenSet = true;
    }

    if (value.HasMember("MNPIntro") && !value["MNPIntro"].IsNull())
    {
        if (!value["MNPIntro"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNPDetail.MNPIntro` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPIntro = string(value["MNPIntro"].GetString());
        m_mNPIntroHasBeenSet = true;
    }

    if (value.HasMember("MNPDesc") && !value["MNPDesc"].IsNull())
    {
        if (!value["MNPDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNPDetail.MNPDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPDesc = string(value["MNPDesc"].GetString());
        m_mNPDescHasBeenSet = true;
    }

    if (value.HasMember("CreateUser") && !value["CreateUser"].IsNull())
    {
        if (!value["CreateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MNPDetail.CreateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUser = string(value["CreateUser"].GetString());
        m_createUserHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MNPDetail.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("OnlineStatus") && !value["OnlineStatus"].IsNull())
    {
        if (!value["OnlineStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MNPDetail.OnlineStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_onlineStatus = value["OnlineStatus"].GetInt64();
        m_onlineStatusHasBeenSet = true;
    }

    if (value.HasMember("Applications") && !value["Applications"].IsNull())
    {
        if (!value["Applications"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MNPDetail.Applications` is not array type"));

        const rapidjson::Value &tmpValue = value["Applications"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApplicationSimpleInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_applications.push_back(item);
        }
        m_applicationsHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MNPDetail.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MNPDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MNPDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mNPTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPType.c_str(), allocator).Move(), allocator);
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

    if (m_mNPIntroHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPIntro";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPIntro.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_createUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUser.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_onlineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlineStatus, allocator);
    }

    if (m_applicationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Applications";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_applications.begin(); itr != m_applications.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


string MNPDetail::GetMNPType() const
{
    return m_mNPType;
}

void MNPDetail::SetMNPType(const string& _mNPType)
{
    m_mNPType = _mNPType;
    m_mNPTypeHasBeenSet = true;
}

bool MNPDetail::MNPTypeHasBeenSet() const
{
    return m_mNPTypeHasBeenSet;
}

string MNPDetail::GetMNPId() const
{
    return m_mNPId;
}

void MNPDetail::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool MNPDetail::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string MNPDetail::GetMNPName() const
{
    return m_mNPName;
}

void MNPDetail::SetMNPName(const string& _mNPName)
{
    m_mNPName = _mNPName;
    m_mNPNameHasBeenSet = true;
}

bool MNPDetail::MNPNameHasBeenSet() const
{
    return m_mNPNameHasBeenSet;
}

string MNPDetail::GetMNPIcon() const
{
    return m_mNPIcon;
}

void MNPDetail::SetMNPIcon(const string& _mNPIcon)
{
    m_mNPIcon = _mNPIcon;
    m_mNPIconHasBeenSet = true;
}

bool MNPDetail::MNPIconHasBeenSet() const
{
    return m_mNPIconHasBeenSet;
}

string MNPDetail::GetMNPIntro() const
{
    return m_mNPIntro;
}

void MNPDetail::SetMNPIntro(const string& _mNPIntro)
{
    m_mNPIntro = _mNPIntro;
    m_mNPIntroHasBeenSet = true;
}

bool MNPDetail::MNPIntroHasBeenSet() const
{
    return m_mNPIntroHasBeenSet;
}

string MNPDetail::GetMNPDesc() const
{
    return m_mNPDesc;
}

void MNPDetail::SetMNPDesc(const string& _mNPDesc)
{
    m_mNPDesc = _mNPDesc;
    m_mNPDescHasBeenSet = true;
}

bool MNPDetail::MNPDescHasBeenSet() const
{
    return m_mNPDescHasBeenSet;
}

string MNPDetail::GetCreateUser() const
{
    return m_createUser;
}

void MNPDetail::SetCreateUser(const string& _createUser)
{
    m_createUser = _createUser;
    m_createUserHasBeenSet = true;
}

bool MNPDetail::CreateUserHasBeenSet() const
{
    return m_createUserHasBeenSet;
}

int64_t MNPDetail::GetCreateTime() const
{
    return m_createTime;
}

void MNPDetail::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MNPDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t MNPDetail::GetOnlineStatus() const
{
    return m_onlineStatus;
}

void MNPDetail::SetOnlineStatus(const int64_t& _onlineStatus)
{
    m_onlineStatus = _onlineStatus;
    m_onlineStatusHasBeenSet = true;
}

bool MNPDetail::OnlineStatusHasBeenSet() const
{
    return m_onlineStatusHasBeenSet;
}

vector<ApplicationSimpleInfo> MNPDetail::GetApplications() const
{
    return m_applications;
}

void MNPDetail::SetApplications(const vector<ApplicationSimpleInfo>& _applications)
{
    m_applications = _applications;
    m_applicationsHasBeenSet = true;
}

bool MNPDetail::ApplicationsHasBeenSet() const
{
    return m_applicationsHasBeenSet;
}

vector<string> MNPDetail::GetTags() const
{
    return m_tags;
}

void MNPDetail::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool MNPDetail::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t MNPDetail::GetStatus() const
{
    return m_status;
}

void MNPDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MNPDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


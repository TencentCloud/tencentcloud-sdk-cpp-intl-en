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

#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationMNPInfoResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeApplicationMNPInfoResp::DescribeApplicationMNPInfoResp() :
    m_mNPIdHasBeenSet(false),
    m_mNPIconHasBeenSet(false),
    m_mNPNameHasBeenSet(false),
    m_mNPIntroHasBeenSet(false),
    m_createUserHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateUserHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_onlineStatusHasBeenSet(false),
    m_engineTypeHasBeenSet(false),
    m_categoryListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeApplicationMNPInfoResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MNPId") && !value["MNPId"].IsNull())
    {
        if (!value["MNPId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPInfoResp.MNPId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPId = string(value["MNPId"].GetString());
        m_mNPIdHasBeenSet = true;
    }

    if (value.HasMember("MNPIcon") && !value["MNPIcon"].IsNull())
    {
        if (!value["MNPIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPInfoResp.MNPIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPIcon = string(value["MNPIcon"].GetString());
        m_mNPIconHasBeenSet = true;
    }

    if (value.HasMember("MNPName") && !value["MNPName"].IsNull())
    {
        if (!value["MNPName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPInfoResp.MNPName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPName = string(value["MNPName"].GetString());
        m_mNPNameHasBeenSet = true;
    }

    if (value.HasMember("MNPIntro") && !value["MNPIntro"].IsNull())
    {
        if (!value["MNPIntro"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPInfoResp.MNPIntro` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mNPIntro = string(value["MNPIntro"].GetString());
        m_mNPIntroHasBeenSet = true;
    }

    if (value.HasMember("CreateUser") && !value["CreateUser"].IsNull())
    {
        if (!value["CreateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPInfoResp.CreateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUser = string(value["CreateUser"].GetString());
        m_createUserHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPInfoResp.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateUser") && !value["UpdateUser"].IsNull())
    {
        if (!value["UpdateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPInfoResp.UpdateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUser = string(value["UpdateUser"].GetString());
        m_updateUserHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPInfoResp.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("OnlineStatus") && !value["OnlineStatus"].IsNull())
    {
        if (!value["OnlineStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPInfoResp.OnlineStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_onlineStatus = value["OnlineStatus"].GetInt64();
        m_onlineStatusHasBeenSet = true;
    }

    if (value.HasMember("EngineType") && !value["EngineType"].IsNull())
    {
        if (!value["EngineType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPInfoResp.EngineType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_engineType = value["EngineType"].GetInt64();
        m_engineTypeHasBeenSet = true;
    }

    if (value.HasMember("CategoryList") && !value["CategoryList"].IsNull())
    {
        if (!value["CategoryList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationMNPInfoResp.CategoryList` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CategoryInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_categoryList.push_back(item);
        }
        m_categoryListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeApplicationMNPInfoResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mNPIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPId.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPIconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPIcon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPIcon.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPName.c_str(), allocator).Move(), allocator);
    }

    if (m_mNPIntroHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MNPIntro";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mNPIntro.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateUser.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_onlineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlineStatus, allocator);
    }

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_engineType, allocator);
    }

    if (m_categoryListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_categoryList.begin(); itr != m_categoryList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DescribeApplicationMNPInfoResp::GetMNPId() const
{
    return m_mNPId;
}

void DescribeApplicationMNPInfoResp::SetMNPId(const string& _mNPId)
{
    m_mNPId = _mNPId;
    m_mNPIdHasBeenSet = true;
}

bool DescribeApplicationMNPInfoResp::MNPIdHasBeenSet() const
{
    return m_mNPIdHasBeenSet;
}

string DescribeApplicationMNPInfoResp::GetMNPIcon() const
{
    return m_mNPIcon;
}

void DescribeApplicationMNPInfoResp::SetMNPIcon(const string& _mNPIcon)
{
    m_mNPIcon = _mNPIcon;
    m_mNPIconHasBeenSet = true;
}

bool DescribeApplicationMNPInfoResp::MNPIconHasBeenSet() const
{
    return m_mNPIconHasBeenSet;
}

string DescribeApplicationMNPInfoResp::GetMNPName() const
{
    return m_mNPName;
}

void DescribeApplicationMNPInfoResp::SetMNPName(const string& _mNPName)
{
    m_mNPName = _mNPName;
    m_mNPNameHasBeenSet = true;
}

bool DescribeApplicationMNPInfoResp::MNPNameHasBeenSet() const
{
    return m_mNPNameHasBeenSet;
}

string DescribeApplicationMNPInfoResp::GetMNPIntro() const
{
    return m_mNPIntro;
}

void DescribeApplicationMNPInfoResp::SetMNPIntro(const string& _mNPIntro)
{
    m_mNPIntro = _mNPIntro;
    m_mNPIntroHasBeenSet = true;
}

bool DescribeApplicationMNPInfoResp::MNPIntroHasBeenSet() const
{
    return m_mNPIntroHasBeenSet;
}

string DescribeApplicationMNPInfoResp::GetCreateUser() const
{
    return m_createUser;
}

void DescribeApplicationMNPInfoResp::SetCreateUser(const string& _createUser)
{
    m_createUser = _createUser;
    m_createUserHasBeenSet = true;
}

bool DescribeApplicationMNPInfoResp::CreateUserHasBeenSet() const
{
    return m_createUserHasBeenSet;
}

string DescribeApplicationMNPInfoResp::GetCreateTime() const
{
    return m_createTime;
}

void DescribeApplicationMNPInfoResp::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeApplicationMNPInfoResp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeApplicationMNPInfoResp::GetUpdateUser() const
{
    return m_updateUser;
}

void DescribeApplicationMNPInfoResp::SetUpdateUser(const string& _updateUser)
{
    m_updateUser = _updateUser;
    m_updateUserHasBeenSet = true;
}

bool DescribeApplicationMNPInfoResp::UpdateUserHasBeenSet() const
{
    return m_updateUserHasBeenSet;
}

string DescribeApplicationMNPInfoResp::GetUpdateTime() const
{
    return m_updateTime;
}

void DescribeApplicationMNPInfoResp::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DescribeApplicationMNPInfoResp::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t DescribeApplicationMNPInfoResp::GetOnlineStatus() const
{
    return m_onlineStatus;
}

void DescribeApplicationMNPInfoResp::SetOnlineStatus(const int64_t& _onlineStatus)
{
    m_onlineStatus = _onlineStatus;
    m_onlineStatusHasBeenSet = true;
}

bool DescribeApplicationMNPInfoResp::OnlineStatusHasBeenSet() const
{
    return m_onlineStatusHasBeenSet;
}

int64_t DescribeApplicationMNPInfoResp::GetEngineType() const
{
    return m_engineType;
}

void DescribeApplicationMNPInfoResp::SetEngineType(const int64_t& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool DescribeApplicationMNPInfoResp::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

vector<CategoryInfo> DescribeApplicationMNPInfoResp::GetCategoryList() const
{
    return m_categoryList;
}

void DescribeApplicationMNPInfoResp::SetCategoryList(const vector<CategoryInfo>& _categoryList)
{
    m_categoryList = _categoryList;
    m_categoryListHasBeenSet = true;
}

bool DescribeApplicationMNPInfoResp::CategoryListHasBeenSet() const
{
    return m_categoryListHasBeenSet;
}


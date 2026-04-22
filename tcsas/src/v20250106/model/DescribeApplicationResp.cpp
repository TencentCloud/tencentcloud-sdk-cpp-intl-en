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

#include <tencentcloud/tcsas/v20250106/model/DescribeApplicationResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeApplicationResp::DescribeApplicationResp() :
    m_applicationIdHasBeenSet(false),
    m_appIdentityIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_androidAppKeyHasBeenSet(false),
    m_iosAppKeyHasBeenSet(false),
    m_createUserHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateUserHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_introHasBeenSet(false),
    m_teamIdHasBeenSet(false),
    m_teamNameHasBeenSet(false),
    m_sensitiveApiCountHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_schemeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeApplicationResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationResp.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("AppIdentityId") && !value["AppIdentityId"].IsNull())
    {
        if (!value["AppIdentityId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationResp.AppIdentityId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appIdentityId = value["AppIdentityId"].GetInt64();
        m_appIdentityIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationResp.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("Logo") && !value["Logo"].IsNull())
    {
        if (!value["Logo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationResp.Logo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logo = string(value["Logo"].GetString());
        m_logoHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationResp.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("AndroidAppKey") && !value["AndroidAppKey"].IsNull())
    {
        if (!value["AndroidAppKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationResp.AndroidAppKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidAppKey = string(value["AndroidAppKey"].GetString());
        m_androidAppKeyHasBeenSet = true;
    }

    if (value.HasMember("IosAppKey") && !value["IosAppKey"].IsNull())
    {
        if (!value["IosAppKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationResp.IosAppKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iosAppKey = string(value["IosAppKey"].GetString());
        m_iosAppKeyHasBeenSet = true;
    }

    if (value.HasMember("CreateUser") && !value["CreateUser"].IsNull())
    {
        if (!value["CreateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationResp.CreateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUser = string(value["CreateUser"].GetString());
        m_createUserHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationResp.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateUser") && !value["UpdateUser"].IsNull())
    {
        if (!value["UpdateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationResp.UpdateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUser = string(value["UpdateUser"].GetString());
        m_updateUserHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationResp.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Intro") && !value["Intro"].IsNull())
    {
        if (!value["Intro"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationResp.Intro` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intro = string(value["Intro"].GetString());
        m_introHasBeenSet = true;
    }

    if (value.HasMember("TeamId") && !value["TeamId"].IsNull())
    {
        if (!value["TeamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationResp.TeamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamId = string(value["TeamId"].GetString());
        m_teamIdHasBeenSet = true;
    }

    if (value.HasMember("TeamName") && !value["TeamName"].IsNull())
    {
        if (!value["TeamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationResp.TeamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamName = string(value["TeamName"].GetString());
        m_teamNameHasBeenSet = true;
    }

    if (value.HasMember("SensitiveApiCount") && !value["SensitiveApiCount"].IsNull())
    {
        if (!value["SensitiveApiCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationResp.SensitiveApiCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveApiCount = value["SensitiveApiCount"].GetInt64();
        m_sensitiveApiCountHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationResp.ApplicationType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = value["ApplicationType"].GetInt64();
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("Scheme") && !value["Scheme"].IsNull())
    {
        if (!value["Scheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeApplicationResp.Scheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheme = string(value["Scheme"].GetString());
        m_schemeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeApplicationResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdentityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppIdentityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appIdentityId, allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_logoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logo.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_androidAppKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidAppKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidAppKey.c_str(), allocator).Move(), allocator);
    }

    if (m_iosAppKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IosAppKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iosAppKey.c_str(), allocator).Move(), allocator);
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

    if (m_introHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Intro";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intro.c_str(), allocator).Move(), allocator);
    }

    if (m_teamIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teamId.c_str(), allocator).Move(), allocator);
    }

    if (m_teamNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teamName.c_str(), allocator).Move(), allocator);
    }

    if (m_sensitiveApiCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveApiCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveApiCount, allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicationType, allocator);
    }

    if (m_schemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheme.c_str(), allocator).Move(), allocator);
    }

}


string DescribeApplicationResp::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeApplicationResp::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeApplicationResp::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

int64_t DescribeApplicationResp::GetAppIdentityId() const
{
    return m_appIdentityId;
}

void DescribeApplicationResp::SetAppIdentityId(const int64_t& _appIdentityId)
{
    m_appIdentityId = _appIdentityId;
    m_appIdentityIdHasBeenSet = true;
}

bool DescribeApplicationResp::AppIdentityIdHasBeenSet() const
{
    return m_appIdentityIdHasBeenSet;
}

string DescribeApplicationResp::GetApplicationName() const
{
    return m_applicationName;
}

void DescribeApplicationResp::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool DescribeApplicationResp::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string DescribeApplicationResp::GetLogo() const
{
    return m_logo;
}

void DescribeApplicationResp::SetLogo(const string& _logo)
{
    m_logo = _logo;
    m_logoHasBeenSet = true;
}

bool DescribeApplicationResp::LogoHasBeenSet() const
{
    return m_logoHasBeenSet;
}

string DescribeApplicationResp::GetRemark() const
{
    return m_remark;
}

void DescribeApplicationResp::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DescribeApplicationResp::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DescribeApplicationResp::GetAndroidAppKey() const
{
    return m_androidAppKey;
}

void DescribeApplicationResp::SetAndroidAppKey(const string& _androidAppKey)
{
    m_androidAppKey = _androidAppKey;
    m_androidAppKeyHasBeenSet = true;
}

bool DescribeApplicationResp::AndroidAppKeyHasBeenSet() const
{
    return m_androidAppKeyHasBeenSet;
}

string DescribeApplicationResp::GetIosAppKey() const
{
    return m_iosAppKey;
}

void DescribeApplicationResp::SetIosAppKey(const string& _iosAppKey)
{
    m_iosAppKey = _iosAppKey;
    m_iosAppKeyHasBeenSet = true;
}

bool DescribeApplicationResp::IosAppKeyHasBeenSet() const
{
    return m_iosAppKeyHasBeenSet;
}

string DescribeApplicationResp::GetCreateUser() const
{
    return m_createUser;
}

void DescribeApplicationResp::SetCreateUser(const string& _createUser)
{
    m_createUser = _createUser;
    m_createUserHasBeenSet = true;
}

bool DescribeApplicationResp::CreateUserHasBeenSet() const
{
    return m_createUserHasBeenSet;
}

string DescribeApplicationResp::GetCreateTime() const
{
    return m_createTime;
}

void DescribeApplicationResp::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeApplicationResp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeApplicationResp::GetUpdateUser() const
{
    return m_updateUser;
}

void DescribeApplicationResp::SetUpdateUser(const string& _updateUser)
{
    m_updateUser = _updateUser;
    m_updateUserHasBeenSet = true;
}

bool DescribeApplicationResp::UpdateUserHasBeenSet() const
{
    return m_updateUserHasBeenSet;
}

string DescribeApplicationResp::GetUpdateTime() const
{
    return m_updateTime;
}

void DescribeApplicationResp::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DescribeApplicationResp::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string DescribeApplicationResp::GetIntro() const
{
    return m_intro;
}

void DescribeApplicationResp::SetIntro(const string& _intro)
{
    m_intro = _intro;
    m_introHasBeenSet = true;
}

bool DescribeApplicationResp::IntroHasBeenSet() const
{
    return m_introHasBeenSet;
}

string DescribeApplicationResp::GetTeamId() const
{
    return m_teamId;
}

void DescribeApplicationResp::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool DescribeApplicationResp::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}

string DescribeApplicationResp::GetTeamName() const
{
    return m_teamName;
}

void DescribeApplicationResp::SetTeamName(const string& _teamName)
{
    m_teamName = _teamName;
    m_teamNameHasBeenSet = true;
}

bool DescribeApplicationResp::TeamNameHasBeenSet() const
{
    return m_teamNameHasBeenSet;
}

int64_t DescribeApplicationResp::GetSensitiveApiCount() const
{
    return m_sensitiveApiCount;
}

void DescribeApplicationResp::SetSensitiveApiCount(const int64_t& _sensitiveApiCount)
{
    m_sensitiveApiCount = _sensitiveApiCount;
    m_sensitiveApiCountHasBeenSet = true;
}

bool DescribeApplicationResp::SensitiveApiCountHasBeenSet() const
{
    return m_sensitiveApiCountHasBeenSet;
}

int64_t DescribeApplicationResp::GetApplicationType() const
{
    return m_applicationType;
}

void DescribeApplicationResp::SetApplicationType(const int64_t& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool DescribeApplicationResp::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string DescribeApplicationResp::GetScheme() const
{
    return m_scheme;
}

void DescribeApplicationResp::SetScheme(const string& _scheme)
{
    m_scheme = _scheme;
    m_schemeHasBeenSet = true;
}

bool DescribeApplicationResp::SchemeHasBeenSet() const
{
    return m_schemeHasBeenSet;
}


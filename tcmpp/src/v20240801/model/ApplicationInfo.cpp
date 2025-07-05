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

#include <tencentcloud/tcmpp/v20240801/model/ApplicationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

ApplicationInfo::ApplicationInfo() :
    m_customerIDHasBeenSet(false),
    m_applicationIDHasBeenSet(false),
    m_appIdentityIDHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_applicationEnglishNameHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_androidAppKeyHasBeenSet(false),
    m_iosAppKeyHasBeenSet(false),
    m_createUserHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateUserHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_introHasBeenSet(false),
    m_iosAppUrlHasBeenSet(false),
    m_androidAppUrlHasBeenSet(false),
    m_teamIdHasBeenSet(false),
    m_teamNameHasBeenSet(false),
    m_sensitiveApiCountHasBeenSet(false),
    m_applicationTypeHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomerID") && !value["CustomerID"].IsNull())
    {
        if (!value["CustomerID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.CustomerID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerID = string(value["CustomerID"].GetString());
        m_customerIDHasBeenSet = true;
    }

    if (value.HasMember("ApplicationID") && !value["ApplicationID"].IsNull())
    {
        if (!value["ApplicationID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.ApplicationID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationID = string(value["ApplicationID"].GetString());
        m_applicationIDHasBeenSet = true;
    }

    if (value.HasMember("AppIdentityID") && !value["AppIdentityID"].IsNull())
    {
        if (!value["AppIdentityID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.AppIdentityID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appIdentityID = value["AppIdentityID"].GetInt64();
        m_appIdentityIDHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationEnglishName") && !value["ApplicationEnglishName"].IsNull())
    {
        if (!value["ApplicationEnglishName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.ApplicationEnglishName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationEnglishName = string(value["ApplicationEnglishName"].GetString());
        m_applicationEnglishNameHasBeenSet = true;
    }

    if (value.HasMember("Logo") && !value["Logo"].IsNull())
    {
        if (!value["Logo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.Logo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logo = string(value["Logo"].GetString());
        m_logoHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("AndroidAppKey") && !value["AndroidAppKey"].IsNull())
    {
        if (!value["AndroidAppKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.AndroidAppKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidAppKey = string(value["AndroidAppKey"].GetString());
        m_androidAppKeyHasBeenSet = true;
    }

    if (value.HasMember("IosAppKey") && !value["IosAppKey"].IsNull())
    {
        if (!value["IosAppKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.IosAppKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iosAppKey = string(value["IosAppKey"].GetString());
        m_iosAppKeyHasBeenSet = true;
    }

    if (value.HasMember("CreateUser") && !value["CreateUser"].IsNull())
    {
        if (!value["CreateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.CreateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUser = string(value["CreateUser"].GetString());
        m_createUserHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateUser") && !value["UpdateUser"].IsNull())
    {
        if (!value["UpdateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.UpdateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUser = string(value["UpdateUser"].GetString());
        m_updateUserHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Intro") && !value["Intro"].IsNull())
    {
        if (!value["Intro"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.Intro` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intro = string(value["Intro"].GetString());
        m_introHasBeenSet = true;
    }

    if (value.HasMember("IosAppUrl") && !value["IosAppUrl"].IsNull())
    {
        if (!value["IosAppUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.IosAppUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iosAppUrl = string(value["IosAppUrl"].GetString());
        m_iosAppUrlHasBeenSet = true;
    }

    if (value.HasMember("AndroidAppUrl") && !value["AndroidAppUrl"].IsNull())
    {
        if (!value["AndroidAppUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.AndroidAppUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_androidAppUrl = string(value["AndroidAppUrl"].GetString());
        m_androidAppUrlHasBeenSet = true;
    }

    if (value.HasMember("TeamId") && !value["TeamId"].IsNull())
    {
        if (!value["TeamId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.TeamId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamId = string(value["TeamId"].GetString());
        m_teamIdHasBeenSet = true;
    }

    if (value.HasMember("TeamName") && !value["TeamName"].IsNull())
    {
        if (!value["TeamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.TeamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teamName = string(value["TeamName"].GetString());
        m_teamNameHasBeenSet = true;
    }

    if (value.HasMember("SensitiveApiCount") && !value["SensitiveApiCount"].IsNull())
    {
        if (!value["SensitiveApiCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.SensitiveApiCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveApiCount = value["SensitiveApiCount"].GetInt64();
        m_sensitiveApiCountHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationInfo.ApplicationType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = value["ApplicationType"].GetUint64();
        m_applicationTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customerIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerID.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationID.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdentityIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppIdentityID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appIdentityID, allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationEnglishNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationEnglishName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationEnglishName.c_str(), allocator).Move(), allocator);
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

    if (m_iosAppUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IosAppUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iosAppUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_androidAppUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidAppUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_androidAppUrl.c_str(), allocator).Move(), allocator);
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

}


string ApplicationInfo::GetCustomerID() const
{
    return m_customerID;
}

void ApplicationInfo::SetCustomerID(const string& _customerID)
{
    m_customerID = _customerID;
    m_customerIDHasBeenSet = true;
}

bool ApplicationInfo::CustomerIDHasBeenSet() const
{
    return m_customerIDHasBeenSet;
}

string ApplicationInfo::GetApplicationID() const
{
    return m_applicationID;
}

void ApplicationInfo::SetApplicationID(const string& _applicationID)
{
    m_applicationID = _applicationID;
    m_applicationIDHasBeenSet = true;
}

bool ApplicationInfo::ApplicationIDHasBeenSet() const
{
    return m_applicationIDHasBeenSet;
}

int64_t ApplicationInfo::GetAppIdentityID() const
{
    return m_appIdentityID;
}

void ApplicationInfo::SetAppIdentityID(const int64_t& _appIdentityID)
{
    m_appIdentityID = _appIdentityID;
    m_appIdentityIDHasBeenSet = true;
}

bool ApplicationInfo::AppIdentityIDHasBeenSet() const
{
    return m_appIdentityIDHasBeenSet;
}

string ApplicationInfo::GetApplicationName() const
{
    return m_applicationName;
}

void ApplicationInfo::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool ApplicationInfo::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string ApplicationInfo::GetApplicationEnglishName() const
{
    return m_applicationEnglishName;
}

void ApplicationInfo::SetApplicationEnglishName(const string& _applicationEnglishName)
{
    m_applicationEnglishName = _applicationEnglishName;
    m_applicationEnglishNameHasBeenSet = true;
}

bool ApplicationInfo::ApplicationEnglishNameHasBeenSet() const
{
    return m_applicationEnglishNameHasBeenSet;
}

string ApplicationInfo::GetLogo() const
{
    return m_logo;
}

void ApplicationInfo::SetLogo(const string& _logo)
{
    m_logo = _logo;
    m_logoHasBeenSet = true;
}

bool ApplicationInfo::LogoHasBeenSet() const
{
    return m_logoHasBeenSet;
}

string ApplicationInfo::GetRemark() const
{
    return m_remark;
}

void ApplicationInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ApplicationInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ApplicationInfo::GetAndroidAppKey() const
{
    return m_androidAppKey;
}

void ApplicationInfo::SetAndroidAppKey(const string& _androidAppKey)
{
    m_androidAppKey = _androidAppKey;
    m_androidAppKeyHasBeenSet = true;
}

bool ApplicationInfo::AndroidAppKeyHasBeenSet() const
{
    return m_androidAppKeyHasBeenSet;
}

string ApplicationInfo::GetIosAppKey() const
{
    return m_iosAppKey;
}

void ApplicationInfo::SetIosAppKey(const string& _iosAppKey)
{
    m_iosAppKey = _iosAppKey;
    m_iosAppKeyHasBeenSet = true;
}

bool ApplicationInfo::IosAppKeyHasBeenSet() const
{
    return m_iosAppKeyHasBeenSet;
}

string ApplicationInfo::GetCreateUser() const
{
    return m_createUser;
}

void ApplicationInfo::SetCreateUser(const string& _createUser)
{
    m_createUser = _createUser;
    m_createUserHasBeenSet = true;
}

bool ApplicationInfo::CreateUserHasBeenSet() const
{
    return m_createUserHasBeenSet;
}

string ApplicationInfo::GetCreateTime() const
{
    return m_createTime;
}

void ApplicationInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ApplicationInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ApplicationInfo::GetUpdateUser() const
{
    return m_updateUser;
}

void ApplicationInfo::SetUpdateUser(const string& _updateUser)
{
    m_updateUser = _updateUser;
    m_updateUserHasBeenSet = true;
}

bool ApplicationInfo::UpdateUserHasBeenSet() const
{
    return m_updateUserHasBeenSet;
}

string ApplicationInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void ApplicationInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ApplicationInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ApplicationInfo::GetIntro() const
{
    return m_intro;
}

void ApplicationInfo::SetIntro(const string& _intro)
{
    m_intro = _intro;
    m_introHasBeenSet = true;
}

bool ApplicationInfo::IntroHasBeenSet() const
{
    return m_introHasBeenSet;
}

string ApplicationInfo::GetIosAppUrl() const
{
    return m_iosAppUrl;
}

void ApplicationInfo::SetIosAppUrl(const string& _iosAppUrl)
{
    m_iosAppUrl = _iosAppUrl;
    m_iosAppUrlHasBeenSet = true;
}

bool ApplicationInfo::IosAppUrlHasBeenSet() const
{
    return m_iosAppUrlHasBeenSet;
}

string ApplicationInfo::GetAndroidAppUrl() const
{
    return m_androidAppUrl;
}

void ApplicationInfo::SetAndroidAppUrl(const string& _androidAppUrl)
{
    m_androidAppUrl = _androidAppUrl;
    m_androidAppUrlHasBeenSet = true;
}

bool ApplicationInfo::AndroidAppUrlHasBeenSet() const
{
    return m_androidAppUrlHasBeenSet;
}

string ApplicationInfo::GetTeamId() const
{
    return m_teamId;
}

void ApplicationInfo::SetTeamId(const string& _teamId)
{
    m_teamId = _teamId;
    m_teamIdHasBeenSet = true;
}

bool ApplicationInfo::TeamIdHasBeenSet() const
{
    return m_teamIdHasBeenSet;
}

string ApplicationInfo::GetTeamName() const
{
    return m_teamName;
}

void ApplicationInfo::SetTeamName(const string& _teamName)
{
    m_teamName = _teamName;
    m_teamNameHasBeenSet = true;
}

bool ApplicationInfo::TeamNameHasBeenSet() const
{
    return m_teamNameHasBeenSet;
}

int64_t ApplicationInfo::GetSensitiveApiCount() const
{
    return m_sensitiveApiCount;
}

void ApplicationInfo::SetSensitiveApiCount(const int64_t& _sensitiveApiCount)
{
    m_sensitiveApiCount = _sensitiveApiCount;
    m_sensitiveApiCountHasBeenSet = true;
}

bool ApplicationInfo::SensitiveApiCountHasBeenSet() const
{
    return m_sensitiveApiCountHasBeenSet;
}

uint64_t ApplicationInfo::GetApplicationType() const
{
    return m_applicationType;
}

void ApplicationInfo::SetApplicationType(const uint64_t& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool ApplicationInfo::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}


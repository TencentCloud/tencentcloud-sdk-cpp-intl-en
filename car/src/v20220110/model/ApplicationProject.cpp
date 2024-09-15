/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/car/v20220110/model/ApplicationProject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

ApplicationProject::ApplicationProject() :
    m_projectIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_isPreloadHasBeenSet(false),
    m_amountHasBeenSet(false),
    m_usingHasBeenSet(false),
    m_applicationStatusHasBeenSet(false),
    m_applicationParamsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_projectTypeHasBeenSet(false),
    m_purposeHasBeenSet(false),
    m_applicationRegionsHasBeenSet(false),
    m_concurrentRegionsHasBeenSet(false),
    m_projectCategoryHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationProject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProject.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProject.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProject.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProject.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProject.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("IsPreload") && !value["IsPreload"].IsNull())
    {
        if (!value["IsPreload"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProject.IsPreload` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPreload = value["IsPreload"].GetBool();
        m_isPreloadHasBeenSet = true;
    }

    if (value.HasMember("Amount") && !value["Amount"].IsNull())
    {
        if (!value["Amount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProject.Amount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_amount = value["Amount"].GetInt64();
        m_amountHasBeenSet = true;
    }

    if (value.HasMember("Using") && !value["Using"].IsNull())
    {
        if (!value["Using"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProject.Using` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_using = value["Using"].GetInt64();
        m_usingHasBeenSet = true;
    }

    if (value.HasMember("ApplicationStatus") && !value["ApplicationStatus"].IsNull())
    {
        if (!value["ApplicationStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProject.ApplicationStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationStatus = string(value["ApplicationStatus"].GetString());
        m_applicationStatusHasBeenSet = true;
    }

    if (value.HasMember("ApplicationParams") && !value["ApplicationParams"].IsNull())
    {
        if (!value["ApplicationParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProject.ApplicationParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationParams = string(value["ApplicationParams"].GetString());
        m_applicationParamsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProject.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProject.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProject.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }

    if (value.HasMember("ProjectType") && !value["ProjectType"].IsNull())
    {
        if (!value["ProjectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProject.ProjectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectType = string(value["ProjectType"].GetString());
        m_projectTypeHasBeenSet = true;
    }

    if (value.HasMember("Purpose") && !value["Purpose"].IsNull())
    {
        if (!value["Purpose"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProject.Purpose` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_purpose = string(value["Purpose"].GetString());
        m_purposeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationRegions") && !value["ApplicationRegions"].IsNull())
    {
        if (!value["ApplicationRegions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApplicationProject.ApplicationRegions` is not array type"));

        const rapidjson::Value &tmpValue = value["ApplicationRegions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_applicationRegions.push_back((*itr).GetString());
        }
        m_applicationRegionsHasBeenSet = true;
    }

    if (value.HasMember("ConcurrentRegions") && !value["ConcurrentRegions"].IsNull())
    {
        if (!value["ConcurrentRegions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApplicationProject.ConcurrentRegions` is not array type"));

        const rapidjson::Value &tmpValue = value["ConcurrentRegions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_concurrentRegions.push_back((*itr).GetString());
        }
        m_concurrentRegionsHasBeenSet = true;
    }

    if (value.HasMember("ProjectCategory") && !value["ProjectCategory"].IsNull())
    {
        if (!value["ProjectCategory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationProject.ProjectCategory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectCategory = string(value["ProjectCategory"].GetString());
        m_projectCategoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationProject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_isPreloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPreload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPreload, allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_amount, allocator);
    }

    if (m_usingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Using";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_using, allocator);
    }

    if (m_applicationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationParams.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_projectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectType.c_str(), allocator).Move(), allocator);
    }

    if (m_purposeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Purpose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_purpose.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationRegions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_applicationRegions.begin(); itr != m_applicationRegions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_concurrentRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcurrentRegions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_concurrentRegions.begin(); itr != m_concurrentRegions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectCategory.c_str(), allocator).Move(), allocator);
    }

}


string ApplicationProject::GetProjectId() const
{
    return m_projectId;
}

void ApplicationProject::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ApplicationProject::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ApplicationProject::GetName() const
{
    return m_name;
}

void ApplicationProject::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ApplicationProject::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ApplicationProject::GetDescription() const
{
    return m_description;
}

void ApplicationProject::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ApplicationProject::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ApplicationProject::GetType() const
{
    return m_type;
}

void ApplicationProject::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ApplicationProject::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ApplicationProject::GetApplicationId() const
{
    return m_applicationId;
}

void ApplicationProject::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ApplicationProject::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

bool ApplicationProject::GetIsPreload() const
{
    return m_isPreload;
}

void ApplicationProject::SetIsPreload(const bool& _isPreload)
{
    m_isPreload = _isPreload;
    m_isPreloadHasBeenSet = true;
}

bool ApplicationProject::IsPreloadHasBeenSet() const
{
    return m_isPreloadHasBeenSet;
}

int64_t ApplicationProject::GetAmount() const
{
    return m_amount;
}

void ApplicationProject::SetAmount(const int64_t& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool ApplicationProject::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

int64_t ApplicationProject::GetUsing() const
{
    return m_using;
}

void ApplicationProject::SetUsing(const int64_t& _using)
{
    m_using = _using;
    m_usingHasBeenSet = true;
}

bool ApplicationProject::UsingHasBeenSet() const
{
    return m_usingHasBeenSet;
}

string ApplicationProject::GetApplicationStatus() const
{
    return m_applicationStatus;
}

void ApplicationProject::SetApplicationStatus(const string& _applicationStatus)
{
    m_applicationStatus = _applicationStatus;
    m_applicationStatusHasBeenSet = true;
}

bool ApplicationProject::ApplicationStatusHasBeenSet() const
{
    return m_applicationStatusHasBeenSet;
}

string ApplicationProject::GetApplicationParams() const
{
    return m_applicationParams;
}

void ApplicationProject::SetApplicationParams(const string& _applicationParams)
{
    m_applicationParams = _applicationParams;
    m_applicationParamsHasBeenSet = true;
}

bool ApplicationProject::ApplicationParamsHasBeenSet() const
{
    return m_applicationParamsHasBeenSet;
}

string ApplicationProject::GetCreateTime() const
{
    return m_createTime;
}

void ApplicationProject::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ApplicationProject::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ApplicationProject::GetApplicationName() const
{
    return m_applicationName;
}

void ApplicationProject::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool ApplicationProject::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string ApplicationProject::GetResolution() const
{
    return m_resolution;
}

void ApplicationProject::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool ApplicationProject::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

string ApplicationProject::GetProjectType() const
{
    return m_projectType;
}

void ApplicationProject::SetProjectType(const string& _projectType)
{
    m_projectType = _projectType;
    m_projectTypeHasBeenSet = true;
}

bool ApplicationProject::ProjectTypeHasBeenSet() const
{
    return m_projectTypeHasBeenSet;
}

string ApplicationProject::GetPurpose() const
{
    return m_purpose;
}

void ApplicationProject::SetPurpose(const string& _purpose)
{
    m_purpose = _purpose;
    m_purposeHasBeenSet = true;
}

bool ApplicationProject::PurposeHasBeenSet() const
{
    return m_purposeHasBeenSet;
}

vector<string> ApplicationProject::GetApplicationRegions() const
{
    return m_applicationRegions;
}

void ApplicationProject::SetApplicationRegions(const vector<string>& _applicationRegions)
{
    m_applicationRegions = _applicationRegions;
    m_applicationRegionsHasBeenSet = true;
}

bool ApplicationProject::ApplicationRegionsHasBeenSet() const
{
    return m_applicationRegionsHasBeenSet;
}

vector<string> ApplicationProject::GetConcurrentRegions() const
{
    return m_concurrentRegions;
}

void ApplicationProject::SetConcurrentRegions(const vector<string>& _concurrentRegions)
{
    m_concurrentRegions = _concurrentRegions;
    m_concurrentRegionsHasBeenSet = true;
}

bool ApplicationProject::ConcurrentRegionsHasBeenSet() const
{
    return m_concurrentRegionsHasBeenSet;
}

string ApplicationProject::GetProjectCategory() const
{
    return m_projectCategory;
}

void ApplicationProject::SetProjectCategory(const string& _projectCategory)
{
    m_projectCategory = _projectCategory;
    m_projectCategoryHasBeenSet = true;
}

bool ApplicationProject::ProjectCategoryHasBeenSet() const
{
    return m_projectCategoryHasBeenSet;
}


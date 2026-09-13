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

#include <tencentcloud/tcsas/v20250106/model/DescribeMNGAuditListAppInfoResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

DescribeMNGAuditListAppInfoResp::DescribeMNGAuditListAppInfoResp() :
    m_applicationIdHasBeenSet(false),
    m_applicationIconHasBeenSet(false),
    m_applicationNameHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMNGAuditListAppInfoResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGAuditListAppInfoResp.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationIcon") && !value["ApplicationIcon"].IsNull())
    {
        if (!value["ApplicationIcon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGAuditListAppInfoResp.ApplicationIcon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationIcon = string(value["ApplicationIcon"].GetString());
        m_applicationIconHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMNGAuditListAppInfoResp.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeMNGAuditListAppInfoResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationIcon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationIcon.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

}


string DescribeMNGAuditListAppInfoResp::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeMNGAuditListAppInfoResp::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeMNGAuditListAppInfoResp::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string DescribeMNGAuditListAppInfoResp::GetApplicationIcon() const
{
    return m_applicationIcon;
}

void DescribeMNGAuditListAppInfoResp::SetApplicationIcon(const string& _applicationIcon)
{
    m_applicationIcon = _applicationIcon;
    m_applicationIconHasBeenSet = true;
}

bool DescribeMNGAuditListAppInfoResp::ApplicationIconHasBeenSet() const
{
    return m_applicationIconHasBeenSet;
}

string DescribeMNGAuditListAppInfoResp::GetApplicationName() const
{
    return m_applicationName;
}

void DescribeMNGAuditListAppInfoResp::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool DescribeMNGAuditListAppInfoResp::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}


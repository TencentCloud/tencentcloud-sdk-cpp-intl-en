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

#include <tencentcloud/car/v20220110/model/CreateApplicationVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

CreateApplicationVersionRequest::CreateApplicationVersionRequest() :
    m_applicationIdHasBeenSet(false),
    m_applicationFileNameHasBeenSet(false),
    m_applicationVersionRegionsHasBeenSet(false),
    m_applicationVersionUpdateModeHasBeenSet(false)
{
}

string CreateApplicationVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationFileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationVersionRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationVersionRegions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_applicationVersionRegions.begin(); itr != m_applicationVersionRegions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_applicationVersionUpdateModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationVersionUpdateMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationVersionUpdateMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateApplicationVersionRequest::GetApplicationId() const
{
    return m_applicationId;
}

void CreateApplicationVersionRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool CreateApplicationVersionRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string CreateApplicationVersionRequest::GetApplicationFileName() const
{
    return m_applicationFileName;
}

void CreateApplicationVersionRequest::SetApplicationFileName(const string& _applicationFileName)
{
    m_applicationFileName = _applicationFileName;
    m_applicationFileNameHasBeenSet = true;
}

bool CreateApplicationVersionRequest::ApplicationFileNameHasBeenSet() const
{
    return m_applicationFileNameHasBeenSet;
}

vector<string> CreateApplicationVersionRequest::GetApplicationVersionRegions() const
{
    return m_applicationVersionRegions;
}

void CreateApplicationVersionRequest::SetApplicationVersionRegions(const vector<string>& _applicationVersionRegions)
{
    m_applicationVersionRegions = _applicationVersionRegions;
    m_applicationVersionRegionsHasBeenSet = true;
}

bool CreateApplicationVersionRequest::ApplicationVersionRegionsHasBeenSet() const
{
    return m_applicationVersionRegionsHasBeenSet;
}

string CreateApplicationVersionRequest::GetApplicationVersionUpdateMode() const
{
    return m_applicationVersionUpdateMode;
}

void CreateApplicationVersionRequest::SetApplicationVersionUpdateMode(const string& _applicationVersionUpdateMode)
{
    m_applicationVersionUpdateMode = _applicationVersionUpdateMode;
    m_applicationVersionUpdateModeHasBeenSet = true;
}

bool CreateApplicationVersionRequest::ApplicationVersionUpdateModeHasBeenSet() const
{
    return m_applicationVersionUpdateModeHasBeenSet;
}



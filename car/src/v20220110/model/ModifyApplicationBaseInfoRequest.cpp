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

#include <tencentcloud/car/v20220110/model/ModifyApplicationBaseInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

ModifyApplicationBaseInfoRequest::ModifyApplicationBaseInfoRequest() :
    m_applicationIdHasBeenSet(false),
    m_applicationExePathHasBeenSet(false),
    m_applicationInterListHasBeenSet(false),
    m_applicationBaseInfoHasBeenSet(false),
    m_applicationParamsHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_applicationStoresHasBeenSet(false)
{
}

string ModifyApplicationBaseInfoRequest::ToJsonString() const
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

    if (m_applicationExePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationExePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationExePath.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationInterListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationInterList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationInterList.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationBaseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationBaseInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_applicationBaseInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_applicationParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationParams.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationStoresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationStores";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_applicationStores.begin(); itr != m_applicationStores.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyApplicationBaseInfoRequest::GetApplicationId() const
{
    return m_applicationId;
}

void ModifyApplicationBaseInfoRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ModifyApplicationBaseInfoRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ModifyApplicationBaseInfoRequest::GetApplicationExePath() const
{
    return m_applicationExePath;
}

void ModifyApplicationBaseInfoRequest::SetApplicationExePath(const string& _applicationExePath)
{
    m_applicationExePath = _applicationExePath;
    m_applicationExePathHasBeenSet = true;
}

bool ModifyApplicationBaseInfoRequest::ApplicationExePathHasBeenSet() const
{
    return m_applicationExePathHasBeenSet;
}

string ModifyApplicationBaseInfoRequest::GetApplicationInterList() const
{
    return m_applicationInterList;
}

void ModifyApplicationBaseInfoRequest::SetApplicationInterList(const string& _applicationInterList)
{
    m_applicationInterList = _applicationInterList;
    m_applicationInterListHasBeenSet = true;
}

bool ModifyApplicationBaseInfoRequest::ApplicationInterListHasBeenSet() const
{
    return m_applicationInterListHasBeenSet;
}

ApplicationBaseInfo ModifyApplicationBaseInfoRequest::GetApplicationBaseInfo() const
{
    return m_applicationBaseInfo;
}

void ModifyApplicationBaseInfoRequest::SetApplicationBaseInfo(const ApplicationBaseInfo& _applicationBaseInfo)
{
    m_applicationBaseInfo = _applicationBaseInfo;
    m_applicationBaseInfoHasBeenSet = true;
}

bool ModifyApplicationBaseInfoRequest::ApplicationBaseInfoHasBeenSet() const
{
    return m_applicationBaseInfoHasBeenSet;
}

string ModifyApplicationBaseInfoRequest::GetApplicationParams() const
{
    return m_applicationParams;
}

void ModifyApplicationBaseInfoRequest::SetApplicationParams(const string& _applicationParams)
{
    m_applicationParams = _applicationParams;
    m_applicationParamsHasBeenSet = true;
}

bool ModifyApplicationBaseInfoRequest::ApplicationParamsHasBeenSet() const
{
    return m_applicationParamsHasBeenSet;
}

string ModifyApplicationBaseInfoRequest::GetApplicationName() const
{
    return m_applicationName;
}

void ModifyApplicationBaseInfoRequest::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool ModifyApplicationBaseInfoRequest::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

vector<UserApplicationStore> ModifyApplicationBaseInfoRequest::GetApplicationStores() const
{
    return m_applicationStores;
}

void ModifyApplicationBaseInfoRequest::SetApplicationStores(const vector<UserApplicationStore>& _applicationStores)
{
    m_applicationStores = _applicationStores;
    m_applicationStoresHasBeenSet = true;
}

bool ModifyApplicationBaseInfoRequest::ApplicationStoresHasBeenSet() const
{
    return m_applicationStoresHasBeenSet;
}



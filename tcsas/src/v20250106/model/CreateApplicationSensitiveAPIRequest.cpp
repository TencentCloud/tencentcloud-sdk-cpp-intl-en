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

#include <tencentcloud/tcsas/v20250106/model/CreateApplicationSensitiveAPIRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcsas::V20250106::Model;
using namespace std;

CreateApplicationSensitiveAPIRequest::CreateApplicationSensitiveAPIRequest() :
    m_applicationIdHasBeenSet(false),
    m_aPIListHasBeenSet(false),
    m_platformIdHasBeenSet(false)
{
}

string CreateApplicationSensitiveAPIRequest::ToJsonString() const
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

    if (m_aPIListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aPIList.begin(); itr != m_aPIList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateApplicationSensitiveAPIRequest::GetApplicationId() const
{
    return m_applicationId;
}

void CreateApplicationSensitiveAPIRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool CreateApplicationSensitiveAPIRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

vector<CreateApplicationSensitiveAPIReq> CreateApplicationSensitiveAPIRequest::GetAPIList() const
{
    return m_aPIList;
}

void CreateApplicationSensitiveAPIRequest::SetAPIList(const vector<CreateApplicationSensitiveAPIReq>& _aPIList)
{
    m_aPIList = _aPIList;
    m_aPIListHasBeenSet = true;
}

bool CreateApplicationSensitiveAPIRequest::APIListHasBeenSet() const
{
    return m_aPIListHasBeenSet;
}

string CreateApplicationSensitiveAPIRequest::GetPlatformId() const
{
    return m_platformId;
}

void CreateApplicationSensitiveAPIRequest::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool CreateApplicationSensitiveAPIRequest::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}



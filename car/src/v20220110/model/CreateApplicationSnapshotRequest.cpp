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

#include <tencentcloud/car/v20220110/model/CreateApplicationSnapshotRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Car::V20220110::Model;
using namespace std;

CreateApplicationSnapshotRequest::CreateApplicationSnapshotRequest() :
    m_applicationIdHasBeenSet(false),
    m_applicationDownloadUrlHasBeenSet(false)
{
}

string CreateApplicationSnapshotRequest::ToJsonString() const
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

    if (m_applicationDownloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationDownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationDownloadUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateApplicationSnapshotRequest::GetApplicationId() const
{
    return m_applicationId;
}

void CreateApplicationSnapshotRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool CreateApplicationSnapshotRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string CreateApplicationSnapshotRequest::GetApplicationDownloadUrl() const
{
    return m_applicationDownloadUrl;
}

void CreateApplicationSnapshotRequest::SetApplicationDownloadUrl(const string& _applicationDownloadUrl)
{
    m_applicationDownloadUrl = _applicationDownloadUrl;
    m_applicationDownloadUrlHasBeenSet = true;
}

bool CreateApplicationSnapshotRequest::ApplicationDownloadUrlHasBeenSet() const
{
    return m_applicationDownloadUrlHasBeenSet;
}



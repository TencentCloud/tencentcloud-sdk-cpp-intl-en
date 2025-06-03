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

#include <tencentcloud/mdl/v20200326/model/GetAbWatermarkPlayUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdl::V20200326::Model;
using namespace std;

GetAbWatermarkPlayUrlRequest::GetAbWatermarkPlayUrlRequest() :
    m_uuidHasBeenSet(false),
    m_streamPackageChannelIdHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

string GetAbWatermarkPlayUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_uuid, allocator);
    }

    if (m_streamPackageChannelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamPackageChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_streamPackageChannelId.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t GetAbWatermarkPlayUrlRequest::GetUuid() const
{
    return m_uuid;
}

void GetAbWatermarkPlayUrlRequest::SetUuid(const uint64_t& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool GetAbWatermarkPlayUrlRequest::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string GetAbWatermarkPlayUrlRequest::GetStreamPackageChannelId() const
{
    return m_streamPackageChannelId;
}

void GetAbWatermarkPlayUrlRequest::SetStreamPackageChannelId(const string& _streamPackageChannelId)
{
    m_streamPackageChannelId = _streamPackageChannelId;
    m_streamPackageChannelIdHasBeenSet = true;
}

bool GetAbWatermarkPlayUrlRequest::StreamPackageChannelIdHasBeenSet() const
{
    return m_streamPackageChannelIdHasBeenSet;
}

string GetAbWatermarkPlayUrlRequest::GetUrl() const
{
    return m_url;
}

void GetAbWatermarkPlayUrlRequest::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool GetAbWatermarkPlayUrlRequest::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}



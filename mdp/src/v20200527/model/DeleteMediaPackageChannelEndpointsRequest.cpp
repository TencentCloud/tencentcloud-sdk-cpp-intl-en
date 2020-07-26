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

#include <tencentcloud/mdp/v20200527/model/DeleteMediaPackageChannelEndpointsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdp::V20200527::Model;
using namespace rapidjson;
using namespace std;

DeleteMediaPackageChannelEndpointsRequest::DeleteMediaPackageChannelEndpointsRequest() :
    m_idHasBeenSet(false),
    m_urlsHasBeenSet(false)
{
}

string DeleteMediaPackageChannelEndpointsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_urlsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Urls";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_urls.begin(); itr != m_urls.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteMediaPackageChannelEndpointsRequest::GetId() const
{
    return m_id;
}

void DeleteMediaPackageChannelEndpointsRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DeleteMediaPackageChannelEndpointsRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<string> DeleteMediaPackageChannelEndpointsRequest::GetUrls() const
{
    return m_urls;
}

void DeleteMediaPackageChannelEndpointsRequest::SetUrls(const vector<string>& _urls)
{
    m_urls = _urls;
    m_urlsHasBeenSet = true;
}

bool DeleteMediaPackageChannelEndpointsRequest::UrlsHasBeenSet() const
{
    return m_urlsHasBeenSet;
}



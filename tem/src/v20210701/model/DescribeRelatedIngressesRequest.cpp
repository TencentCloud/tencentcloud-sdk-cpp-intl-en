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

#include <tencentcloud/tem/v20210701/model/DescribeRelatedIngressesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

DescribeRelatedIngressesRequest::DescribeRelatedIngressesRequest() :
    m_environmentIdHasBeenSet(false),
    m_clusterNamespaceHasBeenSet(false),
    m_sourceChannelHasBeenSet(false),
    m_applicationIdHasBeenSet(false)
{
}

string DescribeRelatedIngressesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceChannel, allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRelatedIngressesRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void DescribeRelatedIngressesRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool DescribeRelatedIngressesRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string DescribeRelatedIngressesRequest::GetClusterNamespace() const
{
    return m_clusterNamespace;
}

void DescribeRelatedIngressesRequest::SetClusterNamespace(const string& _clusterNamespace)
{
    m_clusterNamespace = _clusterNamespace;
    m_clusterNamespaceHasBeenSet = true;
}

bool DescribeRelatedIngressesRequest::ClusterNamespaceHasBeenSet() const
{
    return m_clusterNamespaceHasBeenSet;
}

int64_t DescribeRelatedIngressesRequest::GetSourceChannel() const
{
    return m_sourceChannel;
}

void DescribeRelatedIngressesRequest::SetSourceChannel(const int64_t& _sourceChannel)
{
    m_sourceChannel = _sourceChannel;
    m_sourceChannelHasBeenSet = true;
}

bool DescribeRelatedIngressesRequest::SourceChannelHasBeenSet() const
{
    return m_sourceChannelHasBeenSet;
}

string DescribeRelatedIngressesRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeRelatedIngressesRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeRelatedIngressesRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}



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

#include <tencentcloud/tem/v20210701/model/DeleteIngressRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

DeleteIngressRequest::DeleteIngressRequest() :
    m_environmentIdHasBeenSet(false),
    m_clusterNamespaceHasBeenSet(false),
    m_ingressNameHasBeenSet(false),
    m_sourceChannelHasBeenSet(false)
{
}

string DeleteIngressRequest::ToJsonString() const
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

    if (m_ingressNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IngressName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ingressName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceChannel, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteIngressRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void DeleteIngressRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool DeleteIngressRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string DeleteIngressRequest::GetClusterNamespace() const
{
    return m_clusterNamespace;
}

void DeleteIngressRequest::SetClusterNamespace(const string& _clusterNamespace)
{
    m_clusterNamespace = _clusterNamespace;
    m_clusterNamespaceHasBeenSet = true;
}

bool DeleteIngressRequest::ClusterNamespaceHasBeenSet() const
{
    return m_clusterNamespaceHasBeenSet;
}

string DeleteIngressRequest::GetIngressName() const
{
    return m_ingressName;
}

void DeleteIngressRequest::SetIngressName(const string& _ingressName)
{
    m_ingressName = _ingressName;
    m_ingressNameHasBeenSet = true;
}

bool DeleteIngressRequest::IngressNameHasBeenSet() const
{
    return m_ingressNameHasBeenSet;
}

int64_t DeleteIngressRequest::GetSourceChannel() const
{
    return m_sourceChannel;
}

void DeleteIngressRequest::SetSourceChannel(const int64_t& _sourceChannel)
{
    m_sourceChannel = _sourceChannel;
    m_sourceChannelHasBeenSet = true;
}

bool DeleteIngressRequest::SourceChannelHasBeenSet() const
{
    return m_sourceChannelHasBeenSet;
}



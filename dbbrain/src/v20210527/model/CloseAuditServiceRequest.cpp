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

#include <tencentcloud/dbbrain/v20210527/model/CloseAuditServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

CloseAuditServiceRequest::CloseAuditServiceRequest() :
    m_productHasBeenSet(false),
    m_nodeRequestTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

string CloseAuditServiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeRequestTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeRequestType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeRequestType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CloseAuditServiceRequest::GetProduct() const
{
    return m_product;
}

void CloseAuditServiceRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool CloseAuditServiceRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string CloseAuditServiceRequest::GetNodeRequestType() const
{
    return m_nodeRequestType;
}

void CloseAuditServiceRequest::SetNodeRequestType(const string& _nodeRequestType)
{
    m_nodeRequestType = _nodeRequestType;
    m_nodeRequestTypeHasBeenSet = true;
}

bool CloseAuditServiceRequest::NodeRequestTypeHasBeenSet() const
{
    return m_nodeRequestTypeHasBeenSet;
}

string CloseAuditServiceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CloseAuditServiceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CloseAuditServiceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}



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

#include <tencentcloud/dlc/v20210125/model/CreateCHDFSBindingProductRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateCHDFSBindingProductRequest::CreateCHDFSBindingProductRequest() :
    m_mountPointHasBeenSet(false),
    m_bucketTypeHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_vpcInfoHasBeenSet(false)
{
}

string CreateCHDFSBindingProductRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mountPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountPoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mountPoint.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucketType.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_engineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcInfo.begin(); itr != m_vpcInfo.end(); ++itr, ++i)
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


string CreateCHDFSBindingProductRequest::GetMountPoint() const
{
    return m_mountPoint;
}

void CreateCHDFSBindingProductRequest::SetMountPoint(const string& _mountPoint)
{
    m_mountPoint = _mountPoint;
    m_mountPointHasBeenSet = true;
}

bool CreateCHDFSBindingProductRequest::MountPointHasBeenSet() const
{
    return m_mountPointHasBeenSet;
}

string CreateCHDFSBindingProductRequest::GetBucketType() const
{
    return m_bucketType;
}

void CreateCHDFSBindingProductRequest::SetBucketType(const string& _bucketType)
{
    m_bucketType = _bucketType;
    m_bucketTypeHasBeenSet = true;
}

bool CreateCHDFSBindingProductRequest::BucketTypeHasBeenSet() const
{
    return m_bucketTypeHasBeenSet;
}

string CreateCHDFSBindingProductRequest::GetProductName() const
{
    return m_productName;
}

void CreateCHDFSBindingProductRequest::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool CreateCHDFSBindingProductRequest::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string CreateCHDFSBindingProductRequest::GetEngineName() const
{
    return m_engineName;
}

void CreateCHDFSBindingProductRequest::SetEngineName(const string& _engineName)
{
    m_engineName = _engineName;
    m_engineNameHasBeenSet = true;
}

bool CreateCHDFSBindingProductRequest::EngineNameHasBeenSet() const
{
    return m_engineNameHasBeenSet;
}

vector<VpcInfo> CreateCHDFSBindingProductRequest::GetVpcInfo() const
{
    return m_vpcInfo;
}

void CreateCHDFSBindingProductRequest::SetVpcInfo(const vector<VpcInfo>& _vpcInfo)
{
    m_vpcInfo = _vpcInfo;
    m_vpcInfoHasBeenSet = true;
}

bool CreateCHDFSBindingProductRequest::VpcInfoHasBeenSet() const
{
    return m_vpcInfoHasBeenSet;
}



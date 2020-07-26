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

#include <tencentcloud/scf/v20180416/model/PublishLayerVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace rapidjson;
using namespace std;

PublishLayerVersionRequest::PublishLayerVersionRequest() :
    m_layerNameHasBeenSet(false),
    m_compatibleRuntimesHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_licenseInfoHasBeenSet(false)
{
}

string PublishLayerVersionRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_layerNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LayerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_layerName.c_str(), allocator).Move(), allocator);
    }

    if (m_compatibleRuntimesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CompatibleRuntimes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_compatibleRuntimes.begin(); itr != m_compatibleRuntimes.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_contentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_content.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LicenseInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_licenseInfo.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PublishLayerVersionRequest::GetLayerName() const
{
    return m_layerName;
}

void PublishLayerVersionRequest::SetLayerName(const string& _layerName)
{
    m_layerName = _layerName;
    m_layerNameHasBeenSet = true;
}

bool PublishLayerVersionRequest::LayerNameHasBeenSet() const
{
    return m_layerNameHasBeenSet;
}

vector<string> PublishLayerVersionRequest::GetCompatibleRuntimes() const
{
    return m_compatibleRuntimes;
}

void PublishLayerVersionRequest::SetCompatibleRuntimes(const vector<string>& _compatibleRuntimes)
{
    m_compatibleRuntimes = _compatibleRuntimes;
    m_compatibleRuntimesHasBeenSet = true;
}

bool PublishLayerVersionRequest::CompatibleRuntimesHasBeenSet() const
{
    return m_compatibleRuntimesHasBeenSet;
}

Code PublishLayerVersionRequest::GetContent() const
{
    return m_content;
}

void PublishLayerVersionRequest::SetContent(const Code& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool PublishLayerVersionRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string PublishLayerVersionRequest::GetDescription() const
{
    return m_description;
}

void PublishLayerVersionRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool PublishLayerVersionRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string PublishLayerVersionRequest::GetLicenseInfo() const
{
    return m_licenseInfo;
}

void PublishLayerVersionRequest::SetLicenseInfo(const string& _licenseInfo)
{
    m_licenseInfo = _licenseInfo;
    m_licenseInfoHasBeenSet = true;
}

bool PublishLayerVersionRequest::LicenseInfoHasBeenSet() const
{
    return m_licenseInfoHasBeenSet;
}



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

#include <tencentcloud/cam/v20190116/model/UpdateSAMLProviderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace rapidjson;
using namespace std;

UpdateSAMLProviderRequest::UpdateSAMLProviderRequest() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sAMLMetadataDocumentHasBeenSet(false)
{
}

string UpdateSAMLProviderRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_sAMLMetadataDocumentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SAMLMetadataDocument";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sAMLMetadataDocument.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateSAMLProviderRequest::GetName() const
{
    return m_name;
}

void UpdateSAMLProviderRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateSAMLProviderRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateSAMLProviderRequest::GetDescription() const
{
    return m_description;
}

void UpdateSAMLProviderRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateSAMLProviderRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UpdateSAMLProviderRequest::GetSAMLMetadataDocument() const
{
    return m_sAMLMetadataDocument;
}

void UpdateSAMLProviderRequest::SetSAMLMetadataDocument(const string& _sAMLMetadataDocument)
{
    m_sAMLMetadataDocument = _sAMLMetadataDocument;
    m_sAMLMetadataDocumentHasBeenSet = true;
}

bool UpdateSAMLProviderRequest::SAMLMetadataDocumentHasBeenSet() const
{
    return m_sAMLMetadataDocumentHasBeenSet;
}


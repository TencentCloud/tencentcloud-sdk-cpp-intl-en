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

#include <tencentcloud/tcmpp/v20240801/model/DescribeTempSecret4UploadFile2CosRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcmpp::V20240801::Model;
using namespace std;

DescribeTempSecret4UploadFile2CosRequest::DescribeTempSecret4UploadFile2CosRequest() :
    m_businessNameHasBeenSet(false),
    m_suffixHasBeenSet(false)
{
}

string DescribeTempSecret4UploadFile2CosRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessName.c_str(), allocator).Move(), allocator);
    }

    if (m_suffixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suffix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_suffix.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTempSecret4UploadFile2CosRequest::GetBusinessName() const
{
    return m_businessName;
}

void DescribeTempSecret4UploadFile2CosRequest::SetBusinessName(const string& _businessName)
{
    m_businessName = _businessName;
    m_businessNameHasBeenSet = true;
}

bool DescribeTempSecret4UploadFile2CosRequest::BusinessNameHasBeenSet() const
{
    return m_businessNameHasBeenSet;
}

string DescribeTempSecret4UploadFile2CosRequest::GetSuffix() const
{
    return m_suffix;
}

void DescribeTempSecret4UploadFile2CosRequest::SetSuffix(const string& _suffix)
{
    m_suffix = _suffix;
    m_suffixHasBeenSet = true;
}

bool DescribeTempSecret4UploadFile2CosRequest::SuffixHasBeenSet() const
{
    return m_suffixHasBeenSet;
}



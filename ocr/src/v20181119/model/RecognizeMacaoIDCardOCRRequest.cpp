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

#include <tencentcloud/ocr/v20181119/model/RecognizeMacaoIDCardOCRRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeMacaoIDCardOCRRequest::RecognizeMacaoIDCardOCRRequest() :
    m_imageUrlHasBeenSet(false),
    m_backImageUrlHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_backImageBase64HasBeenSet(false),
    m_configHasBeenSet(false)
{
}

string RecognizeMacaoIDCardOCRRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_backImageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackImageUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backImageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_backImageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_backImageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_config.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RecognizeMacaoIDCardOCRRequest::GetImageUrl() const
{
    return m_imageUrl;
}

void RecognizeMacaoIDCardOCRRequest::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool RecognizeMacaoIDCardOCRRequest::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string RecognizeMacaoIDCardOCRRequest::GetBackImageUrl() const
{
    return m_backImageUrl;
}

void RecognizeMacaoIDCardOCRRequest::SetBackImageUrl(const string& _backImageUrl)
{
    m_backImageUrl = _backImageUrl;
    m_backImageUrlHasBeenSet = true;
}

bool RecognizeMacaoIDCardOCRRequest::BackImageUrlHasBeenSet() const
{
    return m_backImageUrlHasBeenSet;
}

string RecognizeMacaoIDCardOCRRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void RecognizeMacaoIDCardOCRRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool RecognizeMacaoIDCardOCRRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string RecognizeMacaoIDCardOCRRequest::GetBackImageBase64() const
{
    return m_backImageBase64;
}

void RecognizeMacaoIDCardOCRRequest::SetBackImageBase64(const string& _backImageBase64)
{
    m_backImageBase64 = _backImageBase64;
    m_backImageBase64HasBeenSet = true;
}

bool RecognizeMacaoIDCardOCRRequest::BackImageBase64HasBeenSet() const
{
    return m_backImageBase64HasBeenSet;
}

string RecognizeMacaoIDCardOCRRequest::GetConfig() const
{
    return m_config;
}

void RecognizeMacaoIDCardOCRRequest::SetConfig(const string& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool RecognizeMacaoIDCardOCRRequest::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}



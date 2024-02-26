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

#include <tencentcloud/faceid/v20180301/model/ApplyCardVerificationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

ApplyCardVerificationRequest::ApplyCardVerificationRequest() :
    m_nationalityHasBeenSet(false),
    m_cardTypeHasBeenSet(false),
    m_imageBase64FrontHasBeenSet(false),
    m_imageBase64BackHasBeenSet(false),
    m_imageUrlFrontHasBeenSet(false),
    m_imageUrlBackHasBeenSet(false)
{
}

string ApplyCardVerificationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nationalityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nationality";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nationality.c_str(), allocator).Move(), allocator);
    }

    if (m_cardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cardType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBase64FrontHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64Front";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64Front.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBase64BackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64Back";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64Back.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlFrontHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrlFront";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrlFront.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlBackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrlBack";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageUrlBack.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyCardVerificationRequest::GetNationality() const
{
    return m_nationality;
}

void ApplyCardVerificationRequest::SetNationality(const string& _nationality)
{
    m_nationality = _nationality;
    m_nationalityHasBeenSet = true;
}

bool ApplyCardVerificationRequest::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

string ApplyCardVerificationRequest::GetCardType() const
{
    return m_cardType;
}

void ApplyCardVerificationRequest::SetCardType(const string& _cardType)
{
    m_cardType = _cardType;
    m_cardTypeHasBeenSet = true;
}

bool ApplyCardVerificationRequest::CardTypeHasBeenSet() const
{
    return m_cardTypeHasBeenSet;
}

string ApplyCardVerificationRequest::GetImageBase64Front() const
{
    return m_imageBase64Front;
}

void ApplyCardVerificationRequest::SetImageBase64Front(const string& _imageBase64Front)
{
    m_imageBase64Front = _imageBase64Front;
    m_imageBase64FrontHasBeenSet = true;
}

bool ApplyCardVerificationRequest::ImageBase64FrontHasBeenSet() const
{
    return m_imageBase64FrontHasBeenSet;
}

string ApplyCardVerificationRequest::GetImageBase64Back() const
{
    return m_imageBase64Back;
}

void ApplyCardVerificationRequest::SetImageBase64Back(const string& _imageBase64Back)
{
    m_imageBase64Back = _imageBase64Back;
    m_imageBase64BackHasBeenSet = true;
}

bool ApplyCardVerificationRequest::ImageBase64BackHasBeenSet() const
{
    return m_imageBase64BackHasBeenSet;
}

string ApplyCardVerificationRequest::GetImageUrlFront() const
{
    return m_imageUrlFront;
}

void ApplyCardVerificationRequest::SetImageUrlFront(const string& _imageUrlFront)
{
    m_imageUrlFront = _imageUrlFront;
    m_imageUrlFrontHasBeenSet = true;
}

bool ApplyCardVerificationRequest::ImageUrlFrontHasBeenSet() const
{
    return m_imageUrlFrontHasBeenSet;
}

string ApplyCardVerificationRequest::GetImageUrlBack() const
{
    return m_imageUrlBack;
}

void ApplyCardVerificationRequest::SetImageUrlBack(const string& _imageUrlBack)
{
    m_imageUrlBack = _imageUrlBack;
    m_imageUrlBackHasBeenSet = true;
}

bool ApplyCardVerificationRequest::ImageUrlBackHasBeenSet() const
{
    return m_imageUrlBackHasBeenSet;
}



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

#include <tencentcloud/faceid/v20180301/model/GetFaceIdTokenIntlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GetFaceIdTokenIntlRequest::GetFaceIdTokenIntlRequest() :
    m_checkModeHasBeenSet(false),
    m_secureLevelHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_extraHasBeenSet(false),
    m_actionListHasBeenSet(false)
{
}

string GetFaceIdTokenIntlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_checkModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_checkMode.c_str(), allocator).Move(), allocator);
    }

    if (m_secureLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecureLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secureLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
    }

    if (m_actionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_actionList.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetFaceIdTokenIntlRequest::GetCheckMode() const
{
    return m_checkMode;
}

void GetFaceIdTokenIntlRequest::SetCheckMode(const string& _checkMode)
{
    m_checkMode = _checkMode;
    m_checkModeHasBeenSet = true;
}

bool GetFaceIdTokenIntlRequest::CheckModeHasBeenSet() const
{
    return m_checkModeHasBeenSet;
}

string GetFaceIdTokenIntlRequest::GetSecureLevel() const
{
    return m_secureLevel;
}

void GetFaceIdTokenIntlRequest::SetSecureLevel(const string& _secureLevel)
{
    m_secureLevel = _secureLevel;
    m_secureLevelHasBeenSet = true;
}

bool GetFaceIdTokenIntlRequest::SecureLevelHasBeenSet() const
{
    return m_secureLevelHasBeenSet;
}

string GetFaceIdTokenIntlRequest::GetImage() const
{
    return m_image;
}

void GetFaceIdTokenIntlRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool GetFaceIdTokenIntlRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string GetFaceIdTokenIntlRequest::GetExtra() const
{
    return m_extra;
}

void GetFaceIdTokenIntlRequest::SetExtra(const string& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool GetFaceIdTokenIntlRequest::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}

string GetFaceIdTokenIntlRequest::GetActionList() const
{
    return m_actionList;
}

void GetFaceIdTokenIntlRequest::SetActionList(const string& _actionList)
{
    m_actionList = _actionList;
    m_actionListHasBeenSet = true;
}

bool GetFaceIdTokenIntlRequest::ActionListHasBeenSet() const
{
    return m_actionListHasBeenSet;
}



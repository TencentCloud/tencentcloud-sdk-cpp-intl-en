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

#include <tencentcloud/trtc/v20190722/model/SetUserBlockedByStrRoomIdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

SetUserBlockedByStrRoomIdRequest::SetUserBlockedByStrRoomIdRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_strRoomIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_isMuteHasBeenSet(false)
{
}

string SetUserBlockedByStrRoomIdRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_strRoomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrRoomId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_strRoomId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_isMuteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMute";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isMute, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t SetUserBlockedByStrRoomIdRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void SetUserBlockedByStrRoomIdRequest::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool SetUserBlockedByStrRoomIdRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string SetUserBlockedByStrRoomIdRequest::GetStrRoomId() const
{
    return m_strRoomId;
}

void SetUserBlockedByStrRoomIdRequest::SetStrRoomId(const string& _strRoomId)
{
    m_strRoomId = _strRoomId;
    m_strRoomIdHasBeenSet = true;
}

bool SetUserBlockedByStrRoomIdRequest::StrRoomIdHasBeenSet() const
{
    return m_strRoomIdHasBeenSet;
}

string SetUserBlockedByStrRoomIdRequest::GetUserId() const
{
    return m_userId;
}

void SetUserBlockedByStrRoomIdRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool SetUserBlockedByStrRoomIdRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t SetUserBlockedByStrRoomIdRequest::GetIsMute() const
{
    return m_isMute;
}

void SetUserBlockedByStrRoomIdRequest::SetIsMute(const uint64_t& _isMute)
{
    m_isMute = _isMute;
    m_isMuteHasBeenSet = true;
}

bool SetUserBlockedByStrRoomIdRequest::IsMuteHasBeenSet() const
{
    return m_isMuteHasBeenSet;
}



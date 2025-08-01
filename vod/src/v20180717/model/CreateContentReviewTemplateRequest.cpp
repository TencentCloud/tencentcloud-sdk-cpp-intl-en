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

#include <tencentcloud/vod/v20180717/model/CreateContentReviewTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateContentReviewTemplateRequest::CreateContentReviewTemplateRequest() :
    m_reviewWallSwitchHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_pornConfigureHasBeenSet(false),
    m_terrorismConfigureHasBeenSet(false),
    m_politicalConfigureHasBeenSet(false),
    m_prohibitedConfigureHasBeenSet(false),
    m_userDefineConfigureHasBeenSet(false),
    m_screenshotIntervalHasBeenSet(false)
{
}

string CreateContentReviewTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_reviewWallSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReviewWallSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_reviewWallSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_pornConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PornConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pornConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_terrorismConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerrorismConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_terrorismConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_politicalConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoliticalConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_politicalConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_prohibitedConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProhibitedConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_prohibitedConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_userDefineConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDefineConfigure";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userDefineConfigure.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_screenshotIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScreenshotInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_screenshotInterval, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateContentReviewTemplateRequest::GetReviewWallSwitch() const
{
    return m_reviewWallSwitch;
}

void CreateContentReviewTemplateRequest::SetReviewWallSwitch(const string& _reviewWallSwitch)
{
    m_reviewWallSwitch = _reviewWallSwitch;
    m_reviewWallSwitchHasBeenSet = true;
}

bool CreateContentReviewTemplateRequest::ReviewWallSwitchHasBeenSet() const
{
    return m_reviewWallSwitchHasBeenSet;
}

uint64_t CreateContentReviewTemplateRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateContentReviewTemplateRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateContentReviewTemplateRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CreateContentReviewTemplateRequest::GetName() const
{
    return m_name;
}

void CreateContentReviewTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateContentReviewTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateContentReviewTemplateRequest::GetComment() const
{
    return m_comment;
}

void CreateContentReviewTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool CreateContentReviewTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

PornConfigureInfo CreateContentReviewTemplateRequest::GetPornConfigure() const
{
    return m_pornConfigure;
}

void CreateContentReviewTemplateRequest::SetPornConfigure(const PornConfigureInfo& _pornConfigure)
{
    m_pornConfigure = _pornConfigure;
    m_pornConfigureHasBeenSet = true;
}

bool CreateContentReviewTemplateRequest::PornConfigureHasBeenSet() const
{
    return m_pornConfigureHasBeenSet;
}

TerrorismConfigureInfo CreateContentReviewTemplateRequest::GetTerrorismConfigure() const
{
    return m_terrorismConfigure;
}

void CreateContentReviewTemplateRequest::SetTerrorismConfigure(const TerrorismConfigureInfo& _terrorismConfigure)
{
    m_terrorismConfigure = _terrorismConfigure;
    m_terrorismConfigureHasBeenSet = true;
}

bool CreateContentReviewTemplateRequest::TerrorismConfigureHasBeenSet() const
{
    return m_terrorismConfigureHasBeenSet;
}

PoliticalConfigureInfo CreateContentReviewTemplateRequest::GetPoliticalConfigure() const
{
    return m_politicalConfigure;
}

void CreateContentReviewTemplateRequest::SetPoliticalConfigure(const PoliticalConfigureInfo& _politicalConfigure)
{
    m_politicalConfigure = _politicalConfigure;
    m_politicalConfigureHasBeenSet = true;
}

bool CreateContentReviewTemplateRequest::PoliticalConfigureHasBeenSet() const
{
    return m_politicalConfigureHasBeenSet;
}

ProhibitedConfigureInfo CreateContentReviewTemplateRequest::GetProhibitedConfigure() const
{
    return m_prohibitedConfigure;
}

void CreateContentReviewTemplateRequest::SetProhibitedConfigure(const ProhibitedConfigureInfo& _prohibitedConfigure)
{
    m_prohibitedConfigure = _prohibitedConfigure;
    m_prohibitedConfigureHasBeenSet = true;
}

bool CreateContentReviewTemplateRequest::ProhibitedConfigureHasBeenSet() const
{
    return m_prohibitedConfigureHasBeenSet;
}

UserDefineConfigureInfo CreateContentReviewTemplateRequest::GetUserDefineConfigure() const
{
    return m_userDefineConfigure;
}

void CreateContentReviewTemplateRequest::SetUserDefineConfigure(const UserDefineConfigureInfo& _userDefineConfigure)
{
    m_userDefineConfigure = _userDefineConfigure;
    m_userDefineConfigureHasBeenSet = true;
}

bool CreateContentReviewTemplateRequest::UserDefineConfigureHasBeenSet() const
{
    return m_userDefineConfigureHasBeenSet;
}

double CreateContentReviewTemplateRequest::GetScreenshotInterval() const
{
    return m_screenshotInterval;
}

void CreateContentReviewTemplateRequest::SetScreenshotInterval(const double& _screenshotInterval)
{
    m_screenshotInterval = _screenshotInterval;
    m_screenshotIntervalHasBeenSet = true;
}

bool CreateContentReviewTemplateRequest::ScreenshotIntervalHasBeenSet() const
{
    return m_screenshotIntervalHasBeenSet;
}



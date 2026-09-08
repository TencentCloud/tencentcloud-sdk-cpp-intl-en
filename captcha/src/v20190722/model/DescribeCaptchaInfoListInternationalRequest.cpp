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

#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaInfoListInternationalRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

DescribeCaptchaInfoListInternationalRequest::DescribeCaptchaInfoListInternationalRequest() :
    m_pageIndexHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_userSetCapTypeArrHasBeenSet(false),
    m_verifyRankArrHasBeenSet(false),
    m_channelInfoArrHasBeenSet(false),
    m_captchaAppIdHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_orderByHasBeenSet(false)
{
}

string DescribeCaptchaInfoListInternationalRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pageIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageIndex, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_userSetCapTypeArrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSetCapTypeArr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userSetCapTypeArr.begin(); itr != m_userSetCapTypeArr.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_verifyRankArrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyRankArr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_verifyRankArr.begin(); itr != m_verifyRankArr.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_channelInfoArrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelInfoArr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_channelInfoArr.begin(); itr != m_channelInfoArr.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_captchaAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaptchaAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_captchaAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_orderBy.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeCaptchaInfoListInternationalRequest::GetPageIndex() const
{
    return m_pageIndex;
}

void DescribeCaptchaInfoListInternationalRequest::SetPageIndex(const int64_t& _pageIndex)
{
    m_pageIndex = _pageIndex;
    m_pageIndexHasBeenSet = true;
}

bool DescribeCaptchaInfoListInternationalRequest::PageIndexHasBeenSet() const
{
    return m_pageIndexHasBeenSet;
}

int64_t DescribeCaptchaInfoListInternationalRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeCaptchaInfoListInternationalRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeCaptchaInfoListInternationalRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<string> DescribeCaptchaInfoListInternationalRequest::GetUserSetCapTypeArr() const
{
    return m_userSetCapTypeArr;
}

void DescribeCaptchaInfoListInternationalRequest::SetUserSetCapTypeArr(const vector<string>& _userSetCapTypeArr)
{
    m_userSetCapTypeArr = _userSetCapTypeArr;
    m_userSetCapTypeArrHasBeenSet = true;
}

bool DescribeCaptchaInfoListInternationalRequest::UserSetCapTypeArrHasBeenSet() const
{
    return m_userSetCapTypeArrHasBeenSet;
}

vector<string> DescribeCaptchaInfoListInternationalRequest::GetVerifyRankArr() const
{
    return m_verifyRankArr;
}

void DescribeCaptchaInfoListInternationalRequest::SetVerifyRankArr(const vector<string>& _verifyRankArr)
{
    m_verifyRankArr = _verifyRankArr;
    m_verifyRankArrHasBeenSet = true;
}

bool DescribeCaptchaInfoListInternationalRequest::VerifyRankArrHasBeenSet() const
{
    return m_verifyRankArrHasBeenSet;
}

vector<string> DescribeCaptchaInfoListInternationalRequest::GetChannelInfoArr() const
{
    return m_channelInfoArr;
}

void DescribeCaptchaInfoListInternationalRequest::SetChannelInfoArr(const vector<string>& _channelInfoArr)
{
    m_channelInfoArr = _channelInfoArr;
    m_channelInfoArrHasBeenSet = true;
}

bool DescribeCaptchaInfoListInternationalRequest::ChannelInfoArrHasBeenSet() const
{
    return m_channelInfoArrHasBeenSet;
}

string DescribeCaptchaInfoListInternationalRequest::GetCaptchaAppId() const
{
    return m_captchaAppId;
}

void DescribeCaptchaInfoListInternationalRequest::SetCaptchaAppId(const string& _captchaAppId)
{
    m_captchaAppId = _captchaAppId;
    m_captchaAppIdHasBeenSet = true;
}

bool DescribeCaptchaInfoListInternationalRequest::CaptchaAppIdHasBeenSet() const
{
    return m_captchaAppIdHasBeenSet;
}

string DescribeCaptchaInfoListInternationalRequest::GetAppName() const
{
    return m_appName;
}

void DescribeCaptchaInfoListInternationalRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool DescribeCaptchaInfoListInternationalRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

OrderByInternational DescribeCaptchaInfoListInternationalRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeCaptchaInfoListInternationalRequest::SetOrderBy(const OrderByInternational& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeCaptchaInfoListInternationalRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}



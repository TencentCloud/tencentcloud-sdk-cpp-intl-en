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

#include <tencentcloud/cdwdoris/v20211228/model/DescribeUserPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

DescribeUserPolicyRequest::DescribeUserPolicyRequest() :
    m_instanceIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passWordHasBeenSet(false),
    m_whiteHostHasBeenSet(false)
{
}

string DescribeUserPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passWordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassWord";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_passWord.c_str(), allocator).Move(), allocator);
    }

    if (m_whiteHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_whiteHost.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeUserPolicyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeUserPolicyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeUserPolicyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeUserPolicyRequest::GetUserName() const
{
    return m_userName;
}

void DescribeUserPolicyRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DescribeUserPolicyRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string DescribeUserPolicyRequest::GetPassWord() const
{
    return m_passWord;
}

void DescribeUserPolicyRequest::SetPassWord(const string& _passWord)
{
    m_passWord = _passWord;
    m_passWordHasBeenSet = true;
}

bool DescribeUserPolicyRequest::PassWordHasBeenSet() const
{
    return m_passWordHasBeenSet;
}

string DescribeUserPolicyRequest::GetWhiteHost() const
{
    return m_whiteHost;
}

void DescribeUserPolicyRequest::SetWhiteHost(const string& _whiteHost)
{
    m_whiteHost = _whiteHost;
    m_whiteHostHasBeenSet = true;
}

bool DescribeUserPolicyRequest::WhiteHostHasBeenSet() const
{
    return m_whiteHostHasBeenSet;
}



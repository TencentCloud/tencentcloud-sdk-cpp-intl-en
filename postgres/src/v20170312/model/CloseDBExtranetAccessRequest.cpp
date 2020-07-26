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

#include <tencentcloud/postgres/v20170312/model/CloseDBExtranetAccessRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace rapidjson;
using namespace std;

CloseDBExtranetAccessRequest::CloseDBExtranetAccessRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_isIpv6HasBeenSet(false)
{
}

string CloseDBExtranetAccessRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBInstanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_isIpv6HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsIpv6";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isIpv6, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CloseDBExtranetAccessRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void CloseDBExtranetAccessRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool CloseDBExtranetAccessRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

int64_t CloseDBExtranetAccessRequest::GetIsIpv6() const
{
    return m_isIpv6;
}

void CloseDBExtranetAccessRequest::SetIsIpv6(const int64_t& _isIpv6)
{
    m_isIpv6 = _isIpv6;
    m_isIpv6HasBeenSet = true;
}

bool CloseDBExtranetAccessRequest::IsIpv6HasBeenSet() const
{
    return m_isIpv6HasBeenSet;
}



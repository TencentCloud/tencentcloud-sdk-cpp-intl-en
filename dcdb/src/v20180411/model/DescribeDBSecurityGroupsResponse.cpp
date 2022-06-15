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

#include <tencentcloud/dcdb/v20180411/model/DescribeDBSecurityGroupsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

DescribeDBSecurityGroupsResponse::DescribeDBSecurityGroupsResponse() :
    m_groupsHasBeenSet(false),
    m_vIPHasBeenSet(false),
    m_vPortHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBSecurityGroupsResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Groups") && !rsp["Groups"].IsNull())
    {
        if (!rsp["Groups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Groups` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Groups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groups.push_back(item);
        }
        m_groupsHasBeenSet = true;
    }

    if (rsp.HasMember("VIP") && !rsp["VIP"].IsNull())
    {
        if (!rsp["VIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vIP = string(rsp["VIP"].GetString());
        m_vIPHasBeenSet = true;
    }

    if (rsp.HasMember("VPort") && !rsp["VPort"].IsNull())
    {
        if (!rsp["VPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vPort = string(rsp["VPort"].GetString());
        m_vPortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBSecurityGroupsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_groupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Groups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groups.begin(); itr != m_groups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vIP.c_str(), allocator).Move(), allocator);
    }

    if (m_vPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vPort.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


vector<SecurityGroup> DescribeDBSecurityGroupsResponse::GetGroups() const
{
    return m_groups;
}

bool DescribeDBSecurityGroupsResponse::GroupsHasBeenSet() const
{
    return m_groupsHasBeenSet;
}

string DescribeDBSecurityGroupsResponse::GetVIP() const
{
    return m_vIP;
}

bool DescribeDBSecurityGroupsResponse::VIPHasBeenSet() const
{
    return m_vIPHasBeenSet;
}

string DescribeDBSecurityGroupsResponse::GetVPort() const
{
    return m_vPort;
}

bool DescribeDBSecurityGroupsResponse::VPortHasBeenSet() const
{
    return m_vPortHasBeenSet;
}


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

#include <tencentcloud/cfs/v20190719/model/CreateCfsPGroupResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

CreateCfsPGroupResponse::CreateCfsPGroupResponse() :
    m_pGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descInfoHasBeenSet(false),
    m_bindCfsNumHasBeenSet(false),
    m_cDateHasBeenSet(false)
{
}

CoreInternalOutcome CreateCfsPGroupResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PGroupId") && !rsp["PGroupId"].IsNull())
    {
        if (!rsp["PGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pGroupId = string(rsp["PGroupId"].GetString());
        m_pGroupIdHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("DescInfo") && !rsp["DescInfo"].IsNull())
    {
        if (!rsp["DescInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_descInfo = string(rsp["DescInfo"].GetString());
        m_descInfoHasBeenSet = true;
    }

    if (rsp.HasMember("BindCfsNum") && !rsp["BindCfsNum"].IsNull())
    {
        if (!rsp["BindCfsNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BindCfsNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindCfsNum = rsp["BindCfsNum"].GetInt64();
        m_bindCfsNumHasBeenSet = true;
    }

    if (rsp.HasMember("CDate") && !rsp["CDate"].IsNull())
    {
        if (!rsp["CDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cDate = string(rsp["CDate"].GetString());
        m_cDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateCfsPGroupResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_pGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_descInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_bindCfsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindCfsNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindCfsNum, allocator);
    }

    if (m_cDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cDate.c_str(), allocator).Move(), allocator);
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


string CreateCfsPGroupResponse::GetPGroupId() const
{
    return m_pGroupId;
}

bool CreateCfsPGroupResponse::PGroupIdHasBeenSet() const
{
    return m_pGroupIdHasBeenSet;
}

string CreateCfsPGroupResponse::GetName() const
{
    return m_name;
}

bool CreateCfsPGroupResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateCfsPGroupResponse::GetDescInfo() const
{
    return m_descInfo;
}

bool CreateCfsPGroupResponse::DescInfoHasBeenSet() const
{
    return m_descInfoHasBeenSet;
}

int64_t CreateCfsPGroupResponse::GetBindCfsNum() const
{
    return m_bindCfsNum;
}

bool CreateCfsPGroupResponse::BindCfsNumHasBeenSet() const
{
    return m_bindCfsNumHasBeenSet;
}

string CreateCfsPGroupResponse::GetCDate() const
{
    return m_cDate;
}

bool CreateCfsPGroupResponse::CDateHasBeenSet() const
{
    return m_cDateHasBeenSet;
}



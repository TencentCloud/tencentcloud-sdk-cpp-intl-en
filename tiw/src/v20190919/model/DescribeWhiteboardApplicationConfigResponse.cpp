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

#include <tencentcloud/tiw/v20190919/model/DescribeWhiteboardApplicationConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

DescribeWhiteboardApplicationConfigResponse::DescribeWhiteboardApplicationConfigResponse() :
    m_sdkAppIdHasBeenSet(false),
    m_configsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeWhiteboardApplicationConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SdkAppId") && !rsp["SdkAppId"].IsNull())
    {
        if (!rsp["SdkAppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SdkAppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppId = rsp["SdkAppId"].GetInt64();
        m_sdkAppIdHasBeenSet = true;
    }

    if (rsp.HasMember("Configs") && !rsp["Configs"].IsNull())
    {
        if (!rsp["Configs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Configs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Configs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WhiteboardApplicationConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configs.push_back(item);
        }
        m_configsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeWhiteboardApplicationConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_configsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Configs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configs.begin(); itr != m_configs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


int64_t DescribeWhiteboardApplicationConfigResponse::GetSdkAppId() const
{
    return m_sdkAppId;
}

bool DescribeWhiteboardApplicationConfigResponse::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

vector<WhiteboardApplicationConfig> DescribeWhiteboardApplicationConfigResponse::GetConfigs() const
{
    return m_configs;
}

bool DescribeWhiteboardApplicationConfigResponse::ConfigsHasBeenSet() const
{
    return m_configsHasBeenSet;
}



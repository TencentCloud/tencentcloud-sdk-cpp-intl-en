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

#include <tencentcloud/ecm/v20190719/model/DescribeImportImageOsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

DescribeImportImageOsResponse::DescribeImportImageOsResponse() :
    m_importImageOsListSupportedHasBeenSet(false),
    m_importImageOsVersionSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeImportImageOsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ImportImageOsListSupported") && !rsp["ImportImageOsListSupported"].IsNull())
    {
        if (!rsp["ImportImageOsListSupported"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImportImageOsListSupported` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_importImageOsListSupported.Deserialize(rsp["ImportImageOsListSupported"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_importImageOsListSupportedHasBeenSet = true;
    }

    if (rsp.HasMember("ImportImageOsVersionSet") && !rsp["ImportImageOsVersionSet"].IsNull())
    {
        if (!rsp["ImportImageOsVersionSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImportImageOsVersionSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ImportImageOsVersionSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OsVersion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_importImageOsVersionSet.push_back(item);
        }
        m_importImageOsVersionSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeImportImageOsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_importImageOsListSupportedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportImageOsListSupported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_importImageOsListSupported.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_importImageOsVersionSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportImageOsVersionSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_importImageOsVersionSet.begin(); itr != m_importImageOsVersionSet.end(); ++itr, ++i)
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


ImageOsList DescribeImportImageOsResponse::GetImportImageOsListSupported() const
{
    return m_importImageOsListSupported;
}

bool DescribeImportImageOsResponse::ImportImageOsListSupportedHasBeenSet() const
{
    return m_importImageOsListSupportedHasBeenSet;
}

vector<OsVersion> DescribeImportImageOsResponse::GetImportImageOsVersionSet() const
{
    return m_importImageOsVersionSet;
}

bool DescribeImportImageOsResponse::ImportImageOsVersionSetHasBeenSet() const
{
    return m_importImageOsVersionSetHasBeenSet;
}



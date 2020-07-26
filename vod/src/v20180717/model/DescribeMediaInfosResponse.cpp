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

#include <tencentcloud/vod/v20180717/model/DescribeMediaInfosResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

DescribeMediaInfosResponse::DescribeMediaInfosResponse() :
    m_mediaInfoSetHasBeenSet(false),
    m_notExistFileIdSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMediaInfosResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("MediaInfoSet") && !rsp["MediaInfoSet"].IsNull())
    {
        if (!rsp["MediaInfoSet"].IsArray())
            return CoreInternalOutcome(Error("response `MediaInfoSet` is not array type"));

        const Value &tmpValue = rsp["MediaInfoSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mediaInfoSet.push_back(item);
        }
        m_mediaInfoSetHasBeenSet = true;
    }

    if (rsp.HasMember("NotExistFileIdSet") && !rsp["NotExistFileIdSet"].IsNull())
    {
        if (!rsp["NotExistFileIdSet"].IsArray())
            return CoreInternalOutcome(Error("response `NotExistFileIdSet` is not array type"));

        const Value &tmpValue = rsp["NotExistFileIdSet"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_notExistFileIdSet.push_back((*itr).GetString());
        }
        m_notExistFileIdSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


vector<MediaInfo> DescribeMediaInfosResponse::GetMediaInfoSet() const
{
    return m_mediaInfoSet;
}

bool DescribeMediaInfosResponse::MediaInfoSetHasBeenSet() const
{
    return m_mediaInfoSetHasBeenSet;
}

vector<string> DescribeMediaInfosResponse::GetNotExistFileIdSet() const
{
    return m_notExistFileIdSet;
}

bool DescribeMediaInfosResponse::NotExistFileIdSetHasBeenSet() const
{
    return m_notExistFileIdSetHasBeenSet;
}



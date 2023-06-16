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

#include <tencentcloud/tiw/v20190919/model/DescribeVideoGenerationTaskCallbackResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

DescribeVideoGenerationTaskCallbackResponse::DescribeVideoGenerationTaskCallbackResponse() :
    m_callbackHasBeenSet(false),
    m_callbackKeyHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVideoGenerationTaskCallbackResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Callback") && !rsp["Callback"].IsNull())
    {
        if (!rsp["Callback"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Callback` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callback = string(rsp["Callback"].GetString());
        m_callbackHasBeenSet = true;
    }

    if (rsp.HasMember("CallbackKey") && !rsp["CallbackKey"].IsNull())
    {
        if (!rsp["CallbackKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallbackKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackKey = string(rsp["CallbackKey"].GetString());
        m_callbackKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVideoGenerationTaskCallbackResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_callbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callback";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callback.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackKey.c_str(), allocator).Move(), allocator);
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


string DescribeVideoGenerationTaskCallbackResponse::GetCallback() const
{
    return m_callback;
}

bool DescribeVideoGenerationTaskCallbackResponse::CallbackHasBeenSet() const
{
    return m_callbackHasBeenSet;
}

string DescribeVideoGenerationTaskCallbackResponse::GetCallbackKey() const
{
    return m_callbackKey;
}

bool DescribeVideoGenerationTaskCallbackResponse::CallbackKeyHasBeenSet() const
{
    return m_callbackKeyHasBeenSet;
}


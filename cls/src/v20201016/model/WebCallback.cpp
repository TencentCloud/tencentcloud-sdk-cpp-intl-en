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

#include <tencentcloud/cls/v20201016/model/WebCallback.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

WebCallback::WebCallback() :
    m_urlHasBeenSet(false),
    m_callbackTypeHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_headersHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_indexHasBeenSet(false)
{
}

CoreInternalOutcome WebCallback::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebCallback.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("CallbackType") && !value["CallbackType"].IsNull())
    {
        if (!value["CallbackType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebCallback.CallbackType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callbackType = string(value["CallbackType"].GetString());
        m_callbackTypeHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebCallback.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("Headers") && !value["Headers"].IsNull())
    {
        if (!value["Headers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `WebCallback.Headers` is not array type"));

        const rapidjson::Value &tmpValue = value["Headers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_headers.push_back((*itr).GetString());
        }
        m_headersHasBeenSet = true;
    }

    if (value.HasMember("Body") && !value["Body"].IsNull())
    {
        if (!value["Body"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebCallback.Body` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_body = string(value["Body"].GetString());
        m_bodyHasBeenSet = true;
    }

    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebCallback.Index` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetInt64();
        m_indexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebCallback::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callbackType.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_headersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Headers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_headers.begin(); itr != m_headers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Body";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_body.c_str(), allocator).Move(), allocator);
    }

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

}


string WebCallback::GetUrl() const
{
    return m_url;
}

void WebCallback::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool WebCallback::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string WebCallback::GetCallbackType() const
{
    return m_callbackType;
}

void WebCallback::SetCallbackType(const string& _callbackType)
{
    m_callbackType = _callbackType;
    m_callbackTypeHasBeenSet = true;
}

bool WebCallback::CallbackTypeHasBeenSet() const
{
    return m_callbackTypeHasBeenSet;
}

string WebCallback::GetMethod() const
{
    return m_method;
}

void WebCallback::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool WebCallback::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

vector<string> WebCallback::GetHeaders() const
{
    return m_headers;
}

void WebCallback::SetHeaders(const vector<string>& _headers)
{
    m_headers = _headers;
    m_headersHasBeenSet = true;
}

bool WebCallback::HeadersHasBeenSet() const
{
    return m_headersHasBeenSet;
}

string WebCallback::GetBody() const
{
    return m_body;
}

void WebCallback::SetBody(const string& _body)
{
    m_body = _body;
    m_bodyHasBeenSet = true;
}

bool WebCallback::BodyHasBeenSet() const
{
    return m_bodyHasBeenSet;
}

int64_t WebCallback::GetIndex() const
{
    return m_index;
}

void WebCallback::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool WebCallback::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}


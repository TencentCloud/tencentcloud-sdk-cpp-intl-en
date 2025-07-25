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

#include <tencentcloud/tdid/v20210519/model/VerifyCredentialRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

VerifyCredentialRequest::VerifyCredentialRequest() :
    m_functionArgHasBeenSet(false)
{
}

string VerifyCredentialRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_functionArgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionArg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_functionArg.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


VerifyFunctionArg VerifyCredentialRequest::GetFunctionArg() const
{
    return m_functionArg;
}

void VerifyCredentialRequest::SetFunctionArg(const VerifyFunctionArg& _functionArg)
{
    m_functionArg = _functionArg;
    m_functionArgHasBeenSet = true;
}

bool VerifyCredentialRequest::FunctionArgHasBeenSet() const
{
    return m_functionArgHasBeenSet;
}



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

#include <tencentcloud/ocr/v20181119/model/GetCardVerificationExternalResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

GetCardVerificationExternalResultRequest::GetCardVerificationExternalResultRequest() :
    m_cardVerificationTokenHasBeenSet(false)
{
}

string GetCardVerificationExternalResultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cardVerificationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardVerificationToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cardVerificationToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetCardVerificationExternalResultRequest::GetCardVerificationToken() const
{
    return m_cardVerificationToken;
}

void GetCardVerificationExternalResultRequest::SetCardVerificationToken(const string& _cardVerificationToken)
{
    m_cardVerificationToken = _cardVerificationToken;
    m_cardVerificationTokenHasBeenSet = true;
}

bool GetCardVerificationExternalResultRequest::CardVerificationTokenHasBeenSet() const
{
    return m_cardVerificationTokenHasBeenSet;
}



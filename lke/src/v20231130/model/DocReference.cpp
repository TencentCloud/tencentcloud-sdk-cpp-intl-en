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

#include <tencentcloud/lke/v20231130/model/DocReference.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

DocReference::DocReference() :
    m_docBizIdHasBeenSet(false),
    m_referBizIdHasBeenSet(false),
    m_docNameHasBeenSet(false),
    m_knowledgeBizIdHasBeenSet(false),
    m_knowledgeNameHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome DocReference::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DocBizId") && !value["DocBizId"].IsNull())
    {
        if (!value["DocBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocReference.DocBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docBizId = string(value["DocBizId"].GetString());
        m_docBizIdHasBeenSet = true;
    }

    if (value.HasMember("ReferBizId") && !value["ReferBizId"].IsNull())
    {
        if (!value["ReferBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocReference.ReferBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referBizId = string(value["ReferBizId"].GetString());
        m_referBizIdHasBeenSet = true;
    }

    if (value.HasMember("DocName") && !value["DocName"].IsNull())
    {
        if (!value["DocName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocReference.DocName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docName = string(value["DocName"].GetString());
        m_docNameHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeBizId") && !value["KnowledgeBizId"].IsNull())
    {
        if (!value["KnowledgeBizId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocReference.KnowledgeBizId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeBizId = string(value["KnowledgeBizId"].GetString());
        m_knowledgeBizIdHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeName") && !value["KnowledgeName"].IsNull())
    {
        if (!value["KnowledgeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocReference.KnowledgeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeName = string(value["KnowledgeName"].GetString());
        m_knowledgeNameHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DocReference.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocReference::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_docBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_referBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_docNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docName.c_str(), allocator).Move(), allocator);
    }

    if (m_knowledgeBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeBizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_knowledgeBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_knowledgeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_knowledgeName.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


string DocReference::GetDocBizId() const
{
    return m_docBizId;
}

void DocReference::SetDocBizId(const string& _docBizId)
{
    m_docBizId = _docBizId;
    m_docBizIdHasBeenSet = true;
}

bool DocReference::DocBizIdHasBeenSet() const
{
    return m_docBizIdHasBeenSet;
}

string DocReference::GetReferBizId() const
{
    return m_referBizId;
}

void DocReference::SetReferBizId(const string& _referBizId)
{
    m_referBizId = _referBizId;
    m_referBizIdHasBeenSet = true;
}

bool DocReference::ReferBizIdHasBeenSet() const
{
    return m_referBizIdHasBeenSet;
}

string DocReference::GetDocName() const
{
    return m_docName;
}

void DocReference::SetDocName(const string& _docName)
{
    m_docName = _docName;
    m_docNameHasBeenSet = true;
}

bool DocReference::DocNameHasBeenSet() const
{
    return m_docNameHasBeenSet;
}

string DocReference::GetKnowledgeBizId() const
{
    return m_knowledgeBizId;
}

void DocReference::SetKnowledgeBizId(const string& _knowledgeBizId)
{
    m_knowledgeBizId = _knowledgeBizId;
    m_knowledgeBizIdHasBeenSet = true;
}

bool DocReference::KnowledgeBizIdHasBeenSet() const
{
    return m_knowledgeBizIdHasBeenSet;
}

string DocReference::GetKnowledgeName() const
{
    return m_knowledgeName;
}

void DocReference::SetKnowledgeName(const string& _knowledgeName)
{
    m_knowledgeName = _knowledgeName;
    m_knowledgeNameHasBeenSet = true;
}

bool DocReference::KnowledgeNameHasBeenSet() const
{
    return m_knowledgeNameHasBeenSet;
}

string DocReference::GetUrl() const
{
    return m_url;
}

void DocReference::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DocReference::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}


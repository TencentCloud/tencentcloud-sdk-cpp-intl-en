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

#include <tencentcloud/scf/v20180416/model/GetProvisionedConcurrencyConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

GetProvisionedConcurrencyConfigRequest::GetProvisionedConcurrencyConfigRequest() :
    m_functionNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_qualifierHasBeenSet(false)
{
}

string GetProvisionedConcurrencyConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_functionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunctionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_functionName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_qualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qualifier";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_qualifier.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetProvisionedConcurrencyConfigRequest::GetFunctionName() const
{
    return m_functionName;
}

void GetProvisionedConcurrencyConfigRequest::SetFunctionName(const string& _functionName)
{
    m_functionName = _functionName;
    m_functionNameHasBeenSet = true;
}

bool GetProvisionedConcurrencyConfigRequest::FunctionNameHasBeenSet() const
{
    return m_functionNameHasBeenSet;
}

string GetProvisionedConcurrencyConfigRequest::GetNamespace() const
{
    return m_namespace;
}

void GetProvisionedConcurrencyConfigRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool GetProvisionedConcurrencyConfigRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string GetProvisionedConcurrencyConfigRequest::GetQualifier() const
{
    return m_qualifier;
}

void GetProvisionedConcurrencyConfigRequest::SetQualifier(const string& _qualifier)
{
    m_qualifier = _qualifier;
    m_qualifierHasBeenSet = true;
}

bool GetProvisionedConcurrencyConfigRequest::QualifierHasBeenSet() const
{
    return m_qualifierHasBeenSet;
}



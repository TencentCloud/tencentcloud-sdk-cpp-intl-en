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

#include <tencentcloud/intlpartnersmgt/v20220928/model/DescribeCustomerBillDownloadUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

DescribeCustomerBillDownloadUrlRequest::DescribeCustomerBillDownloadUrlRequest() :
    m_monthHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_customerUinTypeHasBeenSet(false),
    m_fileLanguageHasBeenSet(false),
    m_customerUinHasBeenSet(false)
{
}

string DescribeCustomerBillDownloadUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_monthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Month";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_month.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_customerUinTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerUinType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customerUinType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileLanguageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileLanguage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileLanguage.c_str(), allocator).Move(), allocator);
    }

    if (m_customerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_customerUin, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCustomerBillDownloadUrlRequest::GetMonth() const
{
    return m_month;
}

void DescribeCustomerBillDownloadUrlRequest::SetMonth(const string& _month)
{
    m_month = _month;
    m_monthHasBeenSet = true;
}

bool DescribeCustomerBillDownloadUrlRequest::MonthHasBeenSet() const
{
    return m_monthHasBeenSet;
}

string DescribeCustomerBillDownloadUrlRequest::GetFileType() const
{
    return m_fileType;
}

void DescribeCustomerBillDownloadUrlRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool DescribeCustomerBillDownloadUrlRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string DescribeCustomerBillDownloadUrlRequest::GetCustomerUinType() const
{
    return m_customerUinType;
}

void DescribeCustomerBillDownloadUrlRequest::SetCustomerUinType(const string& _customerUinType)
{
    m_customerUinType = _customerUinType;
    m_customerUinTypeHasBeenSet = true;
}

bool DescribeCustomerBillDownloadUrlRequest::CustomerUinTypeHasBeenSet() const
{
    return m_customerUinTypeHasBeenSet;
}

string DescribeCustomerBillDownloadUrlRequest::GetFileLanguage() const
{
    return m_fileLanguage;
}

void DescribeCustomerBillDownloadUrlRequest::SetFileLanguage(const string& _fileLanguage)
{
    m_fileLanguage = _fileLanguage;
    m_fileLanguageHasBeenSet = true;
}

bool DescribeCustomerBillDownloadUrlRequest::FileLanguageHasBeenSet() const
{
    return m_fileLanguageHasBeenSet;
}

int64_t DescribeCustomerBillDownloadUrlRequest::GetCustomerUin() const
{
    return m_customerUin;
}

void DescribeCustomerBillDownloadUrlRequest::SetCustomerUin(const int64_t& _customerUin)
{
    m_customerUin = _customerUin;
    m_customerUinHasBeenSet = true;
}

bool DescribeCustomerBillDownloadUrlRequest::CustomerUinHasBeenSet() const
{
    return m_customerUinHasBeenSet;
}



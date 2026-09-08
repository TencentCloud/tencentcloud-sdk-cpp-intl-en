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

#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaConsoleDataInternational.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

DescribeCaptchaConsoleDataInternational::DescribeCaptchaConsoleDataInternational() :
    m_dataListHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_pageIndexHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCaptchaConsoleDataInternational::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataList") && !value["DataList"].IsNull())
    {
        if (!value["DataList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleDataInternational.DataList` is not array type"));

        const rapidjson::Value &tmpValue = value["DataList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeCaptchaConsoleSubDataInternational item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataList.push_back(item);
        }
        m_dataListHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleDataInternational.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("PageIndex") && !value["PageIndex"].IsNull())
    {
        if (!value["PageIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaConsoleDataInternational.PageIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageIndex = value["PageIndex"].GetInt64();
        m_pageIndexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeCaptchaConsoleDataInternational::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataList.begin(); itr != m_dataList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_pageIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageIndex, allocator);
    }

}


vector<DescribeCaptchaConsoleSubDataInternational> DescribeCaptchaConsoleDataInternational::GetDataList() const
{
    return m_dataList;
}

void DescribeCaptchaConsoleDataInternational::SetDataList(const vector<DescribeCaptchaConsoleSubDataInternational>& _dataList)
{
    m_dataList = _dataList;
    m_dataListHasBeenSet = true;
}

bool DescribeCaptchaConsoleDataInternational::DataListHasBeenSet() const
{
    return m_dataListHasBeenSet;
}

int64_t DescribeCaptchaConsoleDataInternational::GetTotal() const
{
    return m_total;
}

void DescribeCaptchaConsoleDataInternational::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool DescribeCaptchaConsoleDataInternational::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t DescribeCaptchaConsoleDataInternational::GetPageIndex() const
{
    return m_pageIndex;
}

void DescribeCaptchaConsoleDataInternational::SetPageIndex(const int64_t& _pageIndex)
{
    m_pageIndex = _pageIndex;
    m_pageIndexHasBeenSet = true;
}

bool DescribeCaptchaConsoleDataInternational::PageIndexHasBeenSet() const
{
    return m_pageIndexHasBeenSet;
}


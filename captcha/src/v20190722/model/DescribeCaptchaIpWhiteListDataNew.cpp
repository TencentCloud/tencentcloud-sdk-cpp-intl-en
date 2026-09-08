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

#include <tencentcloud/captcha/v20190722/model/DescribeCaptchaIpWhiteListDataNew.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

DescribeCaptchaIpWhiteListDataNew::DescribeCaptchaIpWhiteListDataNew() :
    m_dataListHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_pageIndexHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCaptchaIpWhiteListDataNew::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataList") && !value["DataList"].IsNull())
    {
        if (!value["DataList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaIpWhiteListDataNew.DataList` is not array type"));

        const rapidjson::Value &tmpValue = value["DataList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeCaptchaWhiteListItem item;
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
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaIpWhiteListDataNew.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("PageIndex") && !value["PageIndex"].IsNull())
    {
        if (!value["PageIndex"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCaptchaIpWhiteListDataNew.PageIndex` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageIndex = value["PageIndex"].GetInt64();
        m_pageIndexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeCaptchaIpWhiteListDataNew::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


vector<DescribeCaptchaWhiteListItem> DescribeCaptchaIpWhiteListDataNew::GetDataList() const
{
    return m_dataList;
}

void DescribeCaptchaIpWhiteListDataNew::SetDataList(const vector<DescribeCaptchaWhiteListItem>& _dataList)
{
    m_dataList = _dataList;
    m_dataListHasBeenSet = true;
}

bool DescribeCaptchaIpWhiteListDataNew::DataListHasBeenSet() const
{
    return m_dataListHasBeenSet;
}

int64_t DescribeCaptchaIpWhiteListDataNew::GetTotal() const
{
    return m_total;
}

void DescribeCaptchaIpWhiteListDataNew::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool DescribeCaptchaIpWhiteListDataNew::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t DescribeCaptchaIpWhiteListDataNew::GetPageIndex() const
{
    return m_pageIndex;
}

void DescribeCaptchaIpWhiteListDataNew::SetPageIndex(const int64_t& _pageIndex)
{
    m_pageIndex = _pageIndex;
    m_pageIndexHasBeenSet = true;
}

bool DescribeCaptchaIpWhiteListDataNew::PageIndexHasBeenSet() const
{
    return m_pageIndexHasBeenSet;
}


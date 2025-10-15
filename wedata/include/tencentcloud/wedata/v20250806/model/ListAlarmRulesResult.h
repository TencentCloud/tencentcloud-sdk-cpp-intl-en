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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTALARMRULESRESULT_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTALARMRULESRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/AlarmRuleData.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Query Alarm rule list.
                */
                class ListAlarmRulesResult : public AbstractModel
                {
                public:
                    ListAlarmRulesResult();
                    ~ListAlarmRulesResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Page number for pagination. current page number.
                     * @return PageNumber Page number for pagination. current page number.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page number for pagination. current page number.
                     * @param _pageNumber Page number for pagination. current page number.
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Specifies the number of items to display per page.
                     * @return PageSize Specifies the number of items to display per page.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Specifies the number of items to display per page.
                     * @param _pageSize Specifies the number of items to display per page.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Total number of pages.
                     * @return TotalPageNumber Total number of pages.
                     * 
                     */
                    uint64_t GetTotalPageNumber() const;

                    /**
                     * 设置Total number of pages.
                     * @param _totalPageNumber Total number of pages.
                     * 
                     */
                    void SetTotalPageNumber(const uint64_t& _totalPageNumber);

                    /**
                     * 判断参数 TotalPageNumber 是否已赋值
                     * @return TotalPageNumber 是否已赋值
                     * 
                     */
                    bool TotalPageNumberHasBeenSet() const;

                    /**
                     * 获取Count of all Alarm rules.
                     * @return TotalCount Count of all Alarm rules.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Count of all Alarm rules.
                     * @param _totalCount Count of all Alarm rules.
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Alert rule information list.
                     * @return Items Alert rule information list.
                     * 
                     */
                    std::vector<AlarmRuleData> GetItems() const;

                    /**
                     * 设置Alert rule information list.
                     * @param _items Alert rule information list.
                     * 
                     */
                    void SetItems(const std::vector<AlarmRuleData>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * Page number for pagination. current page number.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Specifies the number of items to display per page.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Total number of pages.
                     */
                    uint64_t m_totalPageNumber;
                    bool m_totalPageNumberHasBeenSet;

                    /**
                     * Count of all Alarm rules.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Alert rule information list.
                     */
                    std::vector<AlarmRuleData> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTALARMRULESRESULT_H_

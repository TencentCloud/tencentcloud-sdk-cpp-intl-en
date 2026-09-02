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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_FILTER_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/WhereFilter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * The list query API adopts the new filter API, which is directly passed to the backend for query filtering.
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Query Quantity Limit
                     * @return Limit Query Quantity Limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Query Quantity Limit
                     * @param _limit Query Quantity Limit
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Query Offset Position
                     * @return Offset Query Offset Position
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Query Offset Position
                     * @param _offset Query Offset Position
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Sort by Ascending or Descending Order. Ascending: asc, Descending: desc.
                     * @return Order Sort by Ascending or Descending Order. Ascending: asc, Descending: desc.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sort by Ascending or Descending Order. Ascending: asc, Descending: desc.
                     * @param _order Sort by Ascending or Descending Order. Ascending: asc, Descending: desc.
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Fields to Sort
                     * @return By Fields to Sort
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Fields to Sort
                     * @param _by Fields to Sort
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取Filtered Columns and Content
                     * @return Filters Filtered Columns and Content
                     * 
                     */
                    std::vector<WhereFilter> GetFilters() const;

                    /**
                     * 设置Filtered Columns and Content
                     * @param _filters Filtered Columns and Content
                     * 
                     */
                    void SetFilters(const std::vector<WhereFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Can be left blank. Log usage query time.
                     * @return StartTime Can be left blank. Log usage query time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Can be left blank. Log usage query time.
                     * @param _startTime Can be left blank. Log usage query time.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Can be left blank. Log usage query time.
                     * @return EndTime Can be left blank. Log usage query time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Can be left blank. Log usage query time.
                     * @param _endTime Can be left blank. Log usage query time.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Query Quantity Limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Query Offset Position
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sort by Ascending or Descending Order. Ascending: asc, Descending: desc.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Fields to Sort
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Filtered Columns and Content
                     */
                    std::vector<WhereFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Can be left blank. Log usage query time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Can be left blank. Log usage query time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_FILTER_H_

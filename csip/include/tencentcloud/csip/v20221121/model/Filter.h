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
                * Query filters
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Max number of returned results
                     * @return Limit Max number of returned results
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Max number of returned results
                     * @param _limit Max number of returned results
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
                     * 获取Query offset
                     * @return Offset Query offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Query offset
                     * @param _offset Query offset
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
                     * 获取Sorting order. Values: `asc` (ascending), `desc` (descending).
                     * @return Order Sorting order. Values: `asc` (ascending), `desc` (descending).
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting order. Values: `asc` (ascending), `desc` (descending).
                     * @param _order Sorting order. Values: `asc` (ascending), `desc` (descending).
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
                     * 获取Specify the field used for sorting
                     * @return By Specify the field used for sorting
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Specify the field used for sorting
                     * @param _by Specify the field used for sorting
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
                     * 获取Filtered columns and content
                     * @return Filters Filtered columns and content
                     * 
                     */
                    std::vector<WhereFilter> GetFilters() const;

                    /**
                     * 设置Filtered columns and content
                     * @param _filters Filtered columns and content
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
                     * 获取Start time of the query period. 
                     * @return StartTime Start time of the query period. 
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the query period. 
                     * @param _startTime Start time of the query period. 
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
                     * 获取End time of the query period.
                     * @return EndTime End time of the query period.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the query period.
                     * @param _endTime End time of the query period.
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
                     * Max number of returned results
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Query offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting order. Values: `asc` (ascending), `desc` (descending).
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Specify the field used for sorting
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * Filtered columns and content
                     */
                    std::vector<WhereFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Start time of the query period. 
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the query period.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_FILTER_H_

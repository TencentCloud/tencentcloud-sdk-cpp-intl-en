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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEVPCACRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEVPCACRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CommonFilter.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeVpcAcRule request structure.
                */
                class DescribeVpcAcRuleRequest : public AbstractModel
                {
                public:
                    DescribeVpcAcRuleRequest();
                    ~DescribeVpcAcRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Limit
                     * @return Limit Limit
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Limit
                     * @param _limit Limit
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset
                     * @return Offset Offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param _offset Offset
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Index to be queried, used in specific scenarios, can be left blank
                     * @return Index Index to be queried, used in specific scenarios, can be left blank
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置Index to be queried, used in specific scenarios, can be left blank
                     * @param _index Index to be queried, used in specific scenarios, can be left blank
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取Filter combinations
                     * @return Filters Filter combinations
                     * 
                     */
                    std::vector<CommonFilter> GetFilters() const;

                    /**
                     * 设置Filter combinations
                     * @param _filters Filter combinations
                     * 
                     */
                    void SetFilters(const std::vector<CommonFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Search start time
                     * @return StartTime Search start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Search start time
                     * @param _startTime Search start time
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
                     * 获取Search end time
                     * @return EndTime Search end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Search end time
                     * @param _endTime Search end time
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Order Type:desc,asc
                     * @return Order Order Type:desc,asc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Order Type:desc,asc
                     * @param _order Order Type:desc,asc
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
                     * 获取Order By FileName
                     * @return By Order By FileName
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置Order By FileName
                     * @param _by Order By FileName
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * Limit
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Index to be queried, used in specific scenarios, can be left blank
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * Filter combinations
                     */
                    std::vector<CommonFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Search start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Search end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Order Type:desc,asc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Order By FileName
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEVPCACRULEREQUEST_H_

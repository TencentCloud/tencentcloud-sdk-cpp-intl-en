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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERDATAENGINECONFIGREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERDATAENGINECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Filter.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeUserDataEngineConfig request structure.
                */
                class DescribeUserDataEngineConfigRequest : public AbstractModel
                {
                public:
                    DescribeUserDataEngineConfigRequest();
                    ~DescribeUserDataEngineConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sorting methods; desc means in reverse order; asc means in order.
                     * @return Sorting Sorting methods; desc means in reverse order; asc means in order.
                     * 
                     */
                    std::string GetSorting() const;

                    /**
                     * 设置Sorting methods; desc means in reverse order; asc means in order.
                     * @param _sorting Sorting methods; desc means in reverse order; asc means in order.
                     * 
                     */
                    void SetSorting(const std::string& _sorting);

                    /**
                     * 判断参数 Sorting 是否已赋值
                     * @return Sorting 是否已赋值
                     * 
                     */
                    bool SortingHasBeenSet() const;

                    /**
                     * 获取Quantity of returns. It is 10 by default, and the maximum value is 100.
                     * @return Limit Quantity of returns. It is 10 by default, and the maximum value is 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Quantity of returns. It is 10 by default, and the maximum value is 100.
                     * @param _limit Quantity of returns. It is 10 by default, and the maximum value is 100.
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
                     * 获取Offset, which is 0 by default.
                     * @return Offset Offset, which is 0 by default.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset, which is 0 by default.
                     * @param _offset Offset, which is 0 by default.
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
                     * 获取Sorting fields, which support the following type: create-time
                     * @return SortBy Sorting fields, which support the following type: create-time
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置Sorting fields, which support the following type: create-time
                     * @param _sortBy Sorting fields, which support the following type: create-time
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取Filter criteria. The following filter types are supported. The parameter Name should be one of them. The number of values that can be filtered by each type of parameter should not be bigger than 5.
app-id - String - (filtering appid)
engine-id - String - (filtering engine ID)
                     * @return Filters Filter criteria. The following filter types are supported. The parameter Name should be one of them. The number of values that can be filtered by each type of parameter should not be bigger than 5.
app-id - String - (filtering appid)
engine-id - String - (filtering engine ID)
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria. The following filter types are supported. The parameter Name should be one of them. The number of values that can be filtered by each type of parameter should not be bigger than 5.
app-id - String - (filtering appid)
engine-id - String - (filtering engine ID)
                     * @param _filters Filter criteria. The following filter types are supported. The parameter Name should be one of them. The number of values that can be filtered by each type of parameter should not be bigger than 5.
app-id - String - (filtering appid)
engine-id - String - (filtering engine ID)
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Sorting methods; desc means in reverse order; asc means in order.
                     */
                    std::string m_sorting;
                    bool m_sortingHasBeenSet;

                    /**
                     * Quantity of returns. It is 10 by default, and the maximum value is 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset, which is 0 by default.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting fields, which support the following type: create-time
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * Filter criteria. The following filter types are supported. The parameter Name should be one of them. The number of values that can be filtered by each type of parameter should not be bigger than 5.
app-id - String - (filtering appid)
engine-id - String - (filtering engine ID)
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERDATAENGINECONFIGREQUEST_H_

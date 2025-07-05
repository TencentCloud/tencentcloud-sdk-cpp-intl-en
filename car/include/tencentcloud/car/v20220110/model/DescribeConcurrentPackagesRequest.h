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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBECONCURRENTPACKAGESREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBECONCURRENTPACKAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/car/v20220110/model/Filter.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * DescribeConcurrentPackages request structure.
                */
                class DescribeConcurrentPackagesRequest : public AbstractModel
                {
                public:
                    DescribeConcurrentPackagesRequest();
                    ~DescribeConcurrentPackagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Subscript.
                     * @return Offset Subscript.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Subscript.
                     * @param _offset Subscript.
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
                     * 获取Number of entries per page.
                     * @return Limit Number of entries per page.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page.
                     * @param _limit Number of entries per page.
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
                     * 获取Filter List
                     * @return Filters Filter List
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter List
                     * @param _filters Filter List
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
                     * Subscript.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of entries per page.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter List
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBECONCURRENTPACKAGESREQUEST_H_

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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/ZoneFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeZones request structure.
                */
                class DescribeZonesRequest : public AbstractModel
                {
                public:
                    DescribeZonesRequest();
                    ~DescribeZonesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination parameter, which specifies the offset.
                     * @return Offset Pagination parameter, which specifies the offset.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination parameter, which specifies the offset.
                     * @param _offset Pagination parameter, which specifies the offset.
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
                     * 获取Pagination parameter, which specifies the number of sites returned in each page.
                     * @return Limit Pagination parameter, which specifies the number of sites returned in each page.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination parameter, which specifies the number of sites returned in each page.
                     * @param _limit Pagination parameter, which specifies the number of sites returned in each page.
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
                     * 获取Query condition filter, which supports complex type.
                     * @return Filters Query condition filter, which supports complex type.
                     * 
                     */
                    std::vector<ZoneFilter> GetFilters() const;

                    /**
                     * 设置Query condition filter, which supports complex type.
                     * @param _filters Query condition filter, which supports complex type.
                     * 
                     */
                    void SetFilters(const std::vector<ZoneFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Pagination parameter, which specifies the offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination parameter, which specifies the number of sites returned in each page.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Query condition filter, which supports complex type.
                     */
                    std::vector<ZoneFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONESREQUEST_H_

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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEORIGINGROUPREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEORIGINGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/OriginFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeOriginGroup request structure.
                */
                class DescribeOriginGroupRequest : public AbstractModel
                {
                public:
                    DescribeOriginGroupRequest();
                    ~DescribeOriginGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination parameter
                     * @return Offset Pagination parameter
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination parameter
                     * @param _offset Pagination parameter
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
                     * 获取Pagination parameter
                     * @return Limit Pagination parameter
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Pagination parameter
                     * @param _limit Pagination parameter
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
                     * 获取Filter parameters
                     * @return Filters Filter parameters
                     * 
                     */
                    std::vector<OriginFilter> GetFilters() const;

                    /**
                     * 设置Filter parameters
                     * @param _filters Filter parameters
                     * 
                     */
                    void SetFilters(const std::vector<OriginFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Site ID
If it’s not specified, all origin groups will be obtained.
                     * @return ZoneId Site ID
If it’s not specified, all origin groups will be obtained.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID
If it’s not specified, all origin groups will be obtained.
                     * @param _zoneId Site ID
If it’s not specified, all origin groups will be obtained.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                private:

                    /**
                     * Pagination parameter
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination parameter
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter parameters
                     */
                    std::vector<OriginFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Site ID
If it’s not specified, all origin groups will be obtained.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEORIGINGROUPREQUEST_H_

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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEVULSREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEVULSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yunjing/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVuls request structure.
                */
                class DescribeVulsRequest : public AbstractModel
                {
                public:
                    DescribeVulsRequest();
                    ~DescribeVulsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Vulnerability type.
<li>WEB: web application vulnerability</li>
<li>SYSTEM: system component vulnerability</li>
<li>BASELINE: security baseline</li>
                     * @return VulType Vulnerability type.
<li>WEB: web application vulnerability</li>
<li>SYSTEM: system component vulnerability</li>
<li>BASELINE: security baseline</li>
                     * 
                     */
                    std::string GetVulType() const;

                    /**
                     * 设置Vulnerability type.
<li>WEB: web application vulnerability</li>
<li>SYSTEM: system component vulnerability</li>
<li>BASELINE: security baseline</li>
                     * @param _vulType Vulnerability type.
<li>WEB: web application vulnerability</li>
<li>SYSTEM: system component vulnerability</li>
<li>BASELINE: security baseline</li>
                     * 
                     */
                    void SetVulType(const std::string& _vulType);

                    /**
                     * 判断参数 VulType 是否已赋值
                     * @return VulType 是否已赋值
                     * 
                     */
                    bool VulTypeHasBeenSet() const;

                    /**
                     * 获取Number of results to be returned. Default value: 10. Maximum value: 100.
                     * @return Limit Number of results to be returned. Default value: 10. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default value: 10. Maximum value: 100.
                     * @param _limit Number of results to be returned. Default value: 10. Maximum value: 100.
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
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取Filter.
<li>Status - String - Required: No - Filter by status (UN_OPERATED: to be processed, FIXED: fixed)

Only one value is allowed for the `Status` filter, and "OR" logic is not supported.
                     * @return Filters Filter.
<li>Status - String - Required: No - Filter by status (UN_OPERATED: to be processed, FIXED: fixed)

Only one value is allowed for the `Status` filter, and "OR" logic is not supported.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter.
<li>Status - String - Required: No - Filter by status (UN_OPERATED: to be processed, FIXED: fixed)

Only one value is allowed for the `Status` filter, and "OR" logic is not supported.
                     * @param _filters Filter.
<li>Status - String - Required: No - Filter by status (UN_OPERATED: to be processed, FIXED: fixed)

Only one value is allowed for the `Status` filter, and "OR" logic is not supported.
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
                     * Vulnerability type.
<li>WEB: web application vulnerability</li>
<li>SYSTEM: system component vulnerability</li>
<li>BASELINE: security baseline</li>
                     */
                    std::string m_vulType;
                    bool m_vulTypeHasBeenSet;

                    /**
                     * Number of results to be returned. Default value: 10. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter.
<li>Status - String - Required: No - Filter by status (UN_OPERATED: to be processed, FIXED: fixed)

Only one value is allowed for the `Status` filter, and "OR" logic is not supported.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEVULSREQUEST_H_

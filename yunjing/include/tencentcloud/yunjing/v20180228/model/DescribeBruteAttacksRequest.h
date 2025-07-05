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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEBRUTEATTACKSREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEBRUTEATTACKSREQUEST_H_

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
                * DescribeBruteAttacks request structure.
                */
                class DescribeBruteAttacksRequest : public AbstractModel
                {
                public:
                    DescribeBruteAttacksRequest();
                    ~DescribeBruteAttacksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Agent `Uuid`.
                     * @return Uuid Agent `Uuid`.
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Agent `Uuid`.
                     * @param _uuid Agent `Uuid`.
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

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
<li>Keywords - String - Required: No - Query keywords</li>
<li>Status - String - Required: No - Query status (FAILED: brute force attack failed, SUCCESS: brute force attack succeeded)</li>
                     * @return Filters Filter.
<li>Keywords - String - Required: No - Query keywords</li>
<li>Status - String - Required: No - Query status (FAILED: brute force attack failed, SUCCESS: brute force attack succeeded)</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter.
<li>Keywords - String - Required: No - Query keywords</li>
<li>Status - String - Required: No - Query status (FAILED: brute force attack failed, SUCCESS: brute force attack succeeded)</li>
                     * @param _filters Filter.
<li>Keywords - String - Required: No - Query keywords</li>
<li>Status - String - Required: No - Query status (FAILED: brute force attack failed, SUCCESS: brute force attack succeeded)</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

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

                private:

                    /**
                     * Agent `Uuid`.
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter.
<li>Keywords - String - Required: No - Query keywords</li>
<li>Status - String - Required: No - Query status (FAILED: brute force attack failed, SUCCESS: brute force attack succeeded)</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number of results to be returned. Default value: 10. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEBRUTEATTACKSREQUEST_H_

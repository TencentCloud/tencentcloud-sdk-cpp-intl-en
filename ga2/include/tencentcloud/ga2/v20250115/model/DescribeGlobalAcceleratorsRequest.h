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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBEGLOBALACCELERATORSREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBEGLOBALACCELERATORSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/Filter.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * DescribeGlobalAccelerators request structure.
                */
                class DescribeGlobalAcceleratorsRequest : public AbstractModel
                {
                public:
                    DescribeGlobalAcceleratorsRequest();
                    ~DescribeGlobalAcceleratorsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Offset. Default value: 0.</p>
                     * @return Offset <p>Offset. Default value: 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Offset. Default value: 0.</p>
                     * @param _offset <p>Offset. Default value: 0.</p>
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
                     * 获取<p>Number of returned results.</p><p>Value range: [1, 200]</p><p>Default value: 20</p>
                     * @return Limit <p>Number of returned results.</p><p>Value range: [1, 200]</p><p>Default value: 20</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of returned results.</p><p>Value range: [1, 200]</p><p>Default value: 20</p>
                     * @param _limit <p>Number of returned results.</p><p>Value range: [1, 200]</p><p>Default value: 20</p>
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
                     * 获取<p>Filter criteria. <li>global-accelerator-id - String - (Filter condition) Global acceleration instance ID.</li> <li>global-accelerator-state - String - (Filter condition) Global acceleration instance status.</li></p>
                     * @return Filters <p>Filter criteria. <li>global-accelerator-id - String - (Filter condition) Global acceleration instance ID.</li> <li>global-accelerator-state - String - (Filter condition) Global acceleration instance status.</li></p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>Filter criteria. <li>global-accelerator-id - String - (Filter condition) Global acceleration instance ID.</li> <li>global-accelerator-state - String - (Filter condition) Global acceleration instance status.</li></p>
                     * @param _filters <p>Filter criteria. <li>global-accelerator-id - String - (Filter condition) Global acceleration instance ID.</li> <li>global-accelerator-state - String - (Filter condition) Global acceleration instance status.</li></p>
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
                     * <p>Offset. Default value: 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of returned results.</p><p>Value range: [1, 200]</p><p>Default value: 20</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Filter criteria. <li>global-accelerator-id - String - (Filter condition) Global acceleration instance ID.</li> <li>global-accelerator-state - String - (Filter condition) Global acceleration instance status.</li></p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBEGLOBALACCELERATORSREQUEST_H_

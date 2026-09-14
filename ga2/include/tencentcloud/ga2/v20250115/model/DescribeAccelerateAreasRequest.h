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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBEACCELERATEAREASREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBEACCELERATEAREASREQUEST_H_

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
                * DescribeAccelerateAreas request structure.
                */
                class DescribeAccelerateAreasRequest : public AbstractModel
                {
                public:
                    DescribeAccelerateAreasRequest();
                    ~DescribeAccelerateAreasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Global acceleration instance ID.</p>
                     * @return GlobalAcceleratorId <p>Global acceleration instance ID.</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>Global acceleration instance ID.</p>
                     * @param _globalAcceleratorId <p>Global acceleration instance ID.</p>
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取<p>Offset. The default is 0.</p>
                     * @return Offset <p>Offset. The default is 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Offset. The default is 0.</p>
                     * @param _offset <p>Offset. The default is 0.</p>
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
                     * 获取<p>Number of instances meeting conditions. Default value: 20. Maximum: 200.</p>
                     * @return Limit <p>Number of instances meeting conditions. Default value: 20. Maximum: 200.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of instances meeting conditions. Default value: 20. Maximum: 200.</p>
                     * @param _limit <p>Number of instances meeting conditions. Default value: 20. Maximum: 200.</p>
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
                     * 获取<p>Filter criteria. accelerate-region - String - (Filter criterion) Terminal node group region.</p>
                     * @return Filters <p>Filter criteria. accelerate-region - String - (Filter criterion) Terminal node group region.</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>Filter criteria. accelerate-region - String - (Filter criterion) Terminal node group region.</p>
                     * @param _filters <p>Filter criteria. accelerate-region - String - (Filter criterion) Terminal node group region.</p>
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
                     * <p>Global acceleration instance ID.</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>Offset. The default is 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of instances meeting conditions. Default value: 20. Maximum: 200.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Filter criteria. accelerate-region - String - (Filter criterion) Terminal node group region.</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBEACCELERATEAREASREQUEST_H_

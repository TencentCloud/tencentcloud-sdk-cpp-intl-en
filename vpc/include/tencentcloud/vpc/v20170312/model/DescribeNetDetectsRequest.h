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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETDETECTSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETDETECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeNetDetects request structure.
                */
                class DescribeNetDetectsRequest : public AbstractModel
                {
                public:
                    DescribeNetDetectsRequest();
                    ~DescribeNetDetectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The array of network probe IDs, such as [`netd-12345678`].
                     * @return NetDetectIds The array of network probe IDs, such as [`netd-12345678`].
                     * 
                     */
                    std::vector<std::string> GetNetDetectIds() const;

                    /**
                     * 设置The array of network probe IDs, such as [`netd-12345678`].
                     * @param _netDetectIds The array of network probe IDs, such as [`netd-12345678`].
                     * 
                     */
                    void SetNetDetectIds(const std::vector<std::string>& _netDetectIds);

                    /**
                     * 判断参数 NetDetectIds 是否已赋值
                     * @return NetDetectIds 是否已赋值
                     * 
                     */
                    bool NetDetectIdsHasBeenSet() const;

                    /**
                     * 获取Filter conditions. `NetDetectIds` and `Filters` cannot be specified at the same time.
<li>vpc-id - String - (Filter condition) The VPC instance ID, such as vpc-12345678.</li>
<li>net-detect-id - String - (Filter condition) The network detection instance ID, such as netd-12345678.</li>
<li>subnet-id - String - (Filter condition) The subnet instance ID, such as subnet-12345678.</li>
<li>net-detect-name - String - (Filter condition) The network detection name.</li>
                     * @return Filters Filter conditions. `NetDetectIds` and `Filters` cannot be specified at the same time.
<li>vpc-id - String - (Filter condition) The VPC instance ID, such as vpc-12345678.</li>
<li>net-detect-id - String - (Filter condition) The network detection instance ID, such as netd-12345678.</li>
<li>subnet-id - String - (Filter condition) The subnet instance ID, such as subnet-12345678.</li>
<li>net-detect-name - String - (Filter condition) The network detection name.</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter conditions. `NetDetectIds` and `Filters` cannot be specified at the same time.
<li>vpc-id - String - (Filter condition) The VPC instance ID, such as vpc-12345678.</li>
<li>net-detect-id - String - (Filter condition) The network detection instance ID, such as netd-12345678.</li>
<li>subnet-id - String - (Filter condition) The subnet instance ID, such as subnet-12345678.</li>
<li>net-detect-name - String - (Filter condition) The network detection name.</li>
                     * @param _filters Filter conditions. `NetDetectIds` and `Filters` cannot be specified at the same time.
<li>vpc-id - String - (Filter condition) The VPC instance ID, such as vpc-12345678.</li>
<li>net-detect-id - String - (Filter condition) The network detection instance ID, such as netd-12345678.</li>
<li>subnet-id - String - (Filter condition) The subnet instance ID, such as subnet-12345678.</li>
<li>net-detect-name - String - (Filter condition) The network detection name.</li>
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
                     * 获取The offset. Default: 0.
                     * @return Offset The offset. Default: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置The offset. Default: 0.
                     * @param _offset The offset. Default: 0.
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
                     * 获取The number of returned values. Default: 20. Maximum: 100.
                     * @return Limit The number of returned values. Default: 20. Maximum: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of returned values. Default: 20. Maximum: 100.
                     * @param _limit The number of returned values. Default: 20. Maximum: 100.
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
                     * The array of network probe IDs, such as [`netd-12345678`].
                     */
                    std::vector<std::string> m_netDetectIds;
                    bool m_netDetectIdsHasBeenSet;

                    /**
                     * Filter conditions. `NetDetectIds` and `Filters` cannot be specified at the same time.
<li>vpc-id - String - (Filter condition) The VPC instance ID, such as vpc-12345678.</li>
<li>net-detect-id - String - (Filter condition) The network detection instance ID, such as netd-12345678.</li>
<li>subnet-id - String - (Filter condition) The subnet instance ID, such as subnet-12345678.</li>
<li>net-detect-name - String - (Filter condition) The network detection name.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The offset. Default: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of returned values. Default: 20. Maximum: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETDETECTSREQUEST_H_

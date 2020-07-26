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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEHAVIPSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEHAVIPSREQUEST_H_

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
                * DescribeHaVips request structure.
                */
                class DescribeHaVipsRequest : public AbstractModel
                {
                public:
                    DescribeHaVipsRequest();
                    ~DescribeHaVipsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique `ID` of the `HAVIP`, such as `havip-9o233uri`.
                     * @return HaVipIds The unique `ID` of the `HAVIP`, such as `havip-9o233uri`.
                     */
                    std::vector<std::string> GetHaVipIds() const;

                    /**
                     * 设置The unique `ID` of the `HAVIP`, such as `havip-9o233uri`.
                     * @param HaVipIds The unique `ID` of the `HAVIP`, such as `havip-9o233uri`.
                     */
                    void SetHaVipIds(const std::vector<std::string>& _haVipIds);

                    /**
                     * 判断参数 HaVipIds 是否已赋值
                     * @return HaVipIds 是否已赋值
                     */
                    bool HaVipIdsHasBeenSet() const;

                    /**
                     * 获取Filter condition. `HaVipIds` and `Filters` cannot be specified at the same time.
<li>havip-id - String - The unique `ID` of the `HAVIP`, such as `havip-9o233uri`.</li>
<li>havip-name - String - `HAVIP` name.</li>
<li>vpc-id - String - The `ID` of the VPC where `HAVIP` is located.</li>
<li>subnet-id - String - The `ID` of the subnet where `HAVIP` is located.</li>
<li>address-ip - String - The `EIP` to which `HAVIP` is bound.</li>
                     * @return Filters Filter condition. `HaVipIds` and `Filters` cannot be specified at the same time.
<li>havip-id - String - The unique `ID` of the `HAVIP`, such as `havip-9o233uri`.</li>
<li>havip-name - String - `HAVIP` name.</li>
<li>vpc-id - String - The `ID` of the VPC where `HAVIP` is located.</li>
<li>subnet-id - String - The `ID` of the subnet where `HAVIP` is located.</li>
<li>address-ip - String - The `EIP` to which `HAVIP` is bound.</li>
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter condition. `HaVipIds` and `Filters` cannot be specified at the same time.
<li>havip-id - String - The unique `ID` of the `HAVIP`, such as `havip-9o233uri`.</li>
<li>havip-name - String - `HAVIP` name.</li>
<li>vpc-id - String - The `ID` of the VPC where `HAVIP` is located.</li>
<li>subnet-id - String - The `ID` of the subnet where `HAVIP` is located.</li>
<li>address-ip - String - The `EIP` to which `HAVIP` is bound.</li>
                     * @param Filters Filter condition. `HaVipIds` and `Filters` cannot be specified at the same time.
<li>havip-id - String - The unique `ID` of the `HAVIP`, such as `havip-9o233uri`.</li>
<li>havip-name - String - `HAVIP` name.</li>
<li>vpc-id - String - The `ID` of the VPC where `HAVIP` is located.</li>
<li>subnet-id - String - The `ID` of the subnet where `HAVIP` is located.</li>
<li>address-ip - String - The `EIP` to which `HAVIP` is bound.</li>
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Offset
                     * @return Offset Offset
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param Offset Offset
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The returned quantity
                     * @return Limit The returned quantity
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The returned quantity
                     * @param Limit The returned quantity
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * The unique `ID` of the `HAVIP`, such as `havip-9o233uri`.
                     */
                    std::vector<std::string> m_haVipIds;
                    bool m_haVipIdsHasBeenSet;

                    /**
                     * Filter condition. `HaVipIds` and `Filters` cannot be specified at the same time.
<li>havip-id - String - The unique `ID` of the `HAVIP`, such as `havip-9o233uri`.</li>
<li>havip-name - String - `HAVIP` name.</li>
<li>vpc-id - String - The `ID` of the VPC where `HAVIP` is located.</li>
<li>subnet-id - String - The `ID` of the subnet where `HAVIP` is located.</li>
<li>address-ip - String - The `EIP` to which `HAVIP` is bound.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The returned quantity
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEHAVIPSREQUEST_H_

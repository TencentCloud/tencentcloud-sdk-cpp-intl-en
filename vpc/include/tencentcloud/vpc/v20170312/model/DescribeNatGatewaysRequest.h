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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYSREQUEST_H_

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
                * DescribeNatGateways request structure.
                */
                class DescribeNatGatewaysRequest : public AbstractModel
                {
                public:
                    DescribeNatGatewaysRequest();
                    ~DescribeNatGatewaysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unified ID of the NAT gateways, such as `nat-123xx454`.
                     * @return NatGatewayIds The unified ID of the NAT gateways, such as `nat-123xx454`.
                     * 
                     */
                    std::vector<std::string> GetNatGatewayIds() const;

                    /**
                     * 设置The unified ID of the NAT gateways, such as `nat-123xx454`.
                     * @param _natGatewayIds The unified ID of the NAT gateways, such as `nat-123xx454`.
                     * 
                     */
                    void SetNatGatewayIds(const std::vector<std::string>& _natGatewayIds);

                    /**
                     * 判断参数 NatGatewayIds 是否已赋值
                     * @return NatGatewayIds 是否已赋值
                     * 
                     */
                    bool NatGatewayIdsHasBeenSet() const;

                    /**
                     * 获取Filters. `NatGatewayIds` and `Filters` cannot be specified at the same time.
<li>nat-gateway-id - String - (Filter) The ID of the protocol port template instance, such as `nat-123xx454`.</li>
<li>vpc-id - String - (Filter) The unique ID of the VPC, such as `vpc-123xx454`.</li>
<li>nat-gateway-name - String - (Filter) The ID of the protocol port template instance, such as `test_nat`.</li>
<li>tag-key - String - (Filter) The tag key, such as `test-key`.</li>
                     * @return Filters Filters. `NatGatewayIds` and `Filters` cannot be specified at the same time.
<li>nat-gateway-id - String - (Filter) The ID of the protocol port template instance, such as `nat-123xx454`.</li>
<li>vpc-id - String - (Filter) The unique ID of the VPC, such as `vpc-123xx454`.</li>
<li>nat-gateway-name - String - (Filter) The ID of the protocol port template instance, such as `test_nat`.</li>
<li>tag-key - String - (Filter) The tag key, such as `test-key`.</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filters. `NatGatewayIds` and `Filters` cannot be specified at the same time.
<li>nat-gateway-id - String - (Filter) The ID of the protocol port template instance, such as `nat-123xx454`.</li>
<li>vpc-id - String - (Filter) The unique ID of the VPC, such as `vpc-123xx454`.</li>
<li>nat-gateway-name - String - (Filter) The ID of the protocol port template instance, such as `test_nat`.</li>
<li>tag-key - String - (Filter) The tag key, such as `test-key`.</li>
                     * @param _filters Filters. `NatGatewayIds` and `Filters` cannot be specified at the same time.
<li>nat-gateway-id - String - (Filter) The ID of the protocol port template instance, such as `nat-123xx454`.</li>
<li>vpc-id - String - (Filter) The unique ID of the VPC, such as `vpc-123xx454`.</li>
<li>nat-gateway-name - String - (Filter) The ID of the protocol port template instance, such as `test_nat`.</li>
<li>tag-key - String - (Filter) The tag key, such as `test-key`.</li>
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
                     * 获取Number of returned results. Default value: 20. Maximum value: 100.
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100.
                     * @param _limit Number of returned results. Default value: 20. Maximum value: 100.
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
                     * The unified ID of the NAT gateways, such as `nat-123xx454`.
                     */
                    std::vector<std::string> m_natGatewayIds;
                    bool m_natGatewayIdsHasBeenSet;

                    /**
                     * Filters. `NatGatewayIds` and `Filters` cannot be specified at the same time.
<li>nat-gateway-id - String - (Filter) The ID of the protocol port template instance, such as `nat-123xx454`.</li>
<li>vpc-id - String - (Filter) The unique ID of the VPC, such as `vpc-123xx454`.</li>
<li>nat-gateway-name - String - (Filter) The ID of the protocol port template instance, such as `test_nat`.</li>
<li>tag-key - String - (Filter) The tag key, such as `test-key`.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYSREQUEST_H_

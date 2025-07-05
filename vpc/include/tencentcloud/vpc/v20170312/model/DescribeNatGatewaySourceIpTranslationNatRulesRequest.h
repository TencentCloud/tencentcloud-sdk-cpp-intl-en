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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYSOURCEIPTRANSLATIONNATRULESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYSOURCEIPTRANSLATIONNATRULESREQUEST_H_

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
                * DescribeNatGatewaySourceIpTranslationNatRules request structure.
                */
                class DescribeNatGatewaySourceIpTranslationNatRulesRequest : public AbstractModel
                {
                public:
                    DescribeNatGatewaySourceIpTranslationNatRulesRequest();
                    ~DescribeNatGatewaySourceIpTranslationNatRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique ID of the NAT Gateway, such as `nat-123xx454`.
                     * @return NatGatewayId The unique ID of the NAT Gateway, such as `nat-123xx454`.
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置The unique ID of the NAT Gateway, such as `nat-123xx454`.
                     * @param _natGatewayId The unique ID of the NAT Gateway, such as `nat-123xx454`.
                     * 
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     * 
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取Filter:
<li>`resource-id`: The subnet ID (such as `subnet-0yi4hekt`) or CVM ID</li>
<li>`public-ip-address`: The EIP, such as `139.199.232.238`</li>
<li>`description` The rule description</li>
                     * @return Filters Filter:
<li>`resource-id`: The subnet ID (such as `subnet-0yi4hekt`) or CVM ID</li>
<li>`public-ip-address`: The EIP, such as `139.199.232.238`</li>
<li>`description` The rule description</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter:
<li>`resource-id`: The subnet ID (such as `subnet-0yi4hekt`) or CVM ID</li>
<li>`public-ip-address`: The EIP, such as `139.199.232.238`</li>
<li>`description` The rule description</li>
                     * @param _filters Filter:
<li>`resource-id`: The subnet ID (such as `subnet-0yi4hekt`) or CVM ID</li>
<li>`public-ip-address`: The EIP, such as `139.199.232.238`</li>
<li>`description` The rule description</li>
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
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取Number of returned results. Default value: 20. Maximum value: 100.
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100.
                     * @param _limit Number of returned results. Default value: 20. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the NAT Gateway, such as `nat-123xx454`.
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * Filter:
<li>`resource-id`: The subnet ID (such as `subnet-0yi4hekt`) or CVM ID</li>
<li>`public-ip-address`: The EIP, such as `139.199.232.238`</li>
<li>`description` The rule description</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENATGATEWAYSOURCEIPTRANSLATIONNATRULESREQUEST_H_

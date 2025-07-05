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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECUSTOMERGATEWAYSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECUSTOMERGATEWAYSREQUEST_H_

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
                * DescribeCustomerGateways request structure.
                */
                class DescribeCustomerGatewaysRequest : public AbstractModel
                {
                public:
                    DescribeCustomerGatewaysRequest();
                    ~DescribeCustomerGatewaysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Customer gateway ID, such as `cgw-2wqq41m9`. Each request can have a maximum of 100 instances. `CustomerGatewayIds` and `Filters` cannot be specified at the same time.
                     * @return CustomerGatewayIds Customer gateway ID, such as `cgw-2wqq41m9`. Each request can have a maximum of 100 instances. `CustomerGatewayIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    std::vector<std::string> GetCustomerGatewayIds() const;

                    /**
                     * 设置Customer gateway ID, such as `cgw-2wqq41m9`. Each request can have a maximum of 100 instances. `CustomerGatewayIds` and `Filters` cannot be specified at the same time.
                     * @param _customerGatewayIds Customer gateway ID, such as `cgw-2wqq41m9`. Each request can have a maximum of 100 instances. `CustomerGatewayIds` and `Filters` cannot be specified at the same time.
                     * 
                     */
                    void SetCustomerGatewayIds(const std::vector<std::string>& _customerGatewayIds);

                    /**
                     * 判断参数 CustomerGatewayIds 是否已赋值
                     * @return CustomerGatewayIds 是否已赋值
                     * 
                     */
                    bool CustomerGatewayIdsHasBeenSet() const;

                    /**
                     * 获取The filter condition. For details, see the Instance Filter Conditions Table. The upper limit for `Filters` in each request is 10 and 5 for `Filter.Values`. `CustomerGatewayIds` and `Filters` cannot be specified at the same time.
<li>customer-gateway-id - String - (Filter condition) The unique ID of the user gateway, such as `cgw-mgp33pll`.</li>
<li>customer-gateway-name - String - (Filter condition) The name of the user gateway, such as `test-cgw`.</li>
<li>ip-address - String - (Filter condition) The public IP address, such as `58.211.1.12`.</li>
                     * @return Filters The filter condition. For details, see the Instance Filter Conditions Table. The upper limit for `Filters` in each request is 10 and 5 for `Filter.Values`. `CustomerGatewayIds` and `Filters` cannot be specified at the same time.
<li>customer-gateway-id - String - (Filter condition) The unique ID of the user gateway, such as `cgw-mgp33pll`.</li>
<li>customer-gateway-name - String - (Filter condition) The name of the user gateway, such as `test-cgw`.</li>
<li>ip-address - String - (Filter condition) The public IP address, such as `58.211.1.12`.</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置The filter condition. For details, see the Instance Filter Conditions Table. The upper limit for `Filters` in each request is 10 and 5 for `Filter.Values`. `CustomerGatewayIds` and `Filters` cannot be specified at the same time.
<li>customer-gateway-id - String - (Filter condition) The unique ID of the user gateway, such as `cgw-mgp33pll`.</li>
<li>customer-gateway-name - String - (Filter condition) The name of the user gateway, such as `test-cgw`.</li>
<li>ip-address - String - (Filter condition) The public IP address, such as `58.211.1.12`.</li>
                     * @param _filters The filter condition. For details, see the Instance Filter Conditions Table. The upper limit for `Filters` in each request is 10 and 5 for `Filter.Values`. `CustomerGatewayIds` and `Filters` cannot be specified at the same time.
<li>customer-gateway-id - String - (Filter condition) The unique ID of the user gateway, such as `cgw-mgp33pll`.</li>
<li>customer-gateway-name - String - (Filter condition) The name of the user gateway, such as `test-cgw`.</li>
<li>ip-address - String - (Filter condition) The public IP address, such as `58.211.1.12`.</li>
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
                     * 获取Offset. Default value: 0. For more information on Offset, see the relevant section in the API [Introduction](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
                     * @return Offset Offset. Default value: 0. For more information on Offset, see the relevant section in the API [Introduction](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0. For more information on Offset, see the relevant section in the API [Introduction](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
                     * @param _offset Offset. Default value: 0. For more information on Offset, see the relevant section in the API [Introduction](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
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
                     * Customer gateway ID, such as `cgw-2wqq41m9`. Each request can have a maximum of 100 instances. `CustomerGatewayIds` and `Filters` cannot be specified at the same time.
                     */
                    std::vector<std::string> m_customerGatewayIds;
                    bool m_customerGatewayIdsHasBeenSet;

                    /**
                     * The filter condition. For details, see the Instance Filter Conditions Table. The upper limit for `Filters` in each request is 10 and 5 for `Filter.Values`. `CustomerGatewayIds` and `Filters` cannot be specified at the same time.
<li>customer-gateway-id - String - (Filter condition) The unique ID of the user gateway, such as `cgw-mgp33pll`.</li>
<li>customer-gateway-name - String - (Filter condition) The name of the user gateway, such as `test-cgw`.</li>
<li>ip-address - String - (Filter condition) The public IP address, such as `58.211.1.12`.</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Offset. Default value: 0. For more information on Offset, see the relevant section in the API [Introduction](https://intl.cloud.tencent.com/document/api/213/11646?from_cn_redirect=1).
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

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECUSTOMERGATEWAYSREQUEST_H_

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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECUSTOMERGATEWAYVENDORSRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECUSTOMERGATEWAYVENDORSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/CustomerGatewayVendor.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeCustomerGatewayVendors response structure.
                */
                class DescribeCustomerGatewayVendorsResponse : public AbstractModel
                {
                public:
                    DescribeCustomerGatewayVendorsResponse();
                    ~DescribeCustomerGatewayVendorsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Customer gateway vendor information object.
                     * @return CustomerGatewayVendorSet Customer gateway vendor information object.
                     * 
                     */
                    std::vector<CustomerGatewayVendor> GetCustomerGatewayVendorSet() const;

                    /**
                     * 判断参数 CustomerGatewayVendorSet 是否已赋值
                     * @return CustomerGatewayVendorSet 是否已赋值
                     * 
                     */
                    bool CustomerGatewayVendorSetHasBeenSet() const;

                private:

                    /**
                     * Customer gateway vendor information object.
                     */
                    std::vector<CustomerGatewayVendor> m_customerGatewayVendorSet;
                    bool m_customerGatewayVendorSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBECUSTOMERGATEWAYVENDORSRESPONSE_H_

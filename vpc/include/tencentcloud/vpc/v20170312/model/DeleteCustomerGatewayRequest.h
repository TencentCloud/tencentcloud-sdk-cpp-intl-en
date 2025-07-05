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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETECUSTOMERGATEWAYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETECUSTOMERGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteCustomerGateway request structure.
                */
                class DeleteCustomerGatewayRequest : public AbstractModel
                {
                public:
                    DeleteCustomerGatewayRequest();
                    ~DeleteCustomerGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the customer gateway, such as `cgw-2wqq41m9`. You can query the customer gateway by using the [DescribeCustomerGateways](https://intl.cloud.tencent.com/document/api/215/17516?from_cn_redirect=1) API.
                     * @return CustomerGatewayId The ID of the customer gateway, such as `cgw-2wqq41m9`. You can query the customer gateway by using the [DescribeCustomerGateways](https://intl.cloud.tencent.com/document/api/215/17516?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetCustomerGatewayId() const;

                    /**
                     * 设置The ID of the customer gateway, such as `cgw-2wqq41m9`. You can query the customer gateway by using the [DescribeCustomerGateways](https://intl.cloud.tencent.com/document/api/215/17516?from_cn_redirect=1) API.
                     * @param _customerGatewayId The ID of the customer gateway, such as `cgw-2wqq41m9`. You can query the customer gateway by using the [DescribeCustomerGateways](https://intl.cloud.tencent.com/document/api/215/17516?from_cn_redirect=1) API.
                     * 
                     */
                    void SetCustomerGatewayId(const std::string& _customerGatewayId);

                    /**
                     * 判断参数 CustomerGatewayId 是否已赋值
                     * @return CustomerGatewayId 是否已赋值
                     * 
                     */
                    bool CustomerGatewayIdHasBeenSet() const;

                private:

                    /**
                     * The ID of the customer gateway, such as `cgw-2wqq41m9`. You can query the customer gateway by using the [DescribeCustomerGateways](https://intl.cloud.tencent.com/document/api/215/17516?from_cn_redirect=1) API.
                     */
                    std::string m_customerGatewayId;
                    bool m_customerGatewayIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETECUSTOMERGATEWAYREQUEST_H_

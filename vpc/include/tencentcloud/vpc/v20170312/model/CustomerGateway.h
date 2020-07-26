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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CUSTOMERGATEWAY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CUSTOMERGATEWAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Customer Gateway
                */
                class CustomerGateway : public AbstractModel
                {
                public:
                    CustomerGateway();
                    ~CustomerGateway() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The unique ID of the customer gateway
                     * @return CustomerGatewayId The unique ID of the customer gateway
                     */
                    std::string GetCustomerGatewayId() const;

                    /**
                     * 设置The unique ID of the customer gateway
                     * @param CustomerGatewayId The unique ID of the customer gateway
                     */
                    void SetCustomerGatewayId(const std::string& _customerGatewayId);

                    /**
                     * 判断参数 CustomerGatewayId 是否已赋值
                     * @return CustomerGatewayId 是否已赋值
                     */
                    bool CustomerGatewayIdHasBeenSet() const;

                    /**
                     * 获取Gateway Name
                     * @return CustomerGatewayName Gateway Name
                     */
                    std::string GetCustomerGatewayName() const;

                    /**
                     * 设置Gateway Name
                     * @param CustomerGatewayName Gateway Name
                     */
                    void SetCustomerGatewayName(const std::string& _customerGatewayName);

                    /**
                     * 判断参数 CustomerGatewayName 是否已赋值
                     * @return CustomerGatewayName 是否已赋值
                     */
                    bool CustomerGatewayNameHasBeenSet() const;

                    /**
                     * 获取Public network address
                     * @return IpAddress Public network address
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置Public network address
                     * @param IpAddress Public network address
                     */
                    void SetIpAddress(const std::string& _ipAddress);

                    /**
                     * 判断参数 IpAddress 是否已赋值
                     * @return IpAddress 是否已赋值
                     */
                    bool IpAddressHasBeenSet() const;

                    /**
                     * 获取The creation time.
                     * @return CreatedTime The creation time.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置The creation time.
                     * @param CreatedTime The creation time.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the customer gateway
                     */
                    std::string m_customerGatewayId;
                    bool m_customerGatewayIdHasBeenSet;

                    /**
                     * Gateway Name
                     */
                    std::string m_customerGatewayName;
                    bool m_customerGatewayNameHasBeenSet;

                    /**
                     * Public network address
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * The creation time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CUSTOMERGATEWAY_H_

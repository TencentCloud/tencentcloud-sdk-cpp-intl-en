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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETWORKINTERFACELIMITRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETWORKINTERFACELIMITRESPONSE_H_

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
                * DescribeNetworkInterfaceLimit response structure.
                */
                class DescribeNetworkInterfaceLimitResponse : public AbstractModel
                {
                public:
                    DescribeNetworkInterfaceLimitResponse();
                    ~DescribeNetworkInterfaceLimitResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Quota of ENIs mounted to a CVM instance in a standard way
                     * @return EniQuantity Quota of ENIs mounted to a CVM instance in a standard way
                     * 
                     */
                    int64_t GetEniQuantity() const;

                    /**
                     * 判断参数 EniQuantity 是否已赋值
                     * @return EniQuantity 是否已赋值
                     * 
                     */
                    bool EniQuantityHasBeenSet() const;

                    /**
                     * 获取Quota of IP addresses that can be allocated to each standard-mounted ENI
                     * @return EniPrivateIpAddressQuantity Quota of IP addresses that can be allocated to each standard-mounted ENI
                     * 
                     */
                    int64_t GetEniPrivateIpAddressQuantity() const;

                    /**
                     * 判断参数 EniPrivateIpAddressQuantity 是否已赋值
                     * @return EniPrivateIpAddressQuantity 是否已赋值
                     * 
                     */
                    bool EniPrivateIpAddressQuantityHasBeenSet() const;

                    /**
                     * 获取Quota of ENIs mounted to a CVM instance as an extension
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ExtendEniQuantity Quota of ENIs mounted to a CVM instance as an extension
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetExtendEniQuantity() const;

                    /**
                     * 判断参数 ExtendEniQuantity 是否已赋值
                     * @return ExtendEniQuantity 是否已赋值
                     * 
                     */
                    bool ExtendEniQuantityHasBeenSet() const;

                    /**
                     * 获取Quota of IP addresses that can be allocated to each extension-mounted ENI.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ExtendEniPrivateIpAddressQuantity Quota of IP addresses that can be allocated to each extension-mounted ENI.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetExtendEniPrivateIpAddressQuantity() const;

                    /**
                     * 判断参数 ExtendEniPrivateIpAddressQuantity 是否已赋值
                     * @return ExtendEniPrivateIpAddressQuantity 是否已赋值
                     * 
                     */
                    bool ExtendEniPrivateIpAddressQuantityHasBeenSet() const;

                    /**
                     * 获取The quota of relayed ENIs
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return SubEniQuantity The quota of relayed ENIs
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSubEniQuantity() const;

                    /**
                     * 判断参数 SubEniQuantity 是否已赋值
                     * @return SubEniQuantity 是否已赋值
                     * 
                     */
                    bool SubEniQuantityHasBeenSet() const;

                    /**
                     * 获取The quota of IPs that can be assigned to each relayed ENI.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return SubEniPrivateIpAddressQuantity The quota of IPs that can be assigned to each relayed ENI.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSubEniPrivateIpAddressQuantity() const;

                    /**
                     * 判断参数 SubEniPrivateIpAddressQuantity 是否已赋值
                     * @return SubEniPrivateIpAddressQuantity 是否已赋值
                     * 
                     */
                    bool SubEniPrivateIpAddressQuantityHasBeenSet() const;

                private:

                    /**
                     * Quota of ENIs mounted to a CVM instance in a standard way
                     */
                    int64_t m_eniQuantity;
                    bool m_eniQuantityHasBeenSet;

                    /**
                     * Quota of IP addresses that can be allocated to each standard-mounted ENI
                     */
                    int64_t m_eniPrivateIpAddressQuantity;
                    bool m_eniPrivateIpAddressQuantityHasBeenSet;

                    /**
                     * Quota of ENIs mounted to a CVM instance as an extension
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_extendEniQuantity;
                    bool m_extendEniQuantityHasBeenSet;

                    /**
                     * Quota of IP addresses that can be allocated to each extension-mounted ENI.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_extendEniPrivateIpAddressQuantity;
                    bool m_extendEniPrivateIpAddressQuantityHasBeenSet;

                    /**
                     * The quota of relayed ENIs
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_subEniQuantity;
                    bool m_subEniQuantityHasBeenSet;

                    /**
                     * The quota of IPs that can be assigned to each relayed ENI.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_subEniPrivateIpAddressQuantity;
                    bool m_subEniPrivateIpAddressQuantityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBENETWORKINTERFACELIMITRESPONSE_H_

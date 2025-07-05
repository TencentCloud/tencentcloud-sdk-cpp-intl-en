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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ADJUSTPUBLICADDRESSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ADJUSTPUBLICADDRESSREQUEST_H_

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
                * AdjustPublicAddress request structure.
                */
                class AdjustPublicAddressRequest : public AbstractModel
                {
                public:
                    AdjustPublicAddressRequest();
                    ~AdjustPublicAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique ID of the CVM instance, such as `ins-11112222`.
                     * @return InstanceId The unique ID of the CVM instance, such as `ins-11112222`.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The unique ID of the CVM instance, such as `ins-11112222`.
                     * @param _instanceId The unique ID of the CVM instance, such as `ins-11112222`.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取The unique ID of the EIP, such as `eip-11112222`.
                     * @return AddressId The unique ID of the EIP, such as `eip-11112222`.
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置The unique ID of the EIP, such as `eip-11112222`.
                     * @param _addressId The unique ID of the EIP, such as `eip-11112222`.
                     * 
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     * 
                     */
                    bool AddressIdHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the CVM instance, such as `ins-11112222`.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The unique ID of the EIP, such as `eip-11112222`.
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ADJUSTPUBLICADDRESSREQUEST_H_

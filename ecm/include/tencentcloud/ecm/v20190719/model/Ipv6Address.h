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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_IPV6ADDRESS_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_IPV6ADDRESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * IPv6 address information.
                */
                class Ipv6Address : public AbstractModel
                {
                public:
                    Ipv6Address();
                    ~Ipv6Address() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IPv6 address, such as `3402:4e00:20:100:0:8cd9:2a67:71f3`
                     * @return Address IPv6 address, such as `3402:4e00:20:100:0:8cd9:2a67:71f3`
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置IPv6 address, such as `3402:4e00:20:100:0:8cd9:2a67:71f3`
                     * @param _address IPv6 address, such as `3402:4e00:20:100:0:8cd9:2a67:71f3`
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取Whether it is the primary IP.
                     * @return Primary Whether it is the primary IP.
                     * 
                     */
                    bool GetPrimary() const;

                    /**
                     * 设置Whether it is the primary IP.
                     * @param _primary Whether it is the primary IP.
                     * 
                     */
                    void SetPrimary(const bool& _primary);

                    /**
                     * 判断参数 Primary 是否已赋值
                     * @return Primary 是否已赋值
                     * 
                     */
                    bool PrimaryHasBeenSet() const;

                    /**
                     * 获取EIP instance ID, such as `eip-hxlqja90`.
                     * @return AddressId EIP instance ID, such as `eip-hxlqja90`.
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置EIP instance ID, such as `eip-hxlqja90`.
                     * @param _addressId EIP instance ID, such as `eip-hxlqja90`.
                     * 
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     * 
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取Description.
                     * @return Description Description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description.
                     * @param _description Description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Whether the public IP is blocked.
                     * @return IsWanIpBlocked Whether the public IP is blocked.
                     * 
                     */
                    bool GetIsWanIpBlocked() const;

                    /**
                     * 设置Whether the public IP is blocked.
                     * @param _isWanIpBlocked Whether the public IP is blocked.
                     * 
                     */
                    void SetIsWanIpBlocked(const bool& _isWanIpBlocked);

                    /**
                     * 判断参数 IsWanIpBlocked 是否已赋值
                     * @return IsWanIpBlocked 是否已赋值
                     * 
                     */
                    bool IsWanIpBlockedHasBeenSet() const;

                    /**
                     * 获取IPv6 address status:
PENDING: generating
MIGRATING: migrating
DELETING: deleting
AVAILABLE: available
                     * @return State IPv6 address status:
PENDING: generating
MIGRATING: migrating
DELETING: deleting
AVAILABLE: available
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置IPv6 address status:
PENDING: generating
MIGRATING: migrating
DELETING: deleting
AVAILABLE: available
                     * @param _state IPv6 address status:
PENDING: generating
MIGRATING: migrating
DELETING: deleting
AVAILABLE: available
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * IPv6 address, such as `3402:4e00:20:100:0:8cd9:2a67:71f3`
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Whether it is the primary IP.
                     */
                    bool m_primary;
                    bool m_primaryHasBeenSet;

                    /**
                     * EIP instance ID, such as `eip-hxlqja90`.
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * Description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Whether the public IP is blocked.
                     */
                    bool m_isWanIpBlocked;
                    bool m_isWanIpBlockedHasBeenSet;

                    /**
                     * IPv6 address status:
PENDING: generating
MIGRATING: migrating
DELETING: deleting
AVAILABLE: available
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_IPV6ADDRESS_H_

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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_IPV6ADDRESS_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_IPV6ADDRESS_H_

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
                * `IPv6` address information.
                */
                class Ipv6Address : public AbstractModel
                {
                public:
                    Ipv6Address();
                    ~Ipv6Address() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`IPv6` address, such as `3402:4e00:20:100:0:8cd9:2a67:71f3`
                     * @return Address `IPv6` address, such as `3402:4e00:20:100:0:8cd9:2a67:71f3`
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置`IPv6` address, such as `3402:4e00:20:100:0:8cd9:2a67:71f3`
                     * @param _address `IPv6` address, such as `3402:4e00:20:100:0:8cd9:2a67:71f3`
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
                     * 获取Whether it is a primary `IP`.
                     * @return Primary Whether it is a primary `IP`.
                     * 
                     */
                    bool GetPrimary() const;

                    /**
                     * 设置Whether it is a primary `IP`.
                     * @param _primary Whether it is a primary `IP`.
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
                     * 获取The `ID` of the `EIP` instance, such as `eip-hxlqja90`.
                     * @return AddressId The `ID` of the `EIP` instance, such as `eip-hxlqja90`.
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置The `ID` of the `EIP` instance, such as `eip-hxlqja90`.
                     * @param _addressId The `ID` of the `EIP` instance, such as `eip-hxlqja90`.
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
                     * 获取Message description
                     * @return Description Message description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Message description
                     * @param _description Message description
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
                     * 获取`IPv6` address status:
<li>`PENDING`: Creating</li>
<li>`MIGRATING`: Migrating</li>
<li>`DELETING`: Deleting</li>
<li>`AVAILABLE`: Available</li>
                     * @return State `IPv6` address status:
<li>`PENDING`: Creating</li>
<li>`MIGRATING`: Migrating</li>
<li>`DELETING`: Deleting</li>
<li>`AVAILABLE`: Available</li>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置`IPv6` address status:
<li>`PENDING`: Creating</li>
<li>`MIGRATING`: Migrating</li>
<li>`DELETING`: Deleting</li>
<li>`AVAILABLE`: Available</li>
                     * @param _state `IPv6` address status:
<li>`PENDING`: Creating</li>
<li>`MIGRATING`: Migrating</li>
<li>`DELETING`: Deleting</li>
<li>`AVAILABLE`: Available</li>
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
                     * `IPv6` address, such as `3402:4e00:20:100:0:8cd9:2a67:71f3`
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Whether it is a primary `IP`.
                     */
                    bool m_primary;
                    bool m_primaryHasBeenSet;

                    /**
                     * The `ID` of the `EIP` instance, such as `eip-hxlqja90`.
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * Message description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Whether the public IP is blocked.
                     */
                    bool m_isWanIpBlocked;
                    bool m_isWanIpBlockedHasBeenSet;

                    /**
                     * `IPv6` address status:
<li>`PENDING`: Creating</li>
<li>`MIGRATING`: Migrating</li>
<li>`DELETING`: Deleting</li>
<li>`AVAILABLE`: Available</li>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_IPV6ADDRESS_H_

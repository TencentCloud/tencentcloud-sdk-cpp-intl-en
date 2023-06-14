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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_PRIVATEIPADDRESSSPECIFICATION_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_PRIVATEIPADDRESSSPECIFICATION_H_

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
                * Private IP information
                */
                class PrivateIpAddressSpecification : public AbstractModel
                {
                public:
                    PrivateIpAddressSpecification();
                    ~PrivateIpAddressSpecification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Private IP address.
                     * @return PrivateIpAddress Private IP address.
                     * 
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置Private IP address.
                     * @param _privateIpAddress Private IP address.
                     * 
                     */
                    void SetPrivateIpAddress(const std::string& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                    /**
                     * 获取Whether it is the primary IP.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Primary Whether it is the primary IP.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetPrimary() const;

                    /**
                     * 设置Whether it is the primary IP.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _primary Whether it is the primary IP.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Public IP address.
                     * @return PublicIpAddress Public IP address.
                     * 
                     */
                    std::string GetPublicIpAddress() const;

                    /**
                     * 设置Public IP address.
                     * @param _publicIpAddress Public IP address.
                     * 
                     */
                    void SetPublicIpAddress(const std::string& _publicIpAddress);

                    /**
                     * 判断参数 PublicIpAddress 是否已赋值
                     * @return PublicIpAddress 是否已赋值
                     * 
                     */
                    bool PublicIpAddressHasBeenSet() const;

                    /**
                     * 获取EIP instance ID, such as `eip-11112222`.
                     * @return AddressId EIP instance ID, such as `eip-11112222`.
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置EIP instance ID, such as `eip-11112222`.
                     * @param _addressId EIP instance ID, such as `eip-11112222`.
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
                     * 获取Private IP description.
                     * @return Description Private IP description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Private IP description.
                     * @param _description Private IP description.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsWanIpBlocked Whether the public IP is blocked.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsWanIpBlocked() const;

                    /**
                     * 设置Whether the public IP is blocked.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _isWanIpBlocked Whether the public IP is blocked.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取IP status:
PENDING: generating
MIGRATING: migrating
DELETING: deleting
AVAILABLE: available
                     * @return State IP status:
PENDING: generating
MIGRATING: migrating
DELETING: deleting
AVAILABLE: available
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置IP status:
PENDING: generating
MIGRATING: migrating
DELETING: deleting
AVAILABLE: available
                     * @param _state IP status:
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
                     * Private IP address.
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                    /**
                     * Whether it is the primary IP.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_primary;
                    bool m_primaryHasBeenSet;

                    /**
                     * Public IP address.
                     */
                    std::string m_publicIpAddress;
                    bool m_publicIpAddressHasBeenSet;

                    /**
                     * EIP instance ID, such as `eip-11112222`.
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * Private IP description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Whether the public IP is blocked.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isWanIpBlocked;
                    bool m_isWanIpBlockedHasBeenSet;

                    /**
                     * IP status:
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

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_PRIVATEIPADDRESSSPECIFICATION_H_

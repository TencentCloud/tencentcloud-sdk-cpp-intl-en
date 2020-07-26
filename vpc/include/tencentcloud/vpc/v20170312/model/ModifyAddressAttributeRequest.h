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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYADDRESSATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYADDRESSATTRIBUTEREQUEST_H_

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
                * ModifyAddressAttribute request structure.
                */
                class ModifyAddressAttributeRequest : public AbstractModel
                {
                public:
                    ModifyAddressAttributeRequest();
                    ~ModifyAddressAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique ID of the EIP, such as `eip-11112222`.
                     * @return AddressId The unique ID of the EIP, such as `eip-11112222`.
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置The unique ID of the EIP, such as `eip-11112222`.
                     * @param AddressId The unique ID of the EIP, such as `eip-11112222`.
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取The EIP name after modification. The maximum length is 20 characters.
                     * @return AddressName The EIP name after modification. The maximum length is 20 characters.
                     */
                    std::string GetAddressName() const;

                    /**
                     * 设置The EIP name after modification. The maximum length is 20 characters.
                     * @param AddressName The EIP name after modification. The maximum length is 20 characters.
                     */
                    void SetAddressName(const std::string& _addressName);

                    /**
                     * 判断参数 AddressName 是否已赋值
                     * @return AddressName 是否已赋值
                     */
                    bool AddressNameHasBeenSet() const;

                    /**
                     * 获取Whether the set EIP is a direct connection EIP. TRUE: yes. FALSE: no. Note that this parameter is available only to users who have activated the EIP direct connection function.
                     * @return EipDirectConnection Whether the set EIP is a direct connection EIP. TRUE: yes. FALSE: no. Note that this parameter is available only to users who have activated the EIP direct connection function.
                     */
                    std::string GetEipDirectConnection() const;

                    /**
                     * 设置Whether the set EIP is a direct connection EIP. TRUE: yes. FALSE: no. Note that this parameter is available only to users who have activated the EIP direct connection function.
                     * @param EipDirectConnection Whether the set EIP is a direct connection EIP. TRUE: yes. FALSE: no. Note that this parameter is available only to users who have activated the EIP direct connection function.
                     */
                    void SetEipDirectConnection(const std::string& _eipDirectConnection);

                    /**
                     * 判断参数 EipDirectConnection 是否已赋值
                     * @return EipDirectConnection 是否已赋值
                     */
                    bool EipDirectConnectionHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the EIP, such as `eip-11112222`.
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * The EIP name after modification. The maximum length is 20 characters.
                     */
                    std::string m_addressName;
                    bool m_addressNameHasBeenSet;

                    /**
                     * Whether the set EIP is a direct connection EIP. TRUE: yes. FALSE: no. Note that this parameter is available only to users who have activated the EIP direct connection function.
                     */
                    std::string m_eipDirectConnection;
                    bool m_eipDirectConnectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYADDRESSATTRIBUTEREQUEST_H_

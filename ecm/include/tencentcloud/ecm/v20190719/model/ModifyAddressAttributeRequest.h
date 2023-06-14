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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYADDRESSATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYADDRESSATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyAddressAttribute request structure.
                */
                class ModifyAddressAttributeRequest : public AbstractModel
                {
                public:
                    ModifyAddressAttributeRequest();
                    ~ModifyAddressAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ECM region
                     * @return EcmRegion ECM region
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM region
                     * @param _ecmRegion ECM region
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                    /**
                     * 获取Unique EIP ID, such as `eip-11112222`.
                     * @return AddressId Unique EIP ID, such as `eip-11112222`.
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置Unique EIP ID, such as `eip-11112222`.
                     * @param _addressId Unique EIP ID, such as `eip-11112222`.
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
                     * 获取New EIP name, which can contain up to 20 characters.
                     * @return AddressName New EIP name, which can contain up to 20 characters.
                     * 
                     */
                    std::string GetAddressName() const;

                    /**
                     * 设置New EIP name, which can contain up to 20 characters.
                     * @param _addressName New EIP name, which can contain up to 20 characters.
                     * 
                     */
                    void SetAddressName(const std::string& _addressName);

                    /**
                     * 判断参数 AddressName 是否已赋值
                     * @return AddressName 是否已赋值
                     * 
                     */
                    bool AddressNameHasBeenSet() const;

                    /**
                     * 获取Whether "direct access" is enabled for the EIP. TRUE: yes. FALSE: no. Note that this parameter is available only to users who have activated the EIP direct access feature.
                     * @return EipDirectConnection Whether "direct access" is enabled for the EIP. TRUE: yes. FALSE: no. Note that this parameter is available only to users who have activated the EIP direct access feature.
                     * 
                     */
                    std::string GetEipDirectConnection() const;

                    /**
                     * 设置Whether "direct access" is enabled for the EIP. TRUE: yes. FALSE: no. Note that this parameter is available only to users who have activated the EIP direct access feature.
                     * @param _eipDirectConnection Whether "direct access" is enabled for the EIP. TRUE: yes. FALSE: no. Note that this parameter is available only to users who have activated the EIP direct access feature.
                     * 
                     */
                    void SetEipDirectConnection(const std::string& _eipDirectConnection);

                    /**
                     * 判断参数 EipDirectConnection 是否已赋值
                     * @return EipDirectConnection 是否已赋值
                     * 
                     */
                    bool EipDirectConnectionHasBeenSet() const;

                private:

                    /**
                     * ECM region
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * Unique EIP ID, such as `eip-11112222`.
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * New EIP name, which can contain up to 20 characters.
                     */
                    std::string m_addressName;
                    bool m_addressNameHasBeenSet;

                    /**
                     * Whether "direct access" is enabled for the EIP. TRUE: yes. FALSE: no. Note that this parameter is available only to users who have activated the EIP direct access feature.
                     */
                    std::string m_eipDirectConnection;
                    bool m_eipDirectConnectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYADDRESSATTRIBUTEREQUEST_H_

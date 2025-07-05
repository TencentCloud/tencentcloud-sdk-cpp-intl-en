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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYRESERVEIPADDRESSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYRESERVEIPADDRESSREQUEST_H_

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
                * ModifyReserveIpAddress request structure.
                */
                class ModifyReserveIpAddressRequest : public AbstractModel
                {
                public:
                    ModifyReserveIpAddressRequest();
                    ~ModifyReserveIpAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of the VPC.
                     * @return VpcId Unique ID of the VPC.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Unique ID of the VPC.
                     * @param _vpcId Unique ID of the VPC.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Unique ID of the reserved private IP address.
                     * @return ReserveIpId Unique ID of the reserved private IP address.
                     * 
                     */
                    std::string GetReserveIpId() const;

                    /**
                     * 设置Unique ID of the reserved private IP address.
                     * @param _reserveIpId Unique ID of the reserved private IP address.
                     * 
                     */
                    void SetReserveIpId(const std::string& _reserveIpId);

                    /**
                     * 判断参数 ReserveIpId 是否已赋值
                     * @return ReserveIpId 是否已赋值
                     * 
                     */
                    bool ReserveIpIdHasBeenSet() const;

                    /**
                     * 获取Name of the reserved private IP address.
                     * @return Name Name of the reserved private IP address.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the reserved private IP address.
                     * @param _name Name of the reserved private IP address.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Description of the reserved private IP address.
                     * @return Description Description of the reserved private IP address.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description of the reserved private IP address.
                     * @param _description Description of the reserved private IP address.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the VPC.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Unique ID of the reserved private IP address.
                     */
                    std::string m_reserveIpId;
                    bool m_reserveIpIdHasBeenSet;

                    /**
                     * Name of the reserved private IP address.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description of the reserved private IP address.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYRESERVEIPADDRESSREQUEST_H_

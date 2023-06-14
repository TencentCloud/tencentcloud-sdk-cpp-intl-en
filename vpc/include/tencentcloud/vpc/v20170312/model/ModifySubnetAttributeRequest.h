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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSUBNETATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSUBNETATTRIBUTEREQUEST_H_

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
                * ModifySubnetAttribute request structure.
                */
                class ModifySubnetAttributeRequest : public AbstractModel
                {
                public:
                    ModifySubnetAttributeRequest();
                    ~ModifySubnetAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Subnet instance ID, such as `subnet-pxir56ns`.
                     * @return SubnetId Subnet instance ID, such as `subnet-pxir56ns`.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet instance ID, such as `subnet-pxir56ns`.
                     * @param _subnetId Subnet instance ID, such as `subnet-pxir56ns`.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取The subnet name. The maximum length is 60 bytes.
                     * @return SubnetName The subnet name. The maximum length is 60 bytes.
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置The subnet name. The maximum length is 60 bytes.
                     * @param _subnetName The subnet name. The maximum length is 60 bytes.
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取Whether the subnet has broadcast enabled.
                     * @return EnableBroadcast Whether the subnet has broadcast enabled.
                     * 
                     */
                    std::string GetEnableBroadcast() const;

                    /**
                     * 设置Whether the subnet has broadcast enabled.
                     * @param _enableBroadcast Whether the subnet has broadcast enabled.
                     * 
                     */
                    void SetEnableBroadcast(const std::string& _enableBroadcast);

                    /**
                     * 判断参数 EnableBroadcast 是否已赋值
                     * @return EnableBroadcast 是否已赋值
                     * 
                     */
                    bool EnableBroadcastHasBeenSet() const;

                private:

                    /**
                     * Subnet instance ID, such as `subnet-pxir56ns`.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * The subnet name. The maximum length is 60 bytes.
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * Whether the subnet has broadcast enabled.
                     */
                    std::string m_enableBroadcast;
                    bool m_enableBroadcastHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSUBNETATTRIBUTEREQUEST_H_

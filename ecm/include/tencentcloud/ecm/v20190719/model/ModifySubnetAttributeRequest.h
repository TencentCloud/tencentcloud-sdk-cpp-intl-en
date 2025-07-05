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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYSUBNETATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYSUBNETATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Tag.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
                     * 获取Subnet name, which can contain up to 60 bytes.
                     * @return SubnetName Subnet name, which can contain up to 60 bytes.
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置Subnet name, which can contain up to 60 bytes.
                     * @param _subnetName Subnet name, which can contain up to 60 bytes.
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
                     * 获取Whether to enable broadcast for the subnet.
                     * @return EnableBroadcast Whether to enable broadcast for the subnet.
                     * 
                     */
                    std::string GetEnableBroadcast() const;

                    /**
                     * 设置Whether to enable broadcast for the subnet.
                     * @param _enableBroadcast Whether to enable broadcast for the subnet.
                     * 
                     */
                    void SetEnableBroadcast(const std::string& _enableBroadcast);

                    /**
                     * 判断参数 EnableBroadcast 是否已赋值
                     * @return EnableBroadcast 是否已赋值
                     * 
                     */
                    bool EnableBroadcastHasBeenSet() const;

                    /**
                     * 获取Tag key value of the subnet
                     * @return Tags Tag key value of the subnet
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag key value of the subnet
                     * @param _tags Tag key value of the subnet
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Subnet instance ID, such as `subnet-pxir56ns`.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * ECM region
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * Subnet name, which can contain up to 60 bytes.
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * Whether to enable broadcast for the subnet.
                     */
                    std::string m_enableBroadcast;
                    bool m_enableBroadcastHasBeenSet;

                    /**
                     * Tag key value of the subnet
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYSUBNETATTRIBUTEREQUEST_H_

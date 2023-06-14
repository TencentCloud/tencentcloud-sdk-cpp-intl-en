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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATEIMAGEACCELERATIONSERVICEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATEIMAGEACCELERATIONSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/TagSpecification.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateImageAccelerationService request structure.
                */
                class CreateImageAccelerationServiceRequest : public AbstractModel
                {
                public:
                    CreateImageAccelerationServiceRequest();
                    ~CreateImageAccelerationServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return RegistryId Instance ID
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置Instance ID
                     * @param _registryId Instance ID
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取ID of the VPC where the CFS file system to be created resides
                     * @return VpcId ID of the VPC where the CFS file system to be created resides
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置ID of the VPC where the CFS file system to be created resides
                     * @param _vpcId ID of the VPC where the CFS file system to be created resides
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
                     * 获取ID of the subnet where the CFS file system to be created resides
                     * @return SubnetId ID of the subnet where the CFS file system to be created resides
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置ID of the subnet where the CFS file system to be created resides
                     * @param _subnetId ID of the subnet where the CFS file system to be created resides
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
                     * 获取Storage class of the CFS file system to be created. Valid values: SD: Standard; HP: High-Performance.
                     * @return StorageType Storage class of the CFS file system to be created. Valid values: SD: Standard; HP: High-Performance.
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置Storage class of the CFS file system to be created. Valid values: SD: Standard; HP: High-Performance.
                     * @param _storageType Storage class of the CFS file system to be created. Valid values: SD: Standard; HP: High-Performance.
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取Permission group ID
                     * @return PGroupId Permission group ID
                     * 
                     */
                    std::string GetPGroupId() const;

                    /**
                     * 设置Permission group ID
                     * @param _pGroupId Permission group ID
                     * 
                     */
                    void SetPGroupId(const std::string& _pGroupId);

                    /**
                     * 判断参数 PGroupId 是否已赋值
                     * @return PGroupId 是否已赋值
                     * 
                     */
                    bool PGroupIdHasBeenSet() const;

                    /**
                     * 获取AZ name, such as `ap-beijing-1`. For more information, see the list of regions and AZs in Overview.
                     * @return Zone AZ name, such as `ap-beijing-1`. For more information, see the list of regions and AZs in Overview.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ name, such as `ap-beijing-1`. For more information, see the list of regions and AZs in Overview.
                     * @param _zone AZ name, such as `ap-beijing-1`. For more information, see the list of regions and AZs in Overview.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Cloud tag description
                     * @return TagSpecification Cloud tag description
                     * 
                     */
                    TagSpecification GetTagSpecification() const;

                    /**
                     * 设置Cloud tag description
                     * @param _tagSpecification Cloud tag description
                     * 
                     */
                    void SetTagSpecification(const TagSpecification& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * ID of the VPC where the CFS file system to be created resides
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * ID of the subnet where the CFS file system to be created resides
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Storage class of the CFS file system to be created. Valid values: SD: Standard; HP: High-Performance.
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * Permission group ID
                     */
                    std::string m_pGroupId;
                    bool m_pGroupIdHasBeenSet;

                    /**
                     * AZ name, such as `ap-beijing-1`. For more information, see the list of regions and AZs in Overview.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Cloud tag description
                     */
                    TagSpecification m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATEIMAGEACCELERATIONSERVICEREQUEST_H_

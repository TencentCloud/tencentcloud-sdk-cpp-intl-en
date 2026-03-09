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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATERESOURCEGROUPREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATERESOURCEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ResourceType.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * CreateResourceGroup request structure.
                */
                class CreateResourceGroupRequest : public AbstractModel
                {
                public:
                    CreateResourceGroupRequest();
                    ~CreateResourceGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource group name. specifies the name of a general resource group. it must start with a letter, may include letters, numbers, and underscores (_), and can contain up to 64 characters.
                     * @return Name Resource group name. specifies the name of a general resource group. it must start with a letter, may include letters, numbers, and underscores (_), and can contain up to 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Resource group name. specifies the name of a general resource group. it must start with a letter, may include letters, numbers, and underscores (_), and can contain up to 64 characters.
                     * @param _name Resource group name. specifies the name of a general resource group. it must start with a letter, may include letters, numbers, and underscores (_), and can contain up to 64 characters.
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
                     * 获取Opened resource group information.
                     * @return Type Opened resource group information.
                     * 
                     */
                    ResourceType GetType() const;

                    /**
                     * 设置Opened resource group information.
                     * @param _type Opened resource group information.
                     * 
                     */
                    void SetType(const ResourceType& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Whether to perform auto-renewal.
                     * @return AutoRenewEnabled Whether to perform auto-renewal.
                     * 
                     */
                    bool GetAutoRenewEnabled() const;

                    /**
                     * 设置Whether to perform auto-renewal.
                     * @param _autoRenewEnabled Whether to perform auto-renewal.
                     * 
                     */
                    void SetAutoRenewEnabled(const bool& _autoRenewEnabled);

                    /**
                     * 判断参数 AutoRenewEnabled 是否已赋值
                     * @return AutoRenewEnabled 是否已赋值
                     * 
                     */
                    bool AutoRenewEnabledHasBeenSet() const;

                    /**
                     * 获取Purchase duration, in unit month.
                     * @return PurchasePeriod Purchase duration, in unit month.
                     * 
                     */
                    int64_t GetPurchasePeriod() const;

                    /**
                     * 设置Purchase duration, in unit month.
                     * @param _purchasePeriod Purchase duration, in unit month.
                     * 
                     */
                    void SetPurchasePeriod(const int64_t& _purchasePeriod);

                    /**
                     * 判断参数 PurchasePeriod 是否已赋值
                     * @return PurchasePeriod 是否已赋值
                     * 
                     */
                    bool PurchasePeriodHasBeenSet() const;

                    /**
                     * 获取vpcId
                     * @return VpcId vpcId
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpcId
                     * @param _vpcId vpcId
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
                     * 获取Subnet
                     * @return SubNet Subnet
                     * 
                     */
                    std::string GetSubNet() const;

                    /**
                     * 设置Subnet
                     * @param _subNet Subnet
                     * 
                     */
                    void SetSubNet(const std::string& _subNet);

                    /**
                     * 判断参数 SubNet 是否已赋值
                     * @return SubNet 是否已赋值
                     * 
                     */
                    bool SubNetHasBeenSet() const;

                    /**
                     * 获取Resource purchase region.
                     * @return ResourceRegion Resource purchase region.
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置Resource purchase region.
                     * @param _resourceRegion Resource purchase region.
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取Project id of the associated project space.
                     * @return AssociatedProjectId Project id of the associated project space.
                     * 
                     */
                    std::string GetAssociatedProjectId() const;

                    /**
                     * 设置Project id of the associated project space.
                     * @param _associatedProjectId Project id of the associated project space.
                     * 
                     */
                    void SetAssociatedProjectId(const std::string& _associatedProjectId);

                    /**
                     * 判断参数 AssociatedProjectId 是否已赋值
                     * @return AssociatedProjectId 是否已赋值
                     * 
                     */
                    bool AssociatedProjectIdHasBeenSet() const;

                    /**
                     * 获取Resource group description
                     * @return Description Resource group description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Resource group description
                     * @param _description Resource group description
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
                     * Resource group name. specifies the name of a general resource group. it must start with a letter, may include letters, numbers, and underscores (_), and can contain up to 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Opened resource group information.
                     */
                    ResourceType m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Whether to perform auto-renewal.
                     */
                    bool m_autoRenewEnabled;
                    bool m_autoRenewEnabledHasBeenSet;

                    /**
                     * Purchase duration, in unit month.
                     */
                    int64_t m_purchasePeriod;
                    bool m_purchasePeriodHasBeenSet;

                    /**
                     * vpcId
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet
                     */
                    std::string m_subNet;
                    bool m_subNetHasBeenSet;

                    /**
                     * Resource purchase region.
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * Project id of the associated project space.
                     */
                    std::string m_associatedProjectId;
                    bool m_associatedProjectIdHasBeenSet;

                    /**
                     * Resource group description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATERESOURCEGROUPREQUEST_H_

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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_EXECUTORRESOURCEGROUPINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_EXECUTORRESOURCEGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/BindProject.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Resource group details
                */
                class ExecutorResourceGroupInfo : public AbstractModel
                {
                public:
                    ExecutorResourceGroupInfo();
                    ~ExecutorResourceGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource group unique id.
                     * @return Id Resource group unique id.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Resource group unique id.
                     * @param _id Resource group unique id.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Resource group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Resource group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Resource group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Resource group name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Resource group description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Resource group description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Resource group description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Resource group description
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Execute the resource group type. values cannot be empty.

-Schedule --- scheduling resource group.
-Integration - integration resource group.
-DataService - data service resource group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceGroupType Execute the resource group type. values cannot be empty.

-Schedule --- scheduling resource group.
-Integration - integration resource group.
-DataService - data service resource group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetResourceGroupType() const;

                    /**
                     * 设置Execute the resource group type. values cannot be empty.

-Schedule --- scheduling resource group.
-Integration - integration resource group.
-DataService - data service resource group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceGroupType Execute the resource group type. values cannot be empty.

-Schedule --- scheduling resource group.
-Integration - integration resource group.
-DataService - data service resource group.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceGroupType(const std::string& _resourceGroupType);

                    /**
                     * 判断参数 ResourceGroupType 是否已赋值
                     * @return ResourceGroupType 是否已赋值
                     * 
                     */
                    bool ResourceGroupTypeHasBeenSet() const;

                    /**
                     * 获取Project set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AssociateProjects Project set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BindProject> GetAssociateProjects() const;

                    /**
                     * 设置Project set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _associateProjects Project set.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAssociateProjects(const std::vector<BindProject>& _associateProjects);

                    /**
                     * 判断参数 AssociateProjects 是否已赋值
                     * @return AssociateProjects 是否已赋值
                     * 
                     */
                    bool AssociateProjectsHasBeenSet() const;

                    /**
                     * 获取Region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Region Region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _region Region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取vpcId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId vpcId
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpcId
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _vpcId vpcId
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubNet Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubNet() const;

                    /**
                     * 设置Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subNet Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether to perform auto-renewal.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoRenewEnabled Whether to perform auto-renewal.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAutoRenewEnabled() const;

                    /**
                     * 设置Whether to perform auto-renewal.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _autoRenewEnabled Whether to perform auto-renewal.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoRenewEnabled(const bool& _autoRenewEnabled);

                    /**
                     * 判断参数 AutoRenewEnabled 是否已赋值
                     * @return AutoRenewEnabled 是否已赋值
                     * 
                     */
                    bool AutoRenewEnabledHasBeenSet() const;

                private:

                    /**
                     * Resource group unique id.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Resource group name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Resource group description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Execute the resource group type. values cannot be empty.

-Schedule --- scheduling resource group.
-Integration - integration resource group.
-DataService - data service resource group.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceGroupType;
                    bool m_resourceGroupTypeHasBeenSet;

                    /**
                     * Project set.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BindProject> m_associateProjects;
                    bool m_associateProjectsHasBeenSet;

                    /**
                     * Region.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * vpcId
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subNet;
                    bool m_subNetHasBeenSet;

                    /**
                     * Whether to perform auto-renewal.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_autoRenewEnabled;
                    bool m_autoRenewEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_EXECUTORRESOURCEGROUPINFO_H_

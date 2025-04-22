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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_CREATEINSTANCEBYAPIREQUEST_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_CREATEINSTANCEBYAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/ChargeProperties.h>
#include <tencentcloud/cdwpg/v20201230/model/ResourceSpecNew.h>
#include <tencentcloud/cdwpg/v20201230/model/Tag.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * CreateInstanceByApi request structure.
                */
                class CreateInstanceByApiRequest : public AbstractModel
                {
                public:
                    CreateInstanceByApiRequest();
                    ~CreateInstanceByApiRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
                     * @param _instanceName Instance name.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Availability zone.
                     * @return Zone Availability zone.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone.
                     * @param _zone Availability zone.
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
                     * 获取Virtual Private Cloud (VPC).
                     * @return UserVPCId Virtual Private Cloud (VPC).
                     * 
                     */
                    std::string GetUserVPCId() const;

                    /**
                     * 设置Virtual Private Cloud (VPC).
                     * @param _userVPCId Virtual Private Cloud (VPC).
                     * 
                     */
                    void SetUserVPCId(const std::string& _userVPCId);

                    /**
                     * 判断参数 UserVPCId 是否已赋值
                     * @return UserVPCId 是否已赋值
                     * 
                     */
                    bool UserVPCIdHasBeenSet() const;

                    /**
                     * 获取Subnet.
                     * @return UserSubnetId Subnet.
                     * 
                     */
                    std::string GetUserSubnetId() const;

                    /**
                     * 设置Subnet.
                     * @param _userSubnetId Subnet.
                     * 
                     */
                    void SetUserSubnetId(const std::string& _userSubnetId);

                    /**
                     * 判断参数 UserSubnetId 是否已赋值
                     * @return UserSubnetId 是否已赋值
                     * 
                     */
                    bool UserSubnetIdHasBeenSet() const;

                    /**
                     * 获取Billing method.
                     * @return ChargeProperties Billing method.
                     * 
                     */
                    ChargeProperties GetChargeProperties() const;

                    /**
                     * 设置Billing method.
                     * @param _chargeProperties Billing method.
                     * 
                     */
                    void SetChargeProperties(const ChargeProperties& _chargeProperties);

                    /**
                     * 判断参数 ChargeProperties 是否已赋值
                     * @return ChargeProperties 是否已赋值
                     * 
                     */
                    bool ChargePropertiesHasBeenSet() const;

                    /**
                     * 获取Instance password.
                     * @return AdminPassword Instance password.
                     * 
                     */
                    std::string GetAdminPassword() const;

                    /**
                     * 设置Instance password.
                     * @param _adminPassword Instance password.
                     * 
                     */
                    void SetAdminPassword(const std::string& _adminPassword);

                    /**
                     * 判断参数 AdminPassword 是否已赋值
                     * @return AdminPassword 是否已赋值
                     * 
                     */
                    bool AdminPasswordHasBeenSet() const;

                    /**
                     * 获取Resource information.
                     * @return Resources Resource information.
                     * 
                     */
                    std::vector<ResourceSpecNew> GetResources() const;

                    /**
                     * 设置Resource information.
                     * @param _resources Resource information.
                     * 
                     */
                    void SetResources(const std::vector<ResourceSpecNew>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取Tag list.Deprecated, use TagItems.
                     * @return Tags Tag list.Deprecated, use TagItems.
                     * 
                     */
                    Tag GetTags() const;

                    /**
                     * 设置Tag list.Deprecated, use TagItems.
                     * @param _tags Tag list.Deprecated, use TagItems.
                     * 
                     */
                    void SetTags(const Tag& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Version.
                     * @return ProductVersion Version.
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置Version.
                     * @param _productVersion Version.
                     * 
                     */
                    void SetProductVersion(const std::string& _productVersion);

                    /**
                     * 判断参数 ProductVersion 是否已赋值
                     * @return ProductVersion 是否已赋值
                     * 
                     */
                    bool ProductVersionHasBeenSet() const;

                    /**
                     * 获取 TagItems list.
                     * @return TagItems  TagItems list.
                     * 
                     */
                    std::vector<Tag> GetTagItems() const;

                    /**
                     * 设置 TagItems list.
                     * @param _tagItems  TagItems list.
                     * 
                     */
                    void SetTagItems(const std::vector<Tag>& _tagItems);

                    /**
                     * 判断参数 TagItems 是否已赋值
                     * @return TagItems 是否已赋值
                     * 
                     */
                    bool TagItemsHasBeenSet() const;

                private:

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Availability zone.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Virtual Private Cloud (VPC).
                     */
                    std::string m_userVPCId;
                    bool m_userVPCIdHasBeenSet;

                    /**
                     * Subnet.
                     */
                    std::string m_userSubnetId;
                    bool m_userSubnetIdHasBeenSet;

                    /**
                     * Billing method.
                     */
                    ChargeProperties m_chargeProperties;
                    bool m_chargePropertiesHasBeenSet;

                    /**
                     * Instance password.
                     */
                    std::string m_adminPassword;
                    bool m_adminPasswordHasBeenSet;

                    /**
                     * Resource information.
                     */
                    std::vector<ResourceSpecNew> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * Tag list.Deprecated, use TagItems.
                     */
                    Tag m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Version.
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                    /**
                     *  TagItems list.
                     */
                    std::vector<Tag> m_tagItems;
                    bool m_tagItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_CREATEINSTANCEBYAPIREQUEST_H_

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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULRISKITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULRISKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Host vulnerability risk content.
                */
                class VulRiskItem : public AbstractModel
                {
                public:
                    VulRiskItem();
                    ~VulRiskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cloud account ID.
                     * @return CloudAccountID Cloud account ID.
                     * 
                     */
                    std::string GetCloudAccountID() const;

                    /**
                     * 设置Cloud account ID.
                     * @param _cloudAccountID Cloud account ID.
                     * 
                     */
                    void SetCloudAccountID(const std::string& _cloudAccountID);

                    /**
                     * 判断参数 CloudAccountID 是否已赋值
                     * @return CloudAccountID 是否已赋值
                     * 
                     */
                    bool CloudAccountIDHasBeenSet() const;

                    /**
                     * 获取Instance ID.
                     * @return AssetID Instance ID.
                     * 
                     */
                    std::string GetAssetID() const;

                    /**
                     * 设置Instance ID.
                     * @param _assetID Instance ID.
                     * 
                     */
                    void SetAssetID(const std::string& _assetID);

                    /**
                     * 判断参数 AssetID 是否已赋值
                     * @return AssetID 是否已赋值
                     * 
                     */
                    bool AssetIDHasBeenSet() const;

                    /**
                     * 获取Instance status
                     * @return InstanceStatus Instance status
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置Instance status
                     * @param _instanceStatus Instance status
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return InstanceName Instance name
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name
                     * @param _instanceName Instance name
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
                     * 获取Creation time.


                     * @return CreateTime Creation time.


                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.


                     * @param _createTime Creation time.


                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return UpdateTime Update time
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
                     * @param _updateTime Update time
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Vulnerability name
                     * @return VulName Vulnerability name
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置Vulnerability name
                     * @param _vulName Vulnerability name
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取Vulnerability type.
                     * @return VulCategory Vulnerability type.
                     * 
                     */
                    std::string GetVulCategory() const;

                    /**
                     * 设置Vulnerability type.
                     * @param _vulCategory Vulnerability type.
                     * 
                     */
                    void SetVulCategory(const std::string& _vulCategory);

                    /**
                     * 判断参数 VulCategory 是否已赋值
                     * @return VulCategory 是否已赋值
                     * 
                     */
                    bool VulCategoryHasBeenSet() const;

                    /**
                     * 获取Vulnerability level
                     * @return VulLevel Vulnerability level
                     * 
                     */
                    std::string GetVulLevel() const;

                    /**
                     * 设置Vulnerability level
                     * @param _vulLevel Vulnerability level
                     * 
                     */
                    void SetVulLevel(const std::string& _vulLevel);

                    /**
                     * 判断参数 VulLevel 是否已赋值
                     * @return VulLevel 是否已赋值
                     * 
                     */
                    bool VulLevelHasBeenSet() const;

                    /**
                     * 获取CVE id.
                     * @return CveID CVE id.
                     * 
                     */
                    std::string GetCveID() const;

                    /**
                     * 设置CVE id.
                     * @param _cveID CVE id.
                     * 
                     */
                    void SetCveID(const std::string& _cveID);

                    /**
                     * 判断参数 CveID 是否已赋值
                     * @return CveID 是否已赋值
                     * 
                     */
                    bool CveIDHasBeenSet() const;

                    /**
                     * 获取Vulnerability description
                     * @return Description Vulnerability description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Vulnerability description
                     * @param _description Vulnerability description
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
                     * 获取Container ID.
                     * @return ContainerID Container ID.
                     * 
                     */
                    std::string GetContainerID() const;

                    /**
                     * 设置Container ID.
                     * @param _containerID Container ID.
                     * 
                     */
                    void SetContainerID(const std::string& _containerID);

                    /**
                     * 判断参数 ContainerID 是否已赋值
                     * @return ContainerID 是否已赋值
                     * 
                     */
                    bool ContainerIDHasBeenSet() const;

                    /**
                     * 获取Vulnerability risk remediation recommendation.
                     * @return Fix Vulnerability risk remediation recommendation.
                     * 
                     */
                    std::string GetFix() const;

                    /**
                     * 设置Vulnerability risk remediation recommendation.
                     * @param _fix Vulnerability risk remediation recommendation.
                     * 
                     */
                    void SetFix(const std::string& _fix);

                    /**
                     * 判断参数 Fix 是否已赋值
                     * @return Fix 是否已赋值
                     * 
                     */
                    bool FixHasBeenSet() const;

                    /**
                     * 获取Linux vulnerability.
                     * @return VulCategoryName Linux vulnerability.
                     * 
                     */
                    std::string GetVulCategoryName() const;

                    /**
                     * 设置Linux vulnerability.
                     * @param _vulCategoryName Linux vulnerability.
                     * 
                     */
                    void SetVulCategoryName(const std::string& _vulCategoryName);

                    /**
                     * 判断参数 VulCategoryName 是否已赋值
                     * @return VulCategoryName 是否已赋值
                     * 
                     */
                    bool VulCategoryNameHasBeenSet() const;

                    /**
                     * 获取Vulnerability level name.
                     * @return VulLevelName Vulnerability level name.
                     * 
                     */
                    std::string GetVulLevelName() const;

                    /**
                     * 设置Vulnerability level name.
                     * @param _vulLevelName Vulnerability level name.
                     * 
                     */
                    void SetVulLevelName(const std::string& _vulLevelName);

                    /**
                     * 判断参数 VulLevelName 是否已赋值
                     * @return VulLevelName 是否已赋值
                     * 
                     */
                    bool VulLevelNameHasBeenSet() const;

                    /**
                     * 获取Instance status chinese information.
                     * @return InstanceStatusName Instance status chinese information.
                     * 
                     */
                    std::string GetInstanceStatusName() const;

                    /**
                     * 设置Instance status chinese information.
                     * @param _instanceStatusName Instance status chinese information.
                     * 
                     */
                    void SetInstanceStatusName(const std::string& _instanceStatusName);

                    /**
                     * 判断参数 InstanceStatusName 是否已赋值
                     * @return InstanceStatusName 是否已赋值
                     * 
                     */
                    bool InstanceStatusNameHasBeenSet() const;

                    /**
                     * 获取Tenant ID.
                     * @return AppID Tenant ID.
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置Tenant ID.
                     * @param _appID Tenant ID.
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                private:

                    /**
                     * Cloud account ID.
                     */
                    std::string m_cloudAccountID;
                    bool m_cloudAccountIDHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_assetID;
                    bool m_assetIDHasBeenSet;

                    /**
                     * Instance status
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Creation time.


                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Vulnerability name
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * Vulnerability type.
                     */
                    std::string m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * Vulnerability level
                     */
                    std::string m_vulLevel;
                    bool m_vulLevelHasBeenSet;

                    /**
                     * CVE id.
                     */
                    std::string m_cveID;
                    bool m_cveIDHasBeenSet;

                    /**
                     * Vulnerability description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Container ID.
                     */
                    std::string m_containerID;
                    bool m_containerIDHasBeenSet;

                    /**
                     * Vulnerability risk remediation recommendation.
                     */
                    std::string m_fix;
                    bool m_fixHasBeenSet;

                    /**
                     * Linux vulnerability.
                     */
                    std::string m_vulCategoryName;
                    bool m_vulCategoryNameHasBeenSet;

                    /**
                     * Vulnerability level name.
                     */
                    std::string m_vulLevelName;
                    bool m_vulLevelNameHasBeenSet;

                    /**
                     * Instance status chinese information.
                     */
                    std::string m_instanceStatusName;
                    bool m_instanceStatusNameHasBeenSet;

                    /**
                     * Tenant ID.
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULRISKITEM_H_

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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCSIPRASPLICENSEBINDSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCSIPRASPLICENSEBINDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyCSIPRaspLicenseBinds request structure.
                */
                class ModifyCSIPRaspLicenseBindsRequest : public AbstractModel
                {
                public:
                    ModifyCSIPRaspLicenseBindsRequest();
                    ~ModifyCSIPRaspLicenseBindsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Resource ID (designated binding to which order)</p>
                     * @return ResourceId <p>Resource ID (designated binding to which order)</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>Resource ID (designated binding to which order)</p>
                     * @param _resourceId <p>Resource ID (designated binding to which order)</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>Authorization type. Enumeration values: rasp (RASP) / enterprise_hp (flagship edition). Defaults to rasp if empty.</p>
                     * @return LicenseType <p>Authorization type. Enumeration values: rasp (RASP) / enterprise_hp (flagship edition). Defaults to rasp if empty.</p>
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置<p>Authorization type. Enumeration values: rasp (RASP) / enterprise_hp (flagship edition). Defaults to rasp if empty.</p>
                     * @param _licenseType <p>Authorization type. Enumeration values: rasp (RASP) / enterprise_hp (flagship edition). Defaults to rasp if empty.</p>
                     * 
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取<p>Asset type. Enumeration values: host / cluster (container node) / eks (EKS super node). Defaults to host when empty.</p>
                     * @return AssetType <p>Asset type. Enumeration values: host / cluster (container node) / eks (EKS super node). Defaults to host when empty.</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>Asset type. Enumeration values: host / cluster (container node) / eks (EKS super node). Defaults to host when empty.</p>
                     * @param _assetType <p>Asset type. Enumeration values: host / cluster (container node) / eks (EKS super node). Defaults to host when empty.</p>
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>List of instance IDs to be bound (optional when IsAll=true)</p>
                     * @return InstanceIDs <p>List of instance IDs to be bound (optional when IsAll=true)</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIDs() const;

                    /**
                     * 设置<p>List of instance IDs to be bound (optional when IsAll=true)</p>
                     * @param _instanceIDs <p>List of instance IDs to be bound (optional when IsAll=true)</p>
                     * 
                     */
                    void SetInstanceIDs(const std::vector<std::string>& _instanceIDs);

                    /**
                     * 判断参数 InstanceIDs 是否已赋值
                     * @return InstanceIDs 是否已赋值
                     * 
                     */
                    bool InstanceIDsHasBeenSet() const;

                    /**
                     * 获取<p>Whether to bind all unbound machines (when true, the difference is automatically calculated)</p>
                     * @return IsAll <p>Whether to bind all unbound machines (when true, the difference is automatically calculated)</p>
                     * 
                     */
                    bool GetIsAll() const;

                    /**
                     * 设置<p>Whether to bind all unbound machines (when true, the difference is automatically calculated)</p>
                     * @param _isAll <p>Whether to bind all unbound machines (when true, the difference is automatically calculated)</p>
                     * 
                     */
                    void SetIsAll(const bool& _isAll);

                    /**
                     * 判断参数 IsAll 是否已赋值
                     * @return IsAll 是否已赋值
                     * 
                     */
                    bool IsAllHasBeenSet() const;

                private:

                    /**
                     * <p>Resource ID (designated binding to which order)</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>Authorization type. Enumeration values: rasp (RASP) / enterprise_hp (flagship edition). Defaults to rasp if empty.</p>
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * <p>Asset type. Enumeration values: host / cluster (container node) / eks (EKS super node). Defaults to host when empty.</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>List of instance IDs to be bound (optional when IsAll=true)</p>
                     */
                    std::vector<std::string> m_instanceIDs;
                    bool m_instanceIDsHasBeenSet;

                    /**
                     * <p>Whether to bind all unbound machines (when true, the difference is automatically calculated)</p>
                     */
                    bool m_isAll;
                    bool m_isAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYCSIPRASPLICENSEBINDSREQUEST_H_

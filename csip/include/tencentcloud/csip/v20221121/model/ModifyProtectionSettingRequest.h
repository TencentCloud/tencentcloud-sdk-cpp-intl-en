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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPROTECTIONSETTINGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPROTECTIONSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ModifyProtectionSetting.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyProtectionSetting request structure.
                */
                class ModifyProtectionSettingRequest : public AbstractModel
                {
                public:
                    ModifyProtectionSettingRequest();
                    ~ModifyProtectionSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Asset type
- CWP host security asset
- TCSS_HOST container host node
-TCSS_EKS container super node
                     * @return AssetType Asset type
- CWP host security asset
- TCSS_HOST container host node
-TCSS_EKS container super node
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset type
- CWP host security asset
- TCSS_HOST container host node
-TCSS_EKS container super node
                     * @param _assetType Asset type
- CWP host security asset
- TCSS_HOST container host node
-TCSS_EKS container super node
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
                     * 获取Protection configuration
                     * @return Config Protection configuration
                     * 
                     */
                    std::vector<ModifyProtectionSetting> GetConfig() const;

                    /**
                     * 设置Protection configuration
                     * @param _config Protection configuration
                     * 
                     */
                    void SetConfig(const std::vector<ModifyProtectionSetting>& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Whether to include all. This field must be used in conjunction with Filters.
                     * @return IsALL Whether to include all. This field must be used in conjunction with Filters.
                     * 
                     */
                    bool GetIsALL() const;

                    /**
                     * 设置Whether to include all. This field must be used in conjunction with Filters.
                     * @param _isALL Whether to include all. This field must be used in conjunction with Filters.
                     * 
                     */
                    void SetIsALL(const bool& _isALL);

                    /**
                     * 判断参数 IsALL 是否已赋值
                     * @return IsALL 是否已赋值
                     * 
                     */
                    bool IsALLHasBeenSet() const;

                    /**
                     * 获取Filter parameter. This parameter takes effect when IsALL is set to true, indicating that the filtered results apply to Config.
                     * @return Filters Filter parameter. This parameter takes effect when IsALL is set to true, indicating that the filtered results apply to Config.
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter parameter. This parameter takes effect when IsALL is set to true, indicating that the filtered results apply to Config.
                     * @param _filters Filter parameter. This parameter takes effect when IsALL is set to true, indicating that the filtered results apply to Config.
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Asset type
- CWP host security asset
- TCSS_HOST container host node
-TCSS_EKS container super node
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Protection configuration
                     */
                    std::vector<ModifyProtectionSetting> m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Whether to include all. This field must be used in conjunction with Filters.
                     */
                    bool m_isALL;
                    bool m_isALLHasBeenSet;

                    /**
                     * Filter parameter. This parameter takes effect when IsALL is set to true, indicating that the filtered results apply to Config.
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYPROTECTIONSETTINGREQUEST_H_

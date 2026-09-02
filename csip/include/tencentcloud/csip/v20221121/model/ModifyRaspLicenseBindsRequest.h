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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRASPLICENSEBINDSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRASPLICENSEBINDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * ModifyRaspLicenseBinds request structure.
                */
                class ModifyRaspLicenseBindsRequest : public AbstractModel
                {
                public:
                    ModifyRaspLicenseBindsRequest();
                    ~ModifyRaspLicenseBindsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Asset type
- CWP host security assets
- TCSS_HOST container host node
- TCSS_EKS container super node
                     * @return AssetType Asset type
- CWP host security assets
- TCSS_HOST container host node
- TCSS_EKS container super node
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置Asset type
- CWP host security assets
- TCSS_HOST container host node
- TCSS_EKS container super node
                     * @param _assetType Asset type
- CWP host security assets
- TCSS_HOST container host node
- TCSS_EKS container super node
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
                     * 获取Resource ID
                     * @return ResourceID Resource ID
                     * 
                     */
                    std::string GetResourceID() const;

                    /**
                     * 设置Resource ID
                     * @param _resourceID Resource ID
                     * 
                     */
                    void SetResourceID(const std::string& _resourceID);

                    /**
                     * 判断参数 ResourceID 是否已赋值
                     * @return ResourceID 是否已赋值
                     * 
                     */
                    bool ResourceIDHasBeenSet() const;

                    /**
                     * 获取Billing item type
-sv_yunjing_vas_small small package
-sv_yunjing_vas_medium medium package
-sv_yunjing_vas_large package
-sv_yunjing_vas_expansion expansion package
                     * @return InquireKey Billing item type
-sv_yunjing_vas_small small package
-sv_yunjing_vas_medium medium package
-sv_yunjing_vas_large package
-sv_yunjing_vas_expansion expansion package
                     * 
                     */
                    std::string GetInquireKey() const;

                    /**
                     * 设置Billing item type
-sv_yunjing_vas_small small package
-sv_yunjing_vas_medium medium package
-sv_yunjing_vas_large package
-sv_yunjing_vas_expansion expansion package
                     * @param _inquireKey Billing item type
-sv_yunjing_vas_small small package
-sv_yunjing_vas_medium medium package
-sv_yunjing_vas_large package
-sv_yunjing_vas_expansion expansion package
                     * 
                     */
                    void SetInquireKey(const std::string& _inquireKey);

                    /**
                     * 判断参数 InquireKey 是否已赋值
                     * @return InquireKey 是否已赋值
                     * 
                     */
                    bool InquireKeyHasBeenSet() const;

                    /**
                     * 获取Instance ID array.
                     * @return QUUID Instance ID array.
                     * 
                     */
                    std::vector<std::string> GetQUUID() const;

                    /**
                     * 设置Instance ID array.
                     * @param _qUUID Instance ID array.
                     * 
                     */
                    void SetQUUID(const std::vector<std::string>& _qUUID);

                    /**
                     * 判断参数 QUUID 是否已赋值
                     * @return QUUID 是否已赋值
                     * 
                     */
                    bool QUUIDHasBeenSet() const;

                    /**
                     * 获取Whether to include all host instances.
                     * @return IsALL Whether to include all host instances.
                     * 
                     */
                    bool GetIsALL() const;

                    /**
                     * 设置Whether to include all host instances.
                     * @param _isALL Whether to include all host instances.
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
                     * 获取Filter parameter. This parameter takes effect when IsALL is set to true, indicating that the filtered results apply to QUUIDs.
                     * @return Filters Filter parameter. This parameter takes effect when IsALL is set to true, indicating that the filtered results apply to QUUIDs.
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter parameter. This parameter takes effect when IsALL is set to true, indicating that the filtered results apply to QUUIDs.
                     * @param _filters Filter parameter. This parameter takes effect when IsALL is set to true, indicating that the filtered results apply to QUUIDs.
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
- CWP host security assets
- TCSS_HOST container host node
- TCSS_EKS container super node
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * Resource ID
                     */
                    std::string m_resourceID;
                    bool m_resourceIDHasBeenSet;

                    /**
                     * Billing item type
-sv_yunjing_vas_small small package
-sv_yunjing_vas_medium medium package
-sv_yunjing_vas_large package
-sv_yunjing_vas_expansion expansion package
                     */
                    std::string m_inquireKey;
                    bool m_inquireKeyHasBeenSet;

                    /**
                     * Instance ID array.
                     */
                    std::vector<std::string> m_qUUID;
                    bool m_qUUIDHasBeenSet;

                    /**
                     * Whether to include all host instances.
                     */
                    bool m_isALL;
                    bool m_isALLHasBeenSet;

                    /**
                     * Filter parameter. This parameter takes effect when IsALL is set to true, indicating that the filtered results apply to QUUIDs.
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYRASPLICENSEBINDSREQUEST_H_

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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLICENSEBINDSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLICENSEBINDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyLicenseBinds request structure.
                */
                class ModifyLicenseBindsRequest : public AbstractModel
                {
                public:
                    ModifyLicenseBindsRequest();
                    ~ModifyLicenseBindsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource ID
                     * @return ResourceId Resource ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID
                     * @param _resourceId Resource ID
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
                     * 获取Authorization type
                     * @return LicenseType Authorization type
                     * 
                     */
                    uint64_t GetLicenseType() const;

                    /**
                     * 设置Authorization type
                     * @param _licenseType Authorization type
                     * 
                     */
                    void SetLicenseType(const uint64_t& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取Whether all machines are involved. (If the total number of machines exceeds the available authorizations in the current order, some machines will be skipped.)
                     * @return IsAll Whether all machines are involved. (If the total number of machines exceeds the available authorizations in the current order, some machines will be skipped.)
                     * 
                     */
                    bool GetIsAll() const;

                    /**
                     * 设置Whether all machines are involved. (If the total number of machines exceeds the available authorizations in the current order, some machines will be skipped.)
                     * @param _isAll Whether all machines are involved. (If the total number of machines exceeds the available authorizations in the current order, some machines will be skipped.)
                     * 
                     */
                    void SetIsAll(const bool& _isAll);

                    /**
                     * 判断参数 IsAll 是否已赋值
                     * @return IsAll 是否已赋值
                     * 
                     */
                    bool IsAllHasBeenSet() const;

                    /**
                     * 获取List of QUUIDs of machines to be bound. This parameter is required when IsAll is set to false. Otherwise, it is ignored. Maximum number: 2,000.
                     * @return QuuidList List of QUUIDs of machines to be bound. This parameter is required when IsAll is set to false. Otherwise, it is ignored. Maximum number: 2,000.
                     * 
                     */
                    std::vector<std::string> GetQuuidList() const;

                    /**
                     * 设置List of QUUIDs of machines to be bound. This parameter is required when IsAll is set to false. Otherwise, it is ignored. Maximum number: 2,000.
                     * @param _quuidList List of QUUIDs of machines to be bound. This parameter is required when IsAll is set to false. Otherwise, it is ignored. Maximum number: 2,000.
                     * 
                     */
                    void SetQuuidList(const std::vector<std::string>& _quuidList);

                    /**
                     * 判断参数 QuuidList 是否已赋值
                     * @return QuuidList 是否已赋值
                     * 
                     */
                    bool QuuidListHasBeenSet() const;

                private:

                    /**
                     * Resource ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Authorization type
                     */
                    uint64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * Whether all machines are involved. (If the total number of machines exceeds the available authorizations in the current order, some machines will be skipped.)
                     */
                    bool m_isAll;
                    bool m_isAllHasBeenSet;

                    /**
                     * List of QUUIDs of machines to be bound. This parameter is required when IsAll is set to false. Otherwise, it is ignored. Maximum number: 2,000.
                     */
                    std::vector<std::string> m_quuidList;
                    bool m_quuidListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLICENSEBINDSREQUEST_H_

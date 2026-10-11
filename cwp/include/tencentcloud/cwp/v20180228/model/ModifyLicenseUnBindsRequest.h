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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLICENSEUNBINDSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLICENSEUNBINDSREQUEST_H_

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
                * ModifyLicenseUnBinds request structure.
                */
                class ModifyLicenseUnBindsRequest : public AbstractModel
                {
                public:
                    ModifyLicenseUnBindsRequest();
                    ~ModifyLicenseUnBindsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Resource ID</p>
                     * @return ResourceId <p>Resource ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>Resource ID</p>
                     * @param _resourceId <p>Resource ID</p>
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
                     * 获取<p>Authorization type</p><p>Enumeration values:</p><ul><li>1: Pro Edition - monthly subscription</li><li>2: Ultimate Edition - monthly subscription</li></ul>
                     * @return LicenseType <p>Authorization type</p><p>Enumeration values:</p><ul><li>1: Pro Edition - monthly subscription</li><li>2: Ultimate Edition - monthly subscription</li></ul>
                     * 
                     */
                    uint64_t GetLicenseType() const;

                    /**
                     * 设置<p>Authorization type</p><p>Enumeration values:</p><ul><li>1: Pro Edition - monthly subscription</li><li>2: Ultimate Edition - monthly subscription</li></ul>
                     * @param _licenseType <p>Authorization type</p><p>Enumeration values:</p><ul><li>1: Pro Edition - monthly subscription</li><li>2: Ultimate Edition - monthly subscription</li></ul>
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
                     * 获取<p>Whether all machines (when the number of all machines exceeds the available licenses in the current order, extra machines will be skipped)</p>
                     * @return IsAll <p>Whether all machines (when the number of all machines exceeds the available licenses in the current order, extra machines will be skipped)</p>
                     * 
                     */
                    bool GetIsAll() const;

                    /**
                     * 设置<p>Whether all machines (when the number of all machines exceeds the available licenses in the current order, extra machines will be skipped)</p>
                     * @param _isAll <p>Whether all machines (when the number of all machines exceeds the available licenses in the current order, extra machines will be skipped)</p>
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
                     * 获取<p>List of QUUIDs of machines to be bound. Required when IsAll = false; otherwise, ignore the parameter.<br>Maximum length: 100</p>
                     * @return QuuidList <p>List of QUUIDs of machines to be bound. Required when IsAll = false; otherwise, ignore the parameter.<br>Maximum length: 100</p>
                     * 
                     */
                    std::vector<std::string> GetQuuidList() const;

                    /**
                     * 设置<p>List of QUUIDs of machines to be bound. Required when IsAll = false; otherwise, ignore the parameter.<br>Maximum length: 100</p>
                     * @param _quuidList <p>List of QUUIDs of machines to be bound. Required when IsAll = false; otherwise, ignore the parameter.<br>Maximum length: 100</p>
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
                     * <p>Resource ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>Authorization type</p><p>Enumeration values:</p><ul><li>1: Pro Edition - monthly subscription</li><li>2: Ultimate Edition - monthly subscription</li></ul>
                     */
                    uint64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * <p>Whether all machines (when the number of all machines exceeds the available licenses in the current order, extra machines will be skipped)</p>
                     */
                    bool m_isAll;
                    bool m_isAllHasBeenSet;

                    /**
                     * <p>List of QUUIDs of machines to be bound. Required when IsAll = false; otherwise, ignore the parameter.<br>Maximum length: 100</p>
                     */
                    std::vector<std::string> m_quuidList;
                    bool m_quuidListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLICENSEUNBINDSREQUEST_H_

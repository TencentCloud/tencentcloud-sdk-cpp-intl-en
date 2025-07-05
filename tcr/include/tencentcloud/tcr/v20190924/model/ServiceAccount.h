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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_SERVICEACCOUNT_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_SERVICEACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/Permission.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * Service account
                */
                class ServiceAccount : public AbstractModel
                {
                public:
                    ServiceAccount();
                    ~ServiceAccount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Service account name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Name Service account name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Service account name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _name Service account name
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Description
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Description Description
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _description Description
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Whether to disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Disable Whether to disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetDisable() const;

                    /**
                     * 设置Whether to disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _disable Whether to disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDisable(const bool& _disable);

                    /**
                     * 判断参数 Disable 是否已赋值
                     * @return Disable 是否已赋值
                     * 
                     */
                    bool DisableHasBeenSet() const;

                    /**
                     * 获取Expiry time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return ExpiresAt Expiry time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetExpiresAt() const;

                    /**
                     * 设置Expiry time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _expiresAt Expiry time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExpiresAt(const int64_t& _expiresAt);

                    /**
                     * 判断参数 ExpiresAt 是否已赋值
                     * @return ExpiresAt 是否已赋值
                     * 
                     */
                    bool ExpiresAtHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _createTime Creation time
Note: This field may return `null`, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Permissions Policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Permission> GetPermissions() const;

                    /**
                     * 设置Policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _permissions Policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPermissions(const std::vector<Permission>& _permissions);

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     * 
                     */
                    bool PermissionsHasBeenSet() const;

                private:

                    /**
                     * Service account name
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Whether to disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_disable;
                    bool m_disableHasBeenSet;

                    /**
                     * Expiry time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_expiresAt;
                    bool m_expiresAtHasBeenSet;

                    /**
                     * Creation time
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Policy
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<Permission> m_permissions;
                    bool m_permissionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_SERVICEACCOUNT_H_

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

#ifndef TENCENTCLOUD_CIAM_V20210420_MODEL_USERGROUP_H_
#define TENCENTCLOUD_CIAM_V20210420_MODEL_USERGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * User group
                */
                class UserGroup : public AbstractModel
                {
                public:
                    UserGroup();
                    ~UserGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User group ID
                     * @return UserGroupId User group ID
                     * 
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置User group ID
                     * @param _userGroupId User group ID
                     * 
                     */
                    void SetUserGroupId(const std::string& _userGroupId);

                    /**
                     * 判断参数 UserGroupId 是否已赋值
                     * @return UserGroupId 是否已赋值
                     * 
                     */
                    bool UserGroupIdHasBeenSet() const;

                    /**
                     * 获取User group name
                     * @return DisplayName User group name
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置User group name
                     * @param _displayName User group name
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取User group description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Description User group description
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置User group description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _description User group description
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取User directory ID
                     * @return UserStoreId User directory ID
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置User directory ID
                     * @param _userStoreId User directory ID
                     * 
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     * 
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取Tenant ID
                     * @return TenantId Tenant ID
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置Tenant ID
                     * @param _tenantId Tenant ID
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                private:

                    /**
                     * User group ID
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                    /**
                     * User group name
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * User group description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * User directory ID
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * Tenant ID
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20210420_MODEL_USERGROUP_H_

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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_USERROLE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_USERROLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/CosPermission.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * User role
                */
                class UserRole : public AbstractModel
                {
                public:
                    UserRole();
                    ~UserRole() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The role ID.
                     * @return RoleId The role ID.
                     * 
                     */
                    int64_t GetRoleId() const;

                    /**
                     * 设置The role ID.
                     * @param _roleId The role ID.
                     * 
                     */
                    void SetRoleId(const int64_t& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取The user's app ID.
                     * @return AppId The user's app ID.
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置The user's app ID.
                     * @param _appId The user's app ID.
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取The user ID.
                     * @return Uin The user ID.
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置The user ID.
                     * @param _uin The user ID.
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取The role permission.
                     * @return Arn The role permission.
                     * 
                     */
                    std::string GetArn() const;

                    /**
                     * 设置The role permission.
                     * @param _arn The role permission.
                     * 
                     */
                    void SetArn(const std::string& _arn);

                    /**
                     * 判断参数 Arn 是否已赋值
                     * @return Arn 是否已赋值
                     * 
                     */
                    bool ArnHasBeenSet() const;

                    /**
                     * 获取The last modified timestamp.
                     * @return ModifyTime The last modified timestamp.
                     * 
                     */
                    int64_t GetModifyTime() const;

                    /**
                     * 设置The last modified timestamp.
                     * @param _modifyTime The last modified timestamp.
                     * 
                     */
                    void SetModifyTime(const int64_t& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取The role description.
                     * @return Desc The role description.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置The role description.
                     * @param _desc The role description.
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RoleName Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roleName Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Creator Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _creator Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CosPermissionList Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CosPermission> GetCosPermissionList() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cosPermissionList Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCosPermissionList(const std::vector<CosPermission>& _cosPermissionList);

                    /**
                     * 判断参数 CosPermissionList 是否已赋值
                     * @return CosPermissionList 是否已赋值
                     * 
                     */
                    bool CosPermissionListHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PermissionJson Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPermissionJson() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _permissionJson Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPermissionJson(const std::string& _permissionJson);

                    /**
                     * 判断参数 PermissionJson 是否已赋值
                     * @return PermissionJson 是否已赋值
                     * 
                     */
                    bool PermissionJsonHasBeenSet() const;

                private:

                    /**
                     * The role ID.
                     */
                    int64_t m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * The user's app ID.
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * The user ID.
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * The role permission.
                     */
                    std::string m_arn;
                    bool m_arnHasBeenSet;

                    /**
                     * The last modified timestamp.
                     */
                    int64_t m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * The role description.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CosPermission> m_cosPermissionList;
                    bool m_cosPermissionListHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_permissionJson;
                    bool m_permissionJsonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_USERROLE_H_

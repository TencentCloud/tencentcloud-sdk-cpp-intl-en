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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BASEROLE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BASEROLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RolePrivilege.h>
#include <tencentcloud/wedata/v20210820/model/BaseUser.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Basic role object.
                */
                class BaseRole : public AbstractModel
                {
                public:
                    BaseRole();
                    ~BaseRole() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Role id.
                     * @return RoleId Role id.
                     * 
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置Role id.
                     * @param _roleId Role id.
                     * 
                     */
                    void SetRoleId(const std::string& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取Role name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RoleName Role name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Role name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roleName Role name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Role nickname.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DisplayName Role nickname.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Role nickname.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _displayName Role nickname.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Description

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Description

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Description

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Role type divides into System, Tenant, Project, Commercial.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RoleType Role type divides into System, Tenant, Project, Commercial.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRoleType() const;

                    /**
                     * 设置Role type divides into System, Tenant, Project, Commercial.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roleType Role type divides into System, Tenant, Project, Commercial.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRoleType(const std::string& _roleType);

                    /**
                     * 判断参数 RoleType 是否已赋值
                     * @return RoleType 是否已赋值
                     * 
                     */
                    bool RoleTypeHasBeenSet() const;

                    /**
                     * 获取System preset.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SystemDefault System preset.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetSystemDefault() const;

                    /**
                     * 设置System preset.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _systemDefault System preset.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSystemDefault(const bool& _systemDefault);

                    /**
                     * 判断参数 SystemDefault 是否已赋值
                     * @return SystemDefault 是否已赋值
                     * 
                     */
                    bool SystemDefaultHasBeenSet() const;

                    /**
                     * 获取Custom parameter.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Parameters Custom parameter.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置Custom parameter.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _parameters Custom parameter.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取Specifies member statistics.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MemberCount Specifies member statistics.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMemberCount() const;

                    /**
                     * 设置Specifies member statistics.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memberCount Specifies member statistics.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMemberCount(const int64_t& _memberCount);

                    /**
                     * 判断参数 MemberCount 是否已赋值
                     * @return MemberCount 是否已赋值
                     * 
                     */
                    bool MemberCountHasBeenSet() const;

                    /**
                     * 获取Permission

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Privileges Permission

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RolePrivilege> GetPrivileges() const;

                    /**
                     * 设置Permission

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _privileges Permission

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrivileges(const std::vector<RolePrivilege>& _privileges);

                    /**
                     * 判断参数 Privileges 是否已赋值
                     * @return Privileges 是否已赋值
                     * 
                     */
                    bool PrivilegesHasBeenSet() const;

                    /**
                     * 获取Operator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Operator Operator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    BaseUser GetOperator() const;

                    /**
                     * 设置Operator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _operator Operator.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOperator(const BaseUser& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Operation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OperateTime Operation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetOperateTime() const;

                    /**
                     * 设置Operation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _operateTime Operation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOperateTime(const uint64_t& _operateTime);

                    /**
                     * 判断参数 OperateTime 是否已赋值
                     * @return OperateTime 是否已赋值
                     * 
                     */
                    bool OperateTimeHasBeenSet() const;

                    /**
                     * 获取Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTimeStr Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTimeStr() const;

                    /**
                     * 设置Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTimeStr Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTimeStr(const std::string& _createTimeStr);

                    /**
                     * 判断参数 CreateTimeStr 是否已赋值
                     * @return CreateTimeStr 是否已赋值
                     * 
                     */
                    bool CreateTimeStrHasBeenSet() const;

                    /**
                     * 获取Update time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTimeStr Update time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTimeStr() const;

                    /**
                     * 设置Update time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTimeStr Update time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTimeStr(const std::string& _updateTimeStr);

                    /**
                     * 判断参数 UpdateTimeStr 是否已赋值
                     * @return UpdateTimeStr 是否已赋值
                     * 
                     */
                    bool UpdateTimeStrHasBeenSet() const;

                    /**
                     * 获取Project ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _projectId Project ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Update time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update time.

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
                     * 获取Creator

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Creator Creator

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置Creator

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _creator Creator

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                private:

                    /**
                     * Role id.
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * Role name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * Role nickname.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * Description

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Role type divides into System, Tenant, Project, Commercial.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_roleType;
                    bool m_roleTypeHasBeenSet;

                    /**
                     * System preset.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_systemDefault;
                    bool m_systemDefaultHasBeenSet;

                    /**
                     * Custom parameter.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * Specifies member statistics.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_memberCount;
                    bool m_memberCountHasBeenSet;

                    /**
                     * Permission

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RolePrivilege> m_privileges;
                    bool m_privilegesHasBeenSet;

                    /**
                     * Operator.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    BaseUser m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Operation time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_operateTime;
                    bool m_operateTimeHasBeenSet;

                    /**
                     * Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Creation time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTimeStr;
                    bool m_createTimeStrHasBeenSet;

                    /**
                     * Update time.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTimeStr;
                    bool m_updateTimeStrHasBeenSet;

                    /**
                     * Project ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Update time.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Creator

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BASEROLE_H_

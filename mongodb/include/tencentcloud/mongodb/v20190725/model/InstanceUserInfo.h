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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEUSERINFO_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/Role.h>
#include <tencentcloud/mongodb/v20190725/model/Auth.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * Account information
                */
                class InstanceUserInfo : public AbstractModel
                {
                public:
                    InstanceUserInfo();
                    ~InstanceUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Username.</p>
                     * @return UserName <p>Username.</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>Username.</p>
                     * @param _userName <p>Username.</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>Authentication database</p>
                     * @return Database <p>Authentication database</p>
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置<p>Authentication database</p>
                     * @param _database <p>Authentication database</p>
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取<p>Get role list (new method)</p>
                     * @return Roles <p>Get role list (new method)</p>
                     * 
                     */
                    std::vector<Role> GetRoles() const;

                    /**
                     * 设置<p>Get role list (new method)</p>
                     * @param _roles <p>Get role list (new method)</p>
                     * 
                     */
                    void SetRoles(const std::vector<Role>& _roles);

                    /**
                     * 判断参数 Roles 是否已赋值
                     * @return Roles 是否已赋值
                     * 
                     */
                    bool RolesHasBeenSet() const;

                    /**
                     * 获取<p>Permission list (old method)</p>
                     * @return AuthRole <p>Permission list (old method)</p>
                     * 
                     */
                    std::vector<Auth> GetAuthRole() const;

                    /**
                     * 设置<p>Permission list (old method)</p>
                     * @param _authRole <p>Permission list (old method)</p>
                     * 
                     */
                    void SetAuthRole(const std::vector<Auth>& _authRole);

                    /**
                     * 判断参数 AuthRole 是否已赋值
                     * @return AuthRole 是否已赋值
                     * 
                     */
                    bool AuthRoleHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
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
                     * 获取<p>Update time.</p>
                     * @return UpdateTime <p>Update time.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time.</p>
                     * @param _updateTime <p>Update time.</p>
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
                     * 获取<p>Console password last update time</p>
                     * @return ConsolePassUpdateTime <p>Console password last update time</p>
                     * 
                     */
                    std::string GetConsolePassUpdateTime() const;

                    /**
                     * 设置<p>Console password last update time</p>
                     * @param _consolePassUpdateTime <p>Console password last update time</p>
                     * 
                     */
                    void SetConsolePassUpdateTime(const std::string& _consolePassUpdateTime);

                    /**
                     * 判断参数 ConsolePassUpdateTime 是否已赋值
                     * @return ConsolePassUpdateTime 是否已赋值
                     * 
                     */
                    bool ConsolePassUpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable password rotation</p>
                     * @return EnablePasswordRotation <p>Whether to enable password rotation</p>
                     * 
                     */
                    int64_t GetEnablePasswordRotation() const;

                    /**
                     * 设置<p>Whether to enable password rotation</p>
                     * @param _enablePasswordRotation <p>Whether to enable password rotation</p>
                     * 
                     */
                    void SetEnablePasswordRotation(const int64_t& _enablePasswordRotation);

                    /**
                     * 判断参数 EnablePasswordRotation 是否已赋值
                     * @return EnablePasswordRotation 是否已赋值
                     * 
                     */
                    bool EnablePasswordRotationHasBeenSet() const;

                    /**
                     * 获取<p>Custom description</p>
                     * @return Description <p>Custom description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Custom description</p>
                     * @param _description <p>Custom description</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>Username.</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>Authentication database</p>
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * <p>Get role list (new method)</p>
                     */
                    std::vector<Role> m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * <p>Permission list (old method)</p>
                     */
                    std::vector<Auth> m_authRole;
                    bool m_authRoleHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Update time.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Console password last update time</p>
                     */
                    std::string m_consolePassUpdateTime;
                    bool m_consolePassUpdateTimeHasBeenSet;

                    /**
                     * <p>Whether to enable password rotation</p>
                     */
                    int64_t m_enablePasswordRotation;
                    bool m_enablePasswordRotationHasBeenSet;

                    /**
                     * <p>Custom description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCEUSERINFO_H_

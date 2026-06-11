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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_USERINFO_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_USERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * 
                */
                class UserInfo : public AbstractModel
                {
                public:
                    UserInfo();
                    ~UserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The account name.
                     * @return UserName The account name.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置The account name.
                     * @param _userName The account name.
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
                     * 获取The account permission details.
                     * @return AuthRole The account permission details.
                     * 
                     */
                    std::vector<Auth> GetAuthRole() const;

                    /**
                     * 设置The account permission details.
                     * @param _authRole The account permission details.
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
                     * 获取The time when the account was created.
                     * @return CreateTime The time when the account was created.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The time when the account was created.
                     * @param _createTime The time when the account was created.
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
                     * 获取The time when the account was last updated.
                     * @return UpdateTime The time when the account was last updated.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置The time when the account was last updated.
                     * @param _updateTime The time when the account was last updated.
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
                     * 获取The remarks for the account.
                     * @return UserDesc The remarks for the account.
                     * 
                     */
                    std::string GetUserDesc() const;

                    /**
                     * 设置The remarks for the account.
                     * @param _userDesc The remarks for the account.
                     * 
                     */
                    void SetUserDesc(const std::string& _userDesc);

                    /**
                     * 判断参数 UserDesc 是否已赋值
                     * @return UserDesc 是否已赋值
                     * 
                     */
                    bool UserDescHasBeenSet() const;

                    /**
                     * 获取The time when the console password was last updated.
                     * @return ConsolePassUpdateTime The time when the console password was last updated.
                     * 
                     */
                    std::string GetConsolePassUpdateTime() const;

                    /**
                     * 设置The time when the console password was last updated.
                     * @param _consolePassUpdateTime The time when the console password was last updated.
                     * 
                     */
                    void SetConsolePassUpdateTime(const std::string& _consolePassUpdateTime);

                    /**
                     * 判断参数 ConsolePassUpdateTime 是否已赋值
                     * @return ConsolePassUpdateTime 是否已赋值
                     * 
                     */
                    bool ConsolePassUpdateTimeHasBeenSet() const;

                private:

                    /**
                     * The account name.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * The account permission details.
                     */
                    std::vector<Auth> m_authRole;
                    bool m_authRoleHasBeenSet;

                    /**
                     * The time when the account was created.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The time when the account was last updated.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * The remarks for the account.
                     */
                    std::string m_userDesc;
                    bool m_userDescHasBeenSet;

                    /**
                     * The time when the console password was last updated.
                     */
                    std::string m_consolePassUpdateTime;
                    bool m_consolePassUpdateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_USERINFO_H_

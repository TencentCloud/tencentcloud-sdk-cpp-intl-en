/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEROLECONSOLELOGINREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEROLECONSOLELOGINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * UpdateRoleConsoleLogin request structure.
                */
                class UpdateRoleConsoleLoginRequest : public AbstractModel
                {
                public:
                    UpdateRoleConsoleLoginRequest();
                    ~UpdateRoleConsoleLoginRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether login is allowed. 1: yes, 0: no
                     * @return ConsoleLogin Whether login is allowed. 1: yes, 0: no
                     */
                    int64_t GetConsoleLogin() const;

                    /**
                     * 设置Whether login is allowed. 1: yes, 0: no
                     * @param ConsoleLogin Whether login is allowed. 1: yes, 0: no
                     */
                    void SetConsoleLogin(const int64_t& _consoleLogin);

                    /**
                     * 判断参数 ConsoleLogin 是否已赋值
                     * @return ConsoleLogin 是否已赋值
                     */
                    bool ConsoleLoginHasBeenSet() const;

                    /**
                     * 获取Role ID. Use either `RoleId` or `RoleName` as the input parameter.
                     * @return RoleId Role ID. Use either `RoleId` or `RoleName` as the input parameter.
                     */
                    int64_t GetRoleId() const;

                    /**
                     * 设置Role ID. Use either `RoleId` or `RoleName` as the input parameter.
                     * @param RoleId Role ID. Use either `RoleId` or `RoleName` as the input parameter.
                     */
                    void SetRoleId(const int64_t& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取Role name. Use either `RoleId` or `RoleName` as the input parameter.
                     * @return RoleName Role name. Use either `RoleId` or `RoleName` as the input parameter.
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Role name. Use either `RoleId` or `RoleName` as the input parameter.
                     * @param RoleName Role name. Use either `RoleId` or `RoleName` as the input parameter.
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     */
                    bool RoleNameHasBeenSet() const;

                private:

                    /**
                     * Whether login is allowed. 1: yes, 0: no
                     */
                    int64_t m_consoleLogin;
                    bool m_consoleLoginHasBeenSet;

                    /**
                     * Role ID. Use either `RoleId` or `RoleName` as the input parameter.
                     */
                    int64_t m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * Role name. Use either `RoleId` or `RoleName` as the input parameter.
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEROLECONSOLELOGINREQUEST_H_

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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_TEAMADMINUSERINFO_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_TEAMADMINUSERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Team admin information.
                */
                class TeamAdminUserInfo : public AbstractModel
                {
                public:
                    TeamAdminUserInfo();
                    ~TeamAdminUserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Admin user ID.</p>
                     * @return AdminUserId <p>Admin user ID.</p>
                     * 
                     */
                    std::string GetAdminUserId() const;

                    /**
                     * 设置<p>Admin user ID.</p>
                     * @param _adminUserId <p>Admin user ID.</p>
                     * 
                     */
                    void SetAdminUserId(const std::string& _adminUserId);

                    /**
                     * 判断参数 AdminUserId 是否已赋值
                     * @return AdminUserId 是否已赋值
                     * 
                     */
                    bool AdminUserIdHasBeenSet() const;

                    /**
                     * 获取<p>Admin user account.</p>
                     * @return AdminUserAccount <p>Admin user account.</p>
                     * 
                     */
                    std::string GetAdminUserAccount() const;

                    /**
                     * 设置<p>Admin user account.</p>
                     * @param _adminUserAccount <p>Admin user account.</p>
                     * 
                     */
                    void SetAdminUserAccount(const std::string& _adminUserAccount);

                    /**
                     * 判断参数 AdminUserAccount 是否已赋值
                     * @return AdminUserAccount 是否已赋值
                     * 
                     */
                    bool AdminUserAccountHasBeenSet() const;

                    /**
                     * 获取<p>Admin username.</p>
                     * @return AdminUserName <p>Admin username.</p>
                     * 
                     */
                    std::string GetAdminUserName() const;

                    /**
                     * 设置<p>Admin username.</p>
                     * @param _adminUserName <p>Admin username.</p>
                     * 
                     */
                    void SetAdminUserName(const std::string& _adminUserName);

                    /**
                     * 判断参数 AdminUserName 是否已赋值
                     * @return AdminUserName 是否已赋值
                     * 
                     */
                    bool AdminUserNameHasBeenSet() const;

                private:

                    /**
                     * <p>Admin user ID.</p>
                     */
                    std::string m_adminUserId;
                    bool m_adminUserIdHasBeenSet;

                    /**
                     * <p>Admin user account.</p>
                     */
                    std::string m_adminUserAccount;
                    bool m_adminUserAccountHasBeenSet;

                    /**
                     * <p>Admin username.</p>
                     */
                    std::string m_adminUserName;
                    bool m_adminUserNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_TEAMADMINUSERINFO_H_

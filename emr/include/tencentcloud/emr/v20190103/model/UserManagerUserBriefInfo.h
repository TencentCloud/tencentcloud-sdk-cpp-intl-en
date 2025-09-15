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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_USERMANAGERUSERBRIEFINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_USERMANAGERUSERBRIEFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Brief user information in user management
                */
                class UserManagerUserBriefInfo : public AbstractModel
                {
                public:
                    UserManagerUserBriefInfo();
                    ~UserManagerUserBriefInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Username
                     * @return UserName Username
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username
                     * @param _userName Username
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
                     * 获取The group to which the user belongs
                     * @return UserGroup The group to which the user belongs
                     * 
                     */
                    std::string GetUserGroup() const;

                    /**
                     * 设置The group to which the user belongs
                     * @param _userGroup The group to which the user belongs
                     * 
                     */
                    void SetUserGroup(const std::string& _userGroup);

                    /**
                     * 判断参数 UserGroup 是否已赋值
                     * @return UserGroup 是否已赋值
                     * 
                     */
                    bool UserGroupHasBeenSet() const;

                    /**
                     * 获取`Manager` represents an admin, and `NormalUser` represents a general user.
                     * @return UserType `Manager` represents an admin, and `NormalUser` represents a general user.
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置`Manager` represents an admin, and `NormalUser` represents a general user.
                     * @param _userType `Manager` represents an admin, and `NormalUser` represents a general user.
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取User creation time.
                     * @return CreateTime User creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置User creation time.
                     * @param _createTime User creation time.
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
                     * 获取Whether the corresponding Keytab file of the user is available for download. This parameter applies only to a Kerberos-enabled cluster.
                     * @return SupportDownLoadKeyTab Whether the corresponding Keytab file of the user is available for download. This parameter applies only to a Kerberos-enabled cluster.
                     * 
                     */
                    bool GetSupportDownLoadKeyTab() const;

                    /**
                     * 设置Whether the corresponding Keytab file of the user is available for download. This parameter applies only to a Kerberos-enabled cluster.
                     * @param _supportDownLoadKeyTab Whether the corresponding Keytab file of the user is available for download. This parameter applies only to a Kerberos-enabled cluster.
                     * 
                     */
                    void SetSupportDownLoadKeyTab(const bool& _supportDownLoadKeyTab);

                    /**
                     * 判断参数 SupportDownLoadKeyTab 是否已赋值
                     * @return SupportDownLoadKeyTab 是否已赋值
                     * 
                     */
                    bool SupportDownLoadKeyTabHasBeenSet() const;

                    /**
                     * 获取Download address of the keytab file.
                     * @return DownLoadKeyTabUrl Download address of the keytab file.
                     * 
                     */
                    std::string GetDownLoadKeyTabUrl() const;

                    /**
                     * 设置Download address of the keytab file.
                     * @param _downLoadKeyTabUrl Download address of the keytab file.
                     * 
                     */
                    void SetDownLoadKeyTabUrl(const std::string& _downLoadKeyTabUrl);

                    /**
                     * 判断参数 DownLoadKeyTabUrl 是否已赋值
                     * @return DownLoadKeyTabUrl 是否已赋值
                     * 
                     */
                    bool DownLoadKeyTabUrlHasBeenSet() const;

                private:

                    /**
                     * Username
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * The group to which the user belongs
                     */
                    std::string m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * `Manager` represents an admin, and `NormalUser` represents a general user.
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * User creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Whether the corresponding Keytab file of the user is available for download. This parameter applies only to a Kerberos-enabled cluster.
                     */
                    bool m_supportDownLoadKeyTab;
                    bool m_supportDownLoadKeyTabHasBeenSet;

                    /**
                     * Download address of the keytab file.
                     */
                    std::string m_downLoadKeyTabUrl;
                    bool m_downLoadKeyTabUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_USERMANAGERUSERBRIEFINFO_H_

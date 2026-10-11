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
                * Brief information of users in user management.
                */
                class UserManagerUserBriefInfo : public AbstractModel
                {
                public:
                    UserManagerUserBriefInfo();
                    ~UserManagerUserBriefInfo() = default;
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
                     * 获取<p>Group to which the user belongs.</p>
                     * @return UserGroup <p>Group to which the user belongs.</p>
                     * 
                     */
                    std::string GetUserGroup() const;

                    /**
                     * 设置<p>Group to which the user belongs.</p>
                     * @param _userGroup <p>Group to which the user belongs.</p>
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
                     * 获取<p>Manager indicates an administrator, and NormalUser indicates a regular user.</p>
                     * @return UserType <p>Manager indicates an administrator, and NormalUser indicates a regular user.</p>
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置<p>Manager indicates an administrator, and NormalUser indicates a regular user.</p>
                     * @param _userType <p>Manager indicates an administrator, and NormalUser indicates a regular user.</p>
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
                     * 获取<p>User creation time.</p>
                     * @return CreateTime <p>User creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>User creation time.</p>
                     * @param _createTime <p>User creation time.</p>
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
                     * 获取<p>Whether to download the keytab file of the corresponding user. This is only meaningful for clusters with Kerberos enabled.</p>
                     * @return SupportDownLoadKeyTab <p>Whether to download the keytab file of the corresponding user. This is only meaningful for clusters with Kerberos enabled.</p>
                     * 
                     */
                    bool GetSupportDownLoadKeyTab() const;

                    /**
                     * 设置<p>Whether to download the keytab file of the corresponding user. This is only meaningful for clusters with Kerberos enabled.</p>
                     * @param _supportDownLoadKeyTab <p>Whether to download the keytab file of the corresponding user. This is only meaningful for clusters with Kerberos enabled.</p>
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
                     * 获取<p>Download URL of the keytab file.</p>
                     * @return DownLoadKeyTabUrl <p>Download URL of the keytab file.</p>
                     * 
                     */
                    std::string GetDownLoadKeyTabUrl() const;

                    /**
                     * 设置<p>Download URL of the keytab file.</p>
                     * @param _downLoadKeyTabUrl <p>Download URL of the keytab file.</p>
                     * 
                     */
                    void SetDownLoadKeyTabUrl(const std::string& _downLoadKeyTabUrl);

                    /**
                     * 判断参数 DownLoadKeyTabUrl 是否已赋值
                     * @return DownLoadKeyTabUrl 是否已赋值
                     * 
                     */
                    bool DownLoadKeyTabUrlHasBeenSet() const;

                    /**
                     * 获取<p>User group.</p>
                     * @return Groups <p>User group.</p>
                     * 
                     */
                    std::vector<std::string> GetGroups() const;

                    /**
                     * 设置<p>User group.</p>
                     * @param _groups <p>User group.</p>
                     * 
                     */
                    void SetGroups(const std::vector<std::string>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取<p>Customer UIN.</p>
                     * @return Uin <p>Customer UIN.</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>Customer UIN.</p>
                     * @param _uin <p>Customer UIN.</p>
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
                     * 获取<p>User status.</p>
                     * @return State <p>User status.</p>
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置<p>User status.</p>
                     * @param _state <p>User status.</p>
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>Whether to display the password update time.</p>
                     * @return DisplayPasswdUpdateTime <p>Whether to display the password update time.</p>
                     * 
                     */
                    bool GetDisplayPasswdUpdateTime() const;

                    /**
                     * 设置<p>Whether to display the password update time.</p>
                     * @param _displayPasswdUpdateTime <p>Whether to display the password update time.</p>
                     * 
                     */
                    void SetDisplayPasswdUpdateTime(const bool& _displayPasswdUpdateTime);

                    /**
                     * 判断参数 DisplayPasswdUpdateTime 是否已赋值
                     * @return DisplayPasswdUpdateTime 是否已赋值
                     * 
                     */
                    bool DisplayPasswdUpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Latest password update time.</p>
                     * @return PasswdUpdateTime <p>Latest password update time.</p>
                     * 
                     */
                    std::string GetPasswdUpdateTime() const;

                    /**
                     * 设置<p>Latest password update time.</p>
                     * @param _passwdUpdateTime <p>Latest password update time.</p>
                     * 
                     */
                    void SetPasswdUpdateTime(const std::string& _passwdUpdateTime);

                    /**
                     * 判断参数 PasswdUpdateTime 是否已赋值
                     * @return PasswdUpdateTime 是否已赋值
                     * 
                     */
                    bool PasswdUpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Number of days used.</p><p>Unit: days.</p>
                     * @return PasswdUsedDay <p>Number of days used.</p><p>Unit: days.</p>
                     * 
                     */
                    int64_t GetPasswdUsedDay() const;

                    /**
                     * 设置<p>Number of days used.</p><p>Unit: days.</p>
                     * @param _passwdUsedDay <p>Number of days used.</p><p>Unit: days.</p>
                     * 
                     */
                    void SetPasswdUsedDay(const int64_t& _passwdUsedDay);

                    /**
                     * 判断参数 PasswdUsedDay 是否已赋值
                     * @return PasswdUsedDay 是否已赋值
                     * 
                     */
                    bool PasswdUsedDayHasBeenSet() const;

                    /**
                     * 获取<p>Number of hours used.</p><p>Unit: hours.</p>
                     * @return PasswdUsedHour <p>Number of hours used.</p><p>Unit: hours.</p>
                     * 
                     */
                    int64_t GetPasswdUsedHour() const;

                    /**
                     * 设置<p>Number of hours used.</p><p>Unit: hours.</p>
                     * @param _passwdUsedHour <p>Number of hours used.</p><p>Unit: hours.</p>
                     * 
                     */
                    void SetPasswdUsedHour(const int64_t& _passwdUsedHour);

                    /**
                     * 判断参数 PasswdUsedHour 是否已赋值
                     * @return PasswdUsedHour 是否已赋值
                     * 
                     */
                    bool PasswdUsedHourHasBeenSet() const;

                private:

                    /**
                     * <p>Username.</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>Group to which the user belongs.</p>
                     */
                    std::string m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * <p>Manager indicates an administrator, and NormalUser indicates a regular user.</p>
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * <p>User creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Whether to download the keytab file of the corresponding user. This is only meaningful for clusters with Kerberos enabled.</p>
                     */
                    bool m_supportDownLoadKeyTab;
                    bool m_supportDownLoadKeyTabHasBeenSet;

                    /**
                     * <p>Download URL of the keytab file.</p>
                     */
                    std::string m_downLoadKeyTabUrl;
                    bool m_downLoadKeyTabUrlHasBeenSet;

                    /**
                     * <p>User group.</p>
                     */
                    std::vector<std::string> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * <p>Customer UIN.</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>User status.</p>
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>Whether to display the password update time.</p>
                     */
                    bool m_displayPasswdUpdateTime;
                    bool m_displayPasswdUpdateTimeHasBeenSet;

                    /**
                     * <p>Latest password update time.</p>
                     */
                    std::string m_passwdUpdateTime;
                    bool m_passwdUpdateTimeHasBeenSet;

                    /**
                     * <p>Number of days used.</p><p>Unit: days.</p>
                     */
                    int64_t m_passwdUsedDay;
                    bool m_passwdUsedDayHasBeenSet;

                    /**
                     * <p>Number of hours used.</p><p>Unit: hours.</p>
                     */
                    int64_t m_passwdUsedHour;
                    bool m_passwdUsedHourHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_USERMANAGERUSERBRIEFINFO_H_

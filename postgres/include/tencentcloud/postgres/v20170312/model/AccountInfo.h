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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_ACCOUNTINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_ACCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Account information
                */
                class AccountInfo : public AbstractModel
                {
                public:
                    AccountInfo();
                    ~AccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID in the format of postgres-lnp6j617
                     * @return DBInstanceId Instance ID in the format of postgres-lnp6j617
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID in the format of postgres-lnp6j617
                     * @param _dBInstanceId Instance ID in the format of postgres-lnp6j617
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Account
                     * @return UserName Account
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Account
                     * @param _userName Account
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
                     * 获取Specifies the account remark.
                     * @return Remark Specifies the account remark.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Specifies the account remark.
                     * @param _remark Specifies the account remark.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Account status. valid values: 1-creating, 2-normal, 3-modifying, 4-resetting password, 5-locked, -1-deleting.
                     * @return Status Account status. valid values: 1-creating, 2-normal, 3-modifying, 4-resetting password, 5-locked, -1-deleting.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Account status. valid values: 1-creating, 2-normal, 3-modifying, 4-resetting password, 5-locked, -1-deleting.
                     * @param _status Account status. valid values: 1-creating, 2-normal, 3-modifying, 4-resetting password, 5-locked, -1-deleting.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
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
                     * 获取Last update time of the account.
                     * @return UpdateTime Last update time of the account.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last update time of the account.
                     * @param _updateTime Last update time of the account.
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
                     * 获取Specifies the last modified time of the account.

This field will only take effect after 2025-10-31. No matter whether the password is modified before, the value will be the default value: 0000-00-00 00:00:00
Indicates that this field is updated only when the password is modified via the cloud API or the console.
                     * @return PasswordUpdateTime Specifies the last modified time of the account.

This field will only take effect after 2025-10-31. No matter whether the password is modified before, the value will be the default value: 0000-00-00 00:00:00
Indicates that this field is updated only when the password is modified via the cloud API or the console.
                     * 
                     */
                    std::string GetPasswordUpdateTime() const;

                    /**
                     * 设置Specifies the last modified time of the account.

This field will only take effect after 2025-10-31. No matter whether the password is modified before, the value will be the default value: 0000-00-00 00:00:00
Indicates that this field is updated only when the password is modified via the cloud API or the console.
                     * @param _passwordUpdateTime Specifies the last modified time of the account.

This field will only take effect after 2025-10-31. No matter whether the password is modified before, the value will be the default value: 0000-00-00 00:00:00
Indicates that this field is updated only when the password is modified via the cloud API or the console.
                     * 
                     */
                    void SetPasswordUpdateTime(const std::string& _passwordUpdateTime);

                    /**
                     * 判断参数 PasswordUpdateTime 是否已赋值
                     * @return PasswordUpdateTime 是否已赋值
                     * 
                     */
                    bool PasswordUpdateTimeHasBeenSet() const;

                    /**
                     * 获取Account type. valid values: normal, tencentDBSuper. normal references a general user, tencentDBSuper possesses the pg_tencentdb_superuser user role.
                     * @return UserType Account type. valid values: normal, tencentDBSuper. normal references a general user, tencentDBSuper possesses the pg_tencentdb_superuser user role.
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置Account type. valid values: normal, tencentDBSuper. normal references a general user, tencentDBSuper possesses the pg_tencentdb_superuser user role.
                     * @param _userType Account type. valid values: normal, tencentDBSuper. normal references a general user, tencentDBSuper possesses the pg_tencentdb_superuser user role.
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
                     * 获取Specifies whether CAM verification is enabled for the user account.
                     * @return OpenCam Specifies whether CAM verification is enabled for the user account.
                     * 
                     */
                    bool GetOpenCam() const;

                    /**
                     * 设置Specifies whether CAM verification is enabled for the user account.
                     * @param _openCam Specifies whether CAM verification is enabled for the user account.
                     * 
                     */
                    void SetOpenCam(const bool& _openCam);

                    /**
                     * 判断参数 OpenCam 是否已赋值
                     * @return OpenCam 是否已赋值
                     * 
                     */
                    bool OpenCamHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of postgres-lnp6j617
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Account
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Specifies the account remark.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Account status. valid values: 1-creating, 2-normal, 3-modifying, 4-resetting password, 5-locked, -1-deleting.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last update time of the account.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Specifies the last modified time of the account.

This field will only take effect after 2025-10-31. No matter whether the password is modified before, the value will be the default value: 0000-00-00 00:00:00
Indicates that this field is updated only when the password is modified via the cloud API or the console.
                     */
                    std::string m_passwordUpdateTime;
                    bool m_passwordUpdateTimeHasBeenSet;

                    /**
                     * Account type. valid values: normal, tencentDBSuper. normal references a general user, tencentDBSuper possesses the pg_tencentdb_superuser user role.
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * Specifies whether CAM verification is enabled for the user account.
                     */
                    bool m_openCam;
                    bool m_openCamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_ACCOUNTINFO_H_

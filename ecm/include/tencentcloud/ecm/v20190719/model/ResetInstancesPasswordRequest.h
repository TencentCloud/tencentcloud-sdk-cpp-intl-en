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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_RESETINSTANCESPASSWORDREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_RESETINSTANCESPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ResetInstancesPassword request structure.
                */
                class ResetInstancesPasswordRequest : public AbstractModel
                {
                public:
                    ResetInstancesPasswordRequest();
                    ~ResetInstancesPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of IDs of the instances for which to set the password. You can request up to 100 instances in a region at a time.
                     * @return InstanceIdSet List of IDs of the instances for which to set the password. You can request up to 100 instances in a region at a time.
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置List of IDs of the instances for which to set the password. You can request up to 100 instances in a region at a time.
                     * @param _instanceIdSet List of IDs of the instances for which to set the password. You can request up to 100 instances in a region at a time.
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取New password. The password of a Linux instance must contain 8–16 characters in at least two of the following character types: letters, digits, and special symbols [( ) ~ ~ ! @ # $ % ^ & * - + = _ | { } [ ] : ; ' < > , . ? /] and cannot start with `/`.
The password of a Windows instance must contain 12–16 characters in at least three of the following character types: letters, digits, and special symbols [( ) ~ ~ ! @ # $ % ^ & * - + = _ | { } [ ] : ; ' < > , . ? /] and cannot start with `/`.
If the instances include both Linux instances and Windows instances, the password complexity limit for Windows instances will apply.
                     * @return Password New password. The password of a Linux instance must contain 8–16 characters in at least two of the following character types: letters, digits, and special symbols [( ) ~ ~ ! @ # $ % ^ & * - + = _ | { } [ ] : ; ' < > , . ? /] and cannot start with `/`.
The password of a Windows instance must contain 12–16 characters in at least three of the following character types: letters, digits, and special symbols [( ) ~ ~ ! @ # $ % ^ & * - + = _ | { } [ ] : ; ' < > , . ? /] and cannot start with `/`.
If the instances include both Linux instances and Windows instances, the password complexity limit for Windows instances will apply.
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置New password. The password of a Linux instance must contain 8–16 characters in at least two of the following character types: letters, digits, and special symbols [( ) ~ ~ ! @ # $ % ^ & * - + = _ | { } [ ] : ; ' < > , . ? /] and cannot start with `/`.
The password of a Windows instance must contain 12–16 characters in at least three of the following character types: letters, digits, and special symbols [( ) ~ ~ ! @ # $ % ^ & * - + = _ | { } [ ] : ; ' < > , . ? /] and cannot start with `/`.
If the instances include both Linux instances and Windows instances, the password complexity limit for Windows instances will apply.
                     * @param _password New password. The password of a Linux instance must contain 8–16 characters in at least two of the following character types: letters, digits, and special symbols [( ) ~ ~ ! @ # $ % ^ & * - + = _ | { } [ ] : ; ' < > , . ? /] and cannot start with `/`.
The password of a Windows instance must contain 12–16 characters in at least three of the following character types: letters, digits, and special symbols [( ) ~ ~ ! @ # $ % ^ & * - + = _ | { } [ ] : ; ' < > , . ? /] and cannot start with `/`.
If the instances include both Linux instances and Windows instances, the password complexity limit for Windows instances will apply.
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Whether to force shut down. Default value: false.
                     * @return ForceStop Whether to force shut down. Default value: false.
                     * 
                     */
                    bool GetForceStop() const;

                    /**
                     * 设置Whether to force shut down. Default value: false.
                     * @param _forceStop Whether to force shut down. Default value: false.
                     * 
                     */
                    void SetForceStop(const bool& _forceStop);

                    /**
                     * 判断参数 ForceStop 是否已赋值
                     * @return ForceStop 是否已赋值
                     * 
                     */
                    bool ForceStopHasBeenSet() const;

                    /**
                     * 获取Username of the instance for which to reset the password, which can contain up to 64 characters. If this parameter is not specified, the password of the root user will be reset by default for Linux, and the password of the admin will be reset by default for Windows.
                     * @return UserName Username of the instance for which to reset the password, which can contain up to 64 characters. If this parameter is not specified, the password of the root user will be reset by default for Linux, and the password of the admin will be reset by default for Windows.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Username of the instance for which to reset the password, which can contain up to 64 characters. If this parameter is not specified, the password of the root user will be reset by default for Linux, and the password of the admin will be reset by default for Windows.
                     * @param _userName Username of the instance for which to reset the password, which can contain up to 64 characters. If this parameter is not specified, the password of the root user will be reset by default for Linux, and the password of the admin will be reset by default for Windows.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                private:

                    /**
                     * List of IDs of the instances for which to set the password. You can request up to 100 instances in a region at a time.
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * New password. The password of a Linux instance must contain 8–16 characters in at least two of the following character types: letters, digits, and special symbols [( ) ~ ~ ! @ # $ % ^ & * - + = _ | { } [ ] : ; ' < > , . ? /] and cannot start with `/`.
The password of a Windows instance must contain 12–16 characters in at least three of the following character types: letters, digits, and special symbols [( ) ~ ~ ! @ # $ % ^ & * - + = _ | { } [ ] : ; ' < > , . ? /] and cannot start with `/`.
If the instances include both Linux instances and Windows instances, the password complexity limit for Windows instances will apply.
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Whether to force shut down. Default value: false.
                     */
                    bool m_forceStop;
                    bool m_forceStopHasBeenSet;

                    /**
                     * Username of the instance for which to reset the password, which can contain up to 64 characters. If this parameter is not specified, the password of the root user will be reset by default for Linux, and the password of the admin will be reset by default for Windows.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_RESETINSTANCESPASSWORDREQUEST_H_

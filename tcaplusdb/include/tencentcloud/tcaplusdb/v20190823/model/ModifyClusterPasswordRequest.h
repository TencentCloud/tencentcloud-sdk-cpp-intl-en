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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCLUSTERPASSWORDREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCLUSTERPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * ModifyClusterPassword request structure.
                */
                class ModifyClusterPasswordRequest : public AbstractModel
                {
                public:
                    ModifyClusterPasswordRequest();
                    ~ModifyClusterPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the cluster for which to modify the password
                     * @return ClusterId ID of the cluster for which to modify the password
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ID of the cluster for which to modify the password
                     * @param _clusterId ID of the cluster for which to modify the password
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Old cluster password
                     * @return OldPassword Old cluster password
                     * 
                     */
                    std::string GetOldPassword() const;

                    /**
                     * 设置Old cluster password
                     * @param _oldPassword Old cluster password
                     * 
                     */
                    void SetOldPassword(const std::string& _oldPassword);

                    /**
                     * 判断参数 OldPassword 是否已赋值
                     * @return OldPassword 是否已赋值
                     * 
                     */
                    bool OldPasswordHasBeenSet() const;

                    /**
                     * 获取Expected expiration time of old cluster password
                     * @return OldPasswordExpireTime Expected expiration time of old cluster password
                     * 
                     */
                    std::string GetOldPasswordExpireTime() const;

                    /**
                     * 设置Expected expiration time of old cluster password
                     * @param _oldPasswordExpireTime Expected expiration time of old cluster password
                     * 
                     */
                    void SetOldPasswordExpireTime(const std::string& _oldPasswordExpireTime);

                    /**
                     * 判断参数 OldPasswordExpireTime 是否已赋值
                     * @return OldPasswordExpireTime 是否已赋值
                     * 
                     */
                    bool OldPasswordExpireTimeHasBeenSet() const;

                    /**
                     * 获取New cluster password, which must contain lowercase letters (a-z), uppercase letters (A-Z), and digits (0-9).
                     * @return NewPassword New cluster password, which must contain lowercase letters (a-z), uppercase letters (A-Z), and digits (0-9).
                     * 
                     */
                    std::string GetNewPassword() const;

                    /**
                     * 设置New cluster password, which must contain lowercase letters (a-z), uppercase letters (A-Z), and digits (0-9).
                     * @param _newPassword New cluster password, which must contain lowercase letters (a-z), uppercase letters (A-Z), and digits (0-9).
                     * 
                     */
                    void SetNewPassword(const std::string& _newPassword);

                    /**
                     * 判断参数 NewPassword 是否已赋值
                     * @return NewPassword 是否已赋值
                     * 
                     */
                    bool NewPasswordHasBeenSet() const;

                    /**
                     * 获取Update mode. 1: updates password, 2: updates old password expiration time. Default value: 1
                     * @return Mode Update mode. 1: updates password, 2: updates old password expiration time. Default value: 1
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Update mode. 1: updates password, 2: updates old password expiration time. Default value: 1
                     * @param _mode Update mode. 1: updates password, 2: updates old password expiration time. Default value: 1
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * ID of the cluster for which to modify the password
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Old cluster password
                     */
                    std::string m_oldPassword;
                    bool m_oldPasswordHasBeenSet;

                    /**
                     * Expected expiration time of old cluster password
                     */
                    std::string m_oldPasswordExpireTime;
                    bool m_oldPasswordExpireTimeHasBeenSet;

                    /**
                     * New cluster password, which must contain lowercase letters (a-z), uppercase letters (A-Z), and digits (0-9).
                     */
                    std::string m_newPassword;
                    bool m_newPasswordHasBeenSet;

                    /**
                     * Update mode. 1: updates password, 2: updates old password expiration time. Default value: 1
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCLUSTERPASSWORDREQUEST_H_

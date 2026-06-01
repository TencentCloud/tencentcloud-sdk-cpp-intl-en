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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_RESETPASSWORDREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_RESETPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ResetPassword request structure.
                */
                class ResetPasswordRequest : public AbstractModel
                {
                public:
                    ResetPasswordRequest();
                    ~ResetPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.
                     * @return InstanceId Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.
                     * @param _instanceId Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance account name with manually refreshed rotation password, such as root
                     * @return User Instance account name with manually refreshed rotation password, such as root
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Instance account name with manually refreshed rotation password, such as root
                     * @param _user Instance account name with manually refreshed rotation password, such as root
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Manually refresh the domain name of the instance account with a rotated password, such as %
                     * @return Host Manually refresh the domain name of the instance account with a rotated password, such as %
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Manually refresh the domain name of the instance account with a rotated password, such as %
                     * @param _host Manually refresh the domain name of the instance account with a rotated password, such as %
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                private:

                    /**
                     * Instance ID, in the format such as cdb-c1nl9rpv. This matches the instance ID displayed on the TencentDB console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance account name with manually refreshed rotation password, such as root
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Manually refresh the domain name of the instance account with a rotated password, such as %
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_RESETPASSWORDREQUEST_H_

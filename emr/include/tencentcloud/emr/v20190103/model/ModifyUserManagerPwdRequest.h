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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYUSERMANAGERPWDREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYUSERMANAGERPWDREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyUserManagerPwd request structure.
                */
                class ModifyUserManagerPwdRequest : public AbstractModel
                {
                public:
                    ModifyUserManagerPwdRequest();
                    ~ModifyUserManagerPwdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return InstanceId <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _instanceId <p>Cluster ID.</p>
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
                     * 获取<p>Password.</p>
                     * @return PassWord <p>Password.</p>
                     * 
                     */
                    std::string GetPassWord() const;

                    /**
                     * 设置<p>Password.</p>
                     * @param _passWord <p>Password.</p>
                     * 
                     */
                    void SetPassWord(const std::string& _passWord);

                    /**
                     * 判断参数 PassWord 是否已赋值
                     * @return PassWord 是否已赋值
                     * 
                     */
                    bool PassWordHasBeenSet() const;

                    /**
                     * 获取<p>Whether to synchronize the password.</p>
                     * @return SyncPwd <p>Whether to synchronize the password.</p>
                     * 
                     */
                    bool GetSyncPwd() const;

                    /**
                     * 设置<p>Whether to synchronize the password.</p>
                     * @param _syncPwd <p>Whether to synchronize the password.</p>
                     * 
                     */
                    void SetSyncPwd(const bool& _syncPwd);

                    /**
                     * 判断参数 SyncPwd 是否已赋值
                     * @return SyncPwd 是否已赋值
                     * 
                     */
                    bool SyncPwdHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Username.</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>Password.</p>
                     */
                    std::string m_passWord;
                    bool m_passWordHasBeenSet;

                    /**
                     * <p>Whether to synchronize the password.</p>
                     */
                    bool m_syncPwd;
                    bool m_syncPwdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYUSERMANAGERPWDREQUEST_H_

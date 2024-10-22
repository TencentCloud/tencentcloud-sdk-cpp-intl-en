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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_ENTERRESCUEMODEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_ENTERRESCUEMODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * EnterRescueMode request structure.
                */
                class EnterRescueModeRequest : public AbstractModel
                {
                public:
                    EnterRescueModeRequest();
                    ~EnterRescueModeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID Needs to Enter Rescue Mode
                     * @return InstanceId Instance ID Needs to Enter Rescue Mode
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID Needs to Enter Rescue Mode
                     * @param _instanceId Instance ID Needs to Enter Rescue Mode
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
                     * 获取System Password in Rescue Mode
                     * @return Password System Password in Rescue Mode
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置System Password in Rescue Mode
                     * @param _password System Password in Rescue Mode
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
                     * 获取System Username in Rescue Mode
                     * @return Username System Username in Rescue Mode
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置System Username in Rescue Mode
                     * @param _username System Username in Rescue Mode
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取Whether to perform forced shutdown.
                     * @return ForceStop Whether to perform forced shutdown.
                     * 
                     */
                    bool GetForceStop() const;

                    /**
                     * 设置Whether to perform forced shutdown.
                     * @param _forceStop Whether to perform forced shutdown.
                     * 
                     */
                    void SetForceStop(const bool& _forceStop);

                    /**
                     * 判断参数 ForceStop 是否已赋值
                     * @return ForceStop 是否已赋值
                     * 
                     */
                    bool ForceStopHasBeenSet() const;

                private:

                    /**
                     * Instance ID Needs to Enter Rescue Mode
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * System Password in Rescue Mode
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * System Username in Rescue Mode
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Whether to perform forced shutdown.
                     */
                    bool m_forceStop;
                    bool m_forceStopHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_ENTERRESCUEMODEREQUEST_H_

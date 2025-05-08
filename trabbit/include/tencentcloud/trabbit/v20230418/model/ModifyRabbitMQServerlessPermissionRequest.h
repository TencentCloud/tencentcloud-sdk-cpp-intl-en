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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_MODIFYRABBITMQSERVERLESSPERMISSIONREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_MODIFYRABBITMQSERVERLESSPERMISSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyRabbitMQServerlessPermission request structure.
                */
                class ModifyRabbitMQServerlessPermissionRequest : public AbstractModel
                {
                public:
                    ModifyRabbitMQServerlessPermissionRequest();
                    ~ModifyRabbitMQServerlessPermissionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取instance ID
                     * @return InstanceId instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置instance ID
                     * @param _instanceId instance ID
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
                     * 获取Specifies the username, which is the user associated with the permission.
                     * @return User Specifies the username, which is the user associated with the permission.
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Specifies the username, which is the user associated with the permission.
                     * @param _user Specifies the username, which is the user associated with the permission.
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
                     * 获取Specifies the vhost name.
                     * @return VirtualHost Specifies the vhost name.
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置Specifies the vhost name.
                     * @param _virtualHost Specifies the vhost name.
                     * 
                     */
                    void SetVirtualHost(const std::string& _virtualHost);

                    /**
                     * 判断参数 VirtualHost 是否已赋值
                     * @return VirtualHost 是否已赋值
                     * 
                     */
                    bool VirtualHostHasBeenSet() const;

                    /**
                     * 获取Types of permissions. declare related operations. for the user, it is operable to perform operations on the resource name under the vhost that matches the regular expression.
                     * @return ConfigRegexp Types of permissions. declare related operations. for the user, it is operable to perform operations on the resource name under the vhost that matches the regular expression.
                     * 
                     */
                    std::string GetConfigRegexp() const;

                    /**
                     * 设置Types of permissions. declare related operations. for the user, it is operable to perform operations on the resource name under the vhost that matches the regular expression.
                     * @param _configRegexp Types of permissions. declare related operations. for the user, it is operable to perform operations on the resource name under the vhost that matches the regular expression.
                     * 
                     */
                    void SetConfigRegexp(const std::string& _configRegexp);

                    /**
                     * 判断参数 ConfigRegexp 是否已赋值
                     * @return ConfigRegexp 是否已赋值
                     * 
                     */
                    bool ConfigRegexpHasBeenSet() const;

                    /**
                     * 获取Types of permissions. message write related operations. the user can operate on the resource names under the vhost that match the regular expression.
                     * @return WriteRegexp Types of permissions. message write related operations. the user can operate on the resource names under the vhost that match the regular expression.
                     * 
                     */
                    std::string GetWriteRegexp() const;

                    /**
                     * 设置Types of permissions. message write related operations. the user can operate on the resource names under the vhost that match the regular expression.
                     * @param _writeRegexp Types of permissions. message write related operations. the user can operate on the resource names under the vhost that match the regular expression.
                     * 
                     */
                    void SetWriteRegexp(const std::string& _writeRegexp);

                    /**
                     * 判断参数 WriteRegexp 是否已赋值
                     * @return WriteRegexp 是否已赋值
                     * 
                     */
                    bool WriteRegexpHasBeenSet() const;

                    /**
                     * 获取Types of permissions. message read related operations. the user can operate on the resource name under the vhost that matches the regular expression.
                     * @return ReadRegexp Types of permissions. message read related operations. the user can operate on the resource name under the vhost that matches the regular expression.
                     * 
                     */
                    std::string GetReadRegexp() const;

                    /**
                     * 设置Types of permissions. message read related operations. the user can operate on the resource name under the vhost that matches the regular expression.
                     * @param _readRegexp Types of permissions. message read related operations. the user can operate on the resource name under the vhost that matches the regular expression.
                     * 
                     */
                    void SetReadRegexp(const std::string& _readRegexp);

                    /**
                     * 判断参数 ReadRegexp 是否已赋值
                     * @return ReadRegexp 是否已赋值
                     * 
                     */
                    bool ReadRegexpHasBeenSet() const;

                private:

                    /**
                     * instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the username, which is the user associated with the permission.
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Specifies the vhost name.
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * Types of permissions. declare related operations. for the user, it is operable to perform operations on the resource name under the vhost that matches the regular expression.
                     */
                    std::string m_configRegexp;
                    bool m_configRegexpHasBeenSet;

                    /**
                     * Types of permissions. message write related operations. the user can operate on the resource names under the vhost that match the regular expression.
                     */
                    std::string m_writeRegexp;
                    bool m_writeRegexpHasBeenSet;

                    /**
                     * Types of permissions. message read related operations. the user can operate on the resource name under the vhost that matches the regular expression.
                     */
                    std::string m_readRegexp;
                    bool m_readRegexpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_MODIFYRABBITMQSERVERLESSPERMISSIONREQUEST_H_

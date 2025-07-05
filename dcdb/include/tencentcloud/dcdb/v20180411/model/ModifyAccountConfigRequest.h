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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYACCOUNTCONFIGREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYACCOUNTCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/ConfigValue.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * ModifyAccountConfig request structure.
                */
                class ModifyAccountConfigRequest : public AbstractModel
                {
                public:
                    ModifyAccountConfigRequest();
                    ~ModifyAccountConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of  `tdsqlshard-kpkvq5oj`, which is the same as the one displayed in the TencentDB console.
                     * @return InstanceId Instance ID in the format of  `tdsqlshard-kpkvq5oj`, which is the same as the one displayed in the TencentDB console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of  `tdsqlshard-kpkvq5oj`, which is the same as the one displayed in the TencentDB console.
                     * @param _instanceId Instance ID in the format of  `tdsqlshard-kpkvq5oj`, which is the same as the one displayed in the TencentDB console.
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
                     * 获取Account name
                     * @return UserName Account name
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Account name
                     * @param _userName Account name
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
                     * 获取Account domain name
                     * @return Host Account domain name
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Account domain name
                     * @param _host Account domain name
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取Configuration list. Each element in the list is a pair of `Config` and `Value`.
                     * @return Configs Configuration list. Each element in the list is a pair of `Config` and `Value`.
                     * 
                     */
                    std::vector<ConfigValue> GetConfigs() const;

                    /**
                     * 设置Configuration list. Each element in the list is a pair of `Config` and `Value`.
                     * @param _configs Configuration list. Each element in the list is a pair of `Config` and `Value`.
                     * 
                     */
                    void SetConfigs(const std::vector<ConfigValue>& _configs);

                    /**
                     * 判断参数 Configs 是否已赋值
                     * @return Configs 是否已赋值
                     * 
                     */
                    bool ConfigsHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of  `tdsqlshard-kpkvq5oj`, which is the same as the one displayed in the TencentDB console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Account name
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Account domain name
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Configuration list. Each element in the list is a pair of `Config` and `Value`.
                     */
                    std::vector<ConfigValue> m_configs;
                    bool m_configsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYACCOUNTCONFIGREQUEST_H_

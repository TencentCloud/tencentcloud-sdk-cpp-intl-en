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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYUSERSCONFIGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYUSERSCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyUsersConfig request structure.
                */
                class ModifyUsersConfigRequest : public AbstractModel
                {
                public:
                    ModifyUsersConfigRequest();
                    ~ModifyUsersConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Configuration name
<li>license_monitor new authorization monitoring configuration: 0 - disable, 1 - enable</li>
                     * @return ConfigName Configuration name
<li>license_monitor new authorization monitoring configuration: 0 - disable, 1 - enable</li>
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置Configuration name
<li>license_monitor new authorization monitoring configuration: 0 - disable, 1 - enable</li>
                     * @param _configName Configuration name
<li>license_monitor new authorization monitoring configuration: 0 - disable, 1 - enable</li>
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取Configuration value
                     * @return ConfigValue Configuration value
                     * 
                     */
                    std::string GetConfigValue() const;

                    /**
                     * 设置Configuration value
                     * @param _configValue Configuration value
                     * 
                     */
                    void SetConfigValue(const std::string& _configValue);

                    /**
                     * 判断参数 ConfigValue 是否已赋值
                     * @return ConfigValue 是否已赋值
                     * 
                     */
                    bool ConfigValueHasBeenSet() const;

                private:

                    /**
                     * Configuration name
<li>license_monitor new authorization monitoring configuration: 0 - disable, 1 - enable</li>
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * Configuration value
                     */
                    std::string m_configValue;
                    bool m_configValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYUSERSCONFIGREQUEST_H_

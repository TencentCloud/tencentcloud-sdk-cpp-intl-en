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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEUSERSCONFIGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEUSERSCONFIGREQUEST_H_

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
                * DescribeUsersConfig request structure.
                */
                class DescribeUsersConfigRequest : public AbstractModel
                {
                public:
                    DescribeUsersConfigRequest();
                    ~DescribeUsersConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Configuration name
<li>license_monitor authorization monitoring configuration. 0: off; 1: on</li>
                     * @return ConfigName Configuration name
<li>license_monitor authorization monitoring configuration. 0: off; 1: on</li>
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置Configuration name
<li>license_monitor authorization monitoring configuration. 0: off; 1: on</li>
                     * @param _configName Configuration name
<li>license_monitor authorization monitoring configuration. 0: off; 1: on</li>
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                private:

                    /**
                     * Configuration name
<li>license_monitor authorization monitoring configuration. 0: off; 1: on</li>
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEUSERSCONFIGREQUEST_H_

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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_RESETSECLOGTOPICCONFIGREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_RESETSECLOGTOPICCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ResetSecLogTopicConfig request structure.
                */
                class ResetSecLogTopicConfigRequest : public AbstractModel
                {
                public:
                    ResetSecLogTopicConfigRequest();
                    ~ResetSecLogTopicConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Configuration type. Valid values: `ckafka`, `cls`.
                     * @return ConfigType Configuration type. Valid values: `ckafka`, `cls`.
                     * 
                     */
                    std::string GetConfigType() const;

                    /**
                     * 设置Configuration type. Valid values: `ckafka`, `cls`.
                     * @param _configType Configuration type. Valid values: `ckafka`, `cls`.
                     * 
                     */
                    void SetConfigType(const std::string& _configType);

                    /**
                     * 判断参数 ConfigType 是否已赋值
                     * @return ConfigType 是否已赋值
                     * 
                     */
                    bool ConfigTypeHasBeenSet() const;

                    /**
                     * 获取Log type
                     * @return LogType Log type
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置Log type
                     * @param _logType Log type
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                private:

                    /**
                     * Configuration type. Valid values: `ckafka`, `cls`.
                     */
                    std::string m_configType;
                    bool m_configTypeHasBeenSet;

                    /**
                     * Log type
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_RESETSECLOGTOPICCONFIGREQUEST_H_

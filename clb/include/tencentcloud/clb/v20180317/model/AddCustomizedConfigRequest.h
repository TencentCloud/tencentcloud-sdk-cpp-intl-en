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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_ADDCUSTOMIZEDCONFIGREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_ADDCUSTOMIZEDCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/TagInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * AddCustomizedConfig request structure.
                */
                class AddCustomizedConfigRequest : public AbstractModel
                {
                public:
                    AddCustomizedConfigRequest();
                    ~AddCustomizedConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Configuration name
                     * @return ConfigName Configuration name
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置Configuration name
                     * @param _configName Configuration name
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
                     * 获取Configuration type. valid values: ["CLB", "SERVER", "LOCATION"], respectively indicating CLB configuration, SERVER configuration, and LOCATION configuration.
                     * @return ConfigType Configuration type. valid values: ["CLB", "SERVER", "LOCATION"], respectively indicating CLB configuration, SERVER configuration, and LOCATION configuration.
                     * 
                     */
                    std::string GetConfigType() const;

                    /**
                     * 设置Configuration type. valid values: ["CLB", "SERVER", "LOCATION"], respectively indicating CLB configuration, SERVER configuration, and LOCATION configuration.
                     * @param _configType Configuration type. valid values: ["CLB", "SERVER", "LOCATION"], respectively indicating CLB configuration, SERVER configuration, and LOCATION configuration.
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
                     * 获取Specifies the configuration content.
                     * @return ConfigContent Specifies the configuration content.
                     * 
                     */
                    std::string GetConfigContent() const;

                    /**
                     * 设置Specifies the configuration content.
                     * @param _configContent Specifies the configuration content.
                     * 
                     */
                    void SetConfigContent(const std::string& _configContent);

                    /**
                     * 判断参数 ConfigContent 是否已赋值
                     * @return ConfigContent 是否已赋值
                     * 
                     */
                    bool ConfigContentHasBeenSet() const;

                    /**
                     * 获取Tag.
                     * @return Tags Tag.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置Tag.
                     * @param _tags Tag.
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Configuration name
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * Configuration type. valid values: ["CLB", "SERVER", "LOCATION"], respectively indicating CLB configuration, SERVER configuration, and LOCATION configuration.
                     */
                    std::string m_configType;
                    bool m_configTypeHasBeenSet;

                    /**
                     * Specifies the configuration content.
                     */
                    std::string m_configContent;
                    bool m_configContentHasBeenSet;

                    /**
                     * Tag.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_ADDCUSTOMIZEDCONFIGREQUEST_H_

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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYCUSTOMIZEDCONFIGREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYCUSTOMIZEDCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyCustomizedConfig request structure.
                */
                class ModifyCustomizedConfigRequest : public AbstractModel
                {
                public:
                    ModifyCustomizedConfigRequest();
                    ~ModifyCustomizedConfigRequest() = default;
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
                     * 获取Configuration ID.
                     * @return UconfigId Configuration ID.
                     * 
                     */
                    std::string GetUconfigId() const;

                    /**
                     * 设置Configuration ID.
                     * @param _uconfigId Configuration ID.
                     * 
                     */
                    void SetUconfigId(const std::string& _uconfigId);

                    /**
                     * 判断参数 UconfigId 是否已赋值
                     * @return UconfigId 是否已赋值
                     * 
                     */
                    bool UconfigIdHasBeenSet() const;

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

                private:

                    /**
                     * Configuration name
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * Configuration ID.
                     */
                    std::string m_uconfigId;
                    bool m_uconfigIdHasBeenSet;

                    /**
                     * Specifies the configuration content.
                     */
                    std::string m_configContent;
                    bool m_configContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYCUSTOMIZEDCONFIGREQUEST_H_

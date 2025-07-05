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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_CREATEENVIRONMENTREQUEST_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_CREATEENVIRONMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/EnvironmentConfig.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * CreateEnvironment request structure.
                */
                class CreateEnvironmentRequest : public AbstractModel
                {
                public:
                    CreateEnvironmentRequest();
                    ~CreateEnvironmentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Environment name
                     * @return Name Environment name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Environment name
                     * @param _name Environment name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Environment configuration information
                     * @return Config Environment configuration information
                     * 
                     */
                    EnvironmentConfig GetConfig() const;

                    /**
                     * 设置Environment configuration information
                     * @param _config Environment configuration information
                     * 
                     */
                    void SetConfig(const EnvironmentConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Environment description
                     * @return Description Environment description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Environment description
                     * @param _description Environment description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Whether it is the default environment.
                     * @return IsDefault Whether it is the default environment.
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置Whether it is the default environment.
                     * @param _isDefault Whether it is the default environment.
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                private:

                    /**
                     * Environment name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Environment configuration information
                     */
                    EnvironmentConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Environment description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Whether it is the default environment.
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_CREATEENVIRONMENTREQUEST_H_

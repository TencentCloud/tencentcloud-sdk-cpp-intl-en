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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CREATEAPPREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CREATEAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/BaseConfig.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * CreateApp request structure.
                */
                class CreateAppRequest : public AbstractModel
                {
                public:
                    CreateAppRequest();
                    ~CreateAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application type; knowledge_qa - knowledge qa management.
                     * @return AppType Application type; knowledge_qa - knowledge qa management.
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置Application type; knowledge_qa - knowledge qa management.
                     * @param _appType Application type; knowledge_qa - knowledge qa management.
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取Basic application configuration.
                     * @return BaseConfig Basic application configuration.
                     * 
                     */
                    BaseConfig GetBaseConfig() const;

                    /**
                     * 设置Basic application configuration.
                     * @param _baseConfig Basic application configuration.
                     * 
                     */
                    void SetBaseConfig(const BaseConfig& _baseConfig);

                    /**
                     * 判断参数 BaseConfig 是否已赋值
                     * @return BaseConfig 是否已赋值
                     * 
                     */
                    bool BaseConfigHasBeenSet() const;

                private:

                    /**
                     * Application type; knowledge_qa - knowledge qa management.
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * Basic application configuration.
                     */
                    BaseConfig m_baseConfig;
                    bool m_baseConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CREATEAPPREQUEST_H_

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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYAPPREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/BaseConfig.h>
#include <tencentcloud/lke/v20231130/model/AppConfig.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ModifyApp request structure.
                */
                class ModifyAppRequest : public AbstractModel
                {
                public:
                    ModifyAppRequest();
                    ~ModifyAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID.
                     * @return AppBizId Application ID.
                     * 
                     */
                    std::string GetAppBizId() const;

                    /**
                     * 设置Application ID.
                     * @param _appBizId Application ID.
                     * 
                     */
                    void SetAppBizId(const std::string& _appBizId);

                    /**
                     * 判断参数 AppBizId 是否已赋值
                     * @return AppBizId 是否已赋值
                     * 
                     */
                    bool AppBizIdHasBeenSet() const;

                    /**
                     * 获取Application type; knowledge_qa - knowledge Q&A management; summary - knowledge summary; classifys - knowledge label extraction.
                     * @return AppType Application type; knowledge_qa - knowledge Q&A management; summary - knowledge summary; classifys - knowledge label extraction.
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置Application type; knowledge_qa - knowledge Q&A management; summary - knowledge summary; classifys - knowledge label extraction.
                     * @param _appType Application type; knowledge_qa - knowledge Q&A management; summary - knowledge summary; classifys - knowledge label extraction.
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

                    /**
                     * 获取Application configuration.
                     * @return AppConfig Application configuration.
                     * 
                     */
                    AppConfig GetAppConfig() const;

                    /**
                     * 设置Application configuration.
                     * @param _appConfig Application configuration.
                     * 
                     */
                    void SetAppConfig(const AppConfig& _appConfig);

                    /**
                     * 判断参数 AppConfig 是否已赋值
                     * @return AppConfig 是否已赋值
                     * 
                     */
                    bool AppConfigHasBeenSet() const;

                    /**
                     * 获取Login to user's sub-account (required in integrator mode).	
                     * @return LoginSubAccountUin Login to user's sub-account (required in integrator mode).	
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置Login to user's sub-account (required in integrator mode).	
                     * @param _loginSubAccountUin Login to user's sub-account (required in integrator mode).	
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_appBizId;
                    bool m_appBizIdHasBeenSet;

                    /**
                     * Application type; knowledge_qa - knowledge Q&A management; summary - knowledge summary; classifys - knowledge label extraction.
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * Basic application configuration.
                     */
                    BaseConfig m_baseConfig;
                    bool m_baseConfigHasBeenSet;

                    /**
                     * Application configuration.
                     */
                    AppConfig m_appConfig;
                    bool m_appConfigHasBeenSet;

                    /**
                     * Login to user's sub-account (required in integrator mode).	
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYAPPREQUEST_H_

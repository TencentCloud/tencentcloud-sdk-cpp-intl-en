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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DETACHPLUGINREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DETACHPLUGINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DetachPlugin request structure.
                */
                class DetachPluginRequest : public AbstractModel
                {
                public:
                    DetachPluginRequest();
                    ~DetachPluginRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the plugin to be unbound
                     * @return PluginId ID of the plugin to be unbound
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置ID of the plugin to be unbound
                     * @param _pluginId ID of the plugin to be unbound
                     * 
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     * 
                     */
                    bool PluginIdHasBeenSet() const;

                    /**
                     * 获取Service ID
                     * @return ServiceId Service ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Service ID
                     * @param _serviceId Service ID
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取API environment
                     * @return EnvironmentName API environment
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置API environment
                     * @param _environmentName API environment
                     * 
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     * 
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取ID of the API to unbind from the plugin
                     * @return ApiId ID of the API to unbind from the plugin
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置ID of the API to unbind from the plugin
                     * @param _apiId ID of the API to unbind from the plugin
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                private:

                    /**
                     * ID of the plugin to be unbound
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * Service ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * API environment
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * ID of the API to unbind from the plugin
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DETACHPLUGINREQUEST_H_

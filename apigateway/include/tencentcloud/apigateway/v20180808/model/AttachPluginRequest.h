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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ATTACHPLUGINREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ATTACHPLUGINREQUEST_H_

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
                * AttachPlugin request structure.
                */
                class AttachPluginRequest : public AbstractModel
                {
                public:
                    AttachPluginRequest();
                    ~AttachPluginRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the bound API gateway plugin.
                     * @return PluginId ID of the bound API gateway plugin.
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置ID of the bound API gateway plugin.
                     * @param _pluginId ID of the bound API gateway plugin.
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
                     * 获取ID of the service to be operated
                     * @return ServiceId ID of the service to be operated
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置ID of the service to be operated
                     * @param _serviceId ID of the service to be operated
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
                     * 获取Environment for operating the API.
                     * @return EnvironmentName Environment for operating the API.
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置Environment for operating the API.
                     * @param _environmentName Environment for operating the API.
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
                     * 获取List of APIs to be bound.
                     * @return ApiIds List of APIs to be bound.
                     * 
                     */
                    std::vector<std::string> GetApiIds() const;

                    /**
                     * 设置List of APIs to be bound.
                     * @param _apiIds List of APIs to be bound.
                     * 
                     */
                    void SetApiIds(const std::vector<std::string>& _apiIds);

                    /**
                     * 判断参数 ApiIds 是否已赋值
                     * @return ApiIds 是否已赋值
                     * 
                     */
                    bool ApiIdsHasBeenSet() const;

                private:

                    /**
                     * ID of the bound API gateway plugin.
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * ID of the service to be operated
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Environment for operating the API.
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * List of APIs to be bound.
                     */
                    std::vector<std::string> m_apiIds;
                    bool m_apiIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ATTACHPLUGINREQUEST_H_

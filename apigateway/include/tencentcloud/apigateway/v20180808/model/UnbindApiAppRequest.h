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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDAPIAPPREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDAPIAPPREQUEST_H_

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
                * UnbindApiApp request structure.
                */
                class UnbindApiAppRequest : public AbstractModel
                {
                public:
                    UnbindApiAppRequest();
                    ~UnbindApiAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of the application to be bound.
                     * @return ApiAppId Unique ID of the application to be bound.
                     * 
                     */
                    std::string GetApiAppId() const;

                    /**
                     * 设置Unique ID of the application to be bound.
                     * @param _apiAppId Unique ID of the application to be bound.
                     * 
                     */
                    void SetApiAppId(const std::string& _apiAppId);

                    /**
                     * 判断参数 ApiAppId 是否已赋值
                     * @return ApiAppId 是否已赋值
                     * 
                     */
                    bool ApiAppIdHasBeenSet() const;

                    /**
                     * 获取Environment to be bound.
                     * @return Environment Environment to be bound.
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置Environment to be bound.
                     * @param _environment Environment to be bound.
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取Unique ID of the service to be bound.
                     * @return ServiceId Unique ID of the service to be bound.
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique ID of the service to be bound.
                     * @param _serviceId Unique ID of the service to be bound.
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
                     * 获取Unique ID of the API to be bound.
                     * @return ApiId Unique ID of the API to be bound.
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置Unique ID of the API to be bound.
                     * @param _apiId Unique ID of the API to be bound.
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
                     * Unique ID of the application to be bound.
                     */
                    std::string m_apiAppId;
                    bool m_apiAppIdHasBeenSet;

                    /**
                     * Environment to be bound.
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * Unique ID of the service to be bound.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Unique ID of the API to be bound.
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDAPIAPPREQUEST_H_

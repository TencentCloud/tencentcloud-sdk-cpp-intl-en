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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDENVIRONMENTREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDENVIRONMENTREQUEST_H_

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
                * UnBindEnvironment request structure.
                */
                class UnBindEnvironmentRequest : public AbstractModel
                {
                public:
                    UnBindEnvironmentRequest();
                    ~UnBindEnvironmentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Binding type. Valid values: API, SERVICE. Default value: SERVICE.
                     * @return BindType Binding type. Valid values: API, SERVICE. Default value: SERVICE.
                     * 
                     */
                    std::string GetBindType() const;

                    /**
                     * 设置Binding type. Valid values: API, SERVICE. Default value: SERVICE.
                     * @param _bindType Binding type. Valid values: API, SERVICE. Default value: SERVICE.
                     * 
                     */
                    void SetBindType(const std::string& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     * 
                     */
                    bool BindTypeHasBeenSet() const;

                    /**
                     * 获取List of unique IDs of the usage plans to be bound.
                     * @return UsagePlanIds List of unique IDs of the usage plans to be bound.
                     * 
                     */
                    std::vector<std::string> GetUsagePlanIds() const;

                    /**
                     * 设置List of unique IDs of the usage plans to be bound.
                     * @param _usagePlanIds List of unique IDs of the usage plans to be bound.
                     * 
                     */
                    void SetUsagePlanIds(const std::vector<std::string>& _usagePlanIds);

                    /**
                     * 判断参数 UsagePlanIds 是否已赋值
                     * @return UsagePlanIds 是否已赋值
                     * 
                     */
                    bool UsagePlanIdsHasBeenSet() const;

                    /**
                     * 获取Service environment to be unbound.
                     * @return Environment Service environment to be unbound.
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置Service environment to be unbound.
                     * @param _environment Service environment to be unbound.
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
                     * 获取Unique ID of the service to be unbound.
                     * @return ServiceId Unique ID of the service to be unbound.
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique ID of the service to be unbound.
                     * @param _serviceId Unique ID of the service to be unbound.
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
                     * 获取Unique API ID array, which is required if `BindType` is `API`.
                     * @return ApiIds Unique API ID array, which is required if `BindType` is `API`.
                     * 
                     */
                    std::vector<std::string> GetApiIds() const;

                    /**
                     * 设置Unique API ID array, which is required if `BindType` is `API`.
                     * @param _apiIds Unique API ID array, which is required if `BindType` is `API`.
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
                     * Binding type. Valid values: API, SERVICE. Default value: SERVICE.
                     */
                    std::string m_bindType;
                    bool m_bindTypeHasBeenSet;

                    /**
                     * List of unique IDs of the usage plans to be bound.
                     */
                    std::vector<std::string> m_usagePlanIds;
                    bool m_usagePlanIdsHasBeenSet;

                    /**
                     * Service environment to be unbound.
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * Unique ID of the service to be unbound.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Unique API ID array, which is required if `BindType` is `API`.
                     */
                    std::vector<std::string> m_apiIds;
                    bool m_apiIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDENVIRONMENTREQUEST_H_

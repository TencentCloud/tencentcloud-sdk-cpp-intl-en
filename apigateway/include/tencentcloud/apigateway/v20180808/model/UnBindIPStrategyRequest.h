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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDIPSTRATEGYREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDIPSTRATEGYREQUEST_H_

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
                * UnBindIPStrategy request structure.
                */
                class UnBindIPStrategyRequest : public AbstractModel
                {
                public:
                    UnBindIPStrategyRequest();
                    ~UnBindIPStrategyRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Unique ID of the IP policy to be unbound.
                     * @return StrategyId Unique ID of the IP policy to be unbound.
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置Unique ID of the IP policy to be unbound.
                     * @param _strategyId Unique ID of the IP policy to be unbound.
                     * 
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取Environment to be unbound.
                     * @return EnvironmentName Environment to be unbound.
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置Environment to be unbound.
                     * @param _environmentName Environment to be unbound.
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
                     * 获取List of APIs to be unbound.
                     * @return UnBindApiIds List of APIs to be unbound.
                     * 
                     */
                    std::vector<std::string> GetUnBindApiIds() const;

                    /**
                     * 设置List of APIs to be unbound.
                     * @param _unBindApiIds List of APIs to be unbound.
                     * 
                     */
                    void SetUnBindApiIds(const std::vector<std::string>& _unBindApiIds);

                    /**
                     * 判断参数 UnBindApiIds 是否已赋值
                     * @return UnBindApiIds 是否已赋值
                     * 
                     */
                    bool UnBindApiIdsHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the service to be unbound.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Unique ID of the IP policy to be unbound.
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * Environment to be unbound.
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * List of APIs to be unbound.
                     */
                    std::vector<std::string> m_unBindApiIds;
                    bool m_unBindApiIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UNBINDIPSTRATEGYREQUEST_H_

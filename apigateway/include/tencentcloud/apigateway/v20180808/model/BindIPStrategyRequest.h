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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_BINDIPSTRATEGYREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_BINDIPSTRATEGYREQUEST_H_

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
                * BindIPStrategy request structure.
                */
                class BindIPStrategyRequest : public AbstractModel
                {
                public:
                    BindIPStrategyRequest();
                    ~BindIPStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique service ID of the IP policy to be bound.
                     * @return ServiceId Unique service ID of the IP policy to be bound.
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique service ID of the IP policy to be bound.
                     * @param ServiceId Unique service ID of the IP policy to be bound.
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Unique ID of the IP policy to be bound.
                     * @return StrategyId Unique ID of the IP policy to be bound.
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置Unique ID of the IP policy to be bound.
                     * @param StrategyId Unique ID of the IP policy to be bound.
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取Environment to be bound to IP policy.
                     * @return EnvironmentName Environment to be bound to IP policy.
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置Environment to be bound to IP policy.
                     * @param EnvironmentName Environment to be bound to IP policy.
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取List of APIs to be bound to IP policy.
                     * @return BindApiIds List of APIs to be bound to IP policy.
                     */
                    std::vector<std::string> GetBindApiIds() const;

                    /**
                     * 设置List of APIs to be bound to IP policy.
                     * @param BindApiIds List of APIs to be bound to IP policy.
                     */
                    void SetBindApiIds(const std::vector<std::string>& _bindApiIds);

                    /**
                     * 判断参数 BindApiIds 是否已赋值
                     * @return BindApiIds 是否已赋值
                     */
                    bool BindApiIdsHasBeenSet() const;

                private:

                    /**
                     * Unique service ID of the IP policy to be bound.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Unique ID of the IP policy to be bound.
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * Environment to be bound to IP policy.
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * List of APIs to be bound to IP policy.
                     */
                    std::vector<std::string> m_bindApiIds;
                    bool m_bindApiIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_BINDIPSTRATEGYREQUEST_H_

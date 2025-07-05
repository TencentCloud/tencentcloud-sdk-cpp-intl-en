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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYSERVICEENVIRONMENTSTRATEGYREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYSERVICEENVIRONMENTSTRATEGYREQUEST_H_

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
                * ModifyServiceEnvironmentStrategy request structure.
                */
                class ModifyServiceEnvironmentStrategyRequest : public AbstractModel
                {
                public:
                    ModifyServiceEnvironmentStrategyRequest();
                    ~ModifyServiceEnvironmentStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique service ID.
                     * @return ServiceId Unique service ID.
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique service ID.
                     * @param _serviceId Unique service ID.
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
                     * 获取Throttling value.
                     * @return Strategy Throttling value.
                     * 
                     */
                    int64_t GetStrategy() const;

                    /**
                     * 设置Throttling value.
                     * @param _strategy Throttling value.
                     * 
                     */
                    void SetStrategy(const int64_t& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取Environment list.
                     * @return EnvironmentNames Environment list.
                     * 
                     */
                    std::vector<std::string> GetEnvironmentNames() const;

                    /**
                     * 设置Environment list.
                     * @param _environmentNames Environment list.
                     * 
                     */
                    void SetEnvironmentNames(const std::vector<std::string>& _environmentNames);

                    /**
                     * 判断参数 EnvironmentNames 是否已赋值
                     * @return EnvironmentNames 是否已赋值
                     * 
                     */
                    bool EnvironmentNamesHasBeenSet() const;

                private:

                    /**
                     * Unique service ID.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Throttling value.
                     */
                    int64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * Environment list.
                     */
                    std::vector<std::string> m_environmentNames;
                    bool m_environmentNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYSERVICEENVIRONMENTSTRATEGYREQUEST_H_

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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYBALANCEDSERVICE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYBALANCEDSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Service with percentage traffic configuration
                */
                class CloudNativeAPIGatewayBalancedService : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayBalancedService();
                    ~CloudNativeAPIGatewayBalancedService() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Service ID, required as an input parameter
                     * @return ServiceID Service ID, required as an input parameter
                     * 
                     */
                    std::string GetServiceID() const;

                    /**
                     * 设置Service ID, required as an input parameter
                     * @param _serviceID Service ID, required as an input parameter
                     * 
                     */
                    void SetServiceID(const std::string& _serviceID);

                    /**
                     * 判断参数 ServiceID 是否已赋值
                     * @return ServiceID 是否已赋值
                     * 
                     */
                    bool ServiceIDHasBeenSet() const;

                    /**
                     * 获取Service name, as an input parameter, meaningless
                     * @return ServiceName Service name, as an input parameter, meaningless
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Service name, as an input parameter, meaningless
                     * @param _serviceName Service name, as an input parameter, meaningless
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Upstream name, meaningless as an input parameter
                     * @return UpstreamName Upstream name, meaningless as an input parameter
                     * 
                     */
                    std::string GetUpstreamName() const;

                    /**
                     * 设置Upstream name, meaningless as an input parameter
                     * @param _upstreamName Upstream name, meaningless as an input parameter
                     * 
                     */
                    void SetUpstreamName(const std::string& _upstreamName);

                    /**
                     * 判断参数 UpstreamName 是否已赋值
                     * @return UpstreamName 是否已赋值
                     * 
                     */
                    bool UpstreamNameHasBeenSet() const;

                    /**
                     * 获取Percentage, 10 means 10%, range 0-100
                     * @return Percent Percentage, 10 means 10%, range 0-100
                     * 
                     */
                    double GetPercent() const;

                    /**
                     * 设置Percentage, 10 means 10%, range 0-100
                     * @param _percent Percentage, 10 means 10%, range 0-100
                     * 
                     */
                    void SetPercent(const double& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                private:

                    /**
                     * Service ID, required as an input parameter
                     */
                    std::string m_serviceID;
                    bool m_serviceIDHasBeenSet;

                    /**
                     * Service name, as an input parameter, meaningless
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Upstream name, meaningless as an input parameter
                     */
                    std::string m_upstreamName;
                    bool m_upstreamNameHasBeenSet;

                    /**
                     * Percentage, 10 means 10%, range 0-100
                     */
                    double m_percent;
                    bool m_percentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYBALANCEDSERVICE_H_

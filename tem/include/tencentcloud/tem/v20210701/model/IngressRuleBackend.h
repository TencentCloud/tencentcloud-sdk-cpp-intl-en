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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_INGRESSRULEBACKEND_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_INGRESSRULEBACKEND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Ingress rule backend configuration
                */
                class IngressRuleBackend : public AbstractModel
                {
                public:
                    IngressRuleBackend();
                    ~IngressRuleBackend() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取EKS service name
                     * @return ServiceName EKS service name
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置EKS service name
                     * @param ServiceName EKS service name
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取EKS service port
                     * @return ServicePort EKS service port
                     */
                    int64_t GetServicePort() const;

                    /**
                     * 设置EKS service port
                     * @param ServicePort EKS service port
                     */
                    void SetServicePort(const int64_t& _servicePort);

                    /**
                     * 判断参数 ServicePort 是否已赋值
                     * @return ServicePort 是否已赋值
                     */
                    bool ServicePortHasBeenSet() const;

                private:

                    /**
                     * EKS service name
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * EKS service port
                     */
                    int64_t m_servicePort;
                    bool m_servicePortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_INGRESSRULEBACKEND_H_

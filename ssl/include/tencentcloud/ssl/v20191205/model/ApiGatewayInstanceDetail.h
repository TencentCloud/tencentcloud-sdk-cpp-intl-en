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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_APIGATEWAYINSTANCEDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_APIGATEWAYINSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Details of an APIGATEWAY instance
                */
                class ApiGatewayInstanceDetail : public AbstractModel
                {
                public:
                    ApiGatewayInstanceDetail();
                    ~ApiGatewayInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The instance ID.
                     * @return ServiceId The instance ID.
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置The instance ID.
                     * @param _serviceId The instance ID.
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
                     * 获取The instance name.
                     * @return ServiceName The instance name.
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置The instance name.
                     * @param _serviceName The instance name.
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
                     * 获取The domain.
                     * @return Domain The domain.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The domain.
                     * @param _domain The domain.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Certificate id.
                     * @return CertId Certificate id.
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置Certificate id.
                     * @param _certId Certificate id.
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取The protocol.
                     * @return Protocol The protocol.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置The protocol.
                     * @param _protocol The protocol.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * The instance ID.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * The instance name.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * The domain.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Certificate id.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * The protocol.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_APIGATEWAYINSTANCEDETAIL_H_

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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATESERVICEREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATESERVICEREQUEST_H_

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
                * CreateService request structure.
                */
                class CreateServiceRequest : public AbstractModel
                {
                public:
                    CreateServiceRequest();
                    ~CreateServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Custom service name. If this parameter is left empty, the system will automatically generate a unique name.
                     * @return ServiceName Custom service name. If this parameter is left empty, the system will automatically generate a unique name.
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Custom service name. If this parameter is left empty, the system will automatically generate a unique name.
                     * @param ServiceName Custom service name. If this parameter is left empty, the system will automatically generate a unique name.
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取Service frontend request type, such as `http`, `https`, and `http&https`.
                     * @return Protocol Service frontend request type, such as `http`, `https`, and `http&https`.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Service frontend request type, such as `http`, `https`, and `http&https`.
                     * @param Protocol Service frontend request type, such as `http`, `https`, and `http&https`.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Custom service description.
                     * @return ServiceDesc Custom service description.
                     */
                    std::string GetServiceDesc() const;

                    /**
                     * 设置Custom service description.
                     * @param ServiceDesc Custom service description.
                     */
                    void SetServiceDesc(const std::string& _serviceDesc);

                    /**
                     * 判断参数 ServiceDesc 是否已赋值
                     * @return ServiceDesc 是否已赋值
                     */
                    bool ServiceDescHasBeenSet() const;

                    /**
                     * 获取Self-deployed cluster name, which is used to specify the self-deployed cluster where the service is to be created.
                     * @return ExclusiveSetName Self-deployed cluster name, which is used to specify the self-deployed cluster where the service is to be created.
                     */
                    std::string GetExclusiveSetName() const;

                    /**
                     * 设置Self-deployed cluster name, which is used to specify the self-deployed cluster where the service is to be created.
                     * @param ExclusiveSetName Self-deployed cluster name, which is used to specify the self-deployed cluster where the service is to be created.
                     */
                    void SetExclusiveSetName(const std::string& _exclusiveSetName);

                    /**
                     * 判断参数 ExclusiveSetName 是否已赋值
                     * @return ExclusiveSetName 是否已赋值
                     */
                    bool ExclusiveSetNameHasBeenSet() const;

                    /**
                     * 获取Network type list, which is used to specify the supported network types. INNER: private network access; OUTER: public network access. Default value: OUTER.
                     * @return NetTypes Network type list, which is used to specify the supported network types. INNER: private network access; OUTER: public network access. Default value: OUTER.
                     */
                    std::vector<std::string> GetNetTypes() const;

                    /**
                     * 设置Network type list, which is used to specify the supported network types. INNER: private network access; OUTER: public network access. Default value: OUTER.
                     * @param NetTypes Network type list, which is used to specify the supported network types. INNER: private network access; OUTER: public network access. Default value: OUTER.
                     */
                    void SetNetTypes(const std::vector<std::string>& _netTypes);

                    /**
                     * 判断参数 NetTypes 是否已赋值
                     * @return NetTypes 是否已赋值
                     */
                    bool NetTypesHasBeenSet() const;

                    /**
                     * 获取IP version number. Valid values: IPv4, IPv6. Default value: IPv4.
                     * @return IpVersion IP version number. Valid values: IPv4, IPv6. Default value: IPv4.
                     */
                    std::string GetIpVersion() const;

                    /**
                     * 设置IP version number. Valid values: IPv4, IPv6. Default value: IPv4.
                     * @param IpVersion IP version number. Valid values: IPv4, IPv6. Default value: IPv4.
                     */
                    void SetIpVersion(const std::string& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     */
                    bool IpVersionHasBeenSet() const;

                    /**
                     * 获取Cluster name, which is reserved and used by the `tsf serverless` type.
                     * @return SetServerName Cluster name, which is reserved and used by the `tsf serverless` type.
                     */
                    std::string GetSetServerName() const;

                    /**
                     * 设置Cluster name, which is reserved and used by the `tsf serverless` type.
                     * @param SetServerName Cluster name, which is reserved and used by the `tsf serverless` type.
                     */
                    void SetSetServerName(const std::string& _setServerName);

                    /**
                     * 判断参数 SetServerName 是否已赋值
                     * @return SetServerName 是否已赋值
                     */
                    bool SetServerNameHasBeenSet() const;

                    /**
                     * 获取User type, which is reserved and can be used by `serverless` users.
                     * @return AppIdType User type, which is reserved and can be used by `serverless` users.
                     */
                    std::string GetAppIdType() const;

                    /**
                     * 设置User type, which is reserved and can be used by `serverless` users.
                     * @param AppIdType User type, which is reserved and can be used by `serverless` users.
                     */
                    void SetAppIdType(const std::string& _appIdType);

                    /**
                     * 判断参数 AppIdType 是否已赋值
                     * @return AppIdType 是否已赋值
                     */
                    bool AppIdTypeHasBeenSet() const;

                private:

                    /**
                     * Custom service name. If this parameter is left empty, the system will automatically generate a unique name.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Service frontend request type, such as `http`, `https`, and `http&https`.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Custom service description.
                     */
                    std::string m_serviceDesc;
                    bool m_serviceDescHasBeenSet;

                    /**
                     * Self-deployed cluster name, which is used to specify the self-deployed cluster where the service is to be created.
                     */
                    std::string m_exclusiveSetName;
                    bool m_exclusiveSetNameHasBeenSet;

                    /**
                     * Network type list, which is used to specify the supported network types. INNER: private network access; OUTER: public network access. Default value: OUTER.
                     */
                    std::vector<std::string> m_netTypes;
                    bool m_netTypesHasBeenSet;

                    /**
                     * IP version number. Valid values: IPv4, IPv6. Default value: IPv4.
                     */
                    std::string m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                    /**
                     * Cluster name, which is reserved and used by the `tsf serverless` type.
                     */
                    std::string m_setServerName;
                    bool m_setServerNameHasBeenSet;

                    /**
                     * User type, which is reserved and can be used by `serverless` users.
                     */
                    std::string m_appIdType;
                    bool m_appIdTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATESERVICEREQUEST_H_

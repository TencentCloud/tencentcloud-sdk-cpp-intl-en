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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYSERVICEREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYSERVICEREQUEST_H_

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
                * ModifyService request structure.
                */
                class ModifyServiceRequest : public AbstractModel
                {
                public:
                    ModifyServiceRequest();
                    ~ModifyServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique ID of the service to be modified.
                     * @return ServiceId Unique ID of the service to be modified.
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Unique ID of the service to be modified.
                     * @param _serviceId Unique ID of the service to be modified.
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
                     * 获取Service name after modification.
                     * @return ServiceName Service name after modification.
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置Service name after modification.
                     * @param _serviceName Service name after modification.
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
                     * 获取Service description after modification.
                     * @return ServiceDesc Service description after modification.
                     * 
                     */
                    std::string GetServiceDesc() const;

                    /**
                     * 设置Service description after modification.
                     * @param _serviceDesc Service description after modification.
                     * 
                     */
                    void SetServiceDesc(const std::string& _serviceDesc);

                    /**
                     * 判断参数 ServiceDesc 是否已赋值
                     * @return ServiceDesc 是否已赋值
                     * 
                     */
                    bool ServiceDescHasBeenSet() const;

                    /**
                     * 获取Service frontend request type after modification, such as `http`, `https`, and `http&https`.
                     * @return Protocol Service frontend request type after modification, such as `http`, `https`, and `http&https`.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Service frontend request type after modification, such as `http`, `https`, and `http&https`.
                     * @param _protocol Service frontend request type after modification, such as `http`, `https`, and `http&https`.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Network type list, which is used to specify the supported network types. INNER: private network access; OUTER: public network access. Default value: OUTER.
                     * @return NetTypes Network type list, which is used to specify the supported network types. INNER: private network access; OUTER: public network access. Default value: OUTER.
                     * 
                     */
                    std::vector<std::string> GetNetTypes() const;

                    /**
                     * 设置Network type list, which is used to specify the supported network types. INNER: private network access; OUTER: public network access. Default value: OUTER.
                     * @param _netTypes Network type list, which is used to specify the supported network types. INNER: private network access; OUTER: public network access. Default value: OUTER.
                     * 
                     */
                    void SetNetTypes(const std::vector<std::string>& _netTypes);

                    /**
                     * 判断参数 NetTypes 是否已赋值
                     * @return NetTypes 是否已赋值
                     * 
                     */
                    bool NetTypesHasBeenSet() const;

                private:

                    /**
                     * Unique ID of the service to be modified.
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Service name after modification.
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * Service description after modification.
                     */
                    std::string m_serviceDesc;
                    bool m_serviceDescHasBeenSet;

                    /**
                     * Service frontend request type after modification, such as `http`, `https`, and `http&https`.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Network type list, which is used to specify the supported network types. INNER: private network access; OUTER: public network access. Default value: OUTER.
                     */
                    std::vector<std::string> m_netTypes;
                    bool m_netTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYSERVICEREQUEST_H_

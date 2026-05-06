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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYSERVICEREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/KongUpstreamInfo.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * ModifyCloudNativeAPIGatewayService request structure.
                */
                class ModifyCloudNativeAPIGatewayServiceRequest : public AbstractModel
                {
                public:
                    ModifyCloudNativeAPIGatewayServiceRequest();
                    ~ModifyCloudNativeAPIGatewayServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Gateway ID
                     * @return GatewayId Gateway ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Gateway ID
                     * @param _gatewayId Gateway ID
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取Service name
                     * @return Name Service name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Service name
                     * @param _name Service name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Request protocol: 
- https 
- http 
- tcp 
- udp
                     * @return Protocol Request protocol: 
- https 
- http 
- tcp 
- udp
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Request protocol: 
- https 
- http 
- tcp 
- udp
                     * @param _protocol Request protocol: 
- https 
- http 
- tcp 
- udp
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
                     * 获取Timeout interval. Unit: ms
                     * @return Timeout Timeout interval. Unit: ms
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置Timeout interval. Unit: ms
                     * @param _timeout Timeout interval. Unit: ms
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取Number of retries.
                     * @return Retries Number of retries.
                     * 
                     */
                    int64_t GetRetries() const;

                    /**
                     * 设置Number of retries.
                     * @param _retries Number of retries.
                     * 
                     */
                    void SetRetries(const int64_t& _retries);

                    /**
                     * 判断参数 Retries 是否已赋值
                     * @return Retries 是否已赋值
                     * 
                     */
                    bool RetriesHasBeenSet() const;

                    /**
                     * 获取Service type 
- Kubernetes 
- Registry
- IPList
- HostIP
- Scf	
                     * @return UpstreamType Service type 
- Kubernetes 
- Registry
- IPList
- HostIP
- Scf	
                     * 
                     */
                    std::string GetUpstreamType() const;

                    /**
                     * 设置Service type 
- Kubernetes 
- Registry
- IPList
- HostIP
- Scf	
                     * @param _upstreamType Service type 
- Kubernetes 
- Registry
- IPList
- HostIP
- Scf	
                     * 
                     */
                    void SetUpstreamType(const std::string& _upstreamType);

                    /**
                     * 判断参数 UpstreamType 是否已赋值
                     * @return UpstreamType 是否已赋值
                     * 
                     */
                    bool UpstreamTypeHasBeenSet() const;

                    /**
                     * 获取service configuration
                     * @return UpstreamInfo service configuration
                     * 
                     */
                    KongUpstreamInfo GetUpstreamInfo() const;

                    /**
                     * 设置service configuration
                     * @param _upstreamInfo service configuration
                     * 
                     */
                    void SetUpstreamInfo(const KongUpstreamInfo& _upstreamInfo);

                    /**
                     * 判断参数 UpstreamInfo 是否已赋值
                     * @return UpstreamInfo 是否已赋值
                     * 
                     */
                    bool UpstreamInfoHasBeenSet() const;

                    /**
                     * 获取service ID
                     * @return ID service ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置service ID
                     * @param _iD service ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Request path
                     * @return Path Request path
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Request path
                     * @param _path Request path
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                private:

                    /**
                     * Gateway ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Service name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Request protocol: 
- https 
- http 
- tcp 
- udp
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Timeout interval. Unit: ms
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Number of retries.
                     */
                    int64_t m_retries;
                    bool m_retriesHasBeenSet;

                    /**
                     * Service type 
- Kubernetes 
- Registry
- IPList
- HostIP
- Scf	
                     */
                    std::string m_upstreamType;
                    bool m_upstreamTypeHasBeenSet;

                    /**
                     * service configuration
                     */
                    KongUpstreamInfo m_upstreamInfo;
                    bool m_upstreamInfoHasBeenSet;

                    /**
                     * service ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Request path
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYSERVICEREQUEST_H_

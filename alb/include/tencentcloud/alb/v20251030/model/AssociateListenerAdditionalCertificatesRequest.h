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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_ASSOCIATELISTENERADDITIONALCERTIFICATESREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_ASSOCIATELISTENERADDITIONALCERTIFICATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * AssociateListenerAdditionalCertificates request structure.
                */
                class AssociateListenerAdditionalCertificatesRequest : public AbstractModel
                {
                public:
                    AssociateListenerAdditionalCertificatesRequest();
                    ~AssociateListenerAdditionalCertificatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of extended certificate IDs.
                     * @return CertificateIds List of extended certificate IDs.
                     * 
                     */
                    std::vector<std::string> GetCertificateIds() const;

                    /**
                     * 设置List of extended certificate IDs.
                     * @param _certificateIds List of extended certificate IDs.
                     * 
                     */
                    void SetCertificateIds(const std::vector<std::string>& _certificateIds);

                    /**
                     * 判断参数 CertificateIds 是否已赋值
                     * @return CertificateIds 是否已赋值
                     * 
                     */
                    bool CertificateIdsHasBeenSet() const;

                    /**
                     * 获取Listener ID, in the format of lst- followed by 8 alphanumeric characters.
                     * @return ListenerId Listener ID, in the format of lst- followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID, in the format of lst- followed by 8 alphanumeric characters.
                     * @param _listenerId Listener ID, in the format of lst- followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取CLB instance ID. The format is alb- followed by 8 alphanumeric characters.
                     * @return LoadBalancerId CLB instance ID. The format is alb- followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID. The format is alb- followed by 8 alphanumeric characters.
                     * @param _loadBalancerId CLB instance ID. The format is alb- followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取Client token, used to ensure the idempotency of requests. Generate a parameter value from your client to ensure the uniqueness of the value for different requests. ClientToken supports only ASCII characters.
If not specified, the system automatically uses the RequestId of the API request as the ClientToken ID. The RequestId of each API request may not be the same.
                     * @return ClientToken Client token, used to ensure the idempotency of requests. Generate a parameter value from your client to ensure the uniqueness of the value for different requests. ClientToken supports only ASCII characters.
If not specified, the system automatically uses the RequestId of the API request as the ClientToken ID. The RequestId of each API request may not be the same.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置Client token, used to ensure the idempotency of requests. Generate a parameter value from your client to ensure the uniqueness of the value for different requests. ClientToken supports only ASCII characters.
If not specified, the system automatically uses the RequestId of the API request as the ClientToken ID. The RequestId of each API request may not be the same.
                     * @param _clientToken Client token, used to ensure the idempotency of requests. Generate a parameter value from your client to ensure the uniqueness of the value for different requests. ClientToken supports only ASCII characters.
If not specified, the system automatically uses the RequestId of the API request as the ClientToken ID. The RequestId of each API request may not be the same.
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取Whether to only precheck this request. Parameter Value:
true: send a check request. It will not add extension certs for HTTPS and QUIC listeners. Check items include whether required parameters are filled in, request format, and service limits. If the check fails, return the corresponding error. If the check passes, return the error code DryRunOperation.
false (default value): Send a normal request, return HTTP 2xx status code after check, and directly perform the operation.
                     * @return DryRun Whether to only precheck this request. Parameter Value:
true: send a check request. It will not add extension certs for HTTPS and QUIC listeners. Check items include whether required parameters are filled in, request format, and service limits. If the check fails, return the corresponding error. If the check passes, return the error code DryRunOperation.
false (default value): Send a normal request, return HTTP 2xx status code after check, and directly perform the operation.
                     * 
                     */
                    std::string GetDryRun() const;

                    /**
                     * 设置Whether to only precheck this request. Parameter Value:
true: send a check request. It will not add extension certs for HTTPS and QUIC listeners. Check items include whether required parameters are filled in, request format, and service limits. If the check fails, return the corresponding error. If the check passes, return the error code DryRunOperation.
false (default value): Send a normal request, return HTTP 2xx status code after check, and directly perform the operation.
                     * @param _dryRun Whether to only precheck this request. Parameter Value:
true: send a check request. It will not add extension certs for HTTPS and QUIC listeners. Check items include whether required parameters are filled in, request format, and service limits. If the check fails, return the corresponding error. If the check passes, return the error code DryRunOperation.
false (default value): Send a normal request, return HTTP 2xx status code after check, and directly perform the operation.
                     * 
                     */
                    void SetDryRun(const std::string& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * List of extended certificate IDs.
                     */
                    std::vector<std::string> m_certificateIds;
                    bool m_certificateIdsHasBeenSet;

                    /**
                     * Listener ID, in the format of lst- followed by 8 alphanumeric characters.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * CLB instance ID. The format is alb- followed by 8 alphanumeric characters.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Client token, used to ensure the idempotency of requests. Generate a parameter value from your client to ensure the uniqueness of the value for different requests. ClientToken supports only ASCII characters.
If not specified, the system automatically uses the RequestId of the API request as the ClientToken ID. The RequestId of each API request may not be the same.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Whether to only precheck this request. Parameter Value:
true: send a check request. It will not add extension certs for HTTPS and QUIC listeners. Check items include whether required parameters are filled in, request format, and service limits. If the check fails, return the corresponding error. If the check passes, return the error code DryRunOperation.
false (default value): Send a normal request, return HTTP 2xx status code after check, and directly perform the operation.
                     */
                    std::string m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_ASSOCIATELISTENERADDITIONALCERTIFICATESREQUEST_H_

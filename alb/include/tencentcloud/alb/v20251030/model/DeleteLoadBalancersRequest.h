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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DELETELOADBALANCERSREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DELETELOADBALANCERSREQUEST_H_

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
                * DeleteLoadBalancers request structure.
                */
                class DeleteLoadBalancersRequest : public AbstractModel
                {
                public:
                    DeleteLoadBalancersRequest();
                    ~DeleteLoadBalancersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of Cloud Load Balancer instance IDs. The format is alb- followed by 8 alphanumeric characters.
                     * @return LoadBalancerIds List of Cloud Load Balancer instance IDs. The format is alb- followed by 8 alphanumeric characters.
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置List of Cloud Load Balancer instance IDs. The format is alb- followed by 8 alphanumeric characters.
                     * @param _loadBalancerIds List of Cloud Load Balancer instance IDs. The format is alb- followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                    /**
                     * 获取Client Token, used for ensuring the idempotency of requests.

Generate a parameter value from your client to underwrite the uniqueness of the value for different requests. ClientToken supports only ASCII characters.


                     * @return ClientToken Client Token, used for ensuring the idempotency of requests.

Generate a parameter value from your client to underwrite the uniqueness of the value for different requests. ClientToken supports only ASCII characters.


                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置Client Token, used for ensuring the idempotency of requests.

Generate a parameter value from your client to underwrite the uniqueness of the value for different requests. ClientToken supports only ASCII characters.


                     * @param _clientToken Client Token, used for ensuring the idempotency of requests.

Generate a parameter value from your client to underwrite the uniqueness of the value for different requests. ClientToken supports only ASCII characters.


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
                     * 获取Whether to only precheck this request. Parameter value:

- **true**: Send a check request. The CLB instance will not be deleted. Check items include whether required parameters are filled in, request format, and service limits. If a check fails, return the corresponding error. If all checks pass, return the error code `DryRunOperation`.

- **false** (default value): Send a normal request, return `HTTP 2xx` status code after check, and directly perform the operation.
                     * @return DryRun Whether to only precheck this request. Parameter value:

- **true**: Send a check request. The CLB instance will not be deleted. Check items include whether required parameters are filled in, request format, and service limits. If a check fails, return the corresponding error. If all checks pass, return the error code `DryRunOperation`.

- **false** (default value): Send a normal request, return `HTTP 2xx` status code after check, and directly perform the operation.
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether to only precheck this request. Parameter value:

- **true**: Send a check request. The CLB instance will not be deleted. Check items include whether required parameters are filled in, request format, and service limits. If a check fails, return the corresponding error. If all checks pass, return the error code `DryRunOperation`.

- **false** (default value): Send a normal request, return `HTTP 2xx` status code after check, and directly perform the operation.
                     * @param _dryRun Whether to only precheck this request. Parameter value:

- **true**: Send a check request. The CLB instance will not be deleted. Check items include whether required parameters are filled in, request format, and service limits. If a check fails, return the corresponding error. If all checks pass, return the error code `DryRunOperation`.

- **false** (default value): Send a normal request, return `HTTP 2xx` status code after check, and directly perform the operation.
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * List of Cloud Load Balancer instance IDs. The format is alb- followed by 8 alphanumeric characters.
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * Client Token, used for ensuring the idempotency of requests.

Generate a parameter value from your client to underwrite the uniqueness of the value for different requests. ClientToken supports only ASCII characters.


                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Whether to only precheck this request. Parameter value:

- **true**: Send a check request. The CLB instance will not be deleted. Check items include whether required parameters are filled in, request format, and service limits. If a check fails, return the corresponding error. If all checks pass, return the error code `DryRunOperation`.

- **false** (default value): Send a normal request, return `HTTP 2xx` status code after check, and directly perform the operation.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DELETELOADBALANCERSREQUEST_H_

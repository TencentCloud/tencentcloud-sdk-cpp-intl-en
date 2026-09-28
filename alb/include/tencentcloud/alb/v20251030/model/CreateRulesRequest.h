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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_CREATERULESREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_CREATERULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/RuleInput.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * CreateRules request structure.
                */
                class CreateRulesRequest : public AbstractModel
                {
                public:
                    CreateRulesRequest();
                    ~CreateRulesRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Forwarding rule list.
                     * @return Rules Forwarding rule list.
                     * 
                     */
                    std::vector<RuleInput> GetRules() const;

                    /**
                     * 设置Forwarding rule list.
                     * @param _rules Forwarding rule list.
                     * 
                     */
                    void SetRules(const std::vector<RuleInput>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取Client Token, used to ensure the idempotency of requests. Generate a parameter value from your client, ensuring uniqueness of the value for different requests. ClientToken supports only ASCII characters. If not specified, the system automatically uses the RequestId of the API request as the ClientToken flag. The RequestId may not be the same for each API request.
                     * @return ClientToken Client Token, used to ensure the idempotency of requests. Generate a parameter value from your client, ensuring uniqueness of the value for different requests. ClientToken supports only ASCII characters. If not specified, the system automatically uses the RequestId of the API request as the ClientToken flag. The RequestId may not be the same for each API request.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置Client Token, used to ensure the idempotency of requests. Generate a parameter value from your client, ensuring uniqueness of the value for different requests. ClientToken supports only ASCII characters. If not specified, the system automatically uses the RequestId of the API request as the ClientToken flag. The RequestId may not be the same for each API request.
                     * @param _clientToken Client Token, used to ensure the idempotency of requests. Generate a parameter value from your client, ensuring uniqueness of the value for different requests. ClientToken supports only ASCII characters. If not specified, the system automatically uses the RequestId of the API request as the ClientToken flag. The RequestId may not be the same for each API request.
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
                     * 获取Whether it is a pre-check only request.
                     * @return DryRun Whether it is a pre-check only request.
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether it is a pre-check only request.
                     * @param _dryRun Whether it is a pre-check only request.
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
                     * Forwarding rule list.
                     */
                    std::vector<RuleInput> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * Client Token, used to ensure the idempotency of requests. Generate a parameter value from your client, ensuring uniqueness of the value for different requests. ClientToken supports only ASCII characters. If not specified, the system automatically uses the RequestId of the API request as the ClientToken flag. The RequestId may not be the same for each API request.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Whether it is a pre-check only request.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_CREATERULESREQUEST_H_

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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYRULESATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYRULESATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/RuleModify.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * ModifyRulesAttributes request structure.
                */
                class ModifyRulesAttributesRequest : public AbstractModel
                {
                public:
                    ModifyRulesAttributesRequest();
                    ~ModifyRulesAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Listener ID, format: lst- followed by 8 alphanumeric characters.
                     * @return ListenerId Listener ID, format: lst- followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID, format: lst- followed by 8 alphanumeric characters.
                     * @param _listenerId Listener ID, format: lst- followed by 8 alphanumeric characters.
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
                     * 获取Cloud Load Balancer instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * @return LoadBalancerId Cloud Load Balancer instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置Cloud Load Balancer instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     * @param _loadBalancerId Cloud Load Balancer instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
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
                    std::vector<RuleModify> GetRules() const;

                    /**
                     * 设置Forwarding rule list.
                     * @param _rules Forwarding rule list.
                     * 
                     */
                    void SetRules(const std::vector<RuleModify>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取Whether it is pre-check only for this request.
                     * @return DryRun Whether it is pre-check only for this request.
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether it is pre-check only for this request.
                     * @param _dryRun Whether it is pre-check only for this request.
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
                     * Listener ID, format: lst- followed by 8 alphanumeric characters.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Cloud Load Balancer instance ID, in the format of "alb-" followed by 8 alphanumeric characters.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Forwarding rule list.
                     */
                    std::vector<RuleModify> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * Whether it is pre-check only for this request.
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_MODIFYRULESATTRIBUTESREQUEST_H_

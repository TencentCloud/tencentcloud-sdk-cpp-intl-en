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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATERULEREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/RuleInput.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * CreateRule request structure.
                */
                class CreateRuleRequest : public AbstractModel
                {
                public:
                    CreateRuleRequest();
                    ~CreateRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the cloud load balancer instance. you can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
                     * @return LoadBalancerId ID of the cloud load balancer instance. you can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置ID of the cloud load balancer instance. you can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
                     * @param _loadBalancerId ID of the cloud load balancer instance. you can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
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
                     * 获取Specifies the listener ID, which can be obtained through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     * @return ListenerId Specifies the listener ID, which can be obtained through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Specifies the listener ID, which can be obtained through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     * @param _listenerId Specifies the listener ID, which can be obtained through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
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
                     * 获取Information of the new forwarding rule
                     * @return Rules Information of the new forwarding rule
                     * 
                     */
                    std::vector<RuleInput> GetRules() const;

                    /**
                     * 设置Information of the new forwarding rule
                     * @param _rules Information of the new forwarding rule
                     * 
                     */
                    void SetRules(const std::vector<RuleInput>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * ID of the cloud load balancer instance. you can call the [DescribeLoadBalancers](https://www.tencentcloud.comom/document/product/214/30685?from_cn_redirect=1) API to obtain the ID.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Specifies the listener ID, which can be obtained through the [DescribeListeners](https://www.tencentcloud.comom/document/product/214/30686?from_cn_redirect=1) api.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Information of the new forwarding rule
                     */
                    std::vector<RuleInput> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATERULEREQUEST_H_

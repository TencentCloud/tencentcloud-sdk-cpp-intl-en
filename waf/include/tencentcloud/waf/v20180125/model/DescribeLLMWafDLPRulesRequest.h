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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMWAFDLPRULESREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMWAFDLPRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeLLMWafDLPRules request structure.
                */
                class DescribeLLMWafDLPRulesRequest : public AbstractModel
                {
                public:
                    DescribeLLMWafDLPRulesRequest();
                    ~DescribeLLMWafDLPRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>In SDK mode, pass in ServiceId (either ServiceId or Domain)</p>
                     * @return ServiceId <p>In SDK mode, pass in ServiceId (either ServiceId or Domain)</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>In SDK mode, pass in ServiceId (either ServiceId or Domain)</p>
                     * @param _serviceId <p>In SDK mode, pass in ServiceId (either ServiceId or Domain)</p>
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
                     * 获取<p>Instance id</p>
                     * @return InstanceId <p>Instance id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance id</p>
                     * @param _instanceId <p>Instance id</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Sorting field. Currently, only UpdateTime is supported. If this parameter is left empty, rules are returned in the default order.</p>
                     * @return By <p>Sorting field. Currently, only UpdateTime is supported. If this parameter is left empty, rules are returned in the default order.</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>Sorting field. Currently, only UpdateTime is supported. If this parameter is left empty, rules are returned in the default order.</p>
                     * @param _by <p>Sorting field. Currently, only UpdateTime is supported. If this parameter is left empty, rules are returned in the default order.</p>
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取<p>Sorting order: asc (ascending) or desc (descending). Default value: desc.</p>
                     * @return Order <p>Sorting order: asc (ascending) or desc (descending). Default value: desc.</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>Sorting order: asc (ascending) or desc (descending). Default value: desc.</p>
                     * @param _order <p>Sorting order: asc (ascending) or desc (descending). Default value: desc.</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>In domain mode, pass in Domain (either Domain or ServiceId)</p>
                     * @return Domain <p>In domain mode, pass in Domain (either Domain or ServiceId)</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>In domain mode, pass in Domain (either Domain or ServiceId)</p>
                     * @param _domain <p>In domain mode, pass in Domain (either Domain or ServiceId)</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * <p>In SDK mode, pass in ServiceId (either ServiceId or Domain)</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>Instance id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Sorting field. Currently, only UpdateTime is supported. If this parameter is left empty, rules are returned in the default order.</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * <p>Sorting order: asc (ascending) or desc (descending). Default value: desc.</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>In domain mode, pass in Domain (either Domain or ServiceId)</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMWAFDLPRULESREQUEST_H_

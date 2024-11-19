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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_MODIFYGATEWAYLOADBALANCERATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_MODIFYGATEWAYLOADBALANCERATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * ModifyGatewayLoadBalancerAttribute request structure.
                */
                class ModifyGatewayLoadBalancerAttributeRequest : public AbstractModel
                {
                public:
                    ModifyGatewayLoadBalancerAttributeRequest();
                    ~ModifyGatewayLoadBalancerAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique GWLB ID.
                     * @return LoadBalancerId Unique GWLB ID.
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置Unique GWLB ID.
                     * @param _loadBalancerId Unique GWLB ID.
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
                     * 获取GWLB name.
                     * @return LoadBalancerName GWLB name.
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置GWLB name.
                     * @param _loadBalancerName GWLB name.
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                private:

                    /**
                     * Unique GWLB ID.
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * GWLB name.
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_MODIFYGATEWAYLOADBALANCERATTRIBUTEREQUEST_H_

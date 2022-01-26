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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_MODIFYLOADBALANCERTARGETATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_MODIFYLOADBALANCERTARGETATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/ForwardLoadBalancer.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * ModifyLoadBalancerTargetAttributes request structure.
                */
                class ModifyLoadBalancerTargetAttributesRequest : public AbstractModel
                {
                public:
                    ModifyLoadBalancerTargetAttributesRequest();
                    ~ModifyLoadBalancerTargetAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Scaling group ID
                     * @return AutoScalingGroupId Scaling group ID
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Scaling group ID
                     * @param AutoScalingGroupId Scaling group ID
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取List of application CLBs to modify.Up to 50 CLBs allowed.
                     * @return ForwardLoadBalancers List of application CLBs to modify.Up to 50 CLBs allowed.
                     */
                    std::vector<ForwardLoadBalancer> GetForwardLoadBalancers() const;

                    /**
                     * 设置List of application CLBs to modify.Up to 50 CLBs allowed.
                     * @param ForwardLoadBalancers List of application CLBs to modify.Up to 50 CLBs allowed.
                     */
                    void SetForwardLoadBalancers(const std::vector<ForwardLoadBalancer>& _forwardLoadBalancers);

                    /**
                     * 判断参数 ForwardLoadBalancers 是否已赋值
                     * @return ForwardLoadBalancers 是否已赋值
                     */
                    bool ForwardLoadBalancersHasBeenSet() const;

                private:

                    /**
                     * Scaling group ID
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * List of application CLBs to modify.Up to 50 CLBs allowed.
                     */
                    std::vector<ForwardLoadBalancer> m_forwardLoadBalancers;
                    bool m_forwardLoadBalancersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_MODIFYLOADBALANCERTARGETATTRIBUTESREQUEST_H_

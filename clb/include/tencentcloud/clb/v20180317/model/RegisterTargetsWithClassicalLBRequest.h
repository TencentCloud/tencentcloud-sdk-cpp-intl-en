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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_REGISTERTARGETSWITHCLASSICALLBREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_REGISTERTARGETSWITHCLASSICALLBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ClassicalTargetInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * RegisterTargetsWithClassicalLB request structure.
                */
                class RegisterTargetsWithClassicalLBRequest : public AbstractModel
                {
                public:
                    RegisterTargetsWithClassicalLBRequest();
                    ~RegisterTargetsWithClassicalLBRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CLB instance ID
                     * @return LoadBalancerId CLB instance ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置CLB instance ID
                     * @param _loadBalancerId CLB instance ID
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
                     * 获取Real server information
                     * @return Targets Real server information
                     * 
                     */
                    std::vector<ClassicalTargetInfo> GetTargets() const;

                    /**
                     * 设置Real server information
                     * @param _targets Real server information
                     * 
                     */
                    void SetTargets(const std::vector<ClassicalTargetInfo>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                private:

                    /**
                     * CLB instance ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * Real server information
                     */
                    std::vector<ClassicalTargetInfo> m_targets;
                    bool m_targetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_REGISTERTARGETSWITHCLASSICALLBREQUEST_H_

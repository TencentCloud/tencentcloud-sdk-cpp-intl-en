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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERSLAREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERSLAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/SlaUpdateParam.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyLoadBalancerSla request structure.
                */
                class ModifyLoadBalancerSlaRequest : public AbstractModel
                {
                public:
                    ModifyLoadBalancerSlaRequest();
                    ~ModifyLoadBalancerSlaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CLB instance information.
                     * @return LoadBalancerSla CLB instance information.
                     * 
                     */
                    std::vector<SlaUpdateParam> GetLoadBalancerSla() const;

                    /**
                     * 设置CLB instance information.
                     * @param _loadBalancerSla CLB instance information.
                     * 
                     */
                    void SetLoadBalancerSla(const std::vector<SlaUpdateParam>& _loadBalancerSla);

                    /**
                     * 判断参数 LoadBalancerSla 是否已赋值
                     * @return LoadBalancerSla 是否已赋值
                     * 
                     */
                    bool LoadBalancerSlaHasBeenSet() const;

                    /**
                     * 获取Whether to force upgrade. The default is no.
                     * @return Force Whether to force upgrade. The default is no.
                     * 
                     */
                    bool GetForce() const;

                    /**
                     * 设置Whether to force upgrade. The default is no.
                     * @param _force Whether to force upgrade. The default is no.
                     * 
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * CLB instance information.
                     */
                    std::vector<SlaUpdateParam> m_loadBalancerSla;
                    bool m_loadBalancerSlaHasBeenSet;

                    /**
                     * Whether to force upgrade. The default is no.
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYLOADBALANCERSLAREQUEST_H_

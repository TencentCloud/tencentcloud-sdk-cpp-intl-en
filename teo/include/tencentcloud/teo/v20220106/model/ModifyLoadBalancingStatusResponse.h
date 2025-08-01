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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYLOADBALANCINGSTATUSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYLOADBALANCINGSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * ModifyLoadBalancingStatus response structure.
                */
                class ModifyLoadBalancingStatusResponse : public AbstractModel
                {
                public:
                    ModifyLoadBalancingStatusResponse();
                    ~ModifyLoadBalancingStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取CLB instance ID
                     * @return LoadBalancingId CLB instance ID
                     * 
                     */
                    std::string GetLoadBalancingId() const;

                    /**
                     * 判断参数 LoadBalancingId 是否已赋值
                     * @return LoadBalancingId 是否已赋值
                     * 
                     */
                    bool LoadBalancingIdHasBeenSet() const;

                private:

                    /**
                     * CLB instance ID
                     */
                    std::string m_loadBalancingId;
                    bool m_loadBalancingIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYLOADBALANCINGSTATUSRESPONSE_H_

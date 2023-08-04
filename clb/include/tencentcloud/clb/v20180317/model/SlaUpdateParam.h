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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_SLAUPDATEPARAM_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_SLAUPDATEPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Parameters for upgrading to an LCU-supported instance
                */
                class SlaUpdateParam : public AbstractModel
                {
                public:
                    SlaUpdateParam();
                    ~SlaUpdateParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the CLB instance
                     * @return LoadBalancerId ID of the CLB instance
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置ID of the CLB instance
                     * @param _loadBalancerId ID of the CLB instance
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
                     * 获取u200dTo upgrade the instance to an LCU-support instance, set it to `SLA`. `SLA` indicates Super Large 1. 
If you have activated Super Large LCU-supported instances, `SLA` indicates the Super Large 4 specification. Super u200dLarge LCU-supported specification is in beta now. u200cu200dTo join the beta, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     * @return SlaType u200dTo upgrade the instance to an LCU-support instance, set it to `SLA`. `SLA` indicates Super Large 1. 
If you have activated Super Large LCU-supported instances, `SLA` indicates the Super Large 4 specification. Super u200dLarge LCU-supported specification is in beta now. u200cu200dTo join the beta, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     * 
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置u200dTo upgrade the instance to an LCU-support instance, set it to `SLA`. `SLA` indicates Super Large 1. 
If you have activated Super Large LCU-supported instances, `SLA` indicates the Super Large 4 specification. Super u200dLarge LCU-supported specification is in beta now. u200cu200dTo join the beta, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     * @param _slaType u200dTo upgrade the instance to an LCU-support instance, set it to `SLA`. `SLA` indicates Super Large 1. 
If you have activated Super Large LCU-supported instances, `SLA` indicates the Super Large 4 specification. Super u200dLarge LCU-supported specification is in beta now. u200cu200dTo join the beta, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     * 
                     */
                    void SetSlaType(const std::string& _slaType);

                    /**
                     * 判断参数 SlaType 是否已赋值
                     * @return SlaType 是否已赋值
                     * 
                     */
                    bool SlaTypeHasBeenSet() const;

                private:

                    /**
                     * ID of the CLB instance
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * u200dTo upgrade the instance to an LCU-support instance, set it to `SLA`. `SLA` indicates Super Large 1. 
If you have activated Super Large LCU-supported instances, `SLA` indicates the Super Large 4 specification. Super u200dLarge LCU-supported specification is in beta now. u200cu200dTo join the beta, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_SLAUPDATEPARAM_H_

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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CHECKGATEWAYFLOWMONITORRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CHECKGATEWAYFLOWMONITORRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CheckGatewayFlowMonitor response structure.
                */
                class CheckGatewayFlowMonitorResponse : public AbstractModel
                {
                public:
                    CheckGatewayFlowMonitorResponse();
                    ~CheckGatewayFlowMonitorResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether the gateway has enabled traffic control. Valid values: true (enabled) and false (disabled).
                     * @return Enabled Whether the gateway has enabled traffic control. Valid values: true (enabled) and false (disabled).
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Gateway bandwidth.
                     * @return Bandwidth Gateway bandwidth.
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                private:

                    /**
                     * Whether the gateway has enabled traffic control. Valid values: true (enabled) and false (disabled).
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Gateway bandwidth.
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CHECKGATEWAYFLOWMONITORRESPONSE_H_

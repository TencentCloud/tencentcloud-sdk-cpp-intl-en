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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_STARTSTOPSERVICEORMONITORREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_STARTSTOPSERVICEORMONITORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/OpScope.h>
#include <tencentcloud/emr/v20190103/model/StrategyConfig.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * StartStopServiceOrMonitor request structure.
                */
                class StartStopServiceOrMonitorRequest : public AbstractModel
                {
                public:
                    StartStopServiceOrMonitorRequest();
                    ~StartStopServiceOrMonitorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The cluster ID.
                     * @return InstanceId The cluster ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置The cluster ID.
                     * @param _instanceId The cluster ID.
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
                     * 获取The operation type. Valid values:
<li>StartService: Start service</li>
<li>StopService: Stop service</li>
<li>StartMonitor: Start maintenance</li>
<li>StopMonitor: Stop maintenance</li>
<li>RestartService: Restart service. If this type is selected, "StrategyConfig" is required.</li>
                     * @return OpType The operation type. Valid values:
<li>StartService: Start service</li>
<li>StopService: Stop service</li>
<li>StartMonitor: Start maintenance</li>
<li>StopMonitor: Stop maintenance</li>
<li>RestartService: Restart service. If this type is selected, "StrategyConfig" is required.</li>
                     * 
                     */
                    std::string GetOpType() const;

                    /**
                     * 设置The operation type. Valid values:
<li>StartService: Start service</li>
<li>StopService: Stop service</li>
<li>StartMonitor: Start maintenance</li>
<li>StopMonitor: Stop maintenance</li>
<li>RestartService: Restart service. If this type is selected, "StrategyConfig" is required.</li>
                     * @param _opType The operation type. Valid values:
<li>StartService: Start service</li>
<li>StopService: Stop service</li>
<li>StartMonitor: Start maintenance</li>
<li>StopMonitor: Stop maintenance</li>
<li>RestartService: Restart service. If this type is selected, "StrategyConfig" is required.</li>
                     * 
                     */
                    void SetOpType(const std::string& _opType);

                    /**
                     * 判断参数 OpType 是否已赋值
                     * @return OpType 是否已赋值
                     * 
                     */
                    bool OpTypeHasBeenSet() const;

                    /**
                     * 获取The operation scope.
                     * @return OpScope The operation scope.
                     * 
                     */
                    OpScope GetOpScope() const;

                    /**
                     * 设置The operation scope.
                     * @param _opScope The operation scope.
                     * 
                     */
                    void SetOpScope(const OpScope& _opScope);

                    /**
                     * 判断参数 OpScope 是否已赋值
                     * @return OpScope 是否已赋值
                     * 
                     */
                    bool OpScopeHasBeenSet() const;

                    /**
                     * 获取The operation policy.
                     * @return StrategyConfig The operation policy.
                     * 
                     */
                    StrategyConfig GetStrategyConfig() const;

                    /**
                     * 设置The operation policy.
                     * @param _strategyConfig The operation policy.
                     * 
                     */
                    void SetStrategyConfig(const StrategyConfig& _strategyConfig);

                    /**
                     * 判断参数 StrategyConfig 是否已赋值
                     * @return StrategyConfig 是否已赋值
                     * 
                     */
                    bool StrategyConfigHasBeenSet() const;

                private:

                    /**
                     * The cluster ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The operation type. Valid values:
<li>StartService: Start service</li>
<li>StopService: Stop service</li>
<li>StartMonitor: Start maintenance</li>
<li>StopMonitor: Stop maintenance</li>
<li>RestartService: Restart service. If this type is selected, "StrategyConfig" is required.</li>
                     */
                    std::string m_opType;
                    bool m_opTypeHasBeenSet;

                    /**
                     * The operation scope.
                     */
                    OpScope m_opScope;
                    bool m_opScopeHasBeenSet;

                    /**
                     * The operation policy.
                     */
                    StrategyConfig m_strategyConfig;
                    bool m_strategyConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_STARTSTOPSERVICEORMONITORREQUEST_H_

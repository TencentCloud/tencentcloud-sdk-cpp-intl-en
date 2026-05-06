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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYAUTOSCALERRESOURCESTRATEGYREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYAUTOSCALERRESOURCESTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayStrategyAutoScalerConfig.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayStrategyCronScalerConfig.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * ModifyAutoScalerResourceStrategy request structure.
                */
                class ModifyAutoScalerResourceStrategyRequest : public AbstractModel
                {
                public:
                    ModifyAutoScalerResourceStrategyRequest();
                    ~ModifyAutoScalerResourceStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Gateway instance ID
                     * @return GatewayId Gateway instance ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Gateway instance ID
                     * @param _gatewayId Gateway instance ID
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取Policy ID
                     * @return StrategyId Policy ID
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置Policy ID
                     * @param _strategyId Policy ID
                     * 
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取Policy name.
                     * @return StrategyName Policy name.
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置Policy name.
                     * @param _strategyName Policy name.
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取Policy description
                     * @return Description Policy description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Policy description
                     * @param _description Policy description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Metric scaling configuration
                     * @return Config Metric scaling configuration
                     * 
                     */
                    CloudNativeAPIGatewayStrategyAutoScalerConfig GetConfig() const;

                    /**
                     * 设置Metric scaling configuration
                     * @param _config Metric scaling configuration
                     * 
                     */
                    void SetConfig(const CloudNativeAPIGatewayStrategyAutoScalerConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Scheduled scaling configuration
                     * @return CronScalerConfig Scheduled scaling configuration
                     * @deprecated
                     */
                    CloudNativeAPIGatewayStrategyCronScalerConfig GetCronScalerConfig() const;

                    /**
                     * 设置Scheduled scaling configuration
                     * @param _cronScalerConfig Scheduled scaling configuration
                     * @deprecated
                     */
                    void SetCronScalerConfig(const CloudNativeAPIGatewayStrategyCronScalerConfig& _cronScalerConfig);

                    /**
                     * 判断参数 CronScalerConfig 是否已赋值
                     * @return CronScalerConfig 是否已赋值
                     * @deprecated
                     */
                    bool CronScalerConfigHasBeenSet() const;

                    /**
                     * 获取Maximum number of nodes
                     * @return MaxReplicas Maximum number of nodes
                     * @deprecated
                     */
                    int64_t GetMaxReplicas() const;

                    /**
                     * 设置Maximum number of nodes
                     * @param _maxReplicas Maximum number of nodes
                     * @deprecated
                     */
                    void SetMaxReplicas(const int64_t& _maxReplicas);

                    /**
                     * 判断参数 MaxReplicas 是否已赋值
                     * @return MaxReplicas 是否已赋值
                     * @deprecated
                     */
                    bool MaxReplicasHasBeenSet() const;

                    /**
                     * 获取Metric scaling configuration
                     * @return CronConfig Metric scaling configuration
                     * 
                     */
                    CloudNativeAPIGatewayStrategyCronScalerConfig GetCronConfig() const;

                    /**
                     * 设置Metric scaling configuration
                     * @param _cronConfig Metric scaling configuration
                     * 
                     */
                    void SetCronConfig(const CloudNativeAPIGatewayStrategyCronScalerConfig& _cronConfig);

                    /**
                     * 判断参数 CronConfig 是否已赋值
                     * @return CronConfig 是否已赋值
                     * 
                     */
                    bool CronConfigHasBeenSet() const;

                private:

                    /**
                     * Gateway instance ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Policy ID
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * Policy name.
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * Policy description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Metric scaling configuration
                     */
                    CloudNativeAPIGatewayStrategyAutoScalerConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Scheduled scaling configuration
                     */
                    CloudNativeAPIGatewayStrategyCronScalerConfig m_cronScalerConfig;
                    bool m_cronScalerConfigHasBeenSet;

                    /**
                     * Maximum number of nodes
                     */
                    int64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                    /**
                     * Metric scaling configuration
                     */
                    CloudNativeAPIGatewayStrategyCronScalerConfig m_cronConfig;
                    bool m_cronConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYAUTOSCALERRESOURCESTRATEGYREQUEST_H_

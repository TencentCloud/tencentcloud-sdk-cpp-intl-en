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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGY_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Gateway instance policy
                */
                class CloudNativeAPIGatewayStrategy : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayStrategy();
                    ~CloudNativeAPIGatewayStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time
                     * @return ModifyTime Update time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Update time
                     * @param _modifyTime Update time
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

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
                     * 获取Auto scaling configuration
                     * @return Config Auto scaling configuration
                     * 
                     */
                    CloudNativeAPIGatewayStrategyAutoScalerConfig GetConfig() const;

                    /**
                     * 设置Auto scaling configuration
                     * @param _config Auto scaling configuration
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
                     * 获取Scheduled scaling configuration
                     * @return CronConfig Scheduled scaling configuration
                     * 
                     */
                    CloudNativeAPIGatewayStrategyCronScalerConfig GetCronConfig() const;

                    /**
                     * 设置Scheduled scaling configuration
                     * @param _cronConfig Scheduled scaling configuration
                     * 
                     */
                    void SetCronConfig(const CloudNativeAPIGatewayStrategyCronScalerConfig& _cronConfig);

                    /**
                     * 判断参数 CronConfig 是否已赋值
                     * @return CronConfig 是否已赋值
                     * 
                     */
                    bool CronConfigHasBeenSet() const;

                    /**
                     * 获取Maximum number of nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxReplicas Maximum number of nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    uint64_t GetMaxReplicas() const;

                    /**
                     * 设置Maximum number of nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxReplicas Maximum number of nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetMaxReplicas(const uint64_t& _maxReplicas);

                    /**
                     * 判断参数 MaxReplicas 是否已赋值
                     * @return MaxReplicas 是否已赋值
                     * @deprecated
                     */
                    bool MaxReplicasHasBeenSet() const;

                private:

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
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Policy description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Auto scaling configuration
                     */
                    CloudNativeAPIGatewayStrategyAutoScalerConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Gateway instance ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Scheduled scaling configuration
                     */
                    CloudNativeAPIGatewayStrategyCronScalerConfig m_cronConfig;
                    bool m_cronConfigHasBeenSet;

                    /**
                     * Maximum number of nodes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGY_H_

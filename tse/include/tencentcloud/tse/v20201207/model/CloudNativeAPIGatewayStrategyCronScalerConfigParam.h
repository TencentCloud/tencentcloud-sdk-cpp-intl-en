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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYCRONSCALERCONFIGPARAM_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYCRONSCALERCONFIGPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Scheduled scaling configuration parameter
                */
                class CloudNativeAPIGatewayStrategyCronScalerConfigParam : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayStrategyCronScalerConfigParam();
                    ~CloudNativeAPIGatewayStrategyCronScalerConfigParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scheduled scaling period
                     * @return Period Scheduled scaling period
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置Scheduled scaling period
                     * @param _period Scheduled scaling period
                     * 
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Start time of scheduled scaling
                     * @return StartAt Start time of scheduled scaling
                     * 
                     */
                    std::string GetStartAt() const;

                    /**
                     * 设置Start time of scheduled scaling
                     * @param _startAt Start time of scheduled scaling
                     * 
                     */
                    void SetStartAt(const std::string& _startAt);

                    /**
                     * 判断参数 StartAt 是否已赋值
                     * @return StartAt 是否已赋值
                     * 
                     */
                    bool StartAtHasBeenSet() const;

                    /**
                     * 获取Scheduled scaling target node count, no more than the maximum node count defined in metric scaling
                     * @return TargetReplicas Scheduled scaling target node count, no more than the maximum node count defined in metric scaling
                     * 
                     */
                    int64_t GetTargetReplicas() const;

                    /**
                     * 设置Scheduled scaling target node count, no more than the maximum node count defined in metric scaling
                     * @param _targetReplicas Scheduled scaling target node count, no more than the maximum node count defined in metric scaling
                     * 
                     */
                    void SetTargetReplicas(const int64_t& _targetReplicas);

                    /**
                     * 判断参数 TargetReplicas 是否已赋值
                     * @return TargetReplicas 是否已赋值
                     * 
                     */
                    bool TargetReplicasHasBeenSet() const;

                    /**
                     * 获取Scheduled scaling cron expression, no need to input
                     * @return Crontab Scheduled scaling cron expression, no need to input
                     * 
                     */
                    std::string GetCrontab() const;

                    /**
                     * 设置Scheduled scaling cron expression, no need to input
                     * @param _crontab Scheduled scaling cron expression, no need to input
                     * 
                     */
                    void SetCrontab(const std::string& _crontab);

                    /**
                     * 判断参数 Crontab 是否已赋值
                     * @return Crontab 是否已赋值
                     * 
                     */
                    bool CrontabHasBeenSet() const;

                private:

                    /**
                     * Scheduled scaling period
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Start time of scheduled scaling
                     */
                    std::string m_startAt;
                    bool m_startAtHasBeenSet;

                    /**
                     * Scheduled scaling target node count, no more than the maximum node count defined in metric scaling
                     */
                    int64_t m_targetReplicas;
                    bool m_targetReplicasHasBeenSet;

                    /**
                     * Scheduled scaling cron expression, no need to input
                     */
                    std::string m_crontab;
                    bool m_crontabHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYCRONSCALERCONFIGPARAM_H_

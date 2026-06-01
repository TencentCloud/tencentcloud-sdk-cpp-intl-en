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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_AUTOSTRATEGY_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_AUTOSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * CPU Elastic Scaling auto scale-out policy.
                */
                class AutoStrategy : public AbstractModel
                {
                public:
                    AutoStrategy();
                    ~AutoStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Auto scaling threshold. Available values: 40, 50, 60, 70, 80, 90. Represents the CPU utilization reaches 40%, 50%, 60%, 70%, 80%, or 90% to trigger auto scaling in the background.
                     * @return ExpandThreshold Auto scaling threshold. Available values: 40, 50, 60, 70, 80, 90. Represents the CPU utilization reaches 40%, 50%, 60%, 70%, 80%, or 90% to trigger auto scaling in the background.
                     * 
                     */
                    int64_t GetExpandThreshold() const;

                    /**
                     * 设置Auto scaling threshold. Available values: 40, 50, 60, 70, 80, 90. Represents the CPU utilization reaches 40%, 50%, 60%, 70%, 80%, or 90% to trigger auto scaling in the background.
                     * @param _expandThreshold Auto scaling threshold. Available values: 40, 50, 60, 70, 80, 90. Represents the CPU utilization reaches 40%, 50%, 60%, 70%, 80%, or 90% to trigger auto scaling in the background.
                     * 
                     */
                    void SetExpandThreshold(const int64_t& _expandThreshold);

                    /**
                     * 判断参数 ExpandThreshold 是否已赋值
                     * @return ExpandThreshold 是否已赋值
                     * 
                     */
                    bool ExpandThresholdHasBeenSet() const;

                    /**
                     * 获取CPU utilization threshold (percent value). Valid values: 10, 20, and 30. Automatic scale-in will be triggered when CPU utilization reaches the set threshold.
                     * @return ShrinkThreshold CPU utilization threshold (percent value). Valid values: 10, 20, and 30. Automatic scale-in will be triggered when CPU utilization reaches the set threshold.
                     * 
                     */
                    int64_t GetShrinkThreshold() const;

                    /**
                     * 设置CPU utilization threshold (percent value). Valid values: 10, 20, and 30. Automatic scale-in will be triggered when CPU utilization reaches the set threshold.
                     * @param _shrinkThreshold CPU utilization threshold (percent value). Valid values: 10, 20, and 30. Automatic scale-in will be triggered when CPU utilization reaches the set threshold.
                     * 
                     */
                    void SetShrinkThreshold(const int64_t& _shrinkThreshold);

                    /**
                     * 判断参数 ShrinkThreshold 是否已赋值
                     * @return ShrinkThreshold 是否已赋值
                     * 
                     */
                    bool ShrinkThresholdHasBeenSet() const;

                    /**
                     * 获取Auto-scaling observation period, in minutes, available values 1, 3, 5, 10, 15, 30. The backend will judge scaling out according to the configured period.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpandPeriod Auto-scaling observation period, in minutes, available values 1, 3, 5, 10, 15, 30. The backend will judge scaling out according to the configured period.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    int64_t GetExpandPeriod() const;

                    /**
                     * 设置Auto-scaling observation period, in minutes, available values 1, 3, 5, 10, 15, 30. The backend will judge scaling out according to the configured period.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _expandPeriod Auto-scaling observation period, in minutes, available values 1, 3, 5, 10, 15, 30. The backend will judge scaling out according to the configured period.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetExpandPeriod(const int64_t& _expandPeriod);

                    /**
                     * 判断参数 ExpandPeriod 是否已赋值
                     * @return ExpandPeriod 是否已赋值
                     * @deprecated
                     */
                    bool ExpandPeriodHasBeenSet() const;

                    /**
                     * 获取Automatic scaling down observation period, in minutes, available values 5, 10, 15, 30. The backend performs scale-in judgment according to the configured period.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ShrinkPeriod Automatic scaling down observation period, in minutes, available values 5, 10, 15, 30. The backend performs scale-in judgment according to the configured period.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    int64_t GetShrinkPeriod() const;

                    /**
                     * 设置Automatic scaling down observation period, in minutes, available values 5, 10, 15, 30. The backend performs scale-in judgment according to the configured period.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _shrinkPeriod Automatic scaling down observation period, in minutes, available values 5, 10, 15, 30. The backend performs scale-in judgment according to the configured period.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetShrinkPeriod(const int64_t& _shrinkPeriod);

                    /**
                     * 判断参数 ShrinkPeriod 是否已赋值
                     * @return ShrinkPeriod 是否已赋值
                     * @deprecated
                     */
                    bool ShrinkPeriodHasBeenSet() const;

                    /**
                     * 获取Elastic scaling observation period (in seconds). Value is 15, 30, 45, 60, 180, 300, 600, 900, or 1800.
                     * @return ExpandSecondPeriod Elastic scaling observation period (in seconds). Value is 15, 30, 45, 60, 180, 300, 600, 900, or 1800.
                     * 
                     */
                    int64_t GetExpandSecondPeriod() const;

                    /**
                     * 设置Elastic scaling observation period (in seconds). Value is 15, 30, 45, 60, 180, 300, 600, 900, or 1800.
                     * @param _expandSecondPeriod Elastic scaling observation period (in seconds). Value is 15, 30, 45, 60, 180, 300, 600, 900, or 1800.
                     * 
                     */
                    void SetExpandSecondPeriod(const int64_t& _expandSecondPeriod);

                    /**
                     * 判断参数 ExpandSecondPeriod 是否已赋值
                     * @return ExpandSecondPeriod 是否已赋值
                     * 
                     */
                    bool ExpandSecondPeriodHasBeenSet() const;

                    /**
                     * 获取Scale-down observation period (in seconds). Valid values: 300, 600, 900, 1800.
                     * @return ShrinkSecondPeriod Scale-down observation period (in seconds). Valid values: 300, 600, 900, 1800.
                     * 
                     */
                    int64_t GetShrinkSecondPeriod() const;

                    /**
                     * 设置Scale-down observation period (in seconds). Valid values: 300, 600, 900, 1800.
                     * @param _shrinkSecondPeriod Scale-down observation period (in seconds). Valid values: 300, 600, 900, 1800.
                     * 
                     */
                    void SetShrinkSecondPeriod(const int64_t& _shrinkSecondPeriod);

                    /**
                     * 判断参数 ShrinkSecondPeriod 是否已赋值
                     * @return ShrinkSecondPeriod 是否已赋值
                     * 
                     */
                    bool ShrinkSecondPeriodHasBeenSet() const;

                private:

                    /**
                     * Auto scaling threshold. Available values: 40, 50, 60, 70, 80, 90. Represents the CPU utilization reaches 40%, 50%, 60%, 70%, 80%, or 90% to trigger auto scaling in the background.
                     */
                    int64_t m_expandThreshold;
                    bool m_expandThresholdHasBeenSet;

                    /**
                     * CPU utilization threshold (percent value). Valid values: 10, 20, and 30. Automatic scale-in will be triggered when CPU utilization reaches the set threshold.
                     */
                    int64_t m_shrinkThreshold;
                    bool m_shrinkThresholdHasBeenSet;

                    /**
                     * Auto-scaling observation period, in minutes, available values 1, 3, 5, 10, 15, 30. The backend will judge scaling out according to the configured period.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_expandPeriod;
                    bool m_expandPeriodHasBeenSet;

                    /**
                     * Automatic scaling down observation period, in minutes, available values 5, 10, 15, 30. The backend performs scale-in judgment according to the configured period.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_shrinkPeriod;
                    bool m_shrinkPeriodHasBeenSet;

                    /**
                     * Elastic scaling observation period (in seconds). Value is 15, 30, 45, 60, 180, 300, 600, 900, or 1800.
                     */
                    int64_t m_expandSecondPeriod;
                    bool m_expandSecondPeriodHasBeenSet;

                    /**
                     * Scale-down observation period (in seconds). Valid values: 300, 600, 900, 1800.
                     */
                    int64_t m_shrinkSecondPeriod;
                    bool m_shrinkSecondPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_AUTOSTRATEGY_H_

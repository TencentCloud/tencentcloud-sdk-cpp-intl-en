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
                * Automatic scale-out policy for elastic CPU scale-out.
                */
                class AutoStrategy : public AbstractModel
                {
                public:
                    AutoStrategy();
                    ~AutoStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CPU utilization threshold (percent value). Valid values: 70, 80, and 90. Automatic scale-out will be triggered when CPU utilization reaches the set threshold.
                     * @return ExpandThreshold CPU utilization threshold (percent value). Valid values: 70, 80, and 90. Automatic scale-out will be triggered when CPU utilization reaches the set threshold.
                     * 
                     */
                    int64_t GetExpandThreshold() const;

                    /**
                     * 设置CPU utilization threshold (percent value). Valid values: 70, 80, and 90. Automatic scale-out will be triggered when CPU utilization reaches the set threshold.
                     * @param _expandThreshold CPU utilization threshold (percent value). Valid values: 70, 80, and 90. Automatic scale-out will be triggered when CPU utilization reaches the set threshold.
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
                     * 获取Interval, in seconds. Valid values: 1, 3, 5, 10, 15, and 30. The system backend determines whether automatic scale-out is required at the set interval.
                     * @return ExpandPeriod Interval, in seconds. Valid values: 1, 3, 5, 10, 15, and 30. The system backend determines whether automatic scale-out is required at the set interval.
                     * 
                     */
                    int64_t GetExpandPeriod() const;

                    /**
                     * 设置Interval, in seconds. Valid values: 1, 3, 5, 10, 15, and 30. The system backend determines whether automatic scale-out is required at the set interval.
                     * @param _expandPeriod Interval, in seconds. Valid values: 1, 3, 5, 10, 15, and 30. The system backend determines whether automatic scale-out is required at the set interval.
                     * 
                     */
                    void SetExpandPeriod(const int64_t& _expandPeriod);

                    /**
                     * 判断参数 ExpandPeriod 是否已赋值
                     * @return ExpandPeriod 是否已赋值
                     * 
                     */
                    bool ExpandPeriodHasBeenSet() const;

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
                     * 获取Interval, in seconds. Valid values: 5, 10, 15, and 30. The system backend determines whether automatic scale-in is required at the set interval.
                     * @return ShrinkPeriod Interval, in seconds. Valid values: 5, 10, 15, and 30. The system backend determines whether automatic scale-in is required at the set interval.
                     * 
                     */
                    int64_t GetShrinkPeriod() const;

                    /**
                     * 设置Interval, in seconds. Valid values: 5, 10, 15, and 30. The system backend determines whether automatic scale-in is required at the set interval.
                     * @param _shrinkPeriod Interval, in seconds. Valid values: 5, 10, 15, and 30. The system backend determines whether automatic scale-in is required at the set interval.
                     * 
                     */
                    void SetShrinkPeriod(const int64_t& _shrinkPeriod);

                    /**
                     * 判断参数 ShrinkPeriod 是否已赋值
                     * @return ShrinkPeriod 是否已赋值
                     * 
                     */
                    bool ShrinkPeriodHasBeenSet() const;

                private:

                    /**
                     * CPU utilization threshold (percent value). Valid values: 70, 80, and 90. Automatic scale-out will be triggered when CPU utilization reaches the set threshold.
                     */
                    int64_t m_expandThreshold;
                    bool m_expandThresholdHasBeenSet;

                    /**
                     * Interval, in seconds. Valid values: 1, 3, 5, 10, 15, and 30. The system backend determines whether automatic scale-out is required at the set interval.
                     */
                    int64_t m_expandPeriod;
                    bool m_expandPeriodHasBeenSet;

                    /**
                     * CPU utilization threshold (percent value). Valid values: 10, 20, and 30. Automatic scale-in will be triggered when CPU utilization reaches the set threshold.
                     */
                    int64_t m_shrinkThreshold;
                    bool m_shrinkThresholdHasBeenSet;

                    /**
                     * Interval, in seconds. Valid values: 5, 10, 15, and 30. The system backend determines whether automatic scale-in is required at the set interval.
                     */
                    int64_t m_shrinkPeriod;
                    bool m_shrinkPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_AUTOSTRATEGY_H_

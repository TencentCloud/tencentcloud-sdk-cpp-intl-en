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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_MIGRATEDETAILINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_MIGRATEDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/StepDetailInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * Information of the migration task execution process
                */
                class MigrateDetailInfo : public AbstractModel
                {
                public:
                    MigrateDetailInfo();
                    ~MigrateDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total number of steps
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepAll Total number of steps
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStepAll() const;

                    /**
                     * 设置Total number of steps
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepAll Total number of steps
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepAll(const uint64_t& _stepAll);

                    /**
                     * 判断参数 StepAll 是否已赋值
                     * @return StepAll 是否已赋值
                     * 
                     */
                    bool StepAllHasBeenSet() const;

                    /**
                     * 获取Current step
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepNow Current step
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStepNow() const;

                    /**
                     * 设置Current step
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepNow Current step
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepNow(const uint64_t& _stepNow);

                    /**
                     * 判断参数 StepNow 是否已赋值
                     * @return StepNow 是否已赋值
                     * 
                     */
                    bool StepNowHasBeenSet() const;

                    /**
                     * 获取Source-replica lag in MB. This parameter takes effect only when the task is normal and is in the last step of migration or sync (binlog sync). If it is invalid, `-1` will be returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MasterSlaveDistance Source-replica lag in MB. This parameter takes effect only when the task is normal and is in the last step of migration or sync (binlog sync). If it is invalid, `-1` will be returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMasterSlaveDistance() const;

                    /**
                     * 设置Source-replica lag in MB. This parameter takes effect only when the task is normal and is in the last step of migration or sync (binlog sync). If it is invalid, `-1` will be returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _masterSlaveDistance Source-replica lag in MB. This parameter takes effect only when the task is normal and is in the last step of migration or sync (binlog sync). If it is invalid, `-1` will be returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMasterSlaveDistance(const int64_t& _masterSlaveDistance);

                    /**
                     * 判断参数 MasterSlaveDistance 是否已赋值
                     * @return MasterSlaveDistance 是否已赋值
                     * 
                     */
                    bool MasterSlaveDistanceHasBeenSet() const;

                    /**
                     * 获取Source-replica lag in seconds. This parameter takes effect only when the task is normal and is in the last step of migration or sync (binlog sync). If it is invalid, `-1` will be returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SecondsBehindMaster Source-replica lag in seconds. This parameter takes effect only when the task is normal and is in the last step of migration or sync (binlog sync). If it is invalid, `-1` will be returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSecondsBehindMaster() const;

                    /**
                     * 设置Source-replica lag in seconds. This parameter takes effect only when the task is normal and is in the last step of migration or sync (binlog sync). If it is invalid, `-1` will be returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _secondsBehindMaster Source-replica lag in seconds. This parameter takes effect only when the task is normal and is in the last step of migration or sync (binlog sync). If it is invalid, `-1` will be returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSecondsBehindMaster(const int64_t& _secondsBehindMaster);

                    /**
                     * 判断参数 SecondsBehindMaster 是否已赋值
                     * @return SecondsBehindMaster 是否已赋值
                     * 
                     */
                    bool SecondsBehindMasterHasBeenSet() const;

                    /**
                     * 获取Step information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StepInfo Step information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<StepDetailInfo> GetStepInfo() const;

                    /**
                     * 设置Step information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _stepInfo Step information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStepInfo(const std::vector<StepDetailInfo>& _stepInfo);

                    /**
                     * 判断参数 StepInfo 是否已赋值
                     * @return StepInfo 是否已赋值
                     * 
                     */
                    bool StepInfoHasBeenSet() const;

                private:

                    /**
                     * Total number of steps
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_stepAll;
                    bool m_stepAllHasBeenSet;

                    /**
                     * Current step
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_stepNow;
                    bool m_stepNowHasBeenSet;

                    /**
                     * Source-replica lag in MB. This parameter takes effect only when the task is normal and is in the last step of migration or sync (binlog sync). If it is invalid, `-1` will be returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_masterSlaveDistance;
                    bool m_masterSlaveDistanceHasBeenSet;

                    /**
                     * Source-replica lag in seconds. This parameter takes effect only when the task is normal and is in the last step of migration or sync (binlog sync). If it is invalid, `-1` will be returned.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_secondsBehindMaster;
                    bool m_secondsBehindMasterHasBeenSet;

                    /**
                     * Step information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<StepDetailInfo> m_stepInfo;
                    bool m_stepInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_MIGRATEDETAILINFO_H_

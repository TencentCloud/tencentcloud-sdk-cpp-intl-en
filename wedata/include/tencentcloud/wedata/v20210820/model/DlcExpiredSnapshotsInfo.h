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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCEXPIREDSNAPSHOTSINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCEXPIREDSNAPSHOTSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Snapshot Expiration Governance Item
                */
                class DlcExpiredSnapshotsInfo : public AbstractModel
                {
                public:
                    DlcExpiredSnapshotsInfo();
                    ~DlcExpiredSnapshotsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable snapshot expiration governance: enable, none
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExpiredSnapshotsEnable Whether to enable snapshot expiration governance: enable, none
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExpiredSnapshotsEnable() const;

                    /**
                     * 设置Whether to enable snapshot expiration governance: enable, none
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _expiredSnapshotsEnable Whether to enable snapshot expiration governance: enable, none
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExpiredSnapshotsEnable(const std::string& _expiredSnapshotsEnable);

                    /**
                     * 判断参数 ExpiredSnapshotsEnable 是否已赋值
                     * @return ExpiredSnapshotsEnable 是否已赋值
                     * 
                     */
                    bool ExpiredSnapshotsEnableHasBeenSet() const;

                    /**
                     * 获取Name of the engine used to run snapshot expiration governance
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Engine Name of the engine used to run snapshot expiration governance
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置Name of the engine used to run snapshot expiration governance
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _engine Name of the engine used to run snapshot expiration governance
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取Number of recent snapshots to retain
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RetainLast Number of recent snapshots to retain
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRetainLast() const;

                    /**
                     * 设置Number of recent snapshots to retain
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _retainLast Number of recent snapshots to retain
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRetainLast(const uint64_t& _retainLast);

                    /**
                     * 判断参数 RetainLast 是否已赋值
                     * @return RetainLast 是否已赋值
                     * 
                     */
                    bool RetainLastHasBeenSet() const;

                    /**
                     * 获取Snapshots expired before specified days
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BeforeDays Snapshots expired before specified days
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetBeforeDays() const;

                    /**
                     * 设置Snapshots expired before specified days
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _beforeDays Snapshots expired before specified days
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetBeforeDays(const uint64_t& _beforeDays);

                    /**
                     * 判断参数 BeforeDays 是否已赋值
                     * @return BeforeDays 是否已赋值
                     * 
                     */
                    bool BeforeDaysHasBeenSet() const;

                    /**
                     * 获取Number of parallel processes for cleaning up expired snapshots
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MaxConcurrentDeletes Number of parallel processes for cleaning up expired snapshots
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetMaxConcurrentDeletes() const;

                    /**
                     * 设置Number of parallel processes for cleaning up expired snapshots
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _maxConcurrentDeletes Number of parallel processes for cleaning up expired snapshots
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMaxConcurrentDeletes(const uint64_t& _maxConcurrentDeletes);

                    /**
                     * 判断参数 MaxConcurrentDeletes 是否已赋值
                     * @return MaxConcurrentDeletes 是否已赋值
                     * 
                     */
                    bool MaxConcurrentDeletesHasBeenSet() const;

                    /**
                     * 获取Snapshot expiration governance run cycle, unit: minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return IntervalMin Snapshot expiration governance run cycle, unit: minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetIntervalMin() const;

                    /**
                     * 设置Snapshot expiration governance run cycle, unit: minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _intervalMin Snapshot expiration governance run cycle, unit: minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetIntervalMin(const uint64_t& _intervalMin);

                    /**
                     * 判断参数 IntervalMin 是否已赋值
                     * @return IntervalMin 是否已赋值
                     * 
                     */
                    bool IntervalMinHasBeenSet() const;

                private:

                    /**
                     * Whether to enable snapshot expiration governance: enable, none
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_expiredSnapshotsEnable;
                    bool m_expiredSnapshotsEnableHasBeenSet;

                    /**
                     * Name of the engine used to run snapshot expiration governance
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * Number of recent snapshots to retain
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_retainLast;
                    bool m_retainLastHasBeenSet;

                    /**
                     * Snapshots expired before specified days
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_beforeDays;
                    bool m_beforeDaysHasBeenSet;

                    /**
                     * Number of parallel processes for cleaning up expired snapshots
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_maxConcurrentDeletes;
                    bool m_maxConcurrentDeletesHasBeenSet;

                    /**
                     * Snapshot expiration governance run cycle, unit: minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_intervalMin;
                    bool m_intervalMinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCEXPIREDSNAPSHOTSINFO_H_

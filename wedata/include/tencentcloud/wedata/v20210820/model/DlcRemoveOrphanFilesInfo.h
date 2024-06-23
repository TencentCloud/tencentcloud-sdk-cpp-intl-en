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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCREMOVEORPHANFILESINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCREMOVEORPHANFILESINFO_H_

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
                * Remove Isolated Files Governance Item
                */
                class DlcRemoveOrphanFilesInfo : public AbstractModel
                {
                public:
                    DlcRemoveOrphanFilesInfo();
                    ~DlcRemoveOrphanFilesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Enable Removal of Isolated Files Governance Item: enable, none
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return RemoveOrphanFilesEnable Enable Removal of Isolated Files Governance Item: enable, none
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRemoveOrphanFilesEnable() const;

                    /**
                     * 设置Enable Removal of Isolated Files Governance Item: enable, none
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _removeOrphanFilesEnable Enable Removal of Isolated Files Governance Item: enable, none
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRemoveOrphanFilesEnable(const std::string& _removeOrphanFilesEnable);

                    /**
                     * 判断参数 RemoveOrphanFilesEnable 是否已赋值
                     * @return RemoveOrphanFilesEnable 是否已赋值
                     * 
                     */
                    bool RemoveOrphanFilesEnableHasBeenSet() const;

                    /**
                     * 获取Engine Name for Running Removal of Isolated Files Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Engine Engine Name for Running Removal of Isolated Files Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置Engine Name for Running Removal of Isolated Files Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _engine Engine Name for Running Removal of Isolated Files Governance Item
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
                     * 获取Remove Isolated Files Older Than Specified Days
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BeforeDays Remove Isolated Files Older Than Specified Days
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetBeforeDays() const;

                    /**
                     * 设置Remove Isolated Files Older Than Specified Days
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _beforeDays Remove Isolated Files Older Than Specified Days
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
                     * 获取Number of Concurrent Processes for Removing Isolated Files
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MaxConcurrentDeletes Number of Concurrent Processes for Removing Isolated Files
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetMaxConcurrentDeletes() const;

                    /**
                     * 设置Number of Concurrent Processes for Removing Isolated Files
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _maxConcurrentDeletes Number of Concurrent Processes for Removing Isolated Files
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
                     * 获取Isolated Files Governance Run Cycle, in minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return IntervalMin Isolated Files Governance Run Cycle, in minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetIntervalMin() const;

                    /**
                     * 设置Isolated Files Governance Run Cycle, in minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _intervalMin Isolated Files Governance Run Cycle, in minutes
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
                     * Enable Removal of Isolated Files Governance Item: enable, none
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_removeOrphanFilesEnable;
                    bool m_removeOrphanFilesEnableHasBeenSet;

                    /**
                     * Engine Name for Running Removal of Isolated Files Governance Item
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * Remove Isolated Files Older Than Specified Days
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_beforeDays;
                    bool m_beforeDaysHasBeenSet;

                    /**
                     * Number of Concurrent Processes for Removing Isolated Files
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_maxConcurrentDeletes;
                    bool m_maxConcurrentDeletesHasBeenSet;

                    /**
                     * Isolated Files Governance Run Cycle, in minutes
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_intervalMin;
                    bool m_intervalMinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCREMOVEORPHANFILESINFO_H_

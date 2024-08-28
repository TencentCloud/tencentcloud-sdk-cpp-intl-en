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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Baseline Information
                */
                class BaselineInfo : public AbstractModel
                {
                public:
                    BaselineInfo();
                    ~BaselineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Baseline name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Baseline name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Baseline name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Baseline name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Level Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _level Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Number of check items
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleCount Number of check items
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetRuleCount() const;

                    /**
                     * 设置Number of check items
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleCount Number of check items
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRuleCount(const uint64_t& _ruleCount);

                    /**
                     * 判断参数 RuleCount 是否已赋值
                     * @return RuleCount 是否已赋值
                     * 
                     */
                    bool RuleCountHasBeenSet() const;

                    /**
                     * 获取Number of affected servers
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostCount Number of affected servers
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetHostCount() const;

                    /**
                     * 设置Number of affected servers
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostCount Number of affected servers
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostCount(const uint64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取Pass status. 0: passed; 1: failed.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Pass status. 0: passed; 1: failed.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Pass status. 0: passed; 1: failed.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Pass status. 0: passed; 1: failed.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Baseline ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CategoryId Baseline ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCategoryId() const;

                    /**
                     * 设置Baseline ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _categoryId Baseline ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCategoryId(const uint64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastScanTime Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastScanTime Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取5: checking
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxStatus 5: checking
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetMaxStatus() const;

                    /**
                     * 设置5: checking
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxStatus 5: checking
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxStatus(const uint64_t& _maxStatus);

                    /**
                     * 判断参数 MaxStatus 是否已赋值
                     * @return MaxStatus 是否已赋值
                     * 
                     */
                    bool MaxStatusHasBeenSet() const;

                    /**
                     * 获取Baseline check items with risks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BaselineFailCount Baseline check items with risks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetBaselineFailCount() const;

                    /**
                     * 设置Baseline check items with risks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _baselineFailCount Baseline check items with risks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBaselineFailCount(const uint64_t& _baselineFailCount);

                    /**
                     * 判断参数 BaselineFailCount 是否已赋值
                     * @return BaselineFailCount 是否已赋值
                     * 
                     */
                    bool BaselineFailCountHasBeenSet() const;

                private:

                    /**
                     * Baseline name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Hazard level: 1-Low-risk; 2-Medium-risk; 3-High-risk; 4-Critical
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Number of check items
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_ruleCount;
                    bool m_ruleCountHasBeenSet;

                    /**
                     * Number of affected servers
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * Pass status. 0: passed; 1: failed.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Baseline ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * Last check time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * 5: checking
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxStatus;
                    bool m_maxStatusHasBeenSet;

                    /**
                     * Baseline check items with risks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_baselineFailCount;
                    bool m_baselineFailCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEINFO_H_

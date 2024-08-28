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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCEOVERVIEW_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCEOVERVIEW_H_

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
                * Vulnerability defense trend page, which includes plugin status and attack defense trends. Trends are stored in three arrays of equal length, with elements corresponding one-to-one. If a certain day is missed, there will be missing data.
                */
                class VulDefenceOverview : public AbstractModel
                {
                public:
                    VulDefenceOverview();
                    ~VulDefenceOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Defense switch: 0 - disable; 1 - enable
                     * @return Enable Defense switch: 0 - disable; 1 - enable
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置Defense switch: 0 - disable; 1 - enable
                     * @param _enable Defense switch: 0 - disable; 1 - enable
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Number of hosts with defense enabled
                     * @return DefendHostCount Number of hosts with defense enabled
                     * 
                     */
                    int64_t GetDefendHostCount() const;

                    /**
                     * 设置Number of hosts with defense enabled
                     * @param _defendHostCount Number of hosts with defense enabled
                     * 
                     */
                    void SetDefendHostCount(const int64_t& _defendHostCount);

                    /**
                     * 判断参数 DefendHostCount 是否已赋值
                     * @return DefendHostCount 是否已赋值
                     * 
                     */
                    bool DefendHostCountHasBeenSet() const;

                    /**
                     * 获取Number of plugin exceptions
                     * @return ExceptionCount Number of plugin exceptions
                     * 
                     */
                    int64_t GetExceptionCount() const;

                    /**
                     * 设置Number of plugin exceptions
                     * @param _exceptionCount Number of plugin exceptions
                     * 
                     */
                    void SetExceptionCount(const int64_t& _exceptionCount);

                    /**
                     * 判断参数 ExceptionCount 是否已赋值
                     * @return ExceptionCount 是否已赋值
                     * 
                     */
                    bool ExceptionCountHasBeenSet() const;

                    /**
                     * 获取Daily attack trends
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackCounts Daily attack trends
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetAttackCounts() const;

                    /**
                     * 设置Daily attack trends
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _attackCounts Daily attack trends
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttackCounts(const std::vector<int64_t>& _attackCounts);

                    /**
                     * 判断参数 AttackCounts 是否已赋值
                     * @return AttackCounts 是否已赋值
                     * 
                     */
                    bool AttackCountsHasBeenSet() const;

                    /**
                     * 获取Daily defense trends
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefendCounts Daily defense trends
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetDefendCounts() const;

                    /**
                     * 设置Daily defense trends
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defendCounts Daily defense trends
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDefendCounts(const std::vector<int64_t>& _defendCounts);

                    /**
                     * 判断参数 DefendCounts 是否已赋值
                     * @return DefendCounts 是否已赋值
                     * 
                     */
                    bool DefendCountsHasBeenSet() const;

                    /**
                     * 获取Date
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Date Date
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetDate() const;

                    /**
                     * 设置Date
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _date Date
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDate(const std::vector<std::string>& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                private:

                    /**
                     * Defense switch: 0 - disable; 1 - enable
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Number of hosts with defense enabled
                     */
                    int64_t m_defendHostCount;
                    bool m_defendHostCountHasBeenSet;

                    /**
                     * Number of plugin exceptions
                     */
                    int64_t m_exceptionCount;
                    bool m_exceptionCountHasBeenSet;

                    /**
                     * Daily attack trends
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_attackCounts;
                    bool m_attackCountsHasBeenSet;

                    /**
                     * Daily defense trends
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_defendCounts;
                    bool m_defendCountsHasBeenSet;

                    /**
                     * Date
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_date;
                    bool m_dateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCEOVERVIEW_H_

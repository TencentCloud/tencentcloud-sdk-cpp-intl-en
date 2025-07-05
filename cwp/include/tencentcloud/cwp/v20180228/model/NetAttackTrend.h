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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKTREND_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKTREND_H_

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
                * Attack trend statistics
                */
                class NetAttackTrend : public AbstractModel
                {
                public:
                    NetAttackTrend();
                    ~NetAttackTrend() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time Point, e.g., 2023-05-06
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DateTime Time Point, e.g., 2023-05-06
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDateTime() const;

                    /**
                     * 设置Time Point, e.g., 2023-05-06
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dateTime Time Point, e.g., 2023-05-06
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDateTime(const std::string& _dateTime);

                    /**
                     * 判断参数 DateTime 是否已赋值
                     * @return DateTime 是否已赋值
                     * 
                     */
                    bool DateTimeHasBeenSet() const;

                    /**
                     * 获取Number of attacks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AttackCount Number of attacks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAttackCount() const;

                    /**
                     * 设置Number of attacks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _attackCount Number of attacks
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAttackCount(const uint64_t& _attackCount);

                    /**
                     * 判断参数 AttackCount 是否已赋值
                     * @return AttackCount 是否已赋值
                     * 
                     */
                    bool AttackCountHasBeenSet() const;

                    /**
                     * 获取Attack Attempts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TryAttackCount Attack Attempts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTryAttackCount() const;

                    /**
                     * 设置Attack Attempts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tryAttackCount Attack Attempts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTryAttackCount(const uint64_t& _tryAttackCount);

                    /**
                     * 判断参数 TryAttackCount 是否已赋值
                     * @return TryAttackCount 是否已赋值
                     * 
                     */
                    bool TryAttackCountHasBeenSet() const;

                    /**
                     * 获取Attack Success Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SuccAttackCount Attack Success Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSuccAttackCount() const;

                    /**
                     * 设置Attack Success Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _succAttackCount Attack Success Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSuccAttackCount(const uint64_t& _succAttackCount);

                    /**
                     * 判断参数 SuccAttackCount 是否已赋值
                     * @return SuccAttackCount 是否已赋值
                     * 
                     */
                    bool SuccAttackCountHasBeenSet() const;

                private:

                    /**
                     * Time Point, e.g., 2023-05-06
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dateTime;
                    bool m_dateTimeHasBeenSet;

                    /**
                     * Number of attacks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_attackCount;
                    bool m_attackCountHasBeenSet;

                    /**
                     * Attack Attempts
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_tryAttackCount;
                    bool m_tryAttackCountHasBeenSet;

                    /**
                     * Attack Success Count
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_succAttackCount;
                    bool m_succAttackCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_NETATTACKTREND_H_

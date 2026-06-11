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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ALARMSHIELDCOUNT_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ALARMSHIELDCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Alarm silence statistics.
                */
                class AlarmShieldCount : public AbstractModel
                {
                public:
                    AlarmShieldCount();
                    ~AlarmShieldCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total number of alarm silence policies that meet the search conditions.
                     * @return TotalCount Total number of alarm silence policies that meet the search conditions.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Total number of alarm silence policies that meet the search conditions.
                     * @param _totalCount Total number of alarm silence policies that meet the search conditions.
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Number of ineffective alarm silence policies.
                     * @return InvalidCount Number of ineffective alarm silence policies.
                     * 
                     */
                    uint64_t GetInvalidCount() const;

                    /**
                     * 设置Number of ineffective alarm silence policies.
                     * @param _invalidCount Number of ineffective alarm silence policies.
                     * 
                     */
                    void SetInvalidCount(const uint64_t& _invalidCount);

                    /**
                     * 判断参数 InvalidCount 是否已赋值
                     * @return InvalidCount 是否已赋值
                     * 
                     */
                    bool InvalidCountHasBeenSet() const;

                    /**
                     * 获取Number of effective alarm silence policies.
                     * @return ValidCount Number of effective alarm silence policies.
                     * 
                     */
                    uint64_t GetValidCount() const;

                    /**
                     * 设置Number of effective alarm silence policies.
                     * @param _validCount Number of effective alarm silence policies.
                     * 
                     */
                    void SetValidCount(const uint64_t& _validCount);

                    /**
                     * 判断参数 ValidCount 是否已赋值
                     * @return ValidCount 是否已赋值
                     * 
                     */
                    bool ValidCountHasBeenSet() const;

                    /**
                     * 获取Number of expired alarm silence policies.
                     * @return ExpireCount Number of expired alarm silence policies.
                     * 
                     */
                    uint64_t GetExpireCount() const;

                    /**
                     * 设置Number of expired alarm silence policies.
                     * @param _expireCount Number of expired alarm silence policies.
                     * 
                     */
                    void SetExpireCount(const uint64_t& _expireCount);

                    /**
                     * 判断参数 ExpireCount 是否已赋值
                     * @return ExpireCount 是否已赋值
                     * 
                     */
                    bool ExpireCountHasBeenSet() const;

                private:

                    /**
                     * Total number of alarm silence policies that meet the search conditions.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Number of ineffective alarm silence policies.
                     */
                    uint64_t m_invalidCount;
                    bool m_invalidCountHasBeenSet;

                    /**
                     * Number of effective alarm silence policies.
                     */
                    uint64_t m_validCount;
                    bool m_validCountHasBeenSet;

                    /**
                     * Number of expired alarm silence policies.
                     */
                    uint64_t m_expireCount;
                    bool m_expireCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ALARMSHIELDCOUNT_H_

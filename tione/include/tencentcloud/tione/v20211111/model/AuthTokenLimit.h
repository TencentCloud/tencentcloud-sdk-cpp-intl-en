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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_AUTHTOKENLIMIT_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_AUTHTOKENLIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * AuthToken throttling information.
                */
                class AuthTokenLimit : public AbstractModel
                {
                public:
                    AuthTokenLimit();
                    ~AuthTokenLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Frequency limit policy. Valid values: PerMinute (frequency limit per minute) and PerDay (daily frequency limit).
                     * @return Strategy Frequency limit policy. Valid values: PerMinute (frequency limit per minute) and PerDay (daily frequency limit).
                     * 
                     */
                    std::string GetStrategy() const;

                    /**
                     * 设置Frequency limit policy. Valid values: PerMinute (frequency limit per minute) and PerDay (daily frequency limit).
                     * @param _strategy Frequency limit policy. Valid values: PerMinute (frequency limit per minute) and PerDay (daily frequency limit).
                     * 
                     */
                    void SetStrategy(const std::string& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取Upper limit.
                     * @return Max Upper limit.
                     * 
                     */
                    uint64_t GetMax() const;

                    /**
                     * 设置Upper limit.
                     * @param _max Upper limit.
                     * 
                     */
                    void SetMax(const uint64_t& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                private:

                    /**
                     * Frequency limit policy. Valid values: PerMinute (frequency limit per minute) and PerDay (daily frequency limit).
                     */
                    std::string m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * Upper limit.
                     */
                    uint64_t m_max;
                    bool m_maxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_AUTHTOKENLIMIT_H_

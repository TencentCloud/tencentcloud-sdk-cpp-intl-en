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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCEUSAGES_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCEUSAGES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Anti-DDoS Pro instance usage statistics
                */
                class BGPInstanceUsages : public AbstractModel
                {
                public:
                    BGPInstanceUsages();
                    ~BGPInstanceUsages() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of used protection chances
                     * @return ProtectCountUsage Number of used protection chances
                     * 
                     */
                    uint64_t GetProtectCountUsage() const;

                    /**
                     * 设置Number of used protection chances
                     * @param _protectCountUsage Number of used protection chances
                     * 
                     */
                    void SetProtectCountUsage(const uint64_t& _protectCountUsage);

                    /**
                     * 判断参数 ProtectCountUsage 是否已赋值
                     * @return ProtectCountUsage 是否已赋值
                     * 
                     */
                    bool ProtectCountUsageHasBeenSet() const;

                    /**
                     * 获取Number of protected IPs
                     * @return ProtectIPNumberUsage Number of protected IPs
                     * 
                     */
                    uint64_t GetProtectIPNumberUsage() const;

                    /**
                     * 设置Number of protected IPs
                     * @param _protectIPNumberUsage Number of protected IPs
                     * 
                     */
                    void SetProtectIPNumberUsage(const uint64_t& _protectIPNumberUsage);

                    /**
                     * 判断参数 ProtectIPNumberUsage 是否已赋值
                     * @return ProtectIPNumberUsage 是否已赋值
                     * 
                     */
                    bool ProtectIPNumberUsageHasBeenSet() const;

                    /**
                     * 获取Number of attack times in the last 7 days
                     * @return Last7DayAttackCount Number of attack times in the last 7 days
                     * 
                     */
                    uint64_t GetLast7DayAttackCount() const;

                    /**
                     * 设置Number of attack times in the last 7 days
                     * @param _last7DayAttackCount Number of attack times in the last 7 days
                     * 
                     */
                    void SetLast7DayAttackCount(const uint64_t& _last7DayAttackCount);

                    /**
                     * 判断参数 Last7DayAttackCount 是否已赋值
                     * @return Last7DayAttackCount 是否已赋值
                     * 
                     */
                    bool Last7DayAttackCountHasBeenSet() const;

                private:

                    /**
                     * Number of used protection chances
                     */
                    uint64_t m_protectCountUsage;
                    bool m_protectCountUsageHasBeenSet;

                    /**
                     * Number of protected IPs
                     */
                    uint64_t m_protectIPNumberUsage;
                    bool m_protectIPNumberUsageHasBeenSet;

                    /**
                     * Number of attack times in the last 7 days
                     */
                    uint64_t m_last7DayAttackCount;
                    bool m_last7DayAttackCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCEUSAGES_H_

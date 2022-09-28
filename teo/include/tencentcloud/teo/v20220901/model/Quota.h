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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_QUOTA_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_QUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Purging/Pre-warming available usage and quota
                */
                class Quota : public AbstractModel
                {
                public:
                    Quota();
                    ~Quota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Batch 
                     */
                    int64_t GetBatch() const;

                    /**
                     * 设置
                     * @param Batch 
                     */
                    void SetBatch(const int64_t& _batch);

                    /**
                     * 判断参数 Batch 是否已赋值
                     * @return Batch 是否已赋值
                     */
                    bool BatchHasBeenSet() const;

                    /**
                     * 获取Daily submission quota limit.
                     * @return Daily Daily submission quota limit.
                     */
                    int64_t GetDaily() const;

                    /**
                     * 设置Daily submission quota limit.
                     * @param Daily Daily submission quota limit.
                     */
                    void SetDaily(const int64_t& _daily);

                    /**
                     * 判断参数 Daily 是否已赋值
                     * @return Daily 是否已赋值
                     */
                    bool DailyHasBeenSet() const;

                    /**
                     * 获取Remaining daily submission quota.
                     * @return DailyAvailable Remaining daily submission quota.
                     */
                    int64_t GetDailyAvailable() const;

                    /**
                     * 设置Remaining daily submission quota.
                     * @param DailyAvailable Remaining daily submission quota.
                     */
                    void SetDailyAvailable(const int64_t& _dailyAvailable);

                    /**
                     * 判断参数 DailyAvailable 是否已赋值
                     * @return DailyAvailable 是否已赋值
                     */
                    bool DailyAvailableHasBeenSet() const;

                    /**
                     * 获取Quota type. Values:
<li>`purge_prefix`: Purge prefixes;</li>
<li>`purge_url`: Purge URLs;</li>
<li>`purge_host`: Purge hostnames;</li>
<li>`purge_all`: Purge all caches.</li>
                     * @return Type Quota type. Values:
<li>`purge_prefix`: Purge prefixes;</li>
<li>`purge_url`: Purge URLs;</li>
<li>`purge_host`: Purge hostnames;</li>
<li>`purge_all`: Purge all caches.</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置Quota type. Values:
<li>`purge_prefix`: Purge prefixes;</li>
<li>`purge_url`: Purge URLs;</li>
<li>`purge_host`: Purge hostnames;</li>
<li>`purge_all`: Purge all caches.</li>
                     * @param Type Quota type. Values:
<li>`purge_prefix`: Purge prefixes;</li>
<li>`purge_url`: Purge URLs;</li>
<li>`purge_host`: Purge hostnames;</li>
<li>`purge_all`: Purge all caches.</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    int64_t m_batch;
                    bool m_batchHasBeenSet;

                    /**
                     * Daily submission quota limit.
                     */
                    int64_t m_daily;
                    bool m_dailyHasBeenSet;

                    /**
                     * Remaining daily submission quota.
                     */
                    int64_t m_dailyAvailable;
                    bool m_dailyAvailableHasBeenSet;

                    /**
                     * Quota type. Values:
<li>`purge_prefix`: Purge prefixes;</li>
<li>`purge_url`: Purge URLs;</li>
<li>`purge_host`: Purge hostnames;</li>
<li>`purge_all`: Purge all caches.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_QUOTA_H_

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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQTRANSACTIONPOLICY_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQTRANSACTIONPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * cmq TransactionPolicy
                */
                class CmqTransactionPolicy : public AbstractModel
                {
                public:
                    CmqTransactionPolicy();
                    ~CmqTransactionPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取First recheck time.
                     * @return FirstQueryInterval First recheck time.
                     * 
                     */
                    uint64_t GetFirstQueryInterval() const;

                    /**
                     * 设置First recheck time.
                     * @param _firstQueryInterval First recheck time.
                     * 
                     */
                    void SetFirstQueryInterval(const uint64_t& _firstQueryInterval);

                    /**
                     * 判断参数 FirstQueryInterval 是否已赋值
                     * @return FirstQueryInterval 是否已赋值
                     * 
                     */
                    bool FirstQueryIntervalHasBeenSet() const;

                    /**
                     * 获取Maximum query times.
                     * @return MaxQueryCount Maximum query times.
                     * 
                     */
                    uint64_t GetMaxQueryCount() const;

                    /**
                     * 设置Maximum query times.
                     * @param _maxQueryCount Maximum query times.
                     * 
                     */
                    void SetMaxQueryCount(const uint64_t& _maxQueryCount);

                    /**
                     * 判断参数 MaxQueryCount 是否已赋值
                     * @return MaxQueryCount 是否已赋值
                     * 
                     */
                    bool MaxQueryCountHasBeenSet() const;

                private:

                    /**
                     * First recheck time.
                     */
                    uint64_t m_firstQueryInterval;
                    bool m_firstQueryIntervalHasBeenSet;

                    /**
                     * Maximum query times.
                     */
                    uint64_t m_maxQueryCount;
                    bool m_maxQueryCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CMQTRANSACTIONPOLICY_H_

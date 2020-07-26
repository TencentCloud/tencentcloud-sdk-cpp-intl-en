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

#ifndef TENCENTCLOUD_CMQ_V20190304_MODEL_TRANSACTIONPOLICY_H_
#define TENCENTCLOUD_CMQ_V20190304_MODEL_TRANSACTIONPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cmq
    {
        namespace V20190304
        {
            namespace Model
            {
                /**
                * TransactionPolicy
                */
                class TransactionPolicy : public AbstractModel
                {
                public:
                    TransactionPolicy();
                    ~TransactionPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取FirstQueryInterval
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FirstQueryInterval FirstQueryInterval
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetFirstQueryInterval() const;

                    /**
                     * 设置FirstQueryInterval
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param FirstQueryInterval FirstQueryInterval
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFirstQueryInterval(const uint64_t& _firstQueryInterval);

                    /**
                     * 判断参数 FirstQueryInterval 是否已赋值
                     * @return FirstQueryInterval 是否已赋值
                     */
                    bool FirstQueryIntervalHasBeenSet() const;

                    /**
                     * 获取MaxQueryCount
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxQueryCount MaxQueryCount
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetMaxQueryCount() const;

                    /**
                     * 设置MaxQueryCount
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MaxQueryCount MaxQueryCount
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMaxQueryCount(const uint64_t& _maxQueryCount);

                    /**
                     * 判断参数 MaxQueryCount 是否已赋值
                     * @return MaxQueryCount 是否已赋值
                     */
                    bool MaxQueryCountHasBeenSet() const;

                private:

                    /**
                     * FirstQueryInterval
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_firstQueryInterval;
                    bool m_firstQueryIntervalHasBeenSet;

                    /**
                     * MaxQueryCount
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_maxQueryCount;
                    bool m_maxQueryCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_MODEL_TRANSACTIONPOLICY_H_

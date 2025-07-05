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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHRESULTDS_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHRESULTDS_H_

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
                * Batch execution result.
                */
                class BatchResultDs : public AbstractModel
                {
                public:
                    BatchResultDs();
                    ~BatchResultDs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of successes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Success Number of successes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSuccess() const;

                    /**
                     * 设置Number of successes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _success Number of successes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSuccess(const int64_t& _success);

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                    /**
                     * 获取Failure count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Failed Failure count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFailed() const;

                    /**
                     * 设置Failure count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _failed Failure count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFailed(const int64_t& _failed);

                    /**
                     * 判断参数 Failed 是否已赋值
                     * @return Failed 是否已赋值
                     * 
                     */
                    bool FailedHasBeenSet() const;

                    /**
                     * 获取Total.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Total Total.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置Total.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _total Total.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * Number of successes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_success;
                    bool m_successHasBeenSet;

                    /**
                     * Failure count.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_failed;
                    bool m_failedHasBeenSet;

                    /**
                     * Total.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHRESULTDS_H_

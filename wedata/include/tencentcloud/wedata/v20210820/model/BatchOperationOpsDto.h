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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHOPERATIONOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHOPERATIONOPSDTO_H_

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
                * Batch operation result return
                */
                class BatchOperationOpsDto : public AbstractModel
                {
                public:
                    BatchOperationOpsDto();
                    ~BatchOperationOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of successful batch operations
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SuccessCount Number of successful batch operations
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置Number of successful batch operations
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _successCount Number of successful batch operations
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSuccessCount(const int64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取Number of failed batch operations
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FailedCount Number of failed batch operations
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetFailedCount() const;

                    /**
                     * 设置Number of failed batch operations
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _failedCount Number of failed batch operations
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFailedCount(const int64_t& _failedCount);

                    /**
                     * 判断参数 FailedCount 是否已赋值
                     * @return FailedCount 是否已赋值
                     * 
                     */
                    bool FailedCountHasBeenSet() const;

                    /**
                     * 获取Total number of batch operations
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalCount Total number of batch operations
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total number of batch operations
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _totalCount Total number of batch operations
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Number of successful batch operations
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * Number of failed batch operations
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_failedCount;
                    bool m_failedCountHasBeenSet;

                    /**
                     * Total number of batch operations
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHOPERATIONOPSDTO_H_

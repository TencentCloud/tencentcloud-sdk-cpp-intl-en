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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/FailMessage.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Batch Operation Result, with Failure Reason
                */
                class BatchOpsDTO : public AbstractModel
                {
                public:
                    BatchOpsDTO();
                    ~BatchOpsDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalCount Total Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _totalCount Total Quantity
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

                    /**
                     * 获取Success count
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SuccessCount Success count
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置Success count
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _successCount Success count
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
                     * 获取Failure count
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FailCount Failure count
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetFailCount() const;

                    /**
                     * 设置Failure count
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _failCount Failure count
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFailCount(const int64_t& _failCount);

                    /**
                     * 判断参数 FailCount 是否已赋值
                     * @return FailCount 是否已赋值
                     * 
                     */
                    bool FailCountHasBeenSet() const;

                    /**
                     * 获取Failure reason
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FailMessageList Failure reason
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<FailMessage> GetFailMessageList() const;

                    /**
                     * 设置Failure reason
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _failMessageList Failure reason
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFailMessageList(const std::vector<FailMessage>& _failMessageList);

                    /**
                     * 判断参数 FailMessageList 是否已赋值
                     * @return FailMessageList 是否已赋值
                     * 
                     */
                    bool FailMessageListHasBeenSet() const;

                private:

                    /**
                     * Total Quantity
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Success count
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * Failure count
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * Failure reason
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<FailMessage> m_failMessageList;
                    bool m_failMessageListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHOPSDTO_H_

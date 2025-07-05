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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHUPDATEINTEGRATIONTASKSRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHUPDATEINTEGRATIONTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * BatchUpdateIntegrationTasks response structure.
                */
                class BatchUpdateIntegrationTasksResponse : public AbstractModel
                {
                public:
                    BatchUpdateIntegrationTasksResponse();
                    ~BatchUpdateIntegrationTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of Successful Operations
                     * @return SuccessCount Number of Successful Operations
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取Number of Failed Operations
                     * @return FailedCount Number of Failed Operations
                     * 
                     */
                    int64_t GetFailedCount() const;

                    /**
                     * 判断参数 FailedCount 是否已赋值
                     * @return FailedCount 是否已赋值
                     * 
                     */
                    bool FailedCountHasBeenSet() const;

                    /**
                     * 获取Total Number of Tasks
                     * @return TotalCount Total Number of Tasks
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Number of Successful Operations
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * Number of Failed Operations
                     */
                    int64_t m_failedCount;
                    bool m_failedCountHasBeenSet;

                    /**
                     * Total Number of Tasks
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHUPDATEINTEGRATIONTASKSRESPONSE_H_

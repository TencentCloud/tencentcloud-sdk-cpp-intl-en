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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEMIGRATIONTASKSRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEMIGRATIONTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/MigrationTaskInfo.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeMigrationTasks response structure.
                */
                class DescribeMigrationTasksResponse : public AbstractModel
                {
                public:
                    DescribeMigrationTasksResponse();
                    ~DescribeMigrationTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of migration tasks
                     * @return TotalCount Number of migration tasks
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Migration task details
                     * @return MigrationTasks Migration task details
                     * 
                     */
                    std::vector<MigrationTaskInfo> GetMigrationTasks() const;

                    /**
                     * 判断参数 MigrationTasks 是否已赋值
                     * @return MigrationTasks 是否已赋值
                     * 
                     */
                    bool MigrationTasksHasBeenSet() const;

                private:

                    /**
                     * Number of migration tasks
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Migration task details
                     */
                    std::vector<MigrationTaskInfo> m_migrationTasks;
                    bool m_migrationTasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEMIGRATIONTASKSRESPONSE_H_

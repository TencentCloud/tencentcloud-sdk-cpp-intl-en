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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYSYNCTASKATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYSYNCTASKATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifySyncTaskAttribute request structure.
                */
                class ModifySyncTaskAttributeRequest : public AbstractModel
                {
                public:
                    ModifySyncTaskAttributeRequest();
                    ~ModifySyncTaskAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IDs of tasks for which to modify the attributes. The IDs can be obtained by the return value of the `DescribeSyncTasks` API. Up to 100 tasks can be operated at a time.
                     * @return TaskIds IDs of tasks for which to modify the attributes. The IDs can be obtained by the return value of the `DescribeSyncTasks` API. Up to 100 tasks can be operated at a time.
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置IDs of tasks for which to modify the attributes. The IDs can be obtained by the return value of the `DescribeSyncTasks` API. Up to 100 tasks can be operated at a time.
                     * @param _taskIds IDs of tasks for which to modify the attributes. The IDs can be obtained by the return value of the `DescribeSyncTasks` API. Up to 100 tasks can be operated at a time.
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取Task name. You can specify any name you like, but its length cannot exceed 100 characters.
                     * @return TaskName Task name. You can specify any name you like, but its length cannot exceed 100 characters.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name. You can specify any name you like, but its length cannot exceed 100 characters.
                     * @param _taskName Task name. You can specify any name you like, but its length cannot exceed 100 characters.
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                private:

                    /**
                     * IDs of tasks for which to modify the attributes. The IDs can be obtained by the return value of the `DescribeSyncTasks` API. Up to 100 tasks can be operated at a time.
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * Task name. You can specify any name you like, but its length cannot exceed 100 characters.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYSYNCTASKATTRIBUTEREQUEST_H_

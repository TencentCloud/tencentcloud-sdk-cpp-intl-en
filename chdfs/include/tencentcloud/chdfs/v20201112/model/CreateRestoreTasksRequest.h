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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATERESTORETASKSREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATERESTORETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chdfs/v20201112/model/RestoreTask.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * CreateRestoreTasks request structure.
                */
                class CreateRestoreTasksRequest : public AbstractModel
                {
                public:
                    CreateRestoreTasksRequest();
                    ~CreateRestoreTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取File system ID
                     * @return FileSystemId File system ID
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置File system ID
                     * @param FileSystemId File system ID
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取Multiple restoration tasks (up to 10)
                     * @return RestoreTasks Multiple restoration tasks (up to 10)
                     */
                    std::vector<RestoreTask> GetRestoreTasks() const;

                    /**
                     * 设置Multiple restoration tasks (up to 10)
                     * @param RestoreTasks Multiple restoration tasks (up to 10)
                     */
                    void SetRestoreTasks(const std::vector<RestoreTask>& _restoreTasks);

                    /**
                     * 判断参数 RestoreTasks 是否已赋值
                     * @return RestoreTasks 是否已赋值
                     */
                    bool RestoreTasksHasBeenSet() const;

                private:

                    /**
                     * File system ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * Multiple restoration tasks (up to 10)
                     */
                    std::vector<RestoreTask> m_restoreTasks;
                    bool m_restoreTasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATERESTORETASKSREQUEST_H_

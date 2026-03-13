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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATELIFECYCLEDATATASKREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATELIFECYCLEDATATASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateLifecycleDataTask request structure.
                */
                class CreateLifecycleDataTaskRequest : public AbstractModel
                {
                public:
                    CreateLifecycleDataTaskRequest();
                    ~CreateLifecycleDataTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取File system unique ID.
                     * @return FileSystemId File system unique ID.
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置File system unique ID.
                     * @param _fileSystemId File system unique ID.
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取Lifecycle task type; archive: settlement; restore: preheating; release: data release; metaload: metadata loading.
                     * @return Type Lifecycle task type; archive: settlement; restore: preheating; release: data release; metaload: metadata loading.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Lifecycle task type; archive: settlement; restore: preheating; release: data release; metaload: metadata loading.
                     * @param _type Lifecycle task type; archive: settlement; restore: preheating; release: data release; metaload: metadata loading.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The path or file to be settled supports passing only one path and cannot be empty.
                     * @return TaskPath The path or file to be settled supports passing only one path and cannot be empty.
                     * 
                     */
                    std::string GetTaskPath() const;

                    /**
                     * 设置The path or file to be settled supports passing only one path and cannot be empty.
                     * @param _taskPath The path or file to be settled supports passing only one path and cannot be empty.
                     * 
                     */
                    void SetTaskPath(const std::string& _taskPath);

                    /**
                     * 判断参数 TaskPath 是否已赋值
                     * @return TaskPath 是否已赋值
                     * 
                     */
                    bool TaskPathHasBeenSet() const;

                    /**
                     * 获取Task name.
                     * @return TaskName Task name.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name.
                     * @param _taskName Task name.
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Data flow ID. this api can be accessed through DescribeDataFlow.
                     * @return DataFlowId Data flow ID. this api can be accessed through DescribeDataFlow.
                     * 
                     */
                    std::string GetDataFlowId() const;

                    /**
                     * 设置Data flow ID. this api can be accessed through DescribeDataFlow.
                     * @param _dataFlowId Data flow ID. this api can be accessed through DescribeDataFlow.
                     * 
                     */
                    void SetDataFlowId(const std::string& _dataFlowId);

                    /**
                     * 判断参数 DataFlowId 是否已赋值
                     * @return DataFlowId 是否已赋值
                     * 
                     */
                    bool DataFlowIdHasBeenSet() const;

                    /**
                     * 获取When a file in CFS Turbo and an external storage have the same name, whether to overwrite. true: overwrite. false: not overwrite (at the same time, data storage will not be released). default false when empty.
                     * @return IsOverwrite When a file in CFS Turbo and an external storage have the same name, whether to overwrite. true: overwrite. false: not overwrite (at the same time, data storage will not be released). default false when empty.
                     * 
                     */
                    bool GetIsOverwrite() const;

                    /**
                     * 设置When a file in CFS Turbo and an external storage have the same name, whether to overwrite. true: overwrite. false: not overwrite (at the same time, data storage will not be released). default false when empty.
                     * @param _isOverwrite When a file in CFS Turbo and an external storage have the same name, whether to overwrite. true: overwrite. false: not overwrite (at the same time, data storage will not be released). default false when empty.
                     * 
                     */
                    void SetIsOverwrite(const bool& _isOverwrite);

                    /**
                     * 判断参数 IsOverwrite 是否已赋值
                     * @return IsOverwrite 是否已赋值
                     * 
                     */
                    bool IsOverwriteHasBeenSet() const;

                private:

                    /**
                     * File system unique ID.
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * Lifecycle task type; archive: settlement; restore: preheating; release: data release; metaload: metadata loading.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The path or file to be settled supports passing only one path and cannot be empty.
                     */
                    std::string m_taskPath;
                    bool m_taskPathHasBeenSet;

                    /**
                     * Task name.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Data flow ID. this api can be accessed through DescribeDataFlow.
                     */
                    std::string m_dataFlowId;
                    bool m_dataFlowIdHasBeenSet;

                    /**
                     * When a file in CFS Turbo and an external storage have the same name, whether to overwrite. true: overwrite. false: not overwrite (at the same time, data storage will not be released). default false when empty.
                     */
                    bool m_isOverwrite;
                    bool m_isOverwriteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATELIFECYCLEDATATASKREQUEST_H_

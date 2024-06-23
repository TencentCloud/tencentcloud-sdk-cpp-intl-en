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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONVERSIONNODESINFOREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONVERSIONNODESINFOREQUEST_H_

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
                * DescribeIntegrationVersionNodesInfo request structure.
                */
                class DescribeIntegrationVersionNodesInfoRequest : public AbstractModel
                {
                public:
                    DescribeIntegrationVersionNodesInfoRequest();
                    ~DescribeIntegrationVersionNodesInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID
                     * @return TaskId Task ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
                     * @param _taskId Task ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取The selected version's storage path for the task:
The value of Base64.encode($region | $bucket | $ftp.file.name) under TaskInfo.TaskExt.Properties returned by DescribeDsTaskVersionList or DescribeDsTaskVersionInfo
                     * @return TaskVersionPath The selected version's storage path for the task:
The value of Base64.encode($region | $bucket | $ftp.file.name) under TaskInfo.TaskExt.Properties returned by DescribeDsTaskVersionList or DescribeDsTaskVersionInfo
                     * 
                     */
                    std::string GetTaskVersionPath() const;

                    /**
                     * 设置The selected version's storage path for the task:
The value of Base64.encode($region | $bucket | $ftp.file.name) under TaskInfo.TaskExt.Properties returned by DescribeDsTaskVersionList or DescribeDsTaskVersionInfo
                     * @param _taskVersionPath The selected version's storage path for the task:
The value of Base64.encode($region | $bucket | $ftp.file.name) under TaskInfo.TaskExt.Properties returned by DescribeDsTaskVersionList or DescribeDsTaskVersionInfo
                     * 
                     */
                    void SetTaskVersionPath(const std::string& _taskVersionPath);

                    /**
                     * 判断参数 TaskVersionPath 是否已赋值
                     * @return TaskVersionPath 是否已赋值
                     * 
                     */
                    bool TaskVersionPathHasBeenSet() const;

                    /**
                     * 获取The selected version ID for the task:
The value of VersionId returned by DescribeDsTaskVersionList or DescribeDsTaskVersionInfo
                     * @return TaskVersion The selected version ID for the task:
The value of VersionId returned by DescribeDsTaskVersionList or DescribeDsTaskVersionInfo
                     * 
                     */
                    std::string GetTaskVersion() const;

                    /**
                     * 设置The selected version ID for the task:
The value of VersionId returned by DescribeDsTaskVersionList or DescribeDsTaskVersionInfo
                     * @param _taskVersion The selected version ID for the task:
The value of VersionId returned by DescribeDsTaskVersionList or DescribeDsTaskVersionInfo
                     * 
                     */
                    void SetTaskVersion(const std::string& _taskVersion);

                    /**
                     * 判断参数 TaskVersion 是否已赋值
                     * @return TaskVersion 是否已赋值
                     * 
                     */
                    bool TaskVersionHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * The selected version's storage path for the task:
The value of Base64.encode($region | $bucket | $ftp.file.name) under TaskInfo.TaskExt.Properties returned by DescribeDsTaskVersionList or DescribeDsTaskVersionInfo
                     */
                    std::string m_taskVersionPath;
                    bool m_taskVersionPathHasBeenSet;

                    /**
                     * The selected version ID for the task:
The value of VersionId returned by DescribeDsTaskVersionList or DescribeDsTaskVersionInfo
                     */
                    std::string m_taskVersion;
                    bool m_taskVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONVERSIONNODESINFOREQUEST_H_

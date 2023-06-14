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

#ifndef TENCENTCLOUD_MSP_V20180319_MODEL_TASK_H_
#define TENCENTCLOUD_MSP_V20180319_MODEL_TASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/msp/v20180319/model/SrcInfo.h>
#include <tencentcloud/msp/v20180319/model/TimeObj.h>
#include <tencentcloud/msp/v20180319/model/DstInfo.h>


namespace TencentCloud
{
    namespace Msp
    {
        namespace V20180319
        {
            namespace Model
            {
                /**
                * Migration task type
                */
                class Task : public AbstractModel
                {
                public:
                    Task();
                    ~Task() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Task name
                     * @return TaskName Task name
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task name
                     * @param _taskName Task name
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
                     * 获取Migration type
                     * @return MigrationType Migration type
                     * 
                     */
                    std::string GetMigrationType() const;

                    /**
                     * 设置Migration type
                     * @param _migrationType Migration type
                     * 
                     */
                    void SetMigrationType(const std::string& _migrationType);

                    /**
                     * 判断参数 MigrationType 是否已赋值
                     * @return MigrationType 是否已赋值
                     * 
                     */
                    bool MigrationTypeHasBeenSet() const;

                    /**
                     * 获取Migration status
                     * @return Status Migration status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Migration status
                     * @param _status Migration status
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Project name
                     * @return ProjectName Project name
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Project name
                     * @param _projectName Project name
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取Migration source information
                     * @return SrcInfo Migration source information
                     * 
                     */
                    SrcInfo GetSrcInfo() const;

                    /**
                     * 设置Migration source information
                     * @param _srcInfo Migration source information
                     * 
                     */
                    void SetSrcInfo(const SrcInfo& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     * 
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取Migration time information
                     * @return MigrationTimeLine Migration time information
                     * 
                     */
                    TimeObj GetMigrationTimeLine() const;

                    /**
                     * 设置Migration time information
                     * @param _migrationTimeLine Migration time information
                     * 
                     */
                    void SetMigrationTimeLine(const TimeObj& _migrationTimeLine);

                    /**
                     * 判断参数 MigrationTimeLine 是否已赋值
                     * @return MigrationTimeLine 是否已赋值
                     * 
                     */
                    bool MigrationTimeLineHasBeenSet() const;

                    /**
                     * 获取Status update time
                     * @return Updated Status update time
                     * 
                     */
                    std::string GetUpdated() const;

                    /**
                     * 设置Status update time
                     * @param _updated Status update time
                     * 
                     */
                    void SetUpdated(const std::string& _updated);

                    /**
                     * 判断参数 Updated 是否已赋值
                     * @return Updated 是否已赋值
                     * 
                     */
                    bool UpdatedHasBeenSet() const;

                    /**
                     * 获取Migration destination information
                     * @return DstInfo Migration destination information
                     * 
                     */
                    DstInfo GetDstInfo() const;

                    /**
                     * 设置Migration destination information
                     * @param _dstInfo Migration destination information
                     * 
                     */
                    void SetDstInfo(const DstInfo& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     * 
                     */
                    bool DstInfoHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task name
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Migration type
                     */
                    std::string m_migrationType;
                    bool m_migrationTypeHasBeenSet;

                    /**
                     * Migration status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Project ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Project name
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * Migration source information
                     */
                    SrcInfo m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * Migration time information
                     */
                    TimeObj m_migrationTimeLine;
                    bool m_migrationTimeLineHasBeenSet;

                    /**
                     * Status update time
                     */
                    std::string m_updated;
                    bool m_updatedHasBeenSet;

                    /**
                     * Migration destination information
                     */
                    DstInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MSP_V20180319_MODEL_TASK_H_

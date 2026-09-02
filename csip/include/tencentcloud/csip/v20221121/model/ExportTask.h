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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EXPORTTASK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EXPORTTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Exports the task list
                */
                class ExportTask : public AbstractModel
                {
                public:
                    ExportTask();
                    ~ExportTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
                     * @return Id Task ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Task ID
                     * @param _id Task ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取User AppId
                     * @return AppId User AppId
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User AppId
                     * @param _appId User AppId
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Progress percentage
                     * @return Percentage Progress percentage
                     * 
                     */
                    int64_t GetPercentage() const;

                    /**
                     * 设置Progress percentage
                     * @param _percentage Progress percentage
                     * 
                     */
                    void SetPercentage(const int64_t& _percentage);

                    /**
                     * 判断参数 Percentage 是否已赋值
                     * @return Percentage 是否已赋值
                     * 
                     */
                    bool PercentageHasBeenSet() const;

                    /**
                     * 获取Task status: 0: not started; 1: executing; 2: executed successfully; 3: timed out; 4: execution failed.
                     * @return TaskStatus Task status: 0: not started; 1: executing; 2: executed successfully; 3: timed out; 4: execution failed.
                     * 
                     */
                    int64_t GetTaskStatus() const;

                    /**
                     * 设置Task status: 0: not started; 1: executing; 2: executed successfully; 3: timed out; 4: execution failed.
                     * @param _taskStatus Task status: 0: not started; 1: executing; 2: executed successfully; 3: timed out; 4: execution failed.
                     * 
                     */
                    void SetTaskStatus(const int64_t& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取Task creation time
                     * @return CreateTime Task creation time
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Task creation time
                     * @param _createTime Task creation time
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Task update time
                     * @return ModifyTime Task update time
                     * 
                     */
                    int64_t GetModifyTime() const;

                    /**
                     * 设置Task update time
                     * @param _modifyTime Task update time
                     * 
                     */
                    void SetModifyTime(const int64_t& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取File name
                     * @return FileName File name
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置File name
                     * @param _fileName File name
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取File size in bytes.
                     * @return FileSize File size in bytes.
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置File size in bytes.
                     * @param _fileSize File size in bytes.
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取Remaining time (in seconds).
                     * @return RemainingTime Remaining time (in seconds).
                     * 
                     */
                    int64_t GetRemainingTime() const;

                    /**
                     * 设置Remaining time (in seconds).
                     * @param _remainingTime Remaining time (in seconds).
                     * 
                     */
                    void SetRemainingTime(const int64_t& _remainingTime);

                    /**
                     * 判断参数 RemainingTime 是否已赋值
                     * @return RemainingTime 是否已赋值
                     * 
                     */
                    bool RemainingTimeHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * User AppId
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Progress percentage
                     */
                    int64_t m_percentage;
                    bool m_percentageHasBeenSet;

                    /**
                     * Task status: 0: not started; 1: executing; 2: executed successfully; 3: timed out; 4: execution failed.
                     */
                    int64_t m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * Task creation time
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Task update time
                     */
                    int64_t m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * File name
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * File size in bytes.
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * Remaining time (in seconds).
                     */
                    int64_t m_remainingTime;
                    bool m_remainingTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EXPORTTASK_H_

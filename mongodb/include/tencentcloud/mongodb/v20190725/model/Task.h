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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_TASK_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_TASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * Log download task description.
                */
                class Task : public AbstractModel
                {
                public:
                    Task();
                    ~Task() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Download task type. 0: slow log; 1: error log.
                     * @return TaskType Download task type. 0: slow log; 1: error log.
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置Download task type. 0: slow log; 1: error log.
                     * @param _taskType Download task type. 0: slow log; 1: error log.
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID.
                     * @param _taskId Task ID.
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
                     * 获取Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdateTime Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _updateTime Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取File size.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileSize File size.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置File size.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileSize File size.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Task status. 0: initialized; 1: running; 2: successful; 3: failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Task status. 0: initialized; 1: running; 2: successful; 3: failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task status. 0: initialized; 1: running; 2: successful; 3: failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Task status. 0: initialized; 1: running; 2: successful; 3: failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Percentage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Percent Percentage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPercent() const;

                    /**
                     * 设置Percentage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _percent Percentage.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPercent(const int64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取Download URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Url Download URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Download URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _url Download URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * Download task type. 0: slow log; 1: error log.
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Creation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * File size.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * Task status. 0: initialized; 1: running; 2: successful; 3: failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Percentage.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * Download URL.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_TASK_H_

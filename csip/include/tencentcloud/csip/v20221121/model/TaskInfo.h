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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TASKINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TASKINFO_H_

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
                * Detection task information
                */
                class TaskInfo : public AbstractModel
                {
                public:
                    TaskInfo();
                    ~TaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Scan time
                     * @return ScanTime Scan time
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置Scan time
                     * @param _scanTime Scan time
                     * 
                     */
                    void SetScanTime(const std::string& _scanTime);

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取Task ID.
                     * @return TaskID Task ID.
                     * 
                     */
                    std::string GetTaskID() const;

                    /**
                     * 设置Task ID.
                     * @param _taskID Task ID.
                     * 
                     */
                    void SetTaskID(const std::string& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取Task status.
                     * @return Status Task status.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status.
                     * @param _status Task status.
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
                     * 获取Task progress
                     * @return Progress Task progress
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置Task progress
                     * @param _progress Task progress
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * Scan time
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * Task ID.
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * Task status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task progress
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TASKINFO_H_

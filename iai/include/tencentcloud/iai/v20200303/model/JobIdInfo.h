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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_JOBIDINFO_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_JOBIDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * Duplicate check task information
                */
                class JobIdInfo : public AbstractModel
                {
                public:
                    JobIdInfo();
                    ~JobIdInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Duplicate check task ID, which is used to query and get the progress and result of the task.
                     * @return JobId Duplicate check task ID, which is used to query and get the progress and result of the task.
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Duplicate check task ID, which is used to query and get the progress and result of the task.
                     * @param JobId Duplicate check task ID, which is used to query and get the progress and result of the task.
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Start time. 
The `StartTime` value is the number of milliseconds between the UNIX epoch time and the group creation time. 
The UNIX epoch time is 00:00:00, Thursday, January 1, 1970, Coordinated Universal Time (UTC). 
For more information, please see the UNIX time document.
                     * @return StartTime Start time. 
The `StartTime` value is the number of milliseconds between the UNIX epoch time and the group creation time. 
The UNIX epoch time is 00:00:00, Thursday, January 1, 1970, Coordinated Universal Time (UTC). 
For more information, please see the UNIX time document.
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Start time. 
The `StartTime` value is the number of milliseconds between the UNIX epoch time and the group creation time. 
The UNIX epoch time is 00:00:00, Thursday, January 1, 1970, Coordinated Universal Time (UTC). 
For more information, please see the UNIX time document.
                     * @param StartTime Start time. 
The `StartTime` value is the number of milliseconds between the UNIX epoch time and the group creation time. 
The UNIX epoch time is 00:00:00, Thursday, January 1, 1970, Coordinated Universal Time (UTC). 
For more information, please see the UNIX time document.
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Whether the duplicate check task is completed. 0: completed; 1: uncompleted; 2: failed.
                     * @return JobStatus Whether the duplicate check task is completed. 0: completed; 1: uncompleted; 2: failed.
                     */
                    int64_t GetJobStatus() const;

                    /**
                     * 设置Whether the duplicate check task is completed. 0: completed; 1: uncompleted; 2: failed.
                     * @param JobStatus Whether the duplicate check task is completed. 0: completed; 1: uncompleted; 2: failed.
                     */
                    void SetJobStatus(const int64_t& _jobStatus);

                    /**
                     * 判断参数 JobStatus 是否已赋值
                     * @return JobStatus 是否已赋值
                     */
                    bool JobStatusHasBeenSet() const;

                private:

                    /**
                     * Duplicate check task ID, which is used to query and get the progress and result of the task.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Start time. 
The `StartTime` value is the number of milliseconds between the UNIX epoch time and the group creation time. 
The UNIX epoch time is 00:00:00, Thursday, January 1, 1970, Coordinated Universal Time (UTC). 
For more information, please see the UNIX time document.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Whether the duplicate check task is completed. 0: completed; 1: uncompleted; 2: failed.
                     */
                    int64_t m_jobStatus;
                    bool m_jobStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_JOBIDINFO_H_

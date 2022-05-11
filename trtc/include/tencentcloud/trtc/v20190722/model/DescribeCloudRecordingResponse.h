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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECLOUDRECORDINGRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECLOUDRECORDINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/StorageFile.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeCloudRecording response structure.
                */
                class DescribeCloudRecordingResponse : public AbstractModel
                {
                public:
                    DescribeCloudRecordingResponse();
                    ~DescribeCloudRecordingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique ID of the recording task.
                     * @return TaskId The unique ID of the recording task.
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取The status of the on-cloud recording task.
Idle: The task is idle.
InProgress: The task is in progress.
Exited: The task is being ended.
                     * @return Status The status of the on-cloud recording task.
Idle: The task is idle.
InProgress: The task is in progress.
Exited: The task is being ended.
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The information of the recording files.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return StorageFileList The information of the recording files.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<StorageFile> GetStorageFileList() const;

                    /**
                     * 判断参数 StorageFileList 是否已赋值
                     * @return StorageFileList 是否已赋值
                     */
                    bool StorageFileListHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the recording task.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * The status of the on-cloud recording task.
Idle: The task is idle.
InProgress: The task is in progress.
Exited: The task is being ended.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The information of the recording files.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<StorageFile> m_storageFileList;
                    bool m_storageFileListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECLOUDRECORDINGRESPONSE_H_

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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TASKSTATDATA_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TASKSTATDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TaskStatDataItem.h>
#include <tencentcloud/vod/v20180717/model/SpecificationDataItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Video processing task statistics.
                */
                class TaskStatData : public AbstractModel
                {
                public:
                    TaskStatData();
                    ~TaskStatData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task type
<li>Transcode: transcoding</li>
<li>Snapshot: screencapturing</li>
                     * @return TaskType Task type
<li>Transcode: transcoding</li>
<li>Snapshot: screencapturing</li>
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Task type
<li>Transcode: transcoding</li>
<li>Snapshot: screencapturing</li>
                     * @param TaskType Task type
<li>Transcode: transcoding</li>
<li>Snapshot: screencapturing</li>
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Task statistics overview.
<li>Transcode: usage in seconds</li>
                     * @return Summary Task statistics overview.
<li>Transcode: usage in seconds</li>
                     */
                    std::vector<TaskStatDataItem> GetSummary() const;

                    /**
                     * 设置Task statistics overview.
<li>Transcode: usage in seconds</li>
                     * @param Summary Task statistics overview.
<li>Transcode: usage in seconds</li>
                     */
                    void SetSummary(const std::vector<TaskStatDataItem>& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取Detailed statistics of tasks with different specifications.
Transcoding specification:
<li>Remuxing: remuxing</li>
<li>Audio: audio transcoding</li>
<li>Standard.H264.SD: H.264 SD transcoding</li>
<li>Standard.H264.HD: H.264 HD transcoding</li>
<li>Standard.H264.FHD: H.264 FHD transcoding</li>
<li>Standard.H264.2K: H.264 2K transcoding</li>
<li>Standard.H264.4K: H.264 4K transcoding</li>
<li>Standard.H265.SD: H.265 SD transcoding</li>
<li>Standard.H265.HD: H.265 HD transcoding</li>
<li>Standard.H265.FHD: H.265 FHD transcoding</li>
<li>Standard.H265.2K: H.265 2K transcoding</li>
<li>Standard.H265.4K: H.265 4K transcoding</li>
<li>TESHD-10.H264.SD: H.264 SD TESHD transcoding</li>
<li>TESHD-10.H264.HD: H.264 HD TESHD transcoding</li>
<li>TESHD-10.H264.FHD: H.264 FHD TESHD transcoding</li>
<li>TESHD-10.H264.2K: H.264 2K TESHD transcoding</li>
<li>TESHD-10.H264.4K: H.264 4K TESHD transcoding</li>
<li>TESHD-10.H265.SD: H.265 SD TESHD transcoding</li>
<li>TESHD-10.H265.HD: H.265 HD TESHD transcoding</li>
<li>TESHD-10.H265.FHD: H.265 FHD TESHD transcoding</li>
<li>TESHD-10.H265.2K: H.265 2K TESHD transcoding</li>
<li>TESHD-10.H265.4K: H.265 4K TESHD transcoding</li>
<li>Edit.Audio: audio editing</li>
<li>Edit.H264.SD: H.264 SD video editing</li>
<li>Edit.H264.HD: H.264 HD video editing</li>
<li>Edit.H264.FHD: H.264 FHD video editing</li>
<li>Edit.H264.2K: H.264 2K video editing</li>
<li>Edit.H264.4K: H.264 4K video editing</li>
<li>Edit.H265.SD: H.265 SD video editing</li>
<li>Edit.H265.HD: H.265 HD video editing</li>
<li>Edit.H265.FHD: H.265 FHD video editing</li>
<li>Edit.H265.2K: H.265 2K video editing</li>
<li>Edit.H265.4K: H.265 4K video editing</li>
                     * @return Details Detailed statistics of tasks with different specifications.
Transcoding specification:
<li>Remuxing: remuxing</li>
<li>Audio: audio transcoding</li>
<li>Standard.H264.SD: H.264 SD transcoding</li>
<li>Standard.H264.HD: H.264 HD transcoding</li>
<li>Standard.H264.FHD: H.264 FHD transcoding</li>
<li>Standard.H264.2K: H.264 2K transcoding</li>
<li>Standard.H264.4K: H.264 4K transcoding</li>
<li>Standard.H265.SD: H.265 SD transcoding</li>
<li>Standard.H265.HD: H.265 HD transcoding</li>
<li>Standard.H265.FHD: H.265 FHD transcoding</li>
<li>Standard.H265.2K: H.265 2K transcoding</li>
<li>Standard.H265.4K: H.265 4K transcoding</li>
<li>TESHD-10.H264.SD: H.264 SD TESHD transcoding</li>
<li>TESHD-10.H264.HD: H.264 HD TESHD transcoding</li>
<li>TESHD-10.H264.FHD: H.264 FHD TESHD transcoding</li>
<li>TESHD-10.H264.2K: H.264 2K TESHD transcoding</li>
<li>TESHD-10.H264.4K: H.264 4K TESHD transcoding</li>
<li>TESHD-10.H265.SD: H.265 SD TESHD transcoding</li>
<li>TESHD-10.H265.HD: H.265 HD TESHD transcoding</li>
<li>TESHD-10.H265.FHD: H.265 FHD TESHD transcoding</li>
<li>TESHD-10.H265.2K: H.265 2K TESHD transcoding</li>
<li>TESHD-10.H265.4K: H.265 4K TESHD transcoding</li>
<li>Edit.Audio: audio editing</li>
<li>Edit.H264.SD: H.264 SD video editing</li>
<li>Edit.H264.HD: H.264 HD video editing</li>
<li>Edit.H264.FHD: H.264 FHD video editing</li>
<li>Edit.H264.2K: H.264 2K video editing</li>
<li>Edit.H264.4K: H.264 4K video editing</li>
<li>Edit.H265.SD: H.265 SD video editing</li>
<li>Edit.H265.HD: H.265 HD video editing</li>
<li>Edit.H265.FHD: H.265 FHD video editing</li>
<li>Edit.H265.2K: H.265 2K video editing</li>
<li>Edit.H265.4K: H.265 4K video editing</li>
                     */
                    std::vector<SpecificationDataItem> GetDetails() const;

                    /**
                     * 设置Detailed statistics of tasks with different specifications.
Transcoding specification:
<li>Remuxing: remuxing</li>
<li>Audio: audio transcoding</li>
<li>Standard.H264.SD: H.264 SD transcoding</li>
<li>Standard.H264.HD: H.264 HD transcoding</li>
<li>Standard.H264.FHD: H.264 FHD transcoding</li>
<li>Standard.H264.2K: H.264 2K transcoding</li>
<li>Standard.H264.4K: H.264 4K transcoding</li>
<li>Standard.H265.SD: H.265 SD transcoding</li>
<li>Standard.H265.HD: H.265 HD transcoding</li>
<li>Standard.H265.FHD: H.265 FHD transcoding</li>
<li>Standard.H265.2K: H.265 2K transcoding</li>
<li>Standard.H265.4K: H.265 4K transcoding</li>
<li>TESHD-10.H264.SD: H.264 SD TESHD transcoding</li>
<li>TESHD-10.H264.HD: H.264 HD TESHD transcoding</li>
<li>TESHD-10.H264.FHD: H.264 FHD TESHD transcoding</li>
<li>TESHD-10.H264.2K: H.264 2K TESHD transcoding</li>
<li>TESHD-10.H264.4K: H.264 4K TESHD transcoding</li>
<li>TESHD-10.H265.SD: H.265 SD TESHD transcoding</li>
<li>TESHD-10.H265.HD: H.265 HD TESHD transcoding</li>
<li>TESHD-10.H265.FHD: H.265 FHD TESHD transcoding</li>
<li>TESHD-10.H265.2K: H.265 2K TESHD transcoding</li>
<li>TESHD-10.H265.4K: H.265 4K TESHD transcoding</li>
<li>Edit.Audio: audio editing</li>
<li>Edit.H264.SD: H.264 SD video editing</li>
<li>Edit.H264.HD: H.264 HD video editing</li>
<li>Edit.H264.FHD: H.264 FHD video editing</li>
<li>Edit.H264.2K: H.264 2K video editing</li>
<li>Edit.H264.4K: H.264 4K video editing</li>
<li>Edit.H265.SD: H.265 SD video editing</li>
<li>Edit.H265.HD: H.265 HD video editing</li>
<li>Edit.H265.FHD: H.265 FHD video editing</li>
<li>Edit.H265.2K: H.265 2K video editing</li>
<li>Edit.H265.4K: H.265 4K video editing</li>
                     * @param Details Detailed statistics of tasks with different specifications.
Transcoding specification:
<li>Remuxing: remuxing</li>
<li>Audio: audio transcoding</li>
<li>Standard.H264.SD: H.264 SD transcoding</li>
<li>Standard.H264.HD: H.264 HD transcoding</li>
<li>Standard.H264.FHD: H.264 FHD transcoding</li>
<li>Standard.H264.2K: H.264 2K transcoding</li>
<li>Standard.H264.4K: H.264 4K transcoding</li>
<li>Standard.H265.SD: H.265 SD transcoding</li>
<li>Standard.H265.HD: H.265 HD transcoding</li>
<li>Standard.H265.FHD: H.265 FHD transcoding</li>
<li>Standard.H265.2K: H.265 2K transcoding</li>
<li>Standard.H265.4K: H.265 4K transcoding</li>
<li>TESHD-10.H264.SD: H.264 SD TESHD transcoding</li>
<li>TESHD-10.H264.HD: H.264 HD TESHD transcoding</li>
<li>TESHD-10.H264.FHD: H.264 FHD TESHD transcoding</li>
<li>TESHD-10.H264.2K: H.264 2K TESHD transcoding</li>
<li>TESHD-10.H264.4K: H.264 4K TESHD transcoding</li>
<li>TESHD-10.H265.SD: H.265 SD TESHD transcoding</li>
<li>TESHD-10.H265.HD: H.265 HD TESHD transcoding</li>
<li>TESHD-10.H265.FHD: H.265 FHD TESHD transcoding</li>
<li>TESHD-10.H265.2K: H.265 2K TESHD transcoding</li>
<li>TESHD-10.H265.4K: H.265 4K TESHD transcoding</li>
<li>Edit.Audio: audio editing</li>
<li>Edit.H264.SD: H.264 SD video editing</li>
<li>Edit.H264.HD: H.264 HD video editing</li>
<li>Edit.H264.FHD: H.264 FHD video editing</li>
<li>Edit.H264.2K: H.264 2K video editing</li>
<li>Edit.H264.4K: H.264 4K video editing</li>
<li>Edit.H265.SD: H.265 SD video editing</li>
<li>Edit.H265.HD: H.265 HD video editing</li>
<li>Edit.H265.FHD: H.265 FHD video editing</li>
<li>Edit.H265.2K: H.265 2K video editing</li>
<li>Edit.H265.4K: H.265 4K video editing</li>
                     */
                    void SetDetails(const std::vector<SpecificationDataItem>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * Task type
<li>Transcode: transcoding</li>
<li>Snapshot: screencapturing</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Task statistics overview.
<li>Transcode: usage in seconds</li>
                     */
                    std::vector<TaskStatDataItem> m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * Detailed statistics of tasks with different specifications.
Transcoding specification:
<li>Remuxing: remuxing</li>
<li>Audio: audio transcoding</li>
<li>Standard.H264.SD: H.264 SD transcoding</li>
<li>Standard.H264.HD: H.264 HD transcoding</li>
<li>Standard.H264.FHD: H.264 FHD transcoding</li>
<li>Standard.H264.2K: H.264 2K transcoding</li>
<li>Standard.H264.4K: H.264 4K transcoding</li>
<li>Standard.H265.SD: H.265 SD transcoding</li>
<li>Standard.H265.HD: H.265 HD transcoding</li>
<li>Standard.H265.FHD: H.265 FHD transcoding</li>
<li>Standard.H265.2K: H.265 2K transcoding</li>
<li>Standard.H265.4K: H.265 4K transcoding</li>
<li>TESHD-10.H264.SD: H.264 SD TESHD transcoding</li>
<li>TESHD-10.H264.HD: H.264 HD TESHD transcoding</li>
<li>TESHD-10.H264.FHD: H.264 FHD TESHD transcoding</li>
<li>TESHD-10.H264.2K: H.264 2K TESHD transcoding</li>
<li>TESHD-10.H264.4K: H.264 4K TESHD transcoding</li>
<li>TESHD-10.H265.SD: H.265 SD TESHD transcoding</li>
<li>TESHD-10.H265.HD: H.265 HD TESHD transcoding</li>
<li>TESHD-10.H265.FHD: H.265 FHD TESHD transcoding</li>
<li>TESHD-10.H265.2K: H.265 2K TESHD transcoding</li>
<li>TESHD-10.H265.4K: H.265 4K TESHD transcoding</li>
<li>Edit.Audio: audio editing</li>
<li>Edit.H264.SD: H.264 SD video editing</li>
<li>Edit.H264.HD: H.264 HD video editing</li>
<li>Edit.H264.FHD: H.264 FHD video editing</li>
<li>Edit.H264.2K: H.264 2K video editing</li>
<li>Edit.H264.4K: H.264 4K video editing</li>
<li>Edit.H265.SD: H.265 SD video editing</li>
<li>Edit.H265.HD: H.265 HD video editing</li>
<li>Edit.H265.FHD: H.265 FHD video editing</li>
<li>Edit.H265.2K: H.265 2K video editing</li>
<li>Edit.H265.4K: H.265 4K video editing</li>
                     */
                    std::vector<SpecificationDataItem> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TASKSTATDATA_H_

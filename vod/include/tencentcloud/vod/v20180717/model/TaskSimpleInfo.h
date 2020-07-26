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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TASKSIMPLEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TASKSIMPLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Task overview information
                */
                class TaskSimpleInfo : public AbstractModel
                {
                public:
                    TaskSimpleInfo();
                    ~TaskSimpleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID.
                     * @param TaskId Task ID.
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Task type. Valid values:
<li>Procedure: video processing task;</li>
<li>EditMedia: video editing task</li>
<li>WechatDistribute: release on WeChat task.</li>
Task types compatible with v2017:
<li>Transcode: transcoding task;</li>
<li>SnapshotByTimeOffset: video screencapturing task</li>
<li>Concat: video splicing task;</li>
<li>Clip: video clipping task;</li>
<li>ImageSprites: image sprite generating task.</li>
                     * @return TaskType Task type. Valid values:
<li>Procedure: video processing task;</li>
<li>EditMedia: video editing task</li>
<li>WechatDistribute: release on WeChat task.</li>
Task types compatible with v2017:
<li>Transcode: transcoding task;</li>
<li>SnapshotByTimeOffset: video screencapturing task</li>
<li>Concat: video splicing task;</li>
<li>Clip: video clipping task;</li>
<li>ImageSprites: image sprite generating task.</li>
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Task type. Valid values:
<li>Procedure: video processing task;</li>
<li>EditMedia: video editing task</li>
<li>WechatDistribute: release on WeChat task.</li>
Task types compatible with v2017:
<li>Transcode: transcoding task;</li>
<li>SnapshotByTimeOffset: video screencapturing task</li>
<li>Concat: video splicing task;</li>
<li>Clip: video clipping task;</li>
<li>ImageSprites: image sprite generating task.</li>
                     * @param TaskType Task type. Valid values:
<li>Procedure: video processing task;</li>
<li>EditMedia: video editing task</li>
<li>WechatDistribute: release on WeChat task.</li>
Task types compatible with v2017:
<li>Transcode: transcoding task;</li>
<li>SnapshotByTimeOffset: video screencapturing task</li>
<li>Concat: video splicing task;</li>
<li>Clip: video clipping task;</li>
<li>ImageSprites: image sprite generating task.</li>
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Creation time of task in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     * @return CreateTime Creation time of task in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of task in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     * @param CreateTime Creation time of task in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Start time of task execution in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I). If the task has not been started yet, this field will be empty.
                     * @return BeginProcessTime Start time of task execution in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I). If the task has not been started yet, this field will be empty.
                     */
                    std::string GetBeginProcessTime() const;

                    /**
                     * 设置Start time of task execution in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I). If the task has not been started yet, this field will be empty.
                     * @param BeginProcessTime Start time of task execution in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I). If the task has not been started yet, this field will be empty.
                     */
                    void SetBeginProcessTime(const std::string& _beginProcessTime);

                    /**
                     * 判断参数 BeginProcessTime 是否已赋值
                     * @return BeginProcessTime 是否已赋值
                     */
                    bool BeginProcessTimeHasBeenSet() const;

                    /**
                     * 获取End time of task in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I). If the task has not been completed yet, this field will be empty.
                     * @return FinishTime End time of task in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I). If the task has not been completed yet, this field will be empty.
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置End time of task in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I). If the task has not been completed yet, this field will be empty.
                     * @param FinishTime End time of task in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I). If the task has not been completed yet, this field will be empty.
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取ID used for deduplication if there was a request with the same ID in the last seven days.
                     * @return SessionId ID used for deduplication if there was a request with the same ID in the last seven days.
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置ID used for deduplication if there was a request with the same ID in the last seven days.
                     * @param SessionId ID used for deduplication if there was a request with the same ID in the last seven days.
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取Source context, which is used to pass through the user request information.
                     * @return SessionContext Source context, which is used to pass through the user request information.
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Source context, which is used to pass through the user request information.
                     * @param SessionContext Source context, which is used to pass through the user request information.
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     */
                    bool SessionContextHasBeenSet() const;

                private:

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task type. Valid values:
<li>Procedure: video processing task;</li>
<li>EditMedia: video editing task</li>
<li>WechatDistribute: release on WeChat task.</li>
Task types compatible with v2017:
<li>Transcode: transcoding task;</li>
<li>SnapshotByTimeOffset: video screencapturing task</li>
<li>Concat: video splicing task;</li>
<li>Clip: video clipping task;</li>
<li>ImageSprites: image sprite generating task.</li>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Creation time of task in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Start time of task execution in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I). If the task has not been started yet, this field will be empty.
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * End time of task in [ISO date format](https://cloud.tencent.com/document/product/266/11732#I). If the task has not been completed yet, this field will be empty.
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * ID used for deduplication if there was a request with the same ID in the last seven days.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Source context, which is used to pass through the user request information.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TASKSIMPLEINFO_H_

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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_RECORDTASKSEARCHRESULT_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_RECORDTASKSEARCHRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/RecordTaskResult.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * Real-time recording task query results.
                */
                class RecordTaskSearchResult : public AbstractModel
                {
                public:
                    RecordTaskSearchResult();
                    ~RecordTaskSearchResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique task ID.
                     * @return TaskId Unique task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Unique task ID.
                     * @param _taskId Unique task ID.
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
                     * 获取Status of the real-time recording task.
- PAUSED: Recording paused.
- PREPARED: Recording in preparation.
- RECORDING: Recording in progress.
- STOPPED: Recording stopped.
- FINISHED: Recording finished.
                     * @return Status Status of the real-time recording task.
- PAUSED: Recording paused.
- PREPARED: Recording in preparation.
- RECORDING: Recording in progress.
- STOPPED: Recording stopped.
- FINISHED: Recording finished.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status of the real-time recording task.
- PAUSED: Recording paused.
- PREPARED: Recording in preparation.
- RECORDING: Recording in progress.
- STOPPED: Recording stopped.
- FINISHED: Recording finished.
                     * @param _status Status of the real-time recording task.
- PAUSED: Recording paused.
- PREPARED: Recording in preparation.
- RECORDING: Recording in progress.
- STOPPED: Recording stopped.
- FINISHED: Recording finished.
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
                     * 获取Room ID of the real-time recording task.
                     * @return RoomId Room ID of the real-time recording task.
                     * 
                     */
                    int64_t GetRoomId() const;

                    /**
                     * 设置Room ID of the real-time recording task.
                     * @param _roomId Room ID of the real-time recording task.
                     * 
                     */
                    void SetRoomId(const int64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取Creation time of the task.
                     * @return CreateTime Creation time of the task.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of the task.
                     * @param _createTime Creation time of the task.
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
                     * 获取SdkAppId of the whiteboard application.
                     * @return SdkAppId SdkAppId of the whiteboard application.
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置SdkAppId of the whiteboard application.
                     * @param _sdkAppId SdkAppId of the whiteboard application.
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Real-time recording result.
                     * @return Result Real-time recording result.
                     * 
                     */
                    RecordTaskResult GetResult() const;

                    /**
                     * 设置Real-time recording result.
                     * @param _result Real-time recording result.
                     * 
                     */
                    void SetResult(const RecordTaskResult& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * Unique task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Status of the real-time recording task.
- PAUSED: Recording paused.
- PREPARED: Recording in preparation.
- RECORDING: Recording in progress.
- STOPPED: Recording stopped.
- FINISHED: Recording finished.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Room ID of the real-time recording task.
                     */
                    int64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * Creation time of the task.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * SdkAppId of the whiteboard application.
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Real-time recording result.
                     */
                    RecordTaskResult m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_RECORDTASKSEARCHRESULT_H_

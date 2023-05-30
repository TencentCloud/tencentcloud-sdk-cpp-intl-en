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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDPUSHTASKSEARCHRESULT_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDPUSHTASKSEARCHRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/WhiteboardPushResult.h>


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
                class WhiteboardPushTaskSearchResult : public AbstractModel
                {
                public:
                    WhiteboardPushTaskSearchResult();
                    ~WhiteboardPushTaskSearchResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique task ID.
                     * @return TaskId Unique task ID.
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Unique task ID.
                     * @param TaskId Unique task ID.
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Status of the whiteboard push task.
- PREPARED: Push in preparation.
- PUSHING: Pushing in progress.
- STOPPED: Pushing stopped.
                     * @return Status Status of the whiteboard push task.
- PREPARED: Push in preparation.
- PUSHING: Pushing in progress.
- STOPPED: Pushing stopped.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status of the whiteboard push task.
- PREPARED: Push in preparation.
- PUSHING: Pushing in progress.
- STOPPED: Pushing stopped.
                     * @param Status Status of the whiteboard push task.
- PREPARED: Push in preparation.
- PUSHING: Pushing in progress.
- STOPPED: Pushing stopped.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Room ID of the whiteboard push task.
                     * @return RoomId Room ID of the whiteboard push task.
                     */
                    int64_t GetRoomId() const;

                    /**
                     * 设置Room ID of the whiteboard push task.
                     * @param RoomId Room ID of the whiteboard push task.
                     */
                    void SetRoomId(const int64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取Creation time of the task.
                     * @return CreateTime Creation time of the task.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of the task.
                     * @param CreateTime Creation time of the task.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取SdkAppId of the whiteboard application.
                     * @return SdkAppId SdkAppId of the whiteboard application.
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置SdkAppId of the whiteboard application.
                     * @param SdkAppId SdkAppId of the whiteboard application.
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Whiteboard push result.
                     * @return Result Whiteboard push result.
                     */
                    WhiteboardPushResult GetResult() const;

                    /**
                     * 设置Whiteboard push result.
                     * @param Result Whiteboard push result.
                     */
                    void SetResult(const WhiteboardPushResult& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取User ID of the whiteboard push task.
                     * @return PushUserId User ID of the whiteboard push task.
                     */
                    std::string GetPushUserId() const;

                    /**
                     * 设置User ID of the whiteboard push task.
                     * @param PushUserId User ID of the whiteboard push task.
                     */
                    void SetPushUserId(const std::string& _pushUserId);

                    /**
                     * 判断参数 PushUserId 是否已赋值
                     * @return PushUserId 是否已赋值
                     */
                    bool PushUserIdHasBeenSet() const;

                private:

                    /**
                     * Unique task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Status of the whiteboard push task.
- PREPARED: Push in preparation.
- PUSHING: Pushing in progress.
- STOPPED: Pushing stopped.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Room ID of the whiteboard push task.
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
                     * Whiteboard push result.
                     */
                    WhiteboardPushResult m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * User ID of the whiteboard push task.
                     */
                    std::string m_pushUserId;
                    bool m_pushUserIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDPUSHTASKSEARCHRESULT_H_

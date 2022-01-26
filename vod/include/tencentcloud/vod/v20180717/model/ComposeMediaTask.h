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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIATASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIATASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ComposeMediaTaskInput.h>
#include <tencentcloud/vod/v20180717/model/ComposeMediaTaskOutput.h>
#include <tencentcloud/vod/v20180717/model/MediaMetaData.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Media file composing task information
                */
                class ComposeMediaTask : public AbstractModel
                {
                public:
                    ComposeMediaTask();
                    ~ComposeMediaTask() = default;
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
                     * 获取Task flow status. Valid values:
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Status Task flow status. Valid values:
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task flow status. Valid values:
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Status Task flow status. Valid values:
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ErrCode Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ErrCode Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Message Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Message Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Progress of a media file composing task. Value range: [0, 100]
                     * @return Progress Progress of a media file composing task. Value range: [0, 100]
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置Progress of a media file composing task. Value range: [0, 100]
                     * @param Progress Progress of a media file composing task. Value range: [0, 100]
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Input of media file composing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Input Input of media file composing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ComposeMediaTaskInput GetInput() const;

                    /**
                     * 设置Input of media file composing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Input Input of media file composing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInput(const ComposeMediaTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Output of media file composing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Output Output of media file composing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ComposeMediaTaskOutput GetOutput() const;

                    /**
                     * 设置Output of media file composing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Output Output of media file composing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOutput(const ComposeMediaTaskOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Metadata of a source video.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MetaData Metadata of a source video.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置Metadata of a source video.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param MetaData Metadata of a source video.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is not carried or is left empty, no deduplication will be performed.
                     * @return SessionId ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is not carried or is left empty, no deduplication will be performed.
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is not carried or is left empty, no deduplication will be performed.
                     * @param SessionId ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is not carried or is left empty, no deduplication will be performed.
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取The source context which is used to pass through the user request information. The task flow status change callback will return the value of this parameter. It can contain up to 1000 characters.
                     * @return SessionContext The source context which is used to pass through the user request information. The task flow status change callback will return the value of this parameter. It can contain up to 1000 characters.
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置The source context which is used to pass through the user request information. The task flow status change callback will return the value of this parameter. It can contain up to 1000 characters.
                     * @param SessionContext The source context which is used to pass through the user request information. The task flow status change callback will return the value of this parameter. It can contain up to 1000 characters.
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
                     * Task flow status. Valid values:
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Progress of a media file composing task. Value range: [0, 100]
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Input of media file composing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ComposeMediaTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output of media file composing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    ComposeMediaTaskOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Metadata of a source video.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is not carried or is left empty, no deduplication will be performed.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * The source context which is used to pass through the user request information. The task flow status change callback will return the value of this parameter. It can contain up to 1000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIATASK_H_

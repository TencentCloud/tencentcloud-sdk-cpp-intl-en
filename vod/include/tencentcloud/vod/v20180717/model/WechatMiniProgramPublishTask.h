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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_WECHATMINIPROGRAMPUBLISHTASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_WECHATMINIPROGRAMPUBLISHTASK_H_

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
                * Release on WeChat Mini Program task information
                */
                class WechatMiniProgramPublishTask : public AbstractModel
                {
                public:
                    WechatMiniProgramPublishTask();
                    ~WechatMiniProgramPublishTask() = default;
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
                     * 获取Task status. Valid values:
WAITING: waiting;
PROCESSING: processing;
FINISH: completed.
                     * @return Status Task status. Valid values:
WAITING: waiting;
PROCESSING: processing;
FINISH: completed.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status. Valid values:
WAITING: waiting;
PROCESSING: processing;
FINISH: completed.
                     * @param Status Task status. Valid values:
WAITING: waiting;
PROCESSING: processing;
FINISH: completed.
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
                     * @return ErrCode Error code
<li>0: success;</li>
<li>Other values: failure.</li>
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code
<li>0: success;</li>
<li>Other values: failure.</li>
                     * @param ErrCode Error code
<li>0: success;</li>
<li>Other values: failure.</li>
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取Error message.
                     * @return Message Error message.
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message.
                     * @param Message Error message.
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取ID of published video file.
                     * @return FileId ID of published video file.
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置ID of published video file.
                     * @param FileId ID of published video file.
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取ID of the transcoding template corresponding to the published video. 0 represents the source video.
                     * @return SourceDefinition ID of the transcoding template corresponding to the published video. 0 represents the source video.
                     */
                    uint64_t GetSourceDefinition() const;

                    /**
                     * 设置ID of the transcoding template corresponding to the published video. 0 represents the source video.
                     * @param SourceDefinition ID of the transcoding template corresponding to the published video. 0 represents the source video.
                     */
                    void SetSourceDefinition(const uint64_t& _sourceDefinition);

                    /**
                     * 判断参数 SourceDefinition 是否已赋值
                     * @return SourceDefinition 是否已赋值
                     */
                    bool SourceDefinitionHasBeenSet() const;

                    /**
                     * 获取Status of video release on WeChat Mini Program. Valid values:
<li>Pass: successfully published;</li>
<li>Failed: failed to publish;</li>
<li>Rejected: rejected.</li>
                     * @return PublishResult Status of video release on WeChat Mini Program. Valid values:
<li>Pass: successfully published;</li>
<li>Failed: failed to publish;</li>
<li>Rejected: rejected.</li>
                     */
                    std::string GetPublishResult() const;

                    /**
                     * 设置Status of video release on WeChat Mini Program. Valid values:
<li>Pass: successfully published;</li>
<li>Failed: failed to publish;</li>
<li>Rejected: rejected.</li>
                     * @param PublishResult Status of video release on WeChat Mini Program. Valid values:
<li>Pass: successfully published;</li>
<li>Failed: failed to publish;</li>
<li>Rejected: rejected.</li>
                     */
                    void SetPublishResult(const std::string& _publishResult);

                    /**
                     * 判断参数 PublishResult 是否已赋值
                     * @return PublishResult 是否已赋值
                     */
                    bool PublishResultHasBeenSet() const;

                private:

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task status. Valid values:
WAITING: waiting;
PROCESSING: processing;
FINISH: completed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code
<li>0: success;</li>
<li>Other values: failure.</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * ID of published video file.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * ID of the transcoding template corresponding to the published video. 0 represents the source video.
                     */
                    uint64_t m_sourceDefinition;
                    bool m_sourceDefinitionHasBeenSet;

                    /**
                     * Status of video release on WeChat Mini Program. Valid values:
<li>Pass: successfully published;</li>
<li>Failed: failed to publish;</li>
<li>Rejected: rejected.</li>
                     */
                    std::string m_publishResult;
                    bool m_publishResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_WECHATMINIPROGRAMPUBLISHTASK_H_

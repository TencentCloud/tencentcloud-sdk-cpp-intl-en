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
                * WeChat Mini Program publishing task information
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
                     * 获取Task status. Valid values:
WAITING
PROCESSING: Processing;
FINISH: completed.
                     * @return Status Task status. Valid values:
WAITING
PROCESSING: Processing;
FINISH: completed.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status. Valid values:
WAITING
PROCESSING: Processing;
FINISH: completed.
                     * @param _status Task status. Valid values:
WAITING
PROCESSING: Processing;
FINISH: completed.
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
                     * 获取Error code.
<li>0: success;</li>
<li>Other value: failure.</li>
                     * @return ErrCode Error code.
<li>0: success;</li>
<li>Other value: failure.</li>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code.
<li>0: success;</li>
<li>Other value: failure.</li>
                     * @param _errCode Error code.
<li>0: success;</li>
<li>Other value: failure.</li>
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取Error message.
                     * @return Message Error message.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message.
                     * @param _message Error message.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Publish the video file ID.
                     * @return FileId Publish the video file ID.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Publish the video file ID.
                     * @param _fileId Publish the video file ID.
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Transcoding template ID of the published video. 0 represents the original video.
                     * @return SourceDefinition Transcoding template ID of the published video. 0 represents the original video.
                     * 
                     */
                    uint64_t GetSourceDefinition() const;

                    /**
                     * 设置Transcoding template ID of the published video. 0 represents the original video.
                     * @param _sourceDefinition Transcoding template ID of the published video. 0 represents the original video.
                     * 
                     */
                    void SetSourceDefinition(const uint64_t& _sourceDefinition);

                    /**
                     * 判断参数 SourceDefinition 是否已赋值
                     * @return SourceDefinition 是否已赋值
                     * 
                     */
                    bool SourceDefinitionHasBeenSet() const;

                    /**
                     * 获取WeChat Mini Program Video Publishing status. Parameter Value:
<li>Pass: published successfully;</li>
<li>Failed: Release failure;</li>
<li>Rejected: The audio and video moderation failed to pass.</li>
                     * @return PublishResult WeChat Mini Program Video Publishing status. Parameter Value:
<li>Pass: published successfully;</li>
<li>Failed: Release failure;</li>
<li>Rejected: The audio and video moderation failed to pass.</li>
                     * 
                     */
                    std::string GetPublishResult() const;

                    /**
                     * 设置WeChat Mini Program Video Publishing status. Parameter Value:
<li>Pass: published successfully;</li>
<li>Failed: Release failure;</li>
<li>Rejected: The audio and video moderation failed to pass.</li>
                     * @param _publishResult WeChat Mini Program Video Publishing status. Parameter Value:
<li>Pass: published successfully;</li>
<li>Failed: Release failure;</li>
<li>Rejected: The audio and video moderation failed to pass.</li>
                     * 
                     */
                    void SetPublishResult(const std::string& _publishResult);

                    /**
                     * 判断参数 PublishResult 是否已赋值
                     * @return PublishResult 是否已赋值
                     * 
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
WAITING
PROCESSING: Processing;
FINISH: completed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code.
<li>0: success;</li>
<li>Other value: failure.</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Publish the video file ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Transcoding template ID of the published video. 0 represents the original video.
                     */
                    uint64_t m_sourceDefinition;
                    bool m_sourceDefinitionHasBeenSet;

                    /**
                     * WeChat Mini Program Video Publishing status. Parameter Value:
<li>Pass: published successfully;</li>
<li>Failed: Release failure;</li>
<li>Rejected: The audio and video moderation failed to pass.</li>
                     */
                    std::string m_publishResult;
                    bool m_publishResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_WECHATMINIPROGRAMPUBLISHTASK_H_

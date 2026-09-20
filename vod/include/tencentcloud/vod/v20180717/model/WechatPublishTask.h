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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_WECHATPUBLISHTASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_WECHATPUBLISHTASK_H_

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
                * WeChat publishing task information
                */
                class WechatPublishTask : public AbstractModel
                {
                public:
                    WechatPublishTask();
                    ~WechatPublishTask() = default;
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
WAITING: waiting.
PROCESSING: Processing;
FINISH: completed.
                     * @return Status Task status. Valid values:
WAITING: waiting.
PROCESSING: Processing;
FINISH: completed.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status. Valid values:
WAITING: waiting.
PROCESSING: Processing;
FINISH: completed.
                     * @param _status Task status. Valid values:
WAITING: waiting.
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
<li>Other value: unsuccessful.</li>
                     * @return ErrCode Error code.
<li>0: success;</li>
<li>Other value: unsuccessful.</li>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code.
<li>0: success;</li>
<li>Other value: unsuccessful.</li>
                     * @param _errCode Error code.
<li>0: success;</li>
<li>Other value: unsuccessful.</li>
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
                     * 获取Video file ID for publishing.
                     * @return FileId Video file ID for publishing.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Video file ID for publishing.
                     * @param _fileId Video file ID for publishing.
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
                     * 获取Template ID for publishing on WeChat.
                     * @return Definition Template ID for publishing on WeChat.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Template ID for publishing on WeChat.
                     * @param _definition Template ID for publishing on WeChat.
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

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
                     * 获取WeChat publishing status. Valid values:
<li>FAIL: Failed;</li>
<li>SUCCESS: successful;</li>
<li>AUDITNOTPASS: failed to pass moderation;</li>
<li>NOTTRIGGERED: Publishing on WeChat has not been initiated.</li>
                     * @return WechatStatus WeChat publishing status. Valid values:
<li>FAIL: Failed;</li>
<li>SUCCESS: successful;</li>
<li>AUDITNOTPASS: failed to pass moderation;</li>
<li>NOTTRIGGERED: Publishing on WeChat has not been initiated.</li>
                     * 
                     */
                    std::string GetWechatStatus() const;

                    /**
                     * 设置WeChat publishing status. Valid values:
<li>FAIL: Failed;</li>
<li>SUCCESS: successful;</li>
<li>AUDITNOTPASS: failed to pass moderation;</li>
<li>NOTTRIGGERED: Publishing on WeChat has not been initiated.</li>
                     * @param _wechatStatus WeChat publishing status. Valid values:
<li>FAIL: Failed;</li>
<li>SUCCESS: successful;</li>
<li>AUDITNOTPASS: failed to pass moderation;</li>
<li>NOTTRIGGERED: Publishing on WeChat has not been initiated.</li>
                     * 
                     */
                    void SetWechatStatus(const std::string& _wechatStatus);

                    /**
                     * 判断参数 WechatStatus 是否已赋值
                     * @return WechatStatus 是否已赋值
                     * 
                     */
                    bool WechatStatusHasBeenSet() const;

                    /**
                     * 获取WeChat Vid.
                     * @return WechatVid WeChat Vid.
                     * 
                     */
                    std::string GetWechatVid() const;

                    /**
                     * 设置WeChat Vid.
                     * @param _wechatVid WeChat Vid.
                     * 
                     */
                    void SetWechatVid(const std::string& _wechatVid);

                    /**
                     * 判断参数 WechatVid 是否已赋值
                     * @return WechatVid 是否已赋值
                     * 
                     */
                    bool WechatVidHasBeenSet() const;

                    /**
                     * 获取WeChat address.
                     * @return WechatUrl WeChat address.
                     * 
                     */
                    std::string GetWechatUrl() const;

                    /**
                     * 设置WeChat address.
                     * @param _wechatUrl WeChat address.
                     * 
                     */
                    void SetWechatUrl(const std::string& _wechatUrl);

                    /**
                     * 判断参数 WechatUrl 是否已赋值
                     * @return WechatUrl 是否已赋值
                     * 
                     */
                    bool WechatUrlHasBeenSet() const;

                private:

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task status. Valid values:
WAITING: waiting.
PROCESSING: Processing;
FINISH: completed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code.
<li>0: success;</li>
<li>Other value: unsuccessful.</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Video file ID for publishing.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Template ID for publishing on WeChat.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Transcoding template ID of the published video. 0 represents the original video.
                     */
                    uint64_t m_sourceDefinition;
                    bool m_sourceDefinitionHasBeenSet;

                    /**
                     * WeChat publishing status. Valid values:
<li>FAIL: Failed;</li>
<li>SUCCESS: successful;</li>
<li>AUDITNOTPASS: failed to pass moderation;</li>
<li>NOTTRIGGERED: Publishing on WeChat has not been initiated.</li>
                     */
                    std::string m_wechatStatus;
                    bool m_wechatStatusHasBeenSet;

                    /**
                     * WeChat Vid.
                     */
                    std::string m_wechatVid;
                    bool m_wechatVidHasBeenSet;

                    /**
                     * WeChat address.
                     */
                    std::string m_wechatUrl;
                    bool m_wechatUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_WECHATPUBLISHTASK_H_

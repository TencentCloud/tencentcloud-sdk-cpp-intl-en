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
                * Release on WeChat task information
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
WAITING: waiting;
PROCESSING: processing;
FINISH: completed.
                     * @return Status Task status. Valid values:
WAITING: waiting;
PROCESSING: processing;
FINISH: completed.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status. Valid values:
WAITING: waiting;
PROCESSING: processing;
FINISH: completed.
                     * @param _status Task status. Valid values:
WAITING: waiting;
PROCESSING: processing;
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
                     * 获取Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ErrCode Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _errCode Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Message Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _message Error message.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取ID of published video file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FileId ID of published video file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置ID of published video file.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _fileId ID of published video file.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Release on WeChat template ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Definition Release on WeChat template ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Release on WeChat template ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _definition Release on WeChat template ID.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取ID of the transcoding template corresponding to the published video. 0 represents the source video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SourceDefinition ID of the transcoding template corresponding to the published video. 0 represents the source video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetSourceDefinition() const;

                    /**
                     * 设置ID of the transcoding template corresponding to the published video. 0 represents the source video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _sourceDefinition ID of the transcoding template corresponding to the published video. 0 represents the source video.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Release on WeChat status. Valid values:
<li>FAIL: failure;</li>
<li>SUCCESS: success;</li>
<li>AUDITNOTPASS: rejected</li>
<li>NOTTRIGGERED: release on WeChat not initiated yet.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return WechatStatus Release on WeChat status. Valid values:
<li>FAIL: failure;</li>
<li>SUCCESS: success;</li>
<li>AUDITNOTPASS: rejected</li>
<li>NOTTRIGGERED: release on WeChat not initiated yet.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWechatStatus() const;

                    /**
                     * 设置Release on WeChat status. Valid values:
<li>FAIL: failure;</li>
<li>SUCCESS: success;</li>
<li>AUDITNOTPASS: rejected</li>
<li>NOTTRIGGERED: release on WeChat not initiated yet.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _wechatStatus Release on WeChat status. Valid values:
<li>FAIL: failure;</li>
<li>SUCCESS: success;</li>
<li>AUDITNOTPASS: rejected</li>
<li>NOTTRIGGERED: release on WeChat not initiated yet.</li>
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取WeChat `Vid`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return WechatVid WeChat `Vid`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWechatVid() const;

                    /**
                     * 设置WeChat `Vid`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _wechatVid WeChat `Vid`.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return WechatUrl WeChat address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWechatUrl() const;

                    /**
                     * 设置WeChat address.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _wechatUrl WeChat address.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * ID of published video file.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Release on WeChat template ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * ID of the transcoding template corresponding to the published video. 0 represents the source video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_sourceDefinition;
                    bool m_sourceDefinitionHasBeenSet;

                    /**
                     * Release on WeChat status. Valid values:
<li>FAIL: failure;</li>
<li>SUCCESS: success;</li>
<li>AUDITNOTPASS: rejected</li>
<li>NOTTRIGGERED: release on WeChat not initiated yet.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_wechatStatus;
                    bool m_wechatStatusHasBeenSet;

                    /**
                     * WeChat `Vid`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_wechatVid;
                    bool m_wechatVidHasBeenSet;

                    /**
                     * WeChat address.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_wechatUrl;
                    bool m_wechatUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_WECHATPUBLISHTASK_H_

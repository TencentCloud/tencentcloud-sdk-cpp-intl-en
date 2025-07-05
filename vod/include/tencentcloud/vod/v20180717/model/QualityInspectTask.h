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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaMetaData.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectTaskInput.h>
#include <tencentcloud/vod/v20180717/model/QualityInspectTaskOutput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Media quality inspection task information.
                */
                class QualityInspectTask : public AbstractModel
                {
                public:
                    QualityInspectTask();
                    ~QualityInspectTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Media quality inspection task ID.
                     * @return TaskId Media quality inspection task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Media quality inspection task ID.
                     * @param _taskId Media quality inspection task ID.
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
                     * 获取Task status, value: <li>PROCESSING: processing;</li> <li>FINISH: Completed.</li>
                     * @return Status Task status, value: <li>PROCESSING: processing;</li> <li>FINISH: Completed.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status, value: <li>PROCESSING: processing;</li> <li>FINISH: Completed.</li>
                     * @param _status Task status, value: <li>PROCESSING: processing;</li> <li>FINISH: Completed.</li>
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
                     * 获取Error code, an empty string indicates success, other values indicate failure. Please refer to the [Video Processing Error Code](https://www.tencentcloud.com/document/product/266/39145) list for values.
                     * @return ErrCodeExt Error code, an empty string indicates success, other values indicate failure. Please refer to the [Video Processing Error Code](https://www.tencentcloud.com/document/product/266/39145) list for values.
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置Error code, an empty string indicates success, other values indicate failure. Please refer to the [Video Processing Error Code](https://www.tencentcloud.com/document/product/266/39145) list for values.
                     * @param _errCodeExt Error code, an empty string indicates success, other values indicate failure. Please refer to the [Video Processing Error Code](https://www.tencentcloud.com/document/product/266/39145) list for values.
                     * 
                     */
                    void SetErrCodeExt(const std::string& _errCodeExt);

                    /**
                     * 判断参数 ErrCodeExt 是否已赋值
                     * @return ErrCodeExt 是否已赋值
                     * 
                     */
                    bool ErrCodeExtHasBeenSet() const;

                    /**
                     * 获取Error information.
                     * @return Message Error information.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error information.
                     * @param _message Error information.
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
                     * 获取Media quality inspection input metadata of audio and video.
                     * @return MetaData Media quality inspection input metadata of audio and video.
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置Media quality inspection input metadata of audio and video.
                     * @param _metaData Media quality inspection input metadata of audio and video.
                     * 
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取Media quality inspection task input.
                     * @return Input Media quality inspection task input.
                     * 
                     */
                    QualityInspectTaskInput GetInput() const;

                    /**
                     * 设置Media quality inspection task input.
                     * @param _input Media quality inspection task input.
                     * 
                     */
                    void SetInput(const QualityInspectTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Media quality inspection task generates.
                     * @return Output Media quality inspection task generates.
                     * 
                     */
                    QualityInspectTaskOutput GetOutput() const;

                    /**
                     * 设置Media quality inspection task generates.
                     * @param _output Media quality inspection task generates.
                     * 
                     */
                    void SetOutput(const QualityInspectTaskOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Used for deduplication, if there has been a request with the same recognition code within seven days, this request will return an error. Maximum length of 50 characters, without or with an empty string indicates no deduplication.
                     * @return SessionId Used for deduplication, if there has been a request with the same recognition code within seven days, this request will return an error. Maximum length of 50 characters, without or with an empty string indicates no deduplication.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Used for deduplication, if there has been a request with the same recognition code within seven days, this request will return an error. Maximum length of 50 characters, without or with an empty string indicates no deduplication.
                     * @param _sessionId Used for deduplication, if there has been a request with the same recognition code within seven days, this request will return an error. Maximum length of 50 characters, without or with an empty string indicates no deduplication.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取Source context, used for transparent transmission of user request information. Upon completion of media quality inspection, the callback will return the value of this field, with a maximum length of 1000 characters.
                     * @return SessionContext Source context, used for transparent transmission of user request information. Upon completion of media quality inspection, the callback will return the value of this field, with a maximum length of 1000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Source context, used for transparent transmission of user request information. Upon completion of media quality inspection, the callback will return the value of this field, with a maximum length of 1000 characters.
                     * @param _sessionContext Source context, used for transparent transmission of user request information. Upon completion of media quality inspection, the callback will return the value of this field, with a maximum length of 1000 characters.
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                private:

                    /**
                     * Media quality inspection task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task status, value: <li>PROCESSING: processing;</li> <li>FINISH: Completed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code, an empty string indicates success, other values indicate failure. Please refer to the [Video Processing Error Code](https://www.tencentcloud.com/document/product/266/39145) list for values.
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * Error information.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Media quality inspection input metadata of audio and video.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * Media quality inspection task input.
                     */
                    QualityInspectTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Media quality inspection task generates.
                     */
                    QualityInspectTaskOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Used for deduplication, if there has been a request with the same recognition code within seven days, this request will return an error. Maximum length of 50 characters, without or with an empty string indicates no deduplication.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Source context, used for transparent transmission of user request information. Upon completion of media quality inspection, the callback will return the value of this field, with a maximum length of 1000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_QUALITYINSPECTTASK_H_

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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTCOPYRIGHTWATERMARKTASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTCOPYRIGHTWATERMARKTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ExtractCopyRightWatermarkTaskInput.h>
#include <tencentcloud/vod/v20180717/model/ExtractCopyRightWatermarkTaskOutput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Extract copyright watermark
                */
                class ExtractCopyRightWatermarkTask : public AbstractModel
                {
                public:
                    ExtractCopyRightWatermarkTask();
                    ~ExtractCopyRightWatermarkTask() = default;
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
                     * 获取Task status, values:
<li>PROCESSING: Processing;</li>
<li>FINISH: Completed. </li>
                     * @return Status Task status, values:
<li>PROCESSING: Processing;</li>
<li>FINISH: Completed. </li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status, values:
<li>PROCESSING: Processing;</li>
<li>FINISH: Completed. </li>
                     * @param _status Task status, values:
<li>PROCESSING: Processing;</li>
<li>FINISH: Completed. </li>
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
                     * 获取Error code, 0 means success, other values u200bu200bmean failure:
<li>40000: The input parameters are illegal, please check the input parameters;</li>
<li>60000: Source file error (such as video data damage), Please confirm whether the source file is normal;</li>
<li>70000: Internal service error, it is recommended to try again. </li>
                     * @return ErrCode Error code, 0 means success, other values u200bu200bmean failure:
<li>40000: The input parameters are illegal, please check the input parameters;</li>
<li>60000: Source file error (such as video data damage), Please confirm whether the source file is normal;</li>
<li>70000: Internal service error, it is recommended to try again. </li>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code, 0 means success, other values u200bu200bmean failure:
<li>40000: The input parameters are illegal, please check the input parameters;</li>
<li>60000: Source file error (such as video data damage), Please confirm whether the source file is normal;</li>
<li>70000: Internal service error, it is recommended to try again. </li>
                     * @param _errCode Error code, 0 means success, other values u200bu200bmean failure:
<li>40000: The input parameters are illegal, please check the input parameters;</li>
<li>60000: Source file error (such as video data damage), Please confirm whether the source file is normal;</li>
<li>70000: Internal service error, it is recommended to try again. </li>
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
                     * 获取Error code. An empty string indicates success. Other values u200bu200bindicate failure. For values, please refer to [Video Processing Error Code](https://www.tencentcloud.com/document/product/266/39145) list.
                     * @return ErrCodeExt Error code. An empty string indicates success. Other values u200bu200bindicate failure. For values, please refer to [Video Processing Error Code](https://www.tencentcloud.com/document/product/266/39145) list.
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置Error code. An empty string indicates success. Other values u200bu200bindicate failure. For values, please refer to [Video Processing Error Code](https://www.tencentcloud.com/document/product/266/39145) list.
                     * @param _errCodeExt Error code. An empty string indicates success. Other values u200bu200bindicate failure. For values, please refer to [Video Processing Error Code](https://www.tencentcloud.com/document/product/266/39145) list.
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
                     * 获取Extract copyright watermark task input information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Input Extract copyright watermark task input information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ExtractCopyRightWatermarkTaskInput GetInput() const;

                    /**
                     * 设置Extract copyright watermark task input information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _input Extract copyright watermark task input information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInput(const ExtractCopyRightWatermarkTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Extract copyright watermark task output information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Output Extract copyright watermark task output information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ExtractCopyRightWatermarkTaskOutput GetOutput() const;

                    /**
                     * 设置Extract copyright watermark task output information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _output Extract copyright watermark task output information.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOutput(const ExtractCopyRightWatermarkTaskOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Identification code used for deduplication. If there is a request for the same identification code within seven days, this request will return an error. The maximum length is 50 characters, without or with an empty string to indicate no deduplication.
                     * @return SessionId Identification code used for deduplication. If there is a request for the same identification code within seven days, this request will return an error. The maximum length is 50 characters, without or with an empty string to indicate no deduplication.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Identification code used for deduplication. If there is a request for the same identification code within seven days, this request will return an error. The maximum length is 50 characters, without or with an empty string to indicate no deduplication.
                     * @param _sessionId Identification code used for deduplication. If there is a request for the same identification code within seven days, this request will return an error. The maximum length is 50 characters, without or with an empty string to indicate no deduplication.
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
                     * 获取Source context, used to transparently transmit user request information. The task flow status change callback will return the value of this field, which can be up to 1000 characters.
                     * @return SessionContext Source context, used to transparently transmit user request information. The task flow status change callback will return the value of this field, which can be up to 1000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Source context, used to transparently transmit user request information. The task flow status change callback will return the value of this field, which can be up to 1000 characters.
                     * @param _sessionContext Source context, used to transparently transmit user request information. The task flow status change callback will return the value of this field, which can be up to 1000 characters.
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
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task status, values:
<li>PROCESSING: Processing;</li>
<li>FINISH: Completed. </li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code, 0 means success, other values u200bu200bmean failure:
<li>40000: The input parameters are illegal, please check the input parameters;</li>
<li>60000: Source file error (such as video data damage), Please confirm whether the source file is normal;</li>
<li>70000: Internal service error, it is recommended to try again. </li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Error code. An empty string indicates success. Other values u200bu200bindicate failure. For values, please refer to [Video Processing Error Code](https://www.tencentcloud.com/document/product/266/39145) list.
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * Extract copyright watermark task input information.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ExtractCopyRightWatermarkTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Extract copyright watermark task output information.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ExtractCopyRightWatermarkTaskOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Identification code used for deduplication. If there is a request for the same identification code within seven days, this request will return an error. The maximum length is 50 characters, without or with an empty string to indicate no deduplication.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Source context, used to transparently transmit user request information. The task flow status change callback will return the value of this field, which can be up to 1000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTCOPYRIGHTWATERMARKTASK_H_

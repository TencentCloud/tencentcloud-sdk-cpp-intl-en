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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EXTRACTBLINDWATERMARKTASK_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EXTRACTBLINDWATERMARKTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/ExtractBlindWatermarkTaskConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Extract video digital watermark task information.
                */
                class ExtractBlindWatermarkTask : public AbstractModel
                {
                public:
                    ExtractBlindWatermarkTask();
                    ~ExtractBlindWatermarkTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Media processing task ID.
                     * @return TaskId Media processing task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Media processing task ID.
                     * @param _taskId Media processing task ID.
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
                     * 获取Task flow status. valid values:.
<Li>WAITING: waiting.</li>.
<Li>PROCESSING: processing.</li>.
<li>FINISH: completed</li>
                     * @return Status Task flow status. valid values:.
<Li>WAITING: waiting.</li>.
<Li>PROCESSING: processing.</li>.
<li>FINISH: completed</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task flow status. valid values:.
<Li>WAITING: waiting.</li>.
<Li>PROCESSING: processing.</li>.
<li>FINISH: completed</li>
                     * @param _status Task flow status. valid values:.
<Li>WAITING: waiting.</li>.
<Li>PROCESSING: processing.</li>.
<li>FINISH: completed</li>
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
                     * 获取Error code. `0` indicates success. other values indicate failure.
                     * @return ErrCode Error code. `0` indicates success. other values indicate failure.
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code. `0` indicates success. other values indicate failure.
                     * @param _errCode Error code. `0` indicates success. other values indicate failure.
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
                     * 获取Target file information for media processing.
                     * @return InputInfo Target file information for media processing.
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置Target file information for media processing.
                     * @param _inputInfo Target file information for media processing.
                     * 
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取Specifies the digital watermark type. valid values: <li>blind-basic: basic version copyright digital watermark;</li> <li>blind-ab: ab copyright digital watermark.</li>.
                     * @return Type Specifies the digital watermark type. valid values: <li>blind-basic: basic version copyright digital watermark;</li> <li>blind-ab: ab copyright digital watermark.</li>.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Specifies the digital watermark type. valid values: <li>blind-basic: basic version copyright digital watermark;</li> <li>blind-ab: ab copyright digital watermark.</li>.
                     * @param _type Specifies the digital watermark type. valid values: <li>blind-basic: basic version copyright digital watermark;</li> <li>blind-ab: ab copyright digital watermark.</li>.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Indicates whether a watermark is detected. if this parameter is true, the Result field will return the watermark extraction Result. if this parameter is false, the Result field will not return.
                     * @return IsDetected Indicates whether a watermark is detected. if this parameter is true, the Result field will return the watermark extraction Result. if this parameter is false, the Result field will not return.
                     * 
                     */
                    bool GetIsDetected() const;

                    /**
                     * 设置Indicates whether a watermark is detected. if this parameter is true, the Result field will return the watermark extraction Result. if this parameter is false, the Result field will not return.
                     * @param _isDetected Indicates whether a watermark is detected. if this parameter is true, the Result field will return the watermark extraction Result. if this parameter is false, the Result field will not return.
                     * 
                     */
                    void SetIsDetected(const bool& _isDetected);

                    /**
                     * 判断参数 IsDetected 是否已赋值
                     * @return IsDetected 是否已赋值
                     * 
                     */
                    bool IsDetectedHasBeenSet() const;

                    /**
                     * 获取Fetched watermark content. this field will not be returned when no detection.
                     * @return Result Fetched watermark content. this field will not be returned when no detection.
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置Fetched watermark content. this field will not be returned when no detection.
                     * @param _result Fetched watermark content. this field will not be returned when no detection.
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Extracts the digital watermark configuration.
                     * @return ExtractBlindWatermarkConfig Extracts the digital watermark configuration.
                     * 
                     */
                    ExtractBlindWatermarkTaskConfig GetExtractBlindWatermarkConfig() const;

                    /**
                     * 设置Extracts the digital watermark configuration.
                     * @param _extractBlindWatermarkConfig Extracts the digital watermark configuration.
                     * 
                     */
                    void SetExtractBlindWatermarkConfig(const ExtractBlindWatermarkTaskConfig& _extractBlindWatermarkConfig);

                    /**
                     * 判断参数 ExtractBlindWatermarkConfig 是否已赋值
                     * @return ExtractBlindWatermarkConfig 是否已赋值
                     * 
                     */
                    bool ExtractBlindWatermarkConfigHasBeenSet() const;

                private:

                    /**
                     * Media processing task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task flow status. valid values:.
<Li>WAITING: waiting.</li>.
<Li>PROCESSING: processing.</li>.
<li>FINISH: completed</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code. `0` indicates success. other values indicate failure.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Target file information for media processing.
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * Specifies the digital watermark type. valid values: <li>blind-basic: basic version copyright digital watermark;</li> <li>blind-ab: ab copyright digital watermark.</li>.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Indicates whether a watermark is detected. if this parameter is true, the Result field will return the watermark extraction Result. if this parameter is false, the Result field will not return.
                     */
                    bool m_isDetected;
                    bool m_isDetectedHasBeenSet;

                    /**
                     * Fetched watermark content. this field will not be returned when no detection.
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Extracts the digital watermark configuration.
                     */
                    ExtractBlindWatermarkTaskConfig m_extractBlindWatermarkConfig;
                    bool m_extractBlindWatermarkConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EXTRACTBLINDWATERMARKTASK_H_

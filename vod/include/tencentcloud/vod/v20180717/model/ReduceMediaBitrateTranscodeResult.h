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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REDUCEMEDIABITRATETRANSCODERESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REDUCEMEDIABITRATETRANSCODERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TranscodeTaskInput.h>
#include <tencentcloud/vod/v20180717/model/MediaTranscodeItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * The information of a transcoding (bitrate reduction) task.
                */
                class ReduceMediaBitrateTranscodeResult : public AbstractModel
                {
                public:
                    ReduceMediaBitrateTranscodeResult();
                    ~ReduceMediaBitrateTranscodeResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The task status. Valid values: PROCESSING, SUCCESS, FAIL.
                     * @return Status The task status. Valid values: PROCESSING, SUCCESS, FAIL.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The task status. Valid values: PROCESSING, SUCCESS, FAIL.
                     * @param _status The task status. Valid values: PROCESSING, SUCCESS, FAIL.
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
                     * 获取The error code. An empty string indicates the task is successful; other values indicate that the task failed. For details, see [Video processing error codes](https://intl.cloud.tencent.com/document/product/266/39145?lang=en&pg=#video-processing).
                     * @return ErrCodeExt The error code. An empty string indicates the task is successful; other values indicate that the task failed. For details, see [Video processing error codes](https://intl.cloud.tencent.com/document/product/266/39145?lang=en&pg=#video-processing).
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置The error code. An empty string indicates the task is successful; other values indicate that the task failed. For details, see [Video processing error codes](https://intl.cloud.tencent.com/document/product/266/39145?lang=en&pg=#video-processing).
                     * @param _errCodeExt The error code. An empty string indicates the task is successful; other values indicate that the task failed. For details, see [Video processing error codes](https://intl.cloud.tencent.com/document/product/266/39145?lang=en&pg=#video-processing).
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
                     * 获取The error message.
                     * @return Message The error message.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置The error message.
                     * @param _message The error message.
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
                     * 获取The input of a transcoding task.
                     * @return Input The input of a transcoding task.
                     * 
                     */
                    TranscodeTaskInput GetInput() const;

                    /**
                     * 设置The input of a transcoding task.
                     * @param _input The input of a transcoding task.
                     * 
                     */
                    void SetInput(const TranscodeTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取The output of a transcoding task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Output The output of a transcoding task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaTranscodeItem GetOutput() const;

                    /**
                     * 设置The output of a transcoding task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _output The output of a transcoding task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutput(const MediaTranscodeItem& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取The transcoding progress. Value range: 0-100.
                     * @return Progress The transcoding progress. Value range: 0-100.
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置The transcoding progress. Value range: 0-100.
                     * @param _progress The transcoding progress. Value range: 0-100.
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取The start time of the transcoding task, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * @return BeginProcessTime The start time of the transcoding task, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * 
                     */
                    std::string GetBeginProcessTime() const;

                    /**
                     * 设置The start time of the transcoding task, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * @param _beginProcessTime The start time of the transcoding task, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * 
                     */
                    void SetBeginProcessTime(const std::string& _beginProcessTime);

                    /**
                     * 判断参数 BeginProcessTime 是否已赋值
                     * @return BeginProcessTime 是否已赋值
                     * 
                     */
                    bool BeginProcessTimeHasBeenSet() const;

                    /**
                     * 获取The end time of the transcoding task, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * @return FinishTime The end time of the transcoding task, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置The end time of the transcoding task, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * @param _finishTime The end time of the transcoding task, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                private:

                    /**
                     * The task status. Valid values: PROCESSING, SUCCESS, FAIL.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The error code. An empty string indicates the task is successful; other values indicate that the task failed. For details, see [Video processing error codes](https://intl.cloud.tencent.com/document/product/266/39145?lang=en&pg=#video-processing).
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * The error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * The input of a transcoding task.
                     */
                    TranscodeTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * The output of a transcoding task.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaTranscodeItem m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * The transcoding progress. Value range: 0-100.
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * The start time of the transcoding task, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     */
                    std::string m_beginProcessTime;
                    bool m_beginProcessTimeHasBeenSet;

                    /**
                     * The end time of the transcoding task, in [ISO date format](https://www.tencentcloud.com/document/product/266/11732#iso-date-format).
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REDUCEMEDIABITRATETRANSCODERESULT_H_

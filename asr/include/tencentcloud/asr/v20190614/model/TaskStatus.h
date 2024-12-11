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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_TASKSTATUS_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_TASKSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/asr/v20190614/model/SentenceDetail.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * [Response parameters for obtaining recording recognition results] (https://intl.cloud.tencent.com/document/product/1093/37822?from_cn_redirect=1#3.-.E8.BE.93.E5.87.BA.E5.8F.82.E6.95.B0)
                */
                class TaskStatus : public AbstractModel
                {
                public:
                    TaskStatus();
                    ~TaskStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID. Note: The data type of TaskId is uint64.
                     * @return TaskId Task ID. Note: The data type of TaskId is uint64.
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置Task ID. Note: The data type of TaskId is uint64.
                     * @param _taskId Task ID. Note: The data type of TaskId is uint64.
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Task status code. 0: waiting; 1: in process; 2: success; 3: failed.
                     * @return Status Task status code. 0: waiting; 1: in process; 2: success; 3: failed.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task status code. 0: waiting; 1: in process; 2: success; 3: failed.
                     * @param _status Task status code. 0: waiting; 1: in process; 2: success; 3: failed.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Task status. Valid values: waiting, in process, success, and failed.
                     * @return StatusStr Task status. Valid values: waiting, in process, success, and failed.
                     * 
                     */
                    std::string GetStatusStr() const;

                    /**
                     * 设置Task status. Valid values: waiting, in process, success, and failed.
                     * @param _statusStr Task status. Valid values: waiting, in process, success, and failed.
                     * 
                     */
                    void SetStatusStr(const std::string& _statusStr);

                    /**
                     * 判断参数 StatusStr 是否已赋值
                     * @return StatusStr 是否已赋值
                     * 
                     */
                    bool StatusStrHasBeenSet() const;

                    /**
                     * 获取Recognition result.
                     * @return Result Recognition result.
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置Recognition result.
                     * @param _result Recognition result.
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
                     * 获取Failure cause.
                     * @return ErrorMsg Failure cause.
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置Failure cause.
                     * @param _errorMsg Failure cause.
                     * 
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取Recognition result details, including word time offsets for each sentence, which is generally used in subtitle generation scenarios. (This field is not left blank when ResTextFormat in the recording recognition request is set to 1.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResultDetail Recognition result details, including word time offsets for each sentence, which is generally used in subtitle generation scenarios. (This field is not left blank when ResTextFormat in the recording recognition request is set to 1.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SentenceDetail> GetResultDetail() const;

                    /**
                     * 设置Recognition result details, including word time offsets for each sentence, which is generally used in subtitle generation scenarios. (This field is not left blank when ResTextFormat in the recording recognition request is set to 1.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resultDetail Recognition result details, including word time offsets for each sentence, which is generally used in subtitle generation scenarios. (This field is not left blank when ResTextFormat in the recording recognition request is set to 1.)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResultDetail(const std::vector<SentenceDetail>& _resultDetail);

                    /**
                     * 判断参数 ResultDetail 是否已赋值
                     * @return ResultDetail 是否已赋值
                     * 
                     */
                    bool ResultDetailHasBeenSet() const;

                    /**
                     * 获取Audio duration (seconds).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AudioDuration Audio duration (seconds).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetAudioDuration() const;

                    /**
                     * 设置Audio duration (seconds).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _audioDuration Audio duration (seconds).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAudioDuration(const double& _audioDuration);

                    /**
                     * 判断参数 AudioDuration 是否已赋值
                     * @return AudioDuration 是否已赋值
                     * 
                     */
                    bool AudioDurationHasBeenSet() const;

                private:

                    /**
                     * Task ID. Note: The data type of TaskId is uint64.
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task status code. 0: waiting; 1: in process; 2: success; 3: failed.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task status. Valid values: waiting, in process, success, and failed.
                     */
                    std::string m_statusStr;
                    bool m_statusStrHasBeenSet;

                    /**
                     * Recognition result.
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Failure cause.
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * Recognition result details, including word time offsets for each sentence, which is generally used in subtitle generation scenarios. (This field is not left blank when ResTextFormat in the recording recognition request is set to 1.)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SentenceDetail> m_resultDetail;
                    bool m_resultDetailHasBeenSet;

                    /**
                     * Audio duration (seconds).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_audioDuration;
                    bool m_audioDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_TASKSTATUS_H_

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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_TASKRESULT_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_TASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * Task result.
                */
                class TaskResult : public AbstractModel
                {
                public:
                    TaskResult();
                    ~TaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ExitCode of the execution.
                     * @return ExitCode ExitCode of the execution.
                     * 
                     */
                    int64_t GetExitCode() const;

                    /**
                     * 设置ExitCode of the execution.
                     * @param _exitCode ExitCode of the execution.
                     * 
                     */
                    void SetExitCode(const int64_t& _exitCode);

                    /**
                     * 判断参数 ExitCode 是否已赋值
                     * @return ExitCode 是否已赋值
                     * 
                     */
                    bool ExitCodeHasBeenSet() const;

                    /**
                     * 获取Base64-encoded command output. The maximum length is 24 KB.
                     * @return Output Base64-encoded command output. The maximum length is 24 KB.
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置Base64-encoded command output. The maximum length is 24 KB.
                     * @param _output Base64-encoded command output. The maximum length is 24 KB.
                     * 
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取Time when the execution is started.
                     * @return ExecStartTime Time when the execution is started.
                     * 
                     */
                    std::string GetExecStartTime() const;

                    /**
                     * 设置Time when the execution is started.
                     * @param _execStartTime Time when the execution is started.
                     * 
                     */
                    void SetExecStartTime(const std::string& _execStartTime);

                    /**
                     * 判断参数 ExecStartTime 是否已赋值
                     * @return ExecStartTime 是否已赋值
                     * 
                     */
                    bool ExecStartTimeHasBeenSet() const;

                    /**
                     * 获取Time when the execution is ended.
                     * @return ExecEndTime Time when the execution is ended.
                     * 
                     */
                    std::string GetExecEndTime() const;

                    /**
                     * 设置Time when the execution is ended.
                     * @param _execEndTime Time when the execution is ended.
                     * 
                     */
                    void SetExecEndTime(const std::string& _execEndTime);

                    /**
                     * 判断参数 ExecEndTime 是否已赋值
                     * @return ExecEndTime 是否已赋值
                     * 
                     */
                    bool ExecEndTimeHasBeenSet() const;

                    /**
                     * 获取Dropped bytes of the command output.
                     * @return Dropped Dropped bytes of the command output.
                     * 
                     */
                    uint64_t GetDropped() const;

                    /**
                     * 设置Dropped bytes of the command output.
                     * @param _dropped Dropped bytes of the command output.
                     * 
                     */
                    void SetDropped(const uint64_t& _dropped);

                    /**
                     * 判断参数 Dropped 是否已赋值
                     * @return Dropped 是否已赋值
                     * 
                     */
                    bool DroppedHasBeenSet() const;

                    /**
                     * 获取COS URL of the logs.
                     * @return OutputUrl COS URL of the logs.
                     * 
                     */
                    std::string GetOutputUrl() const;

                    /**
                     * 设置COS URL of the logs.
                     * @param _outputUrl COS URL of the logs.
                     * 
                     */
                    void SetOutputUrl(const std::string& _outputUrl);

                    /**
                     * 判断参数 OutputUrl 是否已赋值
                     * @return OutputUrl 是否已赋值
                     * 
                     */
                    bool OutputUrlHasBeenSet() const;

                    /**
                     * 获取Error message for uploading logs to COS.
                     * @return OutputUploadCOSErrorInfo Error message for uploading logs to COS.
                     * 
                     */
                    std::string GetOutputUploadCOSErrorInfo() const;

                    /**
                     * 设置Error message for uploading logs to COS.
                     * @param _outputUploadCOSErrorInfo Error message for uploading logs to COS.
                     * 
                     */
                    void SetOutputUploadCOSErrorInfo(const std::string& _outputUploadCOSErrorInfo);

                    /**
                     * 判断参数 OutputUploadCOSErrorInfo 是否已赋值
                     * @return OutputUploadCOSErrorInfo 是否已赋值
                     * 
                     */
                    bool OutputUploadCOSErrorInfoHasBeenSet() const;

                private:

                    /**
                     * ExitCode of the execution.
                     */
                    int64_t m_exitCode;
                    bool m_exitCodeHasBeenSet;

                    /**
                     * Base64-encoded command output. The maximum length is 24 KB.
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Time when the execution is started.
                     */
                    std::string m_execStartTime;
                    bool m_execStartTimeHasBeenSet;

                    /**
                     * Time when the execution is ended.
                     */
                    std::string m_execEndTime;
                    bool m_execEndTimeHasBeenSet;

                    /**
                     * Dropped bytes of the command output.
                     */
                    uint64_t m_dropped;
                    bool m_droppedHasBeenSet;

                    /**
                     * COS URL of the logs.
                     */
                    std::string m_outputUrl;
                    bool m_outputUrlHasBeenSet;

                    /**
                     * Error message for uploading logs to COS.
                     */
                    std::string m_outputUploadCOSErrorInfo;
                    bool m_outputUploadCOSErrorInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_TASKRESULT_H_

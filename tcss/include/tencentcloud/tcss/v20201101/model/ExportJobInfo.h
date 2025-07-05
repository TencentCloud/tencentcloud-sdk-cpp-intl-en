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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_EXPORTJOBINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_EXPORTJOBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Export job details
                */
                class ExportJobInfo : public AbstractModel
                {
                public:
                    ExportJobInfo();
                    ~ExportJobInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Job ID
                     * @return JobID Job ID
                     * 
                     */
                    std::string GetJobID() const;

                    /**
                     * 设置Job ID
                     * @param _jobID Job ID
                     * 
                     */
                    void SetJobID(const std::string& _jobID);

                    /**
                     * 判断参数 JobID 是否已赋值
                     * @return JobID 是否已赋值
                     * 
                     */
                    bool JobIDHasBeenSet() const;

                    /**
                     * 获取Job name
                     * @return JobName Job name
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Job name
                     * @param _jobName Job name
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取Source
                     * @return Source Source
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Source
                     * @param _source Source
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Export status
                     * @return ExportStatus Export status
                     * 
                     */
                    std::string GetExportStatus() const;

                    /**
                     * 设置Export status
                     * @param _exportStatus Export status
                     * 
                     */
                    void SetExportStatus(const std::string& _exportStatus);

                    /**
                     * 判断参数 ExportStatus 是否已赋值
                     * @return ExportStatus 是否已赋值
                     * 
                     */
                    bool ExportStatusHasBeenSet() const;

                    /**
                     * 获取Export progress
                     * @return ExportProgress Export progress
                     * 
                     */
                    int64_t GetExportProgress() const;

                    /**
                     * 设置Export progress
                     * @param _exportProgress Export progress
                     * 
                     */
                    void SetExportProgress(const int64_t& _exportProgress);

                    /**
                     * 判断参数 ExportProgress 是否已赋值
                     * @return ExportProgress 是否已赋值
                     * 
                     */
                    bool ExportProgressHasBeenSet() const;

                    /**
                     * 获取Reason for failure
                     * @return FailureMsg Reason for failure
                     * 
                     */
                    std::string GetFailureMsg() const;

                    /**
                     * 设置Reason for failure
                     * @param _failureMsg Reason for failure
                     * 
                     */
                    void SetFailureMsg(const std::string& _failureMsg);

                    /**
                     * 判断参数 FailureMsg 是否已赋值
                     * @return FailureMsg 是否已赋值
                     * 
                     */
                    bool FailureMsgHasBeenSet() const;

                    /**
                     * 获取Timeout threshold
                     * @return Timeout Timeout threshold
                     * 
                     */
                    std::string GetTimeout() const;

                    /**
                     * 设置Timeout threshold
                     * @param _timeout Timeout threshold
                     * 
                     */
                    void SetTimeout(const std::string& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取Insertion time
                     * @return InsertTime Insertion time
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置Insertion time
                     * @param _insertTime Insertion time
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                private:

                    /**
                     * Job ID
                     */
                    std::string m_jobID;
                    bool m_jobIDHasBeenSet;

                    /**
                     * Job name
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Source
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Export status
                     */
                    std::string m_exportStatus;
                    bool m_exportStatusHasBeenSet;

                    /**
                     * Export progress
                     */
                    int64_t m_exportProgress;
                    bool m_exportProgressHasBeenSet;

                    /**
                     * Reason for failure
                     */
                    std::string m_failureMsg;
                    bool m_failureMsgHasBeenSet;

                    /**
                     * Timeout threshold
                     */
                    std::string m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Insertion time
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_EXPORTJOBINFO_H_

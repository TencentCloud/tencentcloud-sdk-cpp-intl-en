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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EXPORTJOBITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EXPORTJOBITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Export task info
                */
                class ExportJobItem : public AbstractModel
                {
                public:
                    ExportJobItem();
                    ~ExportJobItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID.
                     * @return JobID Task ID.
                     * 
                     */
                    std::string GetJobID() const;

                    /**
                     * 设置Task ID.
                     * @param _jobID Task ID.
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
                     * 获取Task name.
                     * @return JobName Task name.
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Task name.
                     * @param _jobName Task name.
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
                     * 获取Task source.
                     * @return Source Task source.
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Task source.
                     * @param _source Task source.
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
                     * 获取Task status.
                     * @return ExportJobStatus Task status.
                     * 
                     */
                    std::string GetExportJobStatus() const;

                    /**
                     * 设置Task status.
                     * @param _exportJobStatus Task status.
                     * 
                     */
                    void SetExportJobStatus(const std::string& _exportJobStatus);

                    /**
                     * 判断参数 ExportJobStatus 是否已赋值
                     * @return ExportJobStatus 是否已赋值
                     * 
                     */
                    bool ExportJobStatusHasBeenSet() const;

                    /**
                     * 获取Task progress
                     * @return ExportProgress Task progress
                     * 
                     */
                    uint64_t GetExportProgress() const;

                    /**
                     * 设置Task progress
                     * @param _exportProgress Task progress
                     * 
                     */
                    void SetExportProgress(const uint64_t& _exportProgress);

                    /**
                     * 判断参数 ExportProgress 是否已赋值
                     * @return ExportProgress 是否已赋值
                     * 
                     */
                    bool ExportProgressHasBeenSet() const;

                    /**
                     * 获取Error message
                     * @return FailureMsg Error message
                     * 
                     */
                    std::string GetFailureMsg() const;

                    /**
                     * 设置Error message
                     * @param _failureMsg Error message
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
                     * 获取Task Timeout Duration
                     * @return Timeout Task Timeout Duration
                     * 
                     */
                    std::string GetTimeout() const;

                    /**
                     * 设置Task Timeout Duration
                     * @param _timeout Task Timeout Duration
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
                     * 获取Task creation time
                     * @return InsertTime Task creation time
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置Task creation time
                     * @param _insertTime Task creation time
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
                     * Task ID.
                     */
                    std::string m_jobID;
                    bool m_jobIDHasBeenSet;

                    /**
                     * Task name.
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Task source.
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Task status.
                     */
                    std::string m_exportJobStatus;
                    bool m_exportJobStatusHasBeenSet;

                    /**
                     * Task progress
                     */
                    uint64_t m_exportProgress;
                    bool m_exportProgressHasBeenSet;

                    /**
                     * Error message
                     */
                    std::string m_failureMsg;
                    bool m_failureMsgHasBeenSet;

                    /**
                     * Task Timeout Duration
                     */
                    std::string m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Task creation time
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EXPORTJOBITEM_H_

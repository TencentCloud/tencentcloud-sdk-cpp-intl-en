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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDREXPORTJOBITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDREXPORTJOBITEM_H_

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
                * EDR task list
                */
                class EDRExportJobItem : public AbstractModel
                {
                public:
                    EDRExportJobItem();
                    ~EDRExportJobItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task ID.</p>
                     * @return JobId <p>Task ID.</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>Task ID.</p>
                     * @param _jobId <p>Task ID.</p>
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取<p>Task name</p>
                     * @return JobName <p>Task name</p>
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置<p>Task name</p>
                     * @param _jobName <p>Task name</p>
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
                     * 获取<p>Data source</p>
                     * @return Source <p>Data source</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>Data source</p>
                     * @param _source <p>Data source</p>
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
                     * 获取<p>Export status.</p>
                     * @return ExportStatus <p>Export status.</p>
                     * 
                     */
                    std::string GetExportStatus() const;

                    /**
                     * 设置<p>Export status.</p>
                     * @param _exportStatus <p>Export status.</p>
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
                     * 获取<p>Export progress</p>
                     * @return ExportProgress <p>Export progress</p>
                     * 
                     */
                    int64_t GetExportProgress() const;

                    /**
                     * 设置<p>Export progress</p>
                     * @param _exportProgress <p>Export progress</p>
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
                     * 获取<p>Description of failure</p>
                     * @return FailureMsg <p>Description of failure</p>
                     * 
                     */
                    std::string GetFailureMsg() const;

                    /**
                     * 设置<p>Description of failure</p>
                     * @param _failureMsg <p>Description of failure</p>
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
                     * 获取<p>Timeout period.</p>
                     * @return Timeout <p>Timeout period.</p>
                     * 
                     */
                    std::string GetTimeout() const;

                    /**
                     * 设置<p>Timeout period.</p>
                     * @param _timeout <p>Timeout period.</p>
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
                     * 获取<p>Insertion time.</p>
                     * @return InsertTime <p>Insertion time.</p>
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置<p>Insertion time.</p>
                     * @param _insertTime <p>Insertion time.</p>
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
                     * <p>Task ID.</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>Task name</p>
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * <p>Data source</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>Export status.</p>
                     */
                    std::string m_exportStatus;
                    bool m_exportStatusHasBeenSet;

                    /**
                     * <p>Export progress</p>
                     */
                    int64_t m_exportProgress;
                    bool m_exportProgressHasBeenSet;

                    /**
                     * <p>Description of failure</p>
                     */
                    std::string m_failureMsg;
                    bool m_failureMsgHasBeenSet;

                    /**
                     * <p>Timeout period.</p>
                     */
                    std::string m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>Insertion time.</p>
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDREXPORTJOBITEM_H_

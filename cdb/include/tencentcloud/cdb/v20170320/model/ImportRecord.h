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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_IMPORTRECORD_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_IMPORTRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Import task records
                */
                class ImportRecord : public AbstractModel
                {
                public:
                    ImportRecord();
                    ~ImportRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Status value
                     * @return Status Status value
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status value
                     * @param _status Status value
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
                     * 获取Status value
                     * @return Code Status value
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置Status value
                     * @param _code Status value
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Execution duration
                     * @return CostTime Execution duration
                     * 
                     */
                    int64_t GetCostTime() const;

                    /**
                     * 设置Execution duration
                     * @param _costTime Execution duration
                     * 
                     */
                    void SetCostTime(const int64_t& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Backend task ID
                     * @return WorkId Backend task ID
                     * 
                     */
                    std::string GetWorkId() const;

                    /**
                     * 设置Backend task ID
                     * @param _workId Backend task ID
                     * 
                     */
                    void SetWorkId(const std::string& _workId);

                    /**
                     * 判断参数 WorkId 是否已赋值
                     * @return WorkId 是否已赋值
                     * 
                     */
                    bool WorkIdHasBeenSet() const;

                    /**
                     * 获取Name of the file to be imported
                     * @return FileName Name of the file to be imported
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Name of the file to be imported
                     * @param _fileName Name of the file to be imported
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Execution progress
                     * @return Process Execution progress
                     * 
                     */
                    int64_t GetProcess() const;

                    /**
                     * 设置Execution progress
                     * @param _process Execution progress
                     * 
                     */
                    void SetProcess(const int64_t& _process);

                    /**
                     * 判断参数 Process 是否已赋值
                     * @return Process 是否已赋值
                     * 
                     */
                    bool ProcessHasBeenSet() const;

                    /**
                     * 获取Task creation time
                     * @return CreateTime Task creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Task creation time
                     * @param _createTime Task creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取File size
                     * @return FileSize File size
                     * 
                     */
                    std::string GetFileSize() const;

                    /**
                     * 设置File size
                     * @param _fileSize File size
                     * 
                     */
                    void SetFileSize(const std::string& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取Task execution information
                     * @return Message Task execution information
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Task execution information
                     * @param _message Task execution information
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
                     * 获取Task ID
                     * @return JobId Task ID
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 设置Task ID
                     * @param _jobId Task ID
                     * 
                     */
                    void SetJobId(const int64_t& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Name of the table to be imported
                     * @return DbName Name of the table to be imported
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Name of the table to be imported
                     * @param _dbName Name of the table to be imported
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取Async task request ID
                     * @return AsyncRequestId Async task request ID
                     * 
                     */
                    std::string GetAsyncRequestId() const;

                    /**
                     * 设置Async task request ID
                     * @param _asyncRequestId Async task request ID
                     * 
                     */
                    void SetAsyncRequestId(const std::string& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                private:

                    /**
                     * Status value
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Status value
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Execution duration
                     */
                    int64_t m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backend task ID
                     */
                    std::string m_workId;
                    bool m_workIdHasBeenSet;

                    /**
                     * Name of the file to be imported
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Execution progress
                     */
                    int64_t m_process;
                    bool m_processHasBeenSet;

                    /**
                     * Task creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * File size
                     */
                    std::string m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * Task execution information
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Task ID
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Name of the table to be imported
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Async task request ID
                     */
                    std::string m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_IMPORTRECORD_H_

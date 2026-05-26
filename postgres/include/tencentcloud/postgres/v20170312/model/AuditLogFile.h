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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_AUDITLOGFILE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_AUDITLOGFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Database Audit log file
                */
                class AuditLogFile : public AbstractModel
                {
                public:
                    AuditLogFile();
                    ~AuditLogFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>File name</p>
                     * @return FileName <p>File name</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>File name</p>
                     * @param _fileName <p>File name</p>
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
                     * 获取<p>Task status.</p><p>Enumeration values: </p><ul><li>success: Success, </li><li>running: Creating, </li><li>failed: Failure.</li></ul>
                     * @return Status <p>Task status.</p><p>Enumeration values: </p><ul><li>success: Success, </li><li>running: Creating, </li><li>failed: Failure.</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Task status.</p><p>Enumeration values: </p><ul><li>success: Success, </li><li>running: Creating, </li><li>failed: Failure.</li></ul>
                     * @param _status <p>Task status.</p><p>Enumeration values: </p><ul><li>success: Success, </li><li>running: Creating, </li><li>failed: Failure.</li></ul>
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
                     * 获取<p>File size</p><p>Unit: MB</p>
                     * @return FileSize <p>File size</p><p>Unit: MB</p>
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置<p>File size</p><p>Unit: MB</p>
                     * @param _fileSize <p>File size</p><p>Unit: MB</p>
                     * 
                     */
                    void SetFileSize(const uint64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
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
                     * 获取<p>Download link</p>
                     * @return DownloadUrl <p>Download link</p>
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置<p>Download link</p>
                     * @param _downloadUrl <p>Download link</p>
                     * 
                     */
                    void SetDownloadUrl(const std::string& _downloadUrl);

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取<p>Error message</p>
                     * @return ErrMsg <p>Error message</p>
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置<p>Error message</p>
                     * @param _errMsg <p>Error message</p>
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取<p>Download progress</p>
                     * @return Progress <p>Download progress</p>
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置<p>Download progress</p>
                     * @param _progress <p>Download progress</p>
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>Completion time.</p>
                     * @return FinishTime <p>Completion time.</p>
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置<p>Completion time.</p>
                     * @param _finishTime <p>Completion time.</p>
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
                     * <p>File name</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>Task status.</p><p>Enumeration values: </p><ul><li>success: Success, </li><li>running: Creating, </li><li>failed: Failure.</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>File size</p><p>Unit: MB</p>
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Download link</p>
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * <p>Error message</p>
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * <p>Download progress</p>
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>Completion time.</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_AUDITLOGFILE_H_

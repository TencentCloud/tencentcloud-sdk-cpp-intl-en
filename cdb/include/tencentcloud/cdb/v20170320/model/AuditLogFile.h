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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_AUDITLOGFILE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_AUDITLOGFILE_H_

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
                * Audit log file.
                */
                class AuditLogFile : public AbstractModel
                {
                public:
                    AuditLogFile();
                    ~AuditLogFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Audit log file name.
                     * @return FileName Audit log file name.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Audit log file name.
                     * @param _fileName Audit log file name.
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
                     * 获取Creation time of the audit log file, in the format: "2019-03-20 17:09:13".
                     * @return CreateTime Creation time of the audit log file, in the format: "2019-03-20 17:09:13".
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of the audit log file, in the format: "2019-03-20 17:09:13".
                     * @param _createTime Creation time of the audit log file, in the format: "2019-03-20 17:09:13".
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
                     * 获取File status. Possible return values:"creating" - Generating;"failed" - Creation failed;"success" - Generated.
                     * @return Status File status. Possible return values:"creating" - Generating;"failed" - Creation failed;"success" - Generated.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置File status. Possible return values:"creating" - Generating;"failed" - Creation failed;"success" - Generated.
                     * @param _status File status. Possible return values:"creating" - Generating;"failed" - Creation failed;"success" - Generated.
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
                     * 获取File size in KB.
                     * @return FileSize File size in KB.
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置File size in KB.
                     * @param _fileSize File size in KB.
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取Download URL for the audit log.
                     * @return DownloadUrl Download URL for the audit log.
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置Download URL for the audit log.
                     * @param _downloadUrl Download URL for the audit log.
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
                     * 获取Error message.
                     * @return ErrMsg Error message.
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置Error message.
                     * @param _errMsg Error message.
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * Audit log file name.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Creation time of the audit log file, in the format: "2019-03-20 17:09:13".
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * File status. Possible return values:"creating" - Generating;"failed" - Creation failed;"success" - Generated.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * File size in KB.
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * Download URL for the audit log.
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_AUDITLOGFILE_H_

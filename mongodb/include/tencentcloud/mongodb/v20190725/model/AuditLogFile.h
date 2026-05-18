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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_AUDITLOGFILE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_AUDITLOGFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
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
                     * 获取File status value. May return the following values:
"creating" - generating
"Failed" - Creation failed.
"success" - generated.
                     * @return Status File status value. May return the following values:
"creating" - generating
"Failed" - Creation failed.
"success" - generated.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置File status value. May return the following values:
"creating" - generating
"Failed" - Creation failed.
"success" - generated.
                     * @param _status File status value. May return the following values:
"creating" - generating
"Failed" - Creation failed.
"success" - generated.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileSize File size in KB.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置File size in KB.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileSize File size in KB.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Download URL for the audit log.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DownloadUrl Download URL for the audit log.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置Download URL for the audit log.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _downloadUrl Download URL for the audit log.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrMsg Error message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置Error message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _errMsg Error message.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Download progress
                     * @return ProgressRate Download progress
                     * 
                     */
                    uint64_t GetProgressRate() const;

                    /**
                     * 设置Download progress
                     * @param _progressRate Download progress
                     * 
                     */
                    void SetProgressRate(const uint64_t& _progressRate);

                    /**
                     * 判断参数 ProgressRate 是否已赋值
                     * @return ProgressRate 是否已赋值
                     * 
                     */
                    bool ProgressRateHasBeenSet() const;

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
                     * File status value. May return the following values:
"creating" - generating
"Failed" - Creation failed.
"success" - generated.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * File size in KB.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * Download URL for the audit log.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * Error message.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * Download progress
                     */
                    uint64_t m_progressRate;
                    bool m_progressRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_AUDITLOGFILE_H_

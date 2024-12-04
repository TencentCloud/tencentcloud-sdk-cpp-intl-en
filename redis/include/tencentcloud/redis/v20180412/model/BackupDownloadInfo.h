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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_BACKUPDOWNLOADINFO_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_BACKUPDOWNLOADINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Backup download information
                */
                class BackupDownloadInfo : public AbstractModel
                {
                public:
                    BackupDownloadInfo();
                    ~BackupDownloadInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Backup file name
                     * @return FileName Backup file name
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Backup file name
                     * @param _fileName Backup file name
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
                     * 获取Backup file size in bytes. If the parameter value is `0`, the backup file size is unknown.
                     * @return FileSize Backup file size in bytes. If the parameter value is `0`, the backup file size is unknown.
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置Backup file size in bytes. If the parameter value is `0`, the backup file size is unknown.
                     * @param _fileSize Backup file size in bytes. If the parameter value is `0`, the backup file size is unknown.
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
                     * 获取Address (valid for six hours) used to download the backup file over the public network
                     * @return DownloadUrl Address (valid for six hours) used to download the backup file over the public network
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置Address (valid for six hours) used to download the backup file over the public network
                     * @param _downloadUrl Address (valid for six hours) used to download the backup file over the public network
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
                     * 获取Address (valid for six hours) used to download the backup file over the private network
                     * @return InnerDownloadUrl Address (valid for six hours) used to download the backup file over the private network
                     * 
                     */
                    std::string GetInnerDownloadUrl() const;

                    /**
                     * 设置Address (valid for six hours) used to download the backup file over the private network
                     * @param _innerDownloadUrl Address (valid for six hours) used to download the backup file over the private network
                     * 
                     */
                    void SetInnerDownloadUrl(const std::string& _innerDownloadUrl);

                    /**
                     * 判断参数 InnerDownloadUrl 是否已赋值
                     * @return InnerDownloadUrl 是否已赋值
                     * 
                     */
                    bool InnerDownloadUrlHasBeenSet() const;

                private:

                    /**
                     * Backup file name
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Backup file size in bytes. If the parameter value is `0`, the backup file size is unknown.
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * Address (valid for six hours) used to download the backup file over the public network
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * Address (valid for six hours) used to download the backup file over the private network
                     */
                    std::string m_innerDownloadUrl;
                    bool m_innerDownloadUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_BACKUPDOWNLOADINFO_H_

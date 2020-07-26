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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_SQLFILEINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_SQLFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/UploadInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * SQL file information
                */
                class SqlFileInfo : public AbstractModel
                {
                public:
                    SqlFileInfo();
                    ~SqlFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Upload time
                     * @return UploadTime Upload time
                     */
                    std::string GetUploadTime() const;

                    /**
                     * 设置Upload time
                     * @param UploadTime Upload time
                     */
                    void SetUploadTime(const std::string& _uploadTime);

                    /**
                     * 判断参数 UploadTime 是否已赋值
                     * @return UploadTime 是否已赋值
                     */
                    bool UploadTimeHasBeenSet() const;

                    /**
                     * 获取Upload progress
                     * @return UploadInfo Upload progress
                     */
                    UploadInfo GetUploadInfo() const;

                    /**
                     * 设置Upload progress
                     * @param UploadInfo Upload progress
                     */
                    void SetUploadInfo(const UploadInfo& _uploadInfo);

                    /**
                     * 判断参数 UploadInfo 是否已赋值
                     * @return UploadInfo 是否已赋值
                     */
                    bool UploadInfoHasBeenSet() const;

                    /**
                     * 获取Filename
                     * @return FileName Filename
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Filename
                     * @param FileName Filename
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取File size in bytes
                     * @return FileSize File size in bytes
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置File size in bytes
                     * @param FileSize File size in bytes
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取Whether upload is finished. Valid values: 0 (not completed), 1 (completed)
                     * @return IsUploadFinished Whether upload is finished. Valid values: 0 (not completed), 1 (completed)
                     */
                    int64_t GetIsUploadFinished() const;

                    /**
                     * 设置Whether upload is finished. Valid values: 0 (not completed), 1 (completed)
                     * @param IsUploadFinished Whether upload is finished. Valid values: 0 (not completed), 1 (completed)
                     */
                    void SetIsUploadFinished(const int64_t& _isUploadFinished);

                    /**
                     * 判断参数 IsUploadFinished 是否已赋值
                     * @return IsUploadFinished 是否已赋值
                     */
                    bool IsUploadFinishedHasBeenSet() const;

                    /**
                     * 获取File ID
                     * @return FileId File ID
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置File ID
                     * @param FileId File ID
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                private:

                    /**
                     * Upload time
                     */
                    std::string m_uploadTime;
                    bool m_uploadTimeHasBeenSet;

                    /**
                     * Upload progress
                     */
                    UploadInfo m_uploadInfo;
                    bool m_uploadInfoHasBeenSet;

                    /**
                     * Filename
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * File size in bytes
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * Whether upload is finished. Valid values: 0 (not completed), 1 (completed)
                     */
                    int64_t m_isUploadFinished;
                    bool m_isUploadFinishedHasBeenSet;

                    /**
                     * File ID
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_SQLFILEINFO_H_

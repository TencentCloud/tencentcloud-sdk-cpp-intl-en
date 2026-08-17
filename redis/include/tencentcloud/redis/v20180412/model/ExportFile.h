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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_EXPORTFILE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_EXPORTFILE_H_

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
                * export file
                */
                class ExportFile : public AbstractModel
                {
                public:
                    ExportFile();
                    ~ExportFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>File name.</p>
                     * @return FileName <p>File name.</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>File name.</p>
                     * @param _fileName <p>File name.</p>
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
                     * 获取<p>Status value.</p><p>Enumeration values: </p><ul><li>creating: File creation in progress, </li><li>success: File generated, </li><li>failed: File generation failed, </li><li>deleted: File deleted.</li></ul>
                     * @return Status <p>Status value.</p><p>Enumeration values: </p><ul><li>creating: File creation in progress, </li><li>success: File generated, </li><li>failed: File generation failed, </li><li>deleted: File deleted.</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Status value.</p><p>Enumeration values: </p><ul><li>creating: File creation in progress, </li><li>success: File generated, </li><li>failed: File generation failed, </li><li>deleted: File deleted.</li></ul>
                     * @param _status <p>Status value.</p><p>Enumeration values: </p><ul><li>creating: File creation in progress, </li><li>success: File generated, </li><li>failed: File generation failed, </li><li>deleted: File deleted.</li></ul>
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
                     * 获取<p>File size. Measurement unit: byte.</p>
                     * @return FileSize <p>File size. Measurement unit: byte.</p>
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置<p>File size. Measurement unit: byte.</p>
                     * @param _fileSize <p>File size. Measurement unit: byte.</p>
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
                     * 获取<p>File creation time.</p>
                     * @return CreateTime <p>File creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>File creation time.</p>
                     * @param _createTime <p>File creation time.</p>
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
                     * 获取<p>Download link.</p>
                     * @return DownloadUrl <p>Download link.</p>
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置<p>Download link.</p>
                     * @param _downloadUrl <p>Download link.</p>
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
                     * 获取<p>Error information of the exported file.</p>
                     * @return ErrMsg <p>Error information of the exported file.</p>
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置<p>Error information of the exported file.</p>
                     * @param _errMsg <p>Error information of the exported file.</p>
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
                     * 获取<p>Progress of the exported file.</p>
                     * @return Progress <p>Progress of the exported file.</p>
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置<p>Progress of the exported file.</p>
                     * @param _progress <p>Progress of the exported file.</p>
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取<p>Completion time of the exported file.</p>
                     * @return FinishTime <p>Completion time of the exported file.</p>
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置<p>Completion time of the exported file.</p>
                     * @param _finishTime <p>Completion time of the exported file.</p>
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取<p>Asynchronous request ID.</p>
                     * @return AsyncRequestId <p>Asynchronous request ID.</p>
                     * 
                     */
                    int64_t GetAsyncRequestId() const;

                    /**
                     * 设置<p>Asynchronous request ID.</p>
                     * @param _asyncRequestId <p>Asynchronous request ID.</p>
                     * 
                     */
                    void SetAsyncRequestId(const int64_t& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                private:

                    /**
                     * <p>File name.</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>Status value.</p><p>Enumeration values: </p><ul><li>creating: File creation in progress, </li><li>success: File generated, </li><li>failed: File generation failed, </li><li>deleted: File deleted.</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>File size. Measurement unit: byte.</p>
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>File creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Download link.</p>
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * <p>Error information of the exported file.</p>
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * <p>Progress of the exported file.</p>
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>Completion time of the exported file.</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>Asynchronous request ID.</p>
                     */
                    int64_t m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_EXPORTFILE_H_

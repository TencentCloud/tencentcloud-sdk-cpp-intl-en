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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_FILEINFOCONTENT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_FILEINFOCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * File information content
                */
                class FileInfoContent : public AbstractModel
                {
                public:
                    FileInfoContent();
                    ~FileInfoContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>DocBizId returned by the real-time document parsing API</p>
                     * @return DocBizId <p>DocBizId returned by the real-time document parsing API</p>
                     * @deprecated
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置<p>DocBizId returned by the real-time document parsing API</p>
                     * @param _docBizId <p>DocBizId returned by the real-time document parsing API</p>
                     * @deprecated
                     */
                    void SetDocBizId(const std::string& _docBizId);

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * @deprecated
                     */
                    bool DocBizIdHasBeenSet() const;

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
                     * 获取<p>File type</p>
                     * @return FileType <p>File type</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>File type</p>
                     * @param _fileType <p>File type</p>
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取<p>File size in bytes</p>
                     * @return FileSize <p>File size in bytes</p>
                     * 
                     */
                    std::string GetFileSize() const;

                    /**
                     * 设置<p>File size in bytes</p>
                     * @param _fileSize <p>File size in bytes</p>
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
                     * 获取<p>File URL</p>
                     * @return FileUrl <p>File URL</p>
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置<p>File URL</p>
                     * @param _fileUrl <p>File URL</p>
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取<p>doc_id returned by the real-time document parsing API.</p>
                     * @return DocId <p>doc_id returned by the real-time document parsing API.</p>
                     * 
                     */
                    std::string GetDocId() const;

                    /**
                     * 设置<p>doc_id returned by the real-time document parsing API.</p>
                     * @param _docId <p>doc_id returned by the real-time document parsing API.</p>
                     * 
                     */
                    void SetDocId(const std::string& _docId);

                    /**
                     * 判断参数 DocId 是否已赋值
                     * @return DocId 是否已赋值
                     * 
                     */
                    bool DocIdHasBeenSet() const;

                    /**
                     * 获取<p>File creation time</p>
                     * @return CreateTime <p>File creation time</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>File creation time</p>
                     * @param _createTime <p>File creation time</p>
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
                     * 获取<p>Local path of the file in the sandbox</p>
                     * @return LocalPath <p>Local path of the file in the sandbox</p>
                     * 
                     */
                    std::string GetLocalPath() const;

                    /**
                     * 设置<p>Local path of the file in the sandbox</p>
                     * @param _localPath <p>Local path of the file in the sandbox</p>
                     * 
                     */
                    void SetLocalPath(const std::string& _localPath);

                    /**
                     * 判断参数 LocalPath 是否已赋值
                     * @return LocalPath 是否已赋值
                     * 
                     */
                    bool LocalPathHasBeenSet() const;

                    /**
                     * 获取<p>File moderation status</p><p>Enumeration values:</p><ul><li>1: under review</li><li>2: pass review</li><li>3: fail review</li></ul>
                     * @return AuditStatus <p>File moderation status</p><p>Enumeration values:</p><ul><li>1: under review</li><li>2: pass review</li><li>3: fail review</li></ul>
                     * 
                     */
                    uint64_t GetAuditStatus() const;

                    /**
                     * 设置<p>File moderation status</p><p>Enumeration values:</p><ul><li>1: under review</li><li>2: pass review</li><li>3: fail review</li></ul>
                     * @param _auditStatus <p>File moderation status</p><p>Enumeration values:</p><ul><li>1: under review</li><li>2: pass review</li><li>3: fail review</li></ul>
                     * 
                     */
                    void SetAuditStatus(const uint64_t& _auditStatus);

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     * 
                     */
                    bool AuditStatusHasBeenSet() const;

                private:

                    /**
                     * <p>DocBizId returned by the real-time document parsing API</p>
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * <p>File name.</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>File type</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>File size in bytes</p>
                     */
                    std::string m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>File URL</p>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * <p>doc_id returned by the real-time document parsing API.</p>
                     */
                    std::string m_docId;
                    bool m_docIdHasBeenSet;

                    /**
                     * <p>File creation time</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Local path of the file in the sandbox</p>
                     */
                    std::string m_localPath;
                    bool m_localPathHasBeenSet;

                    /**
                     * <p>File moderation status</p><p>Enumeration values:</p><ul><li>1: under review</li><li>2: pass review</li><li>3: fail review</li></ul>
                     */
                    uint64_t m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_FILEINFOCONTENT_H_

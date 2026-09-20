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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CONCATFILEINFO2017_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CONCATFILEINFO2017_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Source file information for video stitching (2017 version)
                */
                class ConcatFileInfo2017 : public AbstractModel
                {
                public:
                    ConcatFileInfo2017();
                    ~ConcatFileInfo2017() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Error code.
<li>0: success;</li>
<li>Other value: failure.</li>
                     * @return ErrCode Error code.
<li>0: success;</li>
<li>Other value: failure.</li>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code.
<li>0: success;</li>
<li>Other value: failure.</li>
                     * @param _errCode Error code.
<li>0: success;</li>
<li>Other value: failure.</li>
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取Error message.
                     * @return Message Error message.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message.
                     * @param _message Error message.
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
                     * 获取ID of the source file for video splicing.
                     * @return FileId ID of the source file for video splicing.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置ID of the source file for video splicing.
                     * @param _fileId ID of the source file for video splicing.
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Domain names or IP addresses of source files for video splicing.
                     * @return FileUrl Domain names or IP addresses of source files for video splicing.
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置Domain names or IP addresses of source files for video splicing.
                     * @param _fileUrl Domain names or IP addresses of source files for video splicing.
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
                     * 获取Format of the source file for video splicing.
                     * @return FileType Format of the source file for video splicing.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置Format of the source file for video splicing.
                     * @param _fileType Format of the source file for video splicing.
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                private:

                    /**
                     * Error code.
<li>0: success;</li>
<li>Other value: failure.</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * ID of the source file for video splicing.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Domain names or IP addresses of source files for video splicing.
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * Format of the source file for video splicing.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CONCATFILEINFO2017_H_

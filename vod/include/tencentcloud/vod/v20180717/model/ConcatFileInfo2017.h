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
                * Information of source file for video splicing (v2017)
                */
                class ConcatFileInfo2017 : public AbstractModel
                {
                public:
                    ConcatFileInfo2017();
                    ~ConcatFileInfo2017() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ErrCode Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _errCode Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Message Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _message Error message.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取ID of source file for video splicing.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FileId ID of source file for video splicing.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置ID of source file for video splicing.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _fileId ID of source file for video splicing.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Address of source file for video splicing.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FileUrl Address of source file for video splicing.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置Address of source file for video splicing.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _fileUrl Address of source file for video splicing.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Format of source file for video splicing.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FileType Format of source file for video splicing.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置Format of source file for video splicing.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _fileType Format of source file for video splicing.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * Error code
<li>0: success;</li>
<li>Other values: failure.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * ID of source file for video splicing.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Address of source file for video splicing.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * Format of source file for video splicing.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CONCATFILEINFO2017_H_

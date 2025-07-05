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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_FILEINFO_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_FILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * The description of a file, including a download URL and the MD5 checksum and size of the file.
                */
                class FileInfo : public AbstractModel
                {
                public:
                    FileInfo();
                    ~FileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The URL for downloading the file
                     * @return Url The URL for downloading the file
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置The URL for downloading the file
                     * @param _url The URL for downloading the file
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取The 32-bit MD5 checksum of the file
                     * @return MD5 The 32-bit MD5 checksum of the file
                     * 
                     */
                    std::string GetMD5() const;

                    /**
                     * 设置The 32-bit MD5 checksum of the file
                     * @param _mD5 The 32-bit MD5 checksum of the file
                     * 
                     */
                    void SetMD5(const std::string& _mD5);

                    /**
                     * 判断参数 MD5 是否已赋值
                     * @return MD5 是否已赋值
                     * 
                     */
                    bool MD5HasBeenSet() const;

                    /**
                     * 获取The file size
                     * @return Size The file size
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置The file size
                     * @param _size The file size
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                private:

                    /**
                     * The URL for downloading the file
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * The 32-bit MD5 checksum of the file
                     */
                    std::string m_mD5;
                    bool m_mD5HasBeenSet;

                    /**
                     * The file size
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_FILEINFO_H_

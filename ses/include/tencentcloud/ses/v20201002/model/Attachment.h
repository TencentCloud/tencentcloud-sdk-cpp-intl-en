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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_ATTACHMENT_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_ATTACHMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * Attachment structure, including attachment name and Base64-encoded attachment content
                */
                class Attachment : public AbstractModel
                {
                public:
                    Attachment();
                    ~Attachment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Attachment name, which cannot exceed 255 characters. Some attachment types are not supported. For details, see [Attachment Types](https://intl.cloud.tencent.com/document/product/1288/51951?from_cn_redirect=1).
                     * @return FileName Attachment name, which cannot exceed 255 characters. Some attachment types are not supported. For details, see [Attachment Types](https://intl.cloud.tencent.com/document/product/1288/51951?from_cn_redirect=1).
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Attachment name, which cannot exceed 255 characters. Some attachment types are not supported. For details, see [Attachment Types](https://intl.cloud.tencent.com/document/product/1288/51951?from_cn_redirect=1).
                     * @param _fileName Attachment name, which cannot exceed 255 characters. Some attachment types are not supported. For details, see [Attachment Types](https://intl.cloud.tencent.com/document/product/1288/51951?from_cn_redirect=1).
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
                     * 获取The Base64-encoded attachment content supports a maximum of 4M. note: tencent cloud API supports up to 8M request packets. the attachment content is expected to expand by 1.5 times after Base64 encoding. you should control the total size of all attachments within 4M. the API will return an error if the overall request exceeds 8M.
                     * @return Content The Base64-encoded attachment content supports a maximum of 4M. note: tencent cloud API supports up to 8M request packets. the attachment content is expected to expand by 1.5 times after Base64 encoding. you should control the total size of all attachments within 4M. the API will return an error if the overall request exceeds 8M.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置The Base64-encoded attachment content supports a maximum of 4M. note: tencent cloud API supports up to 8M request packets. the attachment content is expected to expand by 1.5 times after Base64 encoding. you should control the total size of all attachments within 4M. the API will return an error if the overall request exceeds 8M.
                     * @param _content The Base64-encoded attachment content supports a maximum of 4M. note: tencent cloud API supports up to 8M request packets. the attachment content is expected to expand by 1.5 times after Base64 encoding. you should control the total size of all attachments within 4M. the API will return an error if the overall request exceeds 8M.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Attachment URL. do not use the open function.
                     * @return FileURL Attachment URL. do not use the open function.
                     * 
                     */
                    std::string GetFileURL() const;

                    /**
                     * 设置Attachment URL. do not use the open function.
                     * @param _fileURL Attachment URL. do not use the open function.
                     * 
                     */
                    void SetFileURL(const std::string& _fileURL);

                    /**
                     * 判断参数 FileURL 是否已赋值
                     * @return FileURL 是否已赋值
                     * 
                     */
                    bool FileURLHasBeenSet() const;

                private:

                    /**
                     * Attachment name, which cannot exceed 255 characters. Some attachment types are not supported. For details, see [Attachment Types](https://intl.cloud.tencent.com/document/product/1288/51951?from_cn_redirect=1).
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * The Base64-encoded attachment content supports a maximum of 4M. note: tencent cloud API supports up to 8M request packets. the attachment content is expected to expand by 1.5 times after Base64 encoding. you should control the total size of all attachments within 4M. the API will return an error if the overall request exceeds 8M.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Attachment URL. do not use the open function.
                     */
                    std::string m_fileURL;
                    bool m_fileURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_ATTACHMENT_H_

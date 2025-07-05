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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEASRHOTWORDSREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEASRHOTWORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateAsrHotwords request structure.
                */
                class CreateAsrHotwordsRequest : public AbstractModel
                {
                public:
                    CreateAsrHotwordsRequest();
                    ~CreateAsrHotwordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取0: temporary hotword; 1 file-based hotword.
                     * @return Type 0: temporary hotword; 1 file-based hotword.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置0: temporary hotword; 1 file-based hotword.
                     * @param _type 0: temporary hotword; 1 file-based hotword.
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Hotword lexicon name.
                     * @return Name Hotword lexicon name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Hotword lexicon name.
                     * @param _name Hotword lexicon name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Hotword lexicon text. This field is required if Type is set to 0.
                     * @return Content Hotword lexicon text. This field is required if Type is set to 0.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Hotword lexicon text. This field is required if Type is set to 0.
                     * @param _content Hotword lexicon text. This field is required if Type is set to 0.
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
                     * 获取Base64-encoded content of the hotword file. This field is required if Type is set to 1.


                     * @return FileContent Base64-encoded content of the hotword file. This field is required if Type is set to 1.


                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置Base64-encoded content of the hotword file. This field is required if Type is set to 1.


                     * @param _fileContent Base64-encoded content of the hotword file. This field is required if Type is set to 1.


                     * 
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                    /**
                     * 获取Name of the uploaded file.
                     * @return FileName Name of the uploaded file.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Name of the uploaded file.
                     * @param _fileName Name of the uploaded file.
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                private:

                    /**
                     * 0: temporary hotword; 1 file-based hotword.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Hotword lexicon name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Hotword lexicon text. This field is required if Type is set to 0.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Base64-encoded content of the hotword file. This field is required if Type is set to 1.


                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * Name of the uploaded file.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEASRHOTWORDSREQUEST_H_

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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYASRHOTWORDSREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYASRHOTWORDSREQUEST_H_

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
                * ModifyAsrHotwords request structure.
                */
                class ModifyAsrHotwordsRequest : public AbstractModel
                {
                public:
                    ModifyAsrHotwordsRequest();
                    ~ModifyAsrHotwordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Hotword lexicon ID. 
 
Either Name or Content should be specified if the hotword lexicon is a temporary hotword lexicon.
Either Name, FileContent, or FileName should be specified if the hotword lexicon is a file-based hotword lexicon.

                     * @return HotwordsId Hotword lexicon ID. 
 
Either Name or Content should be specified if the hotword lexicon is a temporary hotword lexicon.
Either Name, FileContent, or FileName should be specified if the hotword lexicon is a file-based hotword lexicon.

                     * 
                     */
                    std::string GetHotwordsId() const;

                    /**
                     * 设置Hotword lexicon ID. 
 
Either Name or Content should be specified if the hotword lexicon is a temporary hotword lexicon.
Either Name, FileContent, or FileName should be specified if the hotword lexicon is a file-based hotword lexicon.

                     * @param _hotwordsId Hotword lexicon ID. 
 
Either Name or Content should be specified if the hotword lexicon is a temporary hotword lexicon.
Either Name, FileContent, or FileName should be specified if the hotword lexicon is a file-based hotword lexicon.

                     * 
                     */
                    void SetHotwordsId(const std::string& _hotwordsId);

                    /**
                     * 判断参数 HotwordsId 是否已赋值
                     * @return HotwordsId 是否已赋值
                     * 
                     */
                    bool HotwordsIdHasBeenSet() const;

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
                     * 获取Hotword lexicon text.
                     * @return Content Hotword lexicon text.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Hotword lexicon text.
                     * @param _content Hotword lexicon text.
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
                     * 获取Name of the uploaded hotword file.
                     * @return FileName Name of the uploaded hotword file.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Name of the uploaded hotword file.
                     * @param _fileName Name of the uploaded hotword file.
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
                     * Hotword lexicon ID. 
 
Either Name or Content should be specified if the hotword lexicon is a temporary hotword lexicon.
Either Name, FileContent, or FileName should be specified if the hotword lexicon is a file-based hotword lexicon.

                     */
                    std::string m_hotwordsId;
                    bool m_hotwordsIdHasBeenSet;

                    /**
                     * Hotword lexicon name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Hotword lexicon text.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Base64-encoded content of the hotword file. This field is required if Type is set to 1.



                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * Name of the uploaded hotword file.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYASRHOTWORDSREQUEST_H_

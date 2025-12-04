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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYPROCESSIMAGETEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYPROCESSIMAGETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ImageTaskInput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ModifyProcessImageTemplate request structure.
                */
                class ModifyProcessImageTemplateRequest : public AbstractModel
                {
                public:
                    ModifyProcessImageTemplateRequest();
                    ~ModifyProcessImageTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique identifier of the image processing template.
                     * @return Definition Unique identifier of the image processing template.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Unique identifier of the image processing template.
                     * @param _definition Unique identifier of the image processing template.
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Image processing template name. The length cannot exceed 64 characters.
                     * @return Name Image processing template name. The length cannot exceed 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Image processing template name. The length cannot exceed 64 characters.
                     * @param _name Image processing template name. The length cannot exceed 64 characters.
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
                     * 获取Template description information. The length cannot exceed 256 characters.
                     * @return Comment Template description information. The length cannot exceed 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Template description information. The length cannot exceed 256 characters.
                     * @param _comment Template description information. The length cannot exceed 256 characters.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取Image processing template parameter.
                     * @return ProcessImageTemplate Image processing template parameter.
                     * 
                     */
                    ImageTaskInput GetProcessImageTemplate() const;

                    /**
                     * 设置Image processing template parameter.
                     * @param _processImageTemplate Image processing template parameter.
                     * 
                     */
                    void SetProcessImageTemplate(const ImageTaskInput& _processImageTemplate);

                    /**
                     * 判断参数 ProcessImageTemplate 是否已赋值
                     * @return ProcessImageTemplate 是否已赋值
                     * 
                     */
                    bool ProcessImageTemplateHasBeenSet() const;

                private:

                    /**
                     * Unique identifier of the image processing template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Image processing template name. The length cannot exceed 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Template description information. The length cannot exceed 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Image processing template parameter.
                     */
                    ImageTaskInput m_processImageTemplate;
                    bool m_processImageTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYPROCESSIMAGETEMPLATEREQUEST_H_

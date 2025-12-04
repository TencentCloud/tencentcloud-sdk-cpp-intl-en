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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEPROCESSIMAGETEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEPROCESSIMAGETEMPLATEREQUEST_H_

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
                * CreateProcessImageTemplate request structure.
                */
                class CreateProcessImageTemplateRequest : public AbstractModel
                {
                public:
                    CreateProcessImageTemplateRequest();
                    ~CreateProcessImageTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Image processing template.
                     * @return ProcessImageTemplate Image processing template.
                     * 
                     */
                    ImageTaskInput GetProcessImageTemplate() const;

                    /**
                     * 设置Image processing template.
                     * @param _processImageTemplate Image processing template.
                     * 
                     */
                    void SetProcessImageTemplate(const ImageTaskInput& _processImageTemplate);

                    /**
                     * 判断参数 ProcessImageTemplate 是否已赋值
                     * @return ProcessImageTemplate 是否已赋值
                     * 
                     */
                    bool ProcessImageTemplateHasBeenSet() const;

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
                     * 获取Description information of the image processing template. The length cannot exceed 256 characters.
                     * @return Comment Description information of the image processing template. The length cannot exceed 256 characters.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Description information of the image processing template. The length cannot exceed 256 characters.
                     * @param _comment Description information of the image processing template. The length cannot exceed 256 characters.
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * Image processing template.
                     */
                    ImageTaskInput m_processImageTemplate;
                    bool m_processImageTemplateHasBeenSet;

                    /**
                     * Image processing template name. The length cannot exceed 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description information of the image processing template. The length cannot exceed 256 characters.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEPROCESSIMAGETEMPLATEREQUEST_H_

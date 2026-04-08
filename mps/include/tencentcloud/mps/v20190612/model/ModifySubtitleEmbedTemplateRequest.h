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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSUBTITLEEMBEDTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSUBTITLEEMBEDTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SubtitleEmbedConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ModifySubtitleEmbedTemplate request structure.
                */
                class ModifySubtitleEmbedTemplateRequest : public AbstractModel
                {
                public:
                    ModifySubtitleEmbedTemplateRequest();
                    ~ModifySubtitleEmbedTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Unique identifier of the subtitle suppression template</p>
                     * @return Definition <p>Unique identifier of the subtitle suppression template</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>Unique identifier of the subtitle suppression template</p>
                     * @param _definition <p>Unique identifier of the subtitle suppression template</p>
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
                     * 获取<p>Subtitle suppression name<br>Length limit: 64 characters.</p>
                     * @return Name <p>Subtitle suppression name<br>Length limit: 64 characters.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Subtitle suppression name<br>Length limit: 64 characters.</p>
                     * @param _name <p>Subtitle suppression name<br>Length limit: 64 characters.</p>
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
                     * 获取<p>Subtitle suppression template description information<br>Length limit: 256 characters.</p>
                     * @return Comment <p>Subtitle suppression template description information<br>Length limit: 256 characters.</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>Subtitle suppression template description information<br>Length limit: 256 characters.</p>
                     * @param _comment <p>Subtitle suppression template description information<br>Length limit: 256 characters.</p>
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
                     * 获取<p>Subtitle suppression configuration</p>
                     * @return SubtitleEmbedConfig <p>Subtitle suppression configuration</p>
                     * 
                     */
                    SubtitleEmbedConfig GetSubtitleEmbedConfig() const;

                    /**
                     * 设置<p>Subtitle suppression configuration</p>
                     * @param _subtitleEmbedConfig <p>Subtitle suppression configuration</p>
                     * 
                     */
                    void SetSubtitleEmbedConfig(const SubtitleEmbedConfig& _subtitleEmbedConfig);

                    /**
                     * 判断参数 SubtitleEmbedConfig 是否已赋值
                     * @return SubtitleEmbedConfig 是否已赋值
                     * 
                     */
                    bool SubtitleEmbedConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Unique identifier of the subtitle suppression template</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>Subtitle suppression name<br>Length limit: 64 characters.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Subtitle suppression template description information<br>Length limit: 256 characters.</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>Subtitle suppression configuration</p>
                     */
                    SubtitleEmbedConfig m_subtitleEmbedConfig;
                    bool m_subtitleEmbedConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSUBTITLEEMBEDTEMPLATEREQUEST_H_

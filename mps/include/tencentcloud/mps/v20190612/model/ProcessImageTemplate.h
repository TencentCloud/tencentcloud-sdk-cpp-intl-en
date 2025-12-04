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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSIMAGETEMPLATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSIMAGETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Image processing template.
                */
                class ProcessImageTemplate : public AbstractModel
                {
                public:
                    ProcessImageTemplate();
                    ~ProcessImageTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Image processing template name.
                     * @return Name Image processing template name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Image processing template name.
                     * @param _name Image processing template name.
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
                     * 获取Description information of the image processing template.
                     * @return Comment Description information of the image processing template.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Description information of the image processing template.
                     * @param _comment Description information of the image processing template.
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
                     * 获取Template type.
                     * @return Type Template type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Template type.
                     * @param _type Template type.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Image processing template configuration parameter.
                     * @return ProcessImageConfig Image processing template configuration parameter.
                     * 
                     */
                    ImageTaskInput GetProcessImageConfig() const;

                    /**
                     * 设置Image processing template configuration parameter.
                     * @param _processImageConfig Image processing template configuration parameter.
                     * 
                     */
                    void SetProcessImageConfig(const ImageTaskInput& _processImageConfig);

                    /**
                     * 判断参数 ProcessImageConfig 是否已赋值
                     * @return ProcessImageConfig 是否已赋值
                     * 
                     */
                    bool ProcessImageConfigHasBeenSet() const;

                    /**
                     * 获取Template creation time.
                     * @return CreateTime Template creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Template creation time.
                     * @param _createTime Template creation time.
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
                     * 获取Last modification time of the template.
                     * @return UpdateTime Last modification time of the template.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modification time of the template.
                     * @param _updateTime Last modification time of the template.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * Unique identifier of the image processing template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Image processing template name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description information of the image processing template.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Template type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Image processing template configuration parameter.
                     */
                    ImageTaskInput m_processImageConfig;
                    bool m_processImageConfigHasBeenSet;

                    /**
                     * Template creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modification time of the template.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PROCESSIMAGETEMPLATE_H_

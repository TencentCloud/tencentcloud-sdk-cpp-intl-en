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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEEMBEDTEMPLATEITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEEMBEDTEMPLATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Subtitle suppression template details
                */
                class SubtitleEmbedTemplateItem : public AbstractModel
                {
                public:
                    SubtitleEmbedTemplateItem();
                    ~SubtitleEmbedTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique identifier of the subtitle suppression template
                     * @return Definition Unique identifier of the subtitle suppression template
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Unique identifier of the subtitle suppression template
                     * @param _definition Unique identifier of the subtitle suppression template
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
                     * 获取Subtitle suppression template name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Subtitle suppression template name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Subtitle suppression template name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Subtitle suppression template name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Subtitle suppression template description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Comment Subtitle suppression template description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Subtitle suppression template description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _comment Subtitle suppression template description
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Template type. Valid values:
* Preset: system preset template
* Custom: user-defined template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Template type. Valid values:
* Preset: system preset template
* Custom: user-defined template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Template type. Valid values:
* Preset: system preset template
* Custom: user-defined template.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Template type. Valid values:
* Preset: system preset template
* Custom: user-defined template.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Deletion mark. 0 Not deleted. 1 Deleted.
                     * @return DeleteTag Deletion mark. 0 Not deleted. 1 Deleted.
                     * 
                     */
                    int64_t GetDeleteTag() const;

                    /**
                     * 设置Deletion mark. 0 Not deleted. 1 Deleted.
                     * @param _deleteTag Deletion mark. 0 Not deleted. 1 Deleted.
                     * 
                     */
                    void SetDeleteTag(const int64_t& _deleteTag);

                    /**
                     * 判断参数 DeleteTag 是否已赋值
                     * @return DeleteTag 是否已赋值
                     * 
                     */
                    bool DeleteTagHasBeenSet() const;

                    /**
                     * 获取Template creation time in [ISO datetime format](https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52).
                     * @return CreateTime Template creation time in [ISO datetime format](https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Template creation time in [ISO datetime format](https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52).
                     * @param _createTime Template creation time in [ISO datetime format](https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52).
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
                     * 获取Last modification time of the template in [ISO datetime format](https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52).
                     * @return UpdateTime Last modification time of the template in [ISO datetime format](https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Last modification time of the template in [ISO datetime format](https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52).
                     * @param _updateTime Last modification time of the template in [ISO datetime format](https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52).
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Subtitle suppression module settings
                     * @return SubtitleEmbedConfig Subtitle suppression module settings
                     * 
                     */
                    SubtitleEmbedConfig GetSubtitleEmbedConfig() const;

                    /**
                     * 设置Subtitle suppression module settings
                     * @param _subtitleEmbedConfig Subtitle suppression module settings
                     * 
                     */
                    void SetSubtitleEmbedConfig(const SubtitleEmbedConfig& _subtitleEmbedConfig);

                    /**
                     * 判断参数 SubtitleEmbedConfig 是否已赋值
                     * @return SubtitleEmbedConfig 是否已赋值
                     * 
                     */
                    bool SubtitleEmbedConfigHasBeenSet() const;

                    /**
                     * 获取Subtitle suppression template English name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AliasName Subtitle suppression template English name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置Subtitle suppression template English name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aliasName Subtitle suppression template English name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                private:

                    /**
                     * Unique identifier of the subtitle suppression template
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Subtitle suppression template name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Subtitle suppression template description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Template type. Valid values:
* Preset: system preset template
* Custom: user-defined template.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Deletion mark. 0 Not deleted. 1 Deleted.
                     */
                    int64_t m_deleteTag;
                    bool m_deleteTagHasBeenSet;

                    /**
                     * Template creation time in [ISO datetime format](https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modification time of the template in [ISO datetime format](https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Subtitle suppression module settings
                     */
                    SubtitleEmbedConfig m_subtitleEmbedConfig;
                    bool m_subtitleEmbedConfigHasBeenSet;

                    /**
                     * Subtitle suppression template English name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEEMBEDTEMPLATEITEM_H_

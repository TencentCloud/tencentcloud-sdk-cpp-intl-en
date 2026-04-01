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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDTEMPLATEITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDTEMPLATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/LLMComprehendSummary.h>
#include <tencentcloud/vod/v20180717/model/LLMComprehendAsr.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Large model parses template detail.
                */
                class LLMComprehendTemplateItem : public AbstractModel
                {
                public:
                    LLMComprehendTemplateItem();
                    ~LLMComprehendTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique identifier of the image asynchronous processing template.
                     * @return Definition Unique identifier of the image asynchronous processing template.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Unique identifier of the image asynchronous processing template.
                     * @param _definition Unique identifier of the image asynchronous processing template.
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
                     * 获取Image async processing template name.
                     * @return Name Image async processing template name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Image async processing template name.
                     * @param _name Image async processing template name.
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
                     * 获取Description information of the image asynchronous processing template.
                     * @return Comment Description information of the image asynchronous processing template.
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置Description information of the image asynchronous processing template.
                     * @param _comment Description information of the image asynchronous processing template.
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
                     * 获取Parsing level. Optional values:
-Audio: Audio-level parsing
-Video: Video-level parsing
                     * @return Level Parsing level. Optional values:
-Audio: Audio-level parsing
-Video: Video-level parsing
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Parsing level. Optional values:
-Audio: Audio-level parsing
-Video: Video-level parsing
                     * @param _level Parsing level. Optional values:
-Audio: Audio-level parsing
-Video: Video-level parsing
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Segment summary parsing configuration
                     * @return Summary Segment summary parsing configuration
                     * 
                     */
                    LLMComprehendSummary GetSummary() const;

                    /**
                     * 设置Segment summary parsing configuration
                     * @param _summary Segment summary parsing configuration
                     * 
                     */
                    void SetSummary(const LLMComprehendSummary& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取Text transcription parsing configuration
                     * @return Asr Text transcription parsing configuration
                     * 
                     */
                    LLMComprehendAsr GetAsr() const;

                    /**
                     * 设置Text transcription parsing configuration
                     * @param _asr Text transcription parsing configuration
                     * 
                     */
                    void SetAsr(const LLMComprehendAsr& _asr);

                    /**
                     * 判断参数 Asr 是否已赋值
                     * @return Asr 是否已赋值
                     * 
                     */
                    bool AsrHasBeenSet() const;

                    /**
                     * 获取Template creation time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return CreateTime Template creation time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Template creation time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _createTime Template creation time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * 获取Template last modified time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return UpdateTime Template last modified time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Template last modified time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _updateTime Template last modified time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * Unique identifier of the image asynchronous processing template.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Image async processing template name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description information of the image asynchronous processing template.
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * Parsing level. Optional values:
-Audio: Audio-level parsing
-Video: Video-level parsing
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Segment summary parsing configuration
                     */
                    LLMComprehendSummary m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * Text transcription parsing configuration
                     */
                    LLMComprehendAsr m_asr;
                    bool m_asrHasBeenSet;

                    /**
                     * Template creation time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Template last modified time, use [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDTEMPLATEITEM_H_

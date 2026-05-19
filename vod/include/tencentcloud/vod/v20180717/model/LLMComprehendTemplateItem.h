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
#include <tencentcloud/vod/v20180717/model/LLMComprehendFaceRecognition.h>


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
                     * 获取<p>Unique identifier of the image asynchronous processing template.</p>
                     * @return Definition <p>Unique identifier of the image asynchronous processing template.</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>Unique identifier of the image asynchronous processing template.</p>
                     * @param _definition <p>Unique identifier of the image asynchronous processing template.</p>
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
                     * 获取<p>Image asynchronous processing template name.</p>
                     * @return Name <p>Image asynchronous processing template name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Image asynchronous processing template name.</p>
                     * @param _name <p>Image asynchronous processing template name.</p>
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
                     * 获取<p>Description information of the image asynchronous processing template.</p>
                     * @return Comment <p>Description information of the image asynchronous processing template.</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>Description information of the image asynchronous processing template.</p>
                     * @param _comment <p>Description information of the image asynchronous processing template.</p>
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
                     * 获取<p>Resolution level, optional values:</p><ul><li>Audio: Audio-level resolution</li><li>Video: Video-level resolution</li></ul>
                     * @return Level <p>Resolution level, optional values:</p><ul><li>Audio: Audio-level resolution</li><li>Video: Video-level resolution</li></ul>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>Resolution level, optional values:</p><ul><li>Audio: Audio-level resolution</li><li>Video: Video-level resolution</li></ul>
                     * @param _level <p>Resolution level, optional values:</p><ul><li>Audio: Audio-level resolution</li><li>Video: Video-level resolution</li></ul>
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
                     * 获取<p>Segment summary parse configuration</p>
                     * @return Summary <p>Segment summary parse configuration</p>
                     * 
                     */
                    LLMComprehendSummary GetSummary() const;

                    /**
                     * 设置<p>Segment summary parse configuration</p>
                     * @param _summary <p>Segment summary parse configuration</p>
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
                     * 获取<p>Text transcription parse configuration</p>
                     * @return Asr <p>Text transcription parse configuration</p>
                     * 
                     */
                    LLMComprehendAsr GetAsr() const;

                    /**
                     * 设置<p>Text transcription parse configuration</p>
                     * @param _asr <p>Text transcription parse configuration</p>
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
                     * 获取<p>Face recognition parse configuration</p>
                     * @return FaceRecognition <p>Face recognition parse configuration</p>
                     * 
                     */
                    LLMComprehendFaceRecognition GetFaceRecognition() const;

                    /**
                     * 设置<p>Face recognition parse configuration</p>
                     * @param _faceRecognition <p>Face recognition parse configuration</p>
                     * 
                     */
                    void SetFaceRecognition(const LLMComprehendFaceRecognition& _faceRecognition);

                    /**
                     * 判断参数 FaceRecognition 是否已赋值
                     * @return FaceRecognition 是否已赋值
                     * 
                     */
                    bool FaceRecognitionHasBeenSet() const;

                    /**
                     * 获取<p>Template creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @return CreateTime <p>Template creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Template creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @param _createTime <p>Template creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
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
                     * 获取<p>Last template modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @return UpdateTime <p>Last template modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Last template modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     * @param _updateTime <p>Last template modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
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
                     * <p>Unique identifier of the image asynchronous processing template.</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>Image asynchronous processing template name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Description information of the image asynchronous processing template.</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>Resolution level, optional values:</p><ul><li>Audio: Audio-level resolution</li><li>Video: Video-level resolution</li></ul>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>Segment summary parse configuration</p>
                     */
                    LLMComprehendSummary m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * <p>Text transcription parse configuration</p>
                     */
                    LLMComprehendAsr m_asr;
                    bool m_asrHasBeenSet;

                    /**
                     * <p>Face recognition parse configuration</p>
                     */
                    LLMComprehendFaceRecognition m_faceRecognition;
                    bool m_faceRecognitionHasBeenSet;

                    /**
                     * <p>Template creation time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Last template modification time, in <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>.</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDTEMPLATEITEM_H_

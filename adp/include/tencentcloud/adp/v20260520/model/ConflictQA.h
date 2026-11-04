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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONFLICTQA_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONFLICTQA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Conflicting QA (a single QA snapshot in a conflict group)
                */
                class ConflictQA : public AbstractModel
                {
                public:
                    ConflictQA();
                    ~ConflictQA() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Answer</p>
                     * @return Answer <p>Answer</p>
                     * 
                     */
                    std::string GetAnswer() const;

                    /**
                     * 设置<p>Answer</p>
                     * @param _answer <p>Answer</p>
                     * 
                     */
                    void SetAnswer(const std::string& _answer);

                    /**
                     * 判断参数 Answer 是否已赋值
                     * @return Answer 是否已赋值
                     * 
                     */
                    bool AnswerHasBeenSet() const;

                    /**
                     * 获取<p>Knowledge application scope: 1=disabled, 2=development domain only, 3=release domain only, 4=global<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
                     * @return EffectiveDomain <p>Knowledge application scope: 1=disabled, 2=development domain only, 3=release domain only, 4=global<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetEffectiveDomain() const;

                    /**
                     * 设置<p>Knowledge application scope: 1=disabled, 2=development domain only, 3=release domain only, 4=global<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
                     * @param _effectiveDomain <p>Knowledge application scope: 1=disabled, 2=development domain only, 3=release domain only, 4=global<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
                     * 
                     */
                    void SetEffectiveDomain(const int64_t& _effectiveDomain);

                    /**
                     * 判断参数 EffectiveDomain 是否已赋值
                     * @return EffectiveDomain 是否已赋值
                     * 
                     */
                    bool EffectiveDomainHasBeenSet() const;

                    /**
                     * 获取<p>Associated document name.</p>
                     * @return FileName <p>Associated document name.</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>Associated document name.</p>
                     * @param _fileName <p>Associated document name.</p>
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
                     * 获取<p>Associated document type</p>
                     * @return FileType <p>Associated document type</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>Associated document type</p>
                     * @param _fileType <p>Associated document type</p>
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取<p>QA ID</p>
                     * @return QaId <p>QA ID</p>
                     * 
                     */
                    std::string GetQaId() const;

                    /**
                     * 设置<p>QA ID</p>
                     * @param _qaId <p>QA ID</p>
                     * 
                     */
                    void SetQaId(const std::string& _qaId);

                    /**
                     * 判断参数 QaId 是否已赋值
                     * @return QaId 是否已赋值
                     * 
                     */
                    bool QaIdHasBeenSet() const;

                    /**
                     * 获取<p>Query</p>
                     * @return Question <p>Query</p>
                     * 
                     */
                    std::string GetQuestion() const;

                    /**
                     * 设置<p>Query</p>
                     * @param _question <p>Query</p>
                     * 
                     */
                    void SetQuestion(const std::string& _question);

                    /**
                     * 判断参数 Question 是否已赋值
                     * @return Question 是否已赋值
                     * 
                     */
                    bool QuestionHasBeenSet() const;

                    /**
                     * 获取<p>Source type: 1=documentation generation, 2=batch import, 3=manual entry<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>QA_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>QA_SOURCE_TYPE_DOC</td><td>1</td><td>Documentation generation</td></tr><tr><td>QA_SOURCE_TYPE_BATCH_IMPORT</td><td>2</td><td>Batch import</td></tr><tr><td>QA_SOURCE_TYPE_MANUAL</td><td>3</td><td>Manual entry</td></tr></tbody></table></p>
                     * @return SourceType <p>Source type: 1=documentation generation, 2=batch import, 3=manual entry<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>QA_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>QA_SOURCE_TYPE_DOC</td><td>1</td><td>Documentation generation</td></tr><tr><td>QA_SOURCE_TYPE_BATCH_IMPORT</td><td>2</td><td>Batch import</td></tr><tr><td>QA_SOURCE_TYPE_MANUAL</td><td>3</td><td>Manual entry</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetSourceType() const;

                    /**
                     * 设置<p>Source type: 1=documentation generation, 2=batch import, 3=manual entry<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>QA_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>QA_SOURCE_TYPE_DOC</td><td>1</td><td>Documentation generation</td></tr><tr><td>QA_SOURCE_TYPE_BATCH_IMPORT</td><td>2</td><td>Batch import</td></tr><tr><td>QA_SOURCE_TYPE_MANUAL</td><td>3</td><td>Manual entry</td></tr></tbody></table></p>
                     * @param _sourceType <p>Source type: 1=documentation generation, 2=batch import, 3=manual entry<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>QA_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>QA_SOURCE_TYPE_DOC</td><td>1</td><td>Documentation generation</td></tr><tr><td>QA_SOURCE_TYPE_BATCH_IMPORT</td><td>2</td><td>Batch import</td></tr><tr><td>QA_SOURCE_TYPE_MANUAL</td><td>3</td><td>Manual entry</td></tr></tbody></table></p>
                     * 
                     */
                    void SetSourceType(const int64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>Update time (Unix seconds, for sorting old and new)</p>
                     * @return UpdateTime <p>Update time (Unix seconds, for sorting old and new)</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>Update time (Unix seconds, for sorting old and new)</p>
                     * @param _updateTime <p>Update time (Unix seconds, for sorting old and new)</p>
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
                     * <p>Answer</p>
                     */
                    std::string m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * <p>Knowledge application scope: 1=disabled, 2=development domain only, 3=release domain only, 4=global<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_UNKNOWN</td><td>0</td><td></td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_NONE</td><td>1</td><td>Disabled</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_DEV</td><td>2</td><td>Development domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_RELEASE</td><td>3</td><td>Release domain only</td></tr><tr><td>KNOWLEDGE_EFFECTIVE_DOMAIN_ALL</td><td>4</td><td>Global</td></tr></tbody></table></p>
                     */
                    int64_t m_effectiveDomain;
                    bool m_effectiveDomainHasBeenSet;

                    /**
                     * <p>Associated document name.</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>Associated document type</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>QA ID</p>
                     */
                    std::string m_qaId;
                    bool m_qaIdHasBeenSet;

                    /**
                     * <p>Query</p>
                     */
                    std::string m_question;
                    bool m_questionHasBeenSet;

                    /**
                     * <p>Source type: 1=documentation generation, 2=batch import, 3=manual entry<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>QA_SOURCE_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>QA_SOURCE_TYPE_DOC</td><td>1</td><td>Documentation generation</td></tr><tr><td>QA_SOURCE_TYPE_BATCH_IMPORT</td><td>2</td><td>Batch import</td></tr><tr><td>QA_SOURCE_TYPE_MANUAL</td><td>3</td><td>Manual entry</td></tr></tbody></table></p>
                     */
                    int64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>Update time (Unix seconds, for sorting old and new)</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONFLICTQA_H_

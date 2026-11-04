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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_QASUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_QASUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/CategoryPath.h>
#include <tencentcloud/adp/v20260520/model/KnowledgeScope.h>
#include <tencentcloud/adp/v20260520/model/QALifecycle.h>
#include <tencentcloud/adp/v20260520/model/QAMetadata.h>
#include <tencentcloud/adp/v20260520/model/QAOperator.h>
#include <tencentcloud/adp/v20260520/model/SimilarQuestionStat.h>
#include <tencentcloud/adp/v20260520/model/QASourceInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * QA digest information
                */
                class QASummary : public AbstractModel
                {
                public:
                    QASummary();
                    ~QASummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Category path (including category ID, category ID path from the root node, and category name path)</p>
                     * @return CategoryPath <p>Category path (including category ID, category ID path from the root node, and category name path)</p>
                     * 
                     */
                    CategoryPath GetCategoryPath() const;

                    /**
                     * 设置<p>Category path (including category ID, category ID path from the root node, and category name path)</p>
                     * @param _categoryPath <p>Category path (including category ID, category ID path from the root node, and category name path)</p>
                     * 
                     */
                    void SetCategoryPath(const CategoryPath& _categoryPath);

                    /**
                     * 判断参数 CategoryPath 是否已赋值
                     * @return CategoryPath 是否已赋值
                     * 
                     */
                    bool CategoryPathHasBeenSet() const;

                    /**
                     * 获取<p>Knowledge effective scope</p>
                     * @return KnowledgeScope <p>Knowledge effective scope</p>
                     * 
                     */
                    KnowledgeScope GetKnowledgeScope() const;

                    /**
                     * 设置<p>Knowledge effective scope</p>
                     * @param _knowledgeScope <p>Knowledge effective scope</p>
                     * 
                     */
                    void SetKnowledgeScope(const KnowledgeScope& _knowledgeScope);

                    /**
                     * 判断参数 KnowledgeScope 是否已赋值
                     * @return KnowledgeScope 是否已赋值
                     * 
                     */
                    bool KnowledgeScopeHasBeenSet() const;

                    /**
                     * 获取<p>Lifecycle information.</p>
                     * @return Lifecycle <p>Lifecycle information.</p>
                     * 
                     */
                    QALifecycle GetLifecycle() const;

                    /**
                     * 设置<p>Lifecycle information.</p>
                     * @param _lifecycle <p>Lifecycle information.</p>
                     * 
                     */
                    void SetLifecycle(const QALifecycle& _lifecycle);

                    /**
                     * 判断参数 Lifecycle 是否已赋值
                     * @return Lifecycle 是否已赋值
                     * 
                     */
                    bool LifecycleHasBeenSet() const;

                    /**
                     * 获取<p>Meta information (question/answer/size statistics)</p>
                     * @return Metadata <p>Meta information (question/answer/size statistics)</p>
                     * 
                     */
                    QAMetadata GetMetadata() const;

                    /**
                     * 设置<p>Meta information (question/answer/size statistics)</p>
                     * @param _metadata <p>Meta information (question/answer/size statistics)</p>
                     * 
                     */
                    void SetMetadata(const QAMetadata& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取<p>Operator information.</p>
                     * @return OperatorInfo <p>Operator information.</p>
                     * 
                     */
                    QAOperator GetOperatorInfo() const;

                    /**
                     * 设置<p>Operator information.</p>
                     * @param _operatorInfo <p>Operator information.</p>
                     * 
                     */
                    void SetOperatorInfo(const QAOperator& _operatorInfo);

                    /**
                     * 判断参数 OperatorInfo 是否已赋值
                     * @return OperatorInfo 是否已赋值
                     * 
                     */
                    bool OperatorInfoHasBeenSet() const;

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
                     * 获取<p>Similar question statistics</p>
                     * @return SimilarQuestion <p>Similar question statistics</p>
                     * 
                     */
                    SimilarQuestionStat GetSimilarQuestion() const;

                    /**
                     * 设置<p>Similar question statistics</p>
                     * @param _similarQuestion <p>Similar question statistics</p>
                     * 
                     */
                    void SetSimilarQuestion(const SimilarQuestionStat& _similarQuestion);

                    /**
                     * 判断参数 SimilarQuestion 是否已赋值
                     * @return SimilarQuestion 是否已赋值
                     * 
                     */
                    bool SimilarQuestionHasBeenSet() const;

                    /**
                     * 获取<p>Source information.</p>
                     * @return SourceInfo <p>Source information.</p>
                     * 
                     */
                    QASourceInfo GetSourceInfo() const;

                    /**
                     * 设置<p>Source information.</p>
                     * @param _sourceInfo <p>Source information.</p>
                     * 
                     */
                    void SetSourceInfo(const QASourceInfo& _sourceInfo);

                    /**
                     * 判断参数 SourceInfo 是否已赋值
                     * @return SourceInfo 是否已赋值
                     * 
                     */
                    bool SourceInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Category path (including category ID, category ID path from the root node, and category name path)</p>
                     */
                    CategoryPath m_categoryPath;
                    bool m_categoryPathHasBeenSet;

                    /**
                     * <p>Knowledge effective scope</p>
                     */
                    KnowledgeScope m_knowledgeScope;
                    bool m_knowledgeScopeHasBeenSet;

                    /**
                     * <p>Lifecycle information.</p>
                     */
                    QALifecycle m_lifecycle;
                    bool m_lifecycleHasBeenSet;

                    /**
                     * <p>Meta information (question/answer/size statistics)</p>
                     */
                    QAMetadata m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * <p>Operator information.</p>
                     */
                    QAOperator m_operatorInfo;
                    bool m_operatorInfoHasBeenSet;

                    /**
                     * <p>QA ID</p>
                     */
                    std::string m_qaId;
                    bool m_qaIdHasBeenSet;

                    /**
                     * <p>Similar question statistics</p>
                     */
                    SimilarQuestionStat m_similarQuestion;
                    bool m_similarQuestionHasBeenSet;

                    /**
                     * <p>Source information.</p>
                     */
                    QASourceInfo m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_QASUMMARY_H_

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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DOCSUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DOCSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/CategoryPath.h>
#include <tencentcloud/adp/v20260520/model/KnowledgeScope.h>
#include <tencentcloud/adp/v20260520/model/DocLifecycle.h>
#include <tencentcloud/adp/v20260520/model/DocMetadata.h>
#include <tencentcloud/adp/v20260520/model/DocOperator.h>
#include <tencentcloud/adp/v20260520/model/DocTaskStatus.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Document digest information
                */
                class DocSummary : public AbstractModel
                {
                public:
                    DocSummary();
                    ~DocSummary() = default;
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
                     * 获取<p>Document ID</p>
                     * @return DocId <p>Document ID</p>
                     * 
                     */
                    std::string GetDocId() const;

                    /**
                     * 设置<p>Document ID</p>
                     * @param _docId <p>Document ID</p>
                     * 
                     */
                    void SetDocId(const std::string& _docId);

                    /**
                     * 判断参数 DocId 是否已赋值
                     * @return DocId 是否已赋值
                     * 
                     */
                    bool DocIdHasBeenSet() const;

                    /**
                     * 获取<p>Knowledge effective scope (aggregate application scope + tag condition)</p>
                     * @return KnowledgeScope <p>Knowledge effective scope (aggregate application scope + tag condition)</p>
                     * 
                     */
                    KnowledgeScope GetKnowledgeScope() const;

                    /**
                     * 设置<p>Knowledge effective scope (aggregate application scope + tag condition)</p>
                     * @param _knowledgeScope <p>Knowledge effective scope (aggregate application scope + tag condition)</p>
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
                    DocLifecycle GetLifecycle() const;

                    /**
                     * 设置<p>Lifecycle information.</p>
                     * @param _lifecycle <p>Lifecycle information.</p>
                     * 
                     */
                    void SetLifecycle(const DocLifecycle& _lifecycle);

                    /**
                     * 判断参数 Lifecycle 是否已赋值
                     * @return Lifecycle 是否已赋值
                     * 
                     */
                    bool LifecycleHasBeenSet() const;

                    /**
                     * 获取<p>Meta information.</p>
                     * @return Metadata <p>Meta information.</p>
                     * 
                     */
                    DocMetadata GetMetadata() const;

                    /**
                     * 设置<p>Meta information.</p>
                     * @param _metadata <p>Meta information.</p>
                     * 
                     */
                    void SetMetadata(const DocMetadata& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取<p>Operator information (aggregate modifier + operation permission)</p>
                     * @return OperatorInfo <p>Operator information (aggregate modifier + operation permission)</p>
                     * 
                     */
                    DocOperator GetOperatorInfo() const;

                    /**
                     * 设置<p>Operator information (aggregate modifier + operation permission)</p>
                     * @param _operatorInfo <p>Operator information (aggregate modifier + operation permission)</p>
                     * 
                     */
                    void SetOperatorInfo(const DocOperator& _operatorInfo);

                    /**
                     * 判断参数 OperatorInfo 是否已赋值
                     * @return OperatorInfo 是否已赋值
                     * 
                     */
                    bool OperatorInfoHasBeenSet() const;

                    /**
                     * 获取<p>Task status information</p>
                     * @return TaskStatus <p>Task status information</p>
                     * 
                     */
                    DocTaskStatus GetTaskStatus() const;

                    /**
                     * 设置<p>Task status information</p>
                     * @param _taskStatus <p>Task status information</p>
                     * 
                     */
                    void SetTaskStatus(const DocTaskStatus& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                private:

                    /**
                     * <p>Category path (including category ID, category ID path from the root node, and category name path)</p>
                     */
                    CategoryPath m_categoryPath;
                    bool m_categoryPathHasBeenSet;

                    /**
                     * <p>Document ID</p>
                     */
                    std::string m_docId;
                    bool m_docIdHasBeenSet;

                    /**
                     * <p>Knowledge effective scope (aggregate application scope + tag condition)</p>
                     */
                    KnowledgeScope m_knowledgeScope;
                    bool m_knowledgeScopeHasBeenSet;

                    /**
                     * <p>Lifecycle information.</p>
                     */
                    DocLifecycle m_lifecycle;
                    bool m_lifecycleHasBeenSet;

                    /**
                     * <p>Meta information.</p>
                     */
                    DocMetadata m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * <p>Operator information (aggregate modifier + operation permission)</p>
                     */
                    DocOperator m_operatorInfo;
                    bool m_operatorInfoHasBeenSet;

                    /**
                     * <p>Task status information</p>
                     */
                    DocTaskStatus m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DOCSUMMARY_H_

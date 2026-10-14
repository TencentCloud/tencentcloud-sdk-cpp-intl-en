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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_QAREFERENCE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_QAREFERENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Reference information of the Q&A pair
                */
                class QaReference : public AbstractModel
                {
                public:
                    QaReference();
                    ~QaReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>QA business ID</p>
                     * @return QaBizId <p>QA business ID</p>
                     * 
                     */
                    std::string GetQaBizId() const;

                    /**
                     * 设置<p>QA business ID</p>
                     * @param _qaBizId <p>QA business ID</p>
                     * 
                     */
                    void SetQaBizId(const std::string& _qaBizId);

                    /**
                     * 判断参数 QaBizId 是否已赋值
                     * @return QaBizId 是否已赋值
                     * 
                     */
                    bool QaBizIdHasBeenSet() const;

                    /**
                     * 获取<p>Document fragment reference ID</p>
                     * @return ReferBizId <p>Document fragment reference ID</p>
                     * 
                     */
                    std::string GetReferBizId() const;

                    /**
                     * 设置<p>Document fragment reference ID</p>
                     * @param _referBizId <p>Document fragment reference ID</p>
                     * 
                     */
                    void SetReferBizId(const std::string& _referBizId);

                    /**
                     * 判断参数 ReferBizId 是否已赋值
                     * @return ReferBizId 是否已赋值
                     * 
                     */
                    bool ReferBizIdHasBeenSet() const;

                    /**
                     * 获取<p>Business ID of the knowledge base where the QA resides</p>
                     * @return KnowledgeBizId <p>Business ID of the knowledge base where the QA resides</p>
                     * 
                     */
                    std::string GetKnowledgeBizId() const;

                    /**
                     * 设置<p>Business ID of the knowledge base where the QA resides</p>
                     * @param _knowledgeBizId <p>Business ID of the knowledge base where the QA resides</p>
                     * 
                     */
                    void SetKnowledgeBizId(const std::string& _knowledgeBizId);

                    /**
                     * 判断参数 KnowledgeBizId 是否已赋值
                     * @return KnowledgeBizId 是否已赋值
                     * 
                     */
                    bool KnowledgeBizIdHasBeenSet() const;

                    /**
                     * 获取<p>Name of the knowledge base where the QA resides</p>
                     * @return KnowledgeName <p>Name of the knowledge base where the QA resides</p>
                     * 
                     */
                    std::string GetKnowledgeName() const;

                    /**
                     * 设置<p>Name of the knowledge base where the QA resides</p>
                     * @param _knowledgeName <p>Name of the knowledge base where the QA resides</p>
                     * 
                     */
                    void SetKnowledgeName(const std::string& _knowledgeName);

                    /**
                     * 判断参数 KnowledgeName 是否已赋值
                     * @return KnowledgeName 是否已赋值
                     * 
                     */
                    bool KnowledgeNameHasBeenSet() const;

                private:

                    /**
                     * <p>QA business ID</p>
                     */
                    std::string m_qaBizId;
                    bool m_qaBizIdHasBeenSet;

                    /**
                     * <p>Document fragment reference ID</p>
                     */
                    std::string m_referBizId;
                    bool m_referBizIdHasBeenSet;

                    /**
                     * <p>Business ID of the knowledge base where the QA resides</p>
                     */
                    std::string m_knowledgeBizId;
                    bool m_knowledgeBizIdHasBeenSet;

                    /**
                     * <p>Name of the knowledge base where the QA resides</p>
                     */
                    std::string m_knowledgeName;
                    bool m_knowledgeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_QAREFERENCE_H_

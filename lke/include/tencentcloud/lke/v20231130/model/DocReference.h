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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DOCREFERENCE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DOCREFERENCE_H_

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
                * 
                */
                class DocReference : public AbstractModel
                {
                public:
                    DocReference();
                    ~DocReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return DocBizId 
                     * 
                     */
                    uint64_t GetDocBizId() const;

                    /**
                     * 设置
                     * @param _docBizId 
                     * 
                     */
                    void SetDocBizId(const uint64_t& _docBizId);

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return ReferBizId 
                     * 
                     */
                    uint64_t GetReferBizId() const;

                    /**
                     * 设置
                     * @param _referBizId 
                     * 
                     */
                    void SetReferBizId(const uint64_t& _referBizId);

                    /**
                     * 判断参数 ReferBizId 是否已赋值
                     * @return ReferBizId 是否已赋值
                     * 
                     */
                    bool ReferBizIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return DocName 
                     * 
                     */
                    std::string GetDocName() const;

                    /**
                     * 设置
                     * @param _docName 
                     * 
                     */
                    void SetDocName(const std::string& _docName);

                    /**
                     * 判断参数 DocName 是否已赋值
                     * @return DocName 是否已赋值
                     * 
                     */
                    bool DocNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return KnowledgeBizId 
                     * 
                     */
                    uint64_t GetKnowledgeBizId() const;

                    /**
                     * 设置
                     * @param _knowledgeBizId 
                     * 
                     */
                    void SetKnowledgeBizId(const uint64_t& _knowledgeBizId);

                    /**
                     * 判断参数 KnowledgeBizId 是否已赋值
                     * @return KnowledgeBizId 是否已赋值
                     * 
                     */
                    bool KnowledgeBizIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return KnowledgeName 
                     * 
                     */
                    std::string GetKnowledgeName() const;

                    /**
                     * 设置
                     * @param _knowledgeName 
                     * 
                     */
                    void SetKnowledgeName(const std::string& _knowledgeName);

                    /**
                     * 判断参数 KnowledgeName 是否已赋值
                     * @return KnowledgeName 是否已赋值
                     * 
                     */
                    bool KnowledgeNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return Url 
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置
                     * @param _url 
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    uint64_t m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_referBizId;
                    bool m_referBizIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_docName;
                    bool m_docNameHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_knowledgeBizId;
                    bool m_knowledgeBizIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_knowledgeName;
                    bool m_knowledgeNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DOCREFERENCE_H_

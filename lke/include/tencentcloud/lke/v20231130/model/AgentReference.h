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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTREFERENCE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTREFERENCE_H_

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
                * Reference source in agent.
                */
                class AgentReference : public AbstractModel
                {
                public:
                    AgentReference();
                    ~AgentReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source document ID.
                     * @return DocId Source document ID.
                     * 
                     */
                    std::string GetDocId() const;

                    /**
                     * 设置Source document ID.
                     * @param _docId Source document ID.
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
                     * 获取ID.
                     * @return Id ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置ID.
                     * @param _id ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Name.
                     * @return Name Name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name.
                     * @param _name Name.
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
                     * 获取Type.
                     * @return Type Type.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Type.
                     * @param _type Type.
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取URL.
                     * @return Url URL.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置URL.
                     * @param _url URL.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Document business ID.
                     * @return DocBizId Document business ID.
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置Document business ID.
                     * @param _docBizId Document business ID.
                     * 
                     */
                    void SetDocBizId(const std::string& _docBizId);

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

                    /**
                     * 获取Document name.
                     * @return DocName Document name.
                     * 
                     */
                    std::string GetDocName() const;

                    /**
                     * 设置Document name.
                     * @param _docName Document name.
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
                     * 获取Q&A business ID.
                     * @return QaBizId Q&A business ID.
                     * 
                     */
                    std::string GetQaBizId() const;

                    /**
                     * 设置Q&A business ID.
                     * @param _qaBizId Q&A business ID.
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
                     * 获取Index of search engine.
                     * @return Index Index of search engine.
                     * 
                     */
                    uint64_t GetIndex() const;

                    /**
                     * 设置Index of search engine.
                     * @param _index Index of search engine.
                     * 
                     */
                    void SetIndex(const uint64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取Title.
                     * @return Title Title.
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Title.
                     * @param _title Title.
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                private:

                    /**
                     * Source document ID.
                     */
                    std::string m_docId;
                    bool m_docIdHasBeenSet;

                    /**
                     * ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Type.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * URL.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Document business ID.
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * Document name.
                     */
                    std::string m_docName;
                    bool m_docNameHasBeenSet;

                    /**
                     * Q&A business ID.
                     */
                    std::string m_qaBizId;
                    bool m_qaBizIdHasBeenSet;

                    /**
                     * Index of search engine.
                     */
                    uint64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * Title.
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTREFERENCE_H_

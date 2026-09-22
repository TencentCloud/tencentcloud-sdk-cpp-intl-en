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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEBASEDETAIL_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEBASEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Detailed information about the knowledge base list to which media assets are imported, as well as the parsing template used.
                */
                class KnowledgeBaseDetail : public AbstractModel
                {
                public:
                    KnowledgeBaseDetail();
                    ~KnowledgeBaseDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Knowledge base ID</p>
                     * @return KnowledgeBaseId <p>Knowledge base ID</p>
                     * 
                     */
                    std::string GetKnowledgeBaseId() const;

                    /**
                     * 设置<p>Knowledge base ID</p>
                     * @param _knowledgeBaseId <p>Knowledge base ID</p>
                     * 
                     */
                    void SetKnowledgeBaseId(const std::string& _knowledgeBaseId);

                    /**
                     * 判断参数 KnowledgeBaseId 是否已赋值
                     * @return KnowledgeBaseId 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseIdHasBeenSet() const;

                    /**
                     * 获取<p>Associated large model parsing template</p>
                     * @return Definition <p>Associated large model parsing template</p>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置<p>Associated large model parsing template</p>
                     * @param _definition <p>Associated large model parsing template</p>
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p>Storage time</p>
                     * @return ImportTime <p>Storage time</p>
                     * 
                     */
                    std::string GetImportTime() const;

                    /**
                     * 设置<p>Storage time</p>
                     * @param _importTime <p>Storage time</p>
                     * 
                     */
                    void SetImportTime(const std::string& _importTime);

                    /**
                     * 判断参数 ImportTime 是否已赋值
                     * @return ImportTime 是否已赋值
                     * 
                     */
                    bool ImportTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Knowledge base ID</p>
                     */
                    std::string m_knowledgeBaseId;
                    bool m_knowledgeBaseIdHasBeenSet;

                    /**
                     * <p>Associated large model parsing template</p>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>Storage time</p>
                     */
                    std::string m_importTime;
                    bool m_importTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEBASEDETAIL_H_

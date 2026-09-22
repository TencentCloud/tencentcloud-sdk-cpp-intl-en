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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEBASEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEBASEINFO_H_

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
                * Knowledge base info.
                */
                class KnowledgeBaseInfo : public AbstractModel
                {
                public:
                    KnowledgeBaseInfo();
                    ~KnowledgeBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Knowledge base ID.</p>
                     * @return KnowledgeBaseId <p>Knowledge base ID.</p>
                     * 
                     */
                    std::string GetKnowledgeBaseId() const;

                    /**
                     * 设置<p>Knowledge base ID.</p>
                     * @param _knowledgeBaseId <p>Knowledge base ID.</p>
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
                     * 获取<p>Knowledge base name.</p>
                     * @return Name <p>Knowledge base name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Knowledge base name.</p>
                     * @param _name <p>Knowledge base name.</p>
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
                     * 获取<p>Repository description.</p>
                     * @return Description <p>Repository description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Repository description.</p>
                     * @param _description <p>Repository description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Knowledge base status.</p><p>Enumeration values:</p><ul><li>creating: Creating</li><li>active: Normal</li><li>deleting: Deleting</li></ul>
                     * @return Status <p>Knowledge base status.</p><p>Enumeration values:</p><ul><li>creating: Creating</li><li>active: Normal</li><li>deleting: Deleting</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Knowledge base status.</p><p>Enumeration values:</p><ul><li>creating: Creating</li><li>active: Normal</li><li>deleting: Deleting</li></ul>
                     * @param _status <p>Knowledge base status.</p><p>Enumeration values:</p><ul><li>creating: Creating</li><li>active: Normal</li><li>deleting: Deleting</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Creation time of the knowledge base.</p>
                     * @return CreateTime <p>Creation time of the knowledge base.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time of the knowledge base.</p>
                     * @param _createTime <p>Creation time of the knowledge base.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Knowledge base ID.</p>
                     */
                    std::string m_knowledgeBaseId;
                    bool m_knowledgeBaseIdHasBeenSet;

                    /**
                     * <p>Knowledge base name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Repository description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Knowledge base status.</p><p>Enumeration values:</p><ul><li>creating: Creating</li><li>active: Normal</li><li>deleting: Deleting</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Creation time of the knowledge base.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEBASEINFO_H_

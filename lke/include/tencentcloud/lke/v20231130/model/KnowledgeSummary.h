/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGESUMMARY_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGESUMMARY_H_

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
                * Retrieve knowledge.
                */
                class KnowledgeSummary : public AbstractModel
                {
                public:
                    KnowledgeSummary();
                    ~KnowledgeSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取1: Q&A; 2: document fragment.
                     * @return Type 1: Q&A; 2: document fragment.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置1: Q&A; 2: document fragment.
                     * @param _type 1: Q&A; 2: document fragment.
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
                     * 获取Knowledge content.
                     * @return Content Knowledge content.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Knowledge content.
                     * @param _content Knowledge content.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 1: Q&A; 2: document fragment.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Knowledge content.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGESUMMARY_H_

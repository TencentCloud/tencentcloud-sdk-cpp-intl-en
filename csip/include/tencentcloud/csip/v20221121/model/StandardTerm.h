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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_STANDARDTERM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_STANDARDTERM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CSPM clause
                */
                class StandardTerm : public AbstractModel
                {
                public:
                    StandardTerm();
                    ~StandardTerm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag.
                     * @return Tag Tag.
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置Tag.
                     * @param _tag Tag.
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Clause
                     * @return Terms Clause
                     * 
                     */
                    std::vector<std::string> GetTerms() const;

                    /**
                     * 设置Clause
                     * @param _terms Clause
                     * 
                     */
                    void SetTerms(const std::vector<std::string>& _terms);

                    /**
                     * 判断参数 Terms 是否已赋值
                     * @return Terms 是否已赋值
                     * 
                     */
                    bool TermsHasBeenSet() const;

                private:

                    /**
                     * Tag.
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Clause
                     */
                    std::vector<std::string> m_terms;
                    bool m_termsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_STANDARDTERM_H_

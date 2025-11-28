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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_TAGFILTER_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_TAGFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * Tag filter
                */
                class TagFilter : public AbstractModel
                {
                public:
                    TagFilter();
                    ~TagFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag key name
                     * @return TagKey Tag key name
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置Tag key name
                     * @param _tagKey Tag key name
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取Tag value list
                     * @return TagValues Tag value list
                     * 
                     */
                    std::vector<std::string> GetTagValues() const;

                    /**
                     * 设置Tag value list
                     * @param _tagValues Tag value list
                     * 
                     */
                    void SetTagValues(const std::vector<std::string>& _tagValues);

                    /**
                     * 判断参数 TagValues 是否已赋值
                     * @return TagValues 是否已赋值
                     * 
                     */
                    bool TagValuesHasBeenSet() const;

                private:

                    /**
                     * Tag key name
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * Tag value list
                     */
                    std::vector<std::string> m_tagValues;
                    bool m_tagValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_TAGFILTER_H_

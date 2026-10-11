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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TAGVALUEINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TAGVALUEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Tag value information
                */
                class TagValueInfo : public AbstractModel
                {
                public:
                    TagValueInfo();
                    ~TagValueInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag value ID
                     * @return TagValueId Tag value ID
                     * 
                     */
                    std::string GetTagValueId() const;

                    /**
                     * 设置Tag value ID
                     * @param _tagValueId Tag value ID
                     * 
                     */
                    void SetTagValueId(const std::string& _tagValueId);

                    /**
                     * 判断参数 TagValueId 是否已赋值
                     * @return TagValueId 是否已赋值
                     * 
                     */
                    bool TagValueIdHasBeenSet() const;

                    /**
                     * 获取Tag value content. Fill in when querying. Do not pass in when writing.
                     * @return TagValue Tag value content. Fill in when querying. Do not pass in when writing.
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置Tag value content. Fill in when querying. Do not pass in when writing.
                     * @param _tagValue Tag value content. Fill in when querying. Do not pass in when writing.
                     * 
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     * 
                     */
                    bool TagValueHasBeenSet() const;

                    /**
                     * 获取Tag source. See web_enum_standard.proto -> TagSource: 0=not specified 1=directly bound to user 2=inherited from user group 3=both. Populated during queries. Do not pass when writing.
                     * @return Source Tag source. See web_enum_standard.proto -> TagSource: 0=not specified 1=directly bound to user 2=inherited from user group 3=both. Populated during queries. Do not pass when writing.
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置Tag source. See web_enum_standard.proto -> TagSource: 0=not specified 1=directly bound to user 2=inherited from user group 3=both. Populated during queries. Do not pass when writing.
                     * @param _source Tag source. See web_enum_standard.proto -> TagSource: 0=not specified 1=directly bound to user 2=inherited from user group 3=both. Populated during queries. Do not pass when writing.
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取List of user group names from the inheritance source. Empty when Source=1. Populated during queries. Do not pass when writing.
                     * @return GroupNames List of user group names from the inheritance source. Empty when Source=1. Populated during queries. Do not pass when writing.
                     * 
                     */
                    std::vector<std::string> GetGroupNames() const;

                    /**
                     * 设置List of user group names from the inheritance source. Empty when Source=1. Populated during queries. Do not pass when writing.
                     * @param _groupNames List of user group names from the inheritance source. Empty when Source=1. Populated during queries. Do not pass when writing.
                     * 
                     */
                    void SetGroupNames(const std::vector<std::string>& _groupNames);

                    /**
                     * 判断参数 GroupNames 是否已赋值
                     * @return GroupNames 是否已赋值
                     * 
                     */
                    bool GroupNamesHasBeenSet() const;

                private:

                    /**
                     * Tag value ID
                     */
                    std::string m_tagValueId;
                    bool m_tagValueIdHasBeenSet;

                    /**
                     * Tag value content. Fill in when querying. Do not pass in when writing.
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * Tag source. See web_enum_standard.proto -> TagSource: 0=not specified 1=directly bound to user 2=inherited from user group 3=both. Populated during queries. Do not pass when writing.
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * List of user group names from the inheritance source. Empty when Source=1. Populated during queries. Do not pass when writing.
                     */
                    std::vector<std::string> m_groupNames;
                    bool m_groupNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TAGVALUEINFO_H_

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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_USERTAGINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_USERTAGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/TagValueInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * User/user group tag dimensions (independent structure in the user management domain, decoupled from common TagInfo, for use only by user/user group tag APIs)
                */
                class UserTagInfo : public AbstractModel
                {
                public:
                    UserTagInfo();
                    ~UserTagInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Tag dimension ID</p>
                     * @return TagId <p>Tag dimension ID</p>
                     * 
                     */
                    std::string GetTagId() const;

                    /**
                     * 设置<p>Tag dimension ID</p>
                     * @param _tagId <p>Tag dimension ID</p>
                     * 
                     */
                    void SetTagId(const std::string& _tagId);

                    /**
                     * 判断参数 TagId 是否已赋值
                     * @return TagId 是否已赋值
                     * 
                     */
                    bool TagIdHasBeenSet() const;

                    /**
                     * 获取<p>Tag name, filled during queries, not passed when writing</p>
                     * @return TagName <p>Tag name, filled during queries, not passed when writing</p>
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置<p>Tag name, filled during queries, not passed when writing</p>
                     * @param _tagName <p>Tag name, filled during queries, not passed when writing</p>
                     * 
                     */
                    void SetTagName(const std::string& _tagName);

                    /**
                     * 判断参数 TagName 是否已赋值
                     * @return TagName 是否已赋值
                     * 
                     */
                    bool TagNameHasBeenSet() const;

                    /**
                     * 获取<p>All tag values bound to this dimension</p>
                     * @return Values <p>All tag values bound to this dimension</p>
                     * 
                     */
                    std::vector<TagValueInfo> GetValues() const;

                    /**
                     * 设置<p>All tag values bound to this dimension</p>
                     * @param _values <p>All tag values bound to this dimension</p>
                     * 
                     */
                    void SetValues(const std::vector<TagValueInfo>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * <p>Tag dimension ID</p>
                     */
                    std::string m_tagId;
                    bool m_tagIdHasBeenSet;

                    /**
                     * <p>Tag name, filled during queries, not passed when writing</p>
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * <p>All tag values bound to this dimension</p>
                     */
                    std::vector<TagValueInfo> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_USERTAGINFO_H_

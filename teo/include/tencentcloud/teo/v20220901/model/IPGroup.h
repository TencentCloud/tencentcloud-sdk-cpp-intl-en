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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IPGROUP_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IPGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * IP range group
                */
                class IPGroup : public AbstractModel
                {
                public:
                    IPGroup();
                    ~IPGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Group ID. Enter `0`.
                     * @return GroupId Group ID. Enter `0`.
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置Group ID. Enter `0`.
                     * @param _groupId Group ID. Enter `0`.
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Group name.
                     * @return Name Group name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Group name.
                     * @param _name Group name.
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
                     * 获取IP group content. Only supports IP and IP mask.
                     * @return Content IP group content. Only supports IP and IP mask.
                     * 
                     */
                    std::vector<std::string> GetContent() const;

                    /**
                     * 设置IP group content. Only supports IP and IP mask.
                     * @param _content IP group content. Only supports IP and IP mask.
                     * 
                     */
                    void SetContent(const std::vector<std::string>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * Group ID. Enter `0`.
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Group name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * IP group content. Only supports IP and IP mask.
                     */
                    std::vector<std::string> m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IPGROUP_H_

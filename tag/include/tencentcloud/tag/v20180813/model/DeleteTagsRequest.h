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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_DELETETAGSREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_DELETETAGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tag/v20180813/model/Tag.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * DeleteTags request structure.
                */
                class DeleteTagsRequest : public AbstractModel
                {
                public:
                    DeleteTagsRequest();
                    ~DeleteTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Tag list.
Value range of N: 0–9
                     * @return Tags Tag list.
Value range of N: 0–9
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag list.
Value range of N: 0–9
                     * @param _tags Tag list.
Value range of N: 0–9
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Tag list.
Value range of N: 0–9
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_DELETETAGSREQUEST_H_

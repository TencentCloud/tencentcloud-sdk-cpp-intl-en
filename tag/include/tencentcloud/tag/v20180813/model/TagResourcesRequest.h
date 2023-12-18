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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_TAGRESOURCESREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_TAGRESOURCESREQUEST_H_

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
                * TagResources request structure.
                */
                class TagResourcesRequest : public AbstractModel
                {
                public:
                    TagResourcesRequest();
                    ~TagResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cloud resource to be bound, represented in the standard six-segment resource format. For the correct format, see [Resource Description Method](https://intl.cloud.tencent.com/document/product/598/10606?from_cn_redirect=1) and [Tagging-enabled Resources](https://intl.cloud.tencent.com/document/product/651/89122?from_cn_redirect=1).
Value range of N: 0-9.
                     * @return ResourceList Cloud resource to be bound, represented in the standard six-segment resource format. For the correct format, see [Resource Description Method](https://intl.cloud.tencent.com/document/product/598/10606?from_cn_redirect=1) and [Tagging-enabled Resources](https://intl.cloud.tencent.com/document/product/651/89122?from_cn_redirect=1).
Value range of N: 0-9.
                     * 
                     */
                    std::vector<std::string> GetResourceList() const;

                    /**
                     * 设置Cloud resource to be bound, represented in the standard six-segment resource format. For the correct format, see [Resource Description Method](https://intl.cloud.tencent.com/document/product/598/10606?from_cn_redirect=1) and [Tagging-enabled Resources](https://intl.cloud.tencent.com/document/product/651/89122?from_cn_redirect=1).
Value range of N: 0-9.
                     * @param _resourceList Cloud resource to be bound, represented in the standard six-segment resource format. For the correct format, see [Resource Description Method](https://intl.cloud.tencent.com/document/product/598/10606?from_cn_redirect=1) and [Tagging-enabled Resources](https://intl.cloud.tencent.com/document/product/651/89122?from_cn_redirect=1).
Value range of N: 0-9.
                     * 
                     */
                    void SetResourceList(const std::vector<std::string>& _resourceList);

                    /**
                     * 判断参数 ResourceList 是否已赋值
                     * @return ResourceList 是否已赋值
                     * 
                     */
                    bool ResourceListHasBeenSet() const;

                    /**
                     * 获取Tag key and value.
If multiple tags are specified, all such tags will be created and bound to the specified resources.
For each resource, each tag key can have only one value. If you try to add an existing tag key, the corresponding tag value will be updated to the new value.
Non-existent tags will be automatically created.
Value range of N: 0–9
                     * @return Tags Tag key and value.
If multiple tags are specified, all such tags will be created and bound to the specified resources.
For each resource, each tag key can have only one value. If you try to add an existing tag key, the corresponding tag value will be updated to the new value.
Non-existent tags will be automatically created.
Value range of N: 0–9
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag key and value.
If multiple tags are specified, all such tags will be created and bound to the specified resources.
For each resource, each tag key can have only one value. If you try to add an existing tag key, the corresponding tag value will be updated to the new value.
Non-existent tags will be automatically created.
Value range of N: 0–9
                     * @param _tags Tag key and value.
If multiple tags are specified, all such tags will be created and bound to the specified resources.
For each resource, each tag key can have only one value. If you try to add an existing tag key, the corresponding tag value will be updated to the new value.
Non-existent tags will be automatically created.
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
                     * Cloud resource to be bound, represented in the standard six-segment resource format. For the correct format, see [Resource Description Method](https://intl.cloud.tencent.com/document/product/598/10606?from_cn_redirect=1) and [Tagging-enabled Resources](https://intl.cloud.tencent.com/document/product/651/89122?from_cn_redirect=1).
Value range of N: 0-9.
                     */
                    std::vector<std::string> m_resourceList;
                    bool m_resourceListHasBeenSet;

                    /**
                     * Tag key and value.
If multiple tags are specified, all such tags will be created and bound to the specified resources.
For each resource, each tag key can have only one value. If you try to add an existing tag key, the corresponding tag value will be updated to the new value.
Non-existent tags will be automatically created.
Value range of N: 0–9
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_TAGRESOURCESREQUEST_H_

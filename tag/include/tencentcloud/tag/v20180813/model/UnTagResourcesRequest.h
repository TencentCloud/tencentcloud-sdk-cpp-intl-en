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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_UNTAGRESOURCESREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_UNTAGRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * UnTagResources request structure.
                */
                class UnTagResourcesRequest : public AbstractModel
                {
                public:
                    UnTagResourcesRequest();
                    ~UnTagResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Six-segment resource description list. Tencent Cloud uses a six-segment value to describe a resource. For more information, see [CAM](https://intl.cloud.tencent.com/document/product/598/67350?from_cn_redirect=1) > Overview > API List > Six-Segment Resource Information.
For example: ResourceList.1 = qcs::${ServiceType}:${Region}:uin/${Account}:${ResourcePrefix}/${ResourceId}.
Value range of N: 0–9
                     * @return ResourceList Six-segment resource description list. Tencent Cloud uses a six-segment value to describe a resource. For more information, see [CAM](https://intl.cloud.tencent.com/document/product/598/67350?from_cn_redirect=1) > Overview > API List > Six-Segment Resource Information.
For example: ResourceList.1 = qcs::${ServiceType}:${Region}:uin/${Account}:${ResourcePrefix}/${ResourceId}.
Value range of N: 0–9
                     * 
                     */
                    std::vector<std::string> GetResourceList() const;

                    /**
                     * 设置Six-segment resource description list. Tencent Cloud uses a six-segment value to describe a resource. For more information, see [CAM](https://intl.cloud.tencent.com/document/product/598/67350?from_cn_redirect=1) > Overview > API List > Six-Segment Resource Information.
For example: ResourceList.1 = qcs::${ServiceType}:${Region}:uin/${Account}:${ResourcePrefix}/${ResourceId}.
Value range of N: 0–9
                     * @param _resourceList Six-segment resource description list. Tencent Cloud uses a six-segment value to describe a resource. For more information, see [CAM](https://intl.cloud.tencent.com/document/product/598/67350?from_cn_redirect=1) > Overview > API List > Six-Segment Resource Information.
For example: ResourceList.1 = qcs::${ServiceType}:${Region}:uin/${Account}:${ResourcePrefix}/${ResourceId}.
Value range of N: 0–9
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
                     * 获取Tag key.
Value range: 0–9
                     * @return TagKeys Tag key.
Value range: 0–9
                     * 
                     */
                    std::vector<std::string> GetTagKeys() const;

                    /**
                     * 设置Tag key.
Value range: 0–9
                     * @param _tagKeys Tag key.
Value range: 0–9
                     * 
                     */
                    void SetTagKeys(const std::vector<std::string>& _tagKeys);

                    /**
                     * 判断参数 TagKeys 是否已赋值
                     * @return TagKeys 是否已赋值
                     * 
                     */
                    bool TagKeysHasBeenSet() const;

                private:

                    /**
                     * Six-segment resource description list. Tencent Cloud uses a six-segment value to describe a resource. For more information, see [CAM](https://intl.cloud.tencent.com/document/product/598/67350?from_cn_redirect=1) > Overview > API List > Six-Segment Resource Information.
For example: ResourceList.1 = qcs::${ServiceType}:${Region}:uin/${Account}:${ResourcePrefix}/${ResourceId}.
Value range of N: 0–9
                     */
                    std::vector<std::string> m_resourceList;
                    bool m_resourceListHasBeenSet;

                    /**
                     * Tag key.
Value range: 0–9
                     */
                    std::vector<std::string> m_tagKeys;
                    bool m_tagKeysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_UNTAGRESOURCESREQUEST_H_

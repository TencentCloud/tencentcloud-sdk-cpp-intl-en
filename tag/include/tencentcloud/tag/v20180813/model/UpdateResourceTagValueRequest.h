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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_UPDATERESOURCETAGVALUEREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_UPDATERESOURCETAGVALUEREQUEST_H_

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
                * UpdateResourceTagValue request structure.
                */
                class UpdateResourceTagValueRequest : public AbstractModel
                {
                public:
                    UpdateResourceTagValueRequest();
                    ~UpdateResourceTagValueRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Tag key associated with the resource.
                     * @return TagKey Tag key associated with the resource.
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置Tag key associated with the resource.
                     * @param _tagKey Tag key associated with the resource.
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
                     * 获取Modified tag value.
                     * @return TagValue Modified tag value.
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置Modified tag value.
                     * @param _tagValue Modified tag value.
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
                     * 获取[Six-segment resource description](https://intl.cloud.tencent.com/document/product/598/10606?from_cn_redirect=1)
                     * @return Resource [Six-segment resource description](https://intl.cloud.tencent.com/document/product/598/10606?from_cn_redirect=1)
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置[Six-segment resource description](https://intl.cloud.tencent.com/document/product/598/10606?from_cn_redirect=1)
                     * @param _resource [Six-segment resource description](https://intl.cloud.tencent.com/document/product/598/10606?from_cn_redirect=1)
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                private:

                    /**
                     * Tag key associated with the resource.
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * Modified tag value.
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * [Six-segment resource description](https://intl.cloud.tencent.com/document/product/598/10606?from_cn_redirect=1)
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_UPDATERESOURCETAGVALUEREQUEST_H_

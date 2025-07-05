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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_ADDRESOURCETAGREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_ADDRESOURCETAGREQUEST_H_

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
                * AddResourceTag request structure.
                */
                class AddResourceTagRequest : public AbstractModel
                {
                public:
                    AddResourceTagRequest();
                    ~AddResourceTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The tag key that needs to be bound. For the requirements, refer to: https://intl.cloud.tencent.com/document/product/651/13354?from_cn_redirect=1
                     * @return TagKey The tag key that needs to be bound. For the requirements, refer to: https://intl.cloud.tencent.com/document/product/651/13354?from_cn_redirect=1
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置The tag key that needs to be bound. For the requirements, refer to: https://intl.cloud.tencent.com/document/product/651/13354?from_cn_redirect=1
                     * @param _tagKey The tag key that needs to be bound. For the requirements, refer to: https://intl.cloud.tencent.com/document/product/651/13354?from_cn_redirect=1
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
                     * 获取The tag value that needs to be bound. For the requirements, refer to: https://intl.cloud.tencent.com/document/product/651/13354?from_cn_redirect=1
                     * @return TagValue The tag value that needs to be bound. For the requirements, refer to: https://intl.cloud.tencent.com/document/product/651/13354?from_cn_redirect=1
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置The tag value that needs to be bound. For the requirements, refer to: https://intl.cloud.tencent.com/document/product/651/13354?from_cn_redirect=1
                     * @param _tagValue The tag value that needs to be bound. For the requirements, refer to: https://intl.cloud.tencent.com/document/product/651/13354?from_cn_redirect=1
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
                     * 获取Resource to be associated, represented in the standard six-segment resource format. For the correct format, see https://intl.cloud.tencent.com/document/product/651/89122?from_cn_redirect=1
                     * @return Resource Resource to be associated, represented in the standard six-segment resource format. For the correct format, see https://intl.cloud.tencent.com/document/product/651/89122?from_cn_redirect=1
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置Resource to be associated, represented in the standard six-segment resource format. For the correct format, see https://intl.cloud.tencent.com/document/product/651/89122?from_cn_redirect=1
                     * @param _resource Resource to be associated, represented in the standard six-segment resource format. For the correct format, see https://intl.cloud.tencent.com/document/product/651/89122?from_cn_redirect=1
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
                     * The tag key that needs to be bound. For the requirements, refer to: https://intl.cloud.tencent.com/document/product/651/13354?from_cn_redirect=1
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * The tag value that needs to be bound. For the requirements, refer to: https://intl.cloud.tencent.com/document/product/651/13354?from_cn_redirect=1
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * Resource to be associated, represented in the standard six-segment resource format. For the correct format, see https://intl.cloud.tencent.com/document/product/651/89122?from_cn_redirect=1
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_ADDRESOURCETAGREQUEST_H_

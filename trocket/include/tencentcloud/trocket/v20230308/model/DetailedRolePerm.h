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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DETAILEDROLEPERM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DETAILEDROLEPERM_H_

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
                * Permission configuration in Topic & Group dimension.
                */
                class DetailedRolePerm : public AbstractModel
                {
                public:
                    DetailedRolePerm();
                    ~DetailedRolePerm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resources corresponding to permissions.
Specifies the topic name, which can be obtained from [TopicItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#TopicItem) returned by the api [DescribeTopicList](https://www.tencentcloud.com/document/api/1493/96030?from_cn_redirect=1) or from the console.
Specifies the consumer group name, which can be obtained from the api response of DescribeConsumerGroupList (https://www.tencentcloud.com/document/api/1493/101535?from_cn_redirect=1) or the console.
                     * @return Resource Resources corresponding to permissions.
Specifies the topic name, which can be obtained from [TopicItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#TopicItem) returned by the api [DescribeTopicList](https://www.tencentcloud.com/document/api/1493/96030?from_cn_redirect=1) or from the console.
Specifies the consumer group name, which can be obtained from the api response of DescribeConsumerGroupList (https://www.tencentcloud.com/document/api/1493/101535?from_cn_redirect=1) or the console.
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置Resources corresponding to permissions.
Specifies the topic name, which can be obtained from [TopicItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#TopicItem) returned by the api [DescribeTopicList](https://www.tencentcloud.com/document/api/1493/96030?from_cn_redirect=1) or from the console.
Specifies the consumer group name, which can be obtained from the api response of DescribeConsumerGroupList (https://www.tencentcloud.com/document/api/1493/101535?from_cn_redirect=1) or the console.
                     * @param _resource Resources corresponding to permissions.
Specifies the topic name, which can be obtained from [TopicItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#TopicItem) returned by the api [DescribeTopicList](https://www.tencentcloud.com/document/api/1493/96030?from_cn_redirect=1) or from the console.
Specifies the consumer group name, which can be obtained from the api response of DescribeConsumerGroupList (https://www.tencentcloud.com/document/api/1493/101535?from_cn_redirect=1) or the console.
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Whether to enable production permission
                     * @return PermWrite Whether to enable production permission
                     * 
                     */
                    bool GetPermWrite() const;

                    /**
                     * 设置Whether to enable production permission
                     * @param _permWrite Whether to enable production permission
                     * 
                     */
                    void SetPermWrite(const bool& _permWrite);

                    /**
                     * 判断参数 PermWrite 是否已赋值
                     * @return PermWrite 是否已赋值
                     * 
                     */
                    bool PermWriteHasBeenSet() const;

                    /**
                     * 获取Whether to enable consumption permission
                     * @return PermRead Whether to enable consumption permission
                     * 
                     */
                    bool GetPermRead() const;

                    /**
                     * 设置Whether to enable consumption permission
                     * @param _permRead Whether to enable consumption permission
                     * 
                     */
                    void SetPermRead(const bool& _permRead);

                    /**
                     * 判断参数 PermRead 是否已赋值
                     * @return PermRead 是否已赋值
                     * 
                     */
                    bool PermReadHasBeenSet() const;

                    /**
                     * 获取Authorize resource type (Topic: theme; Group: consumption Group).
                     * @return ResourceType Authorize resource type (Topic: theme; Group: consumption Group).
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Authorize resource type (Topic: theme; Group: consumption Group).
                     * @param _resourceType Authorize resource type (Topic: theme; Group: consumption Group).
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Resource remark.
                     * @return Remark Resource remark.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Resource remark.
                     * @param _remark Resource remark.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * Resources corresponding to permissions.
Specifies the topic name, which can be obtained from [TopicItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#TopicItem) returned by the api [DescribeTopicList](https://www.tencentcloud.com/document/api/1493/96030?from_cn_redirect=1) or from the console.
Specifies the consumer group name, which can be obtained from the api response of DescribeConsumerGroupList (https://www.tencentcloud.com/document/api/1493/101535?from_cn_redirect=1) or the console.
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Whether to enable production permission
                     */
                    bool m_permWrite;
                    bool m_permWriteHasBeenSet;

                    /**
                     * Whether to enable consumption permission
                     */
                    bool m_permRead;
                    bool m_permReadHasBeenSet;

                    /**
                     * Authorize resource type (Topic: theme; Group: consumption Group).
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Resource remark.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DETAILEDROLEPERM_H_

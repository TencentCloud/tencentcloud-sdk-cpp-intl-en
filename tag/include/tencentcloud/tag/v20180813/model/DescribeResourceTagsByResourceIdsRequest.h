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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBERESOURCETAGSBYRESOURCEIDSREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBERESOURCETAGSBYRESOURCEIDSREQUEST_H_

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
                * DescribeResourceTagsByResourceIds request structure.
                */
                class DescribeResourceTagsByResourceIdsRequest : public AbstractModel
                {
                public:
                    DescribeResourceTagsByResourceIdsRequest();
                    ~DescribeResourceTagsByResourceIdsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Service type.
                     * @return ServiceType Service type.
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置Service type.
                     * @param ServiceType Service type.
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取Resource prefix.
                     * @return ResourcePrefix Resource prefix.
                     */
                    std::string GetResourcePrefix() const;

                    /**
                     * 设置Resource prefix.
                     * @param ResourcePrefix Resource prefix.
                     */
                    void SetResourcePrefix(const std::string& _resourcePrefix);

                    /**
                     * 判断参数 ResourcePrefix 是否已赋值
                     * @return ResourcePrefix 是否已赋值
                     */
                    bool ResourcePrefixHasBeenSet() const;

                    /**
                     * 获取Unique resource ID.
                     * @return ResourceIds Unique resource ID.
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置Unique resource ID.
                     * @param ResourceIds Unique resource ID.
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取The resource’s region.
                     * @return ResourceRegion The resource’s region.
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置The resource’s region.
                     * @param ResourceRegion The resource’s region.
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取Data offset. The default value is 0. Must be an integral multiple of the `Limit` parameter.
                     * @return Offset Data offset. The default value is 0. Must be an integral multiple of the `Limit` parameter.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Data offset. The default value is 0. Must be an integral multiple of the `Limit` parameter.
                     * @param Offset Data offset. The default value is 0. Must be an integral multiple of the `Limit` parameter.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Page size. The default value is 0.
                     * @return Limit Page size. The default value is 0.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Page size. The default value is 0.
                     * @param Limit Page size. The default value is 0.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Service type.
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * Resource prefix.
                     */
                    std::string m_resourcePrefix;
                    bool m_resourcePrefixHasBeenSet;

                    /**
                     * Unique resource ID.
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * The resource’s region.
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * Data offset. The default value is 0. Must be an integral multiple of the `Limit` parameter.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Page size. The default value is 0.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBERESOURCETAGSBYRESOURCEIDSREQUEST_H_

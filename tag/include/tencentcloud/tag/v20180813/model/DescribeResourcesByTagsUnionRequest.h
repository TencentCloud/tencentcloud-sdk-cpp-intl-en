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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBERESOURCESBYTAGSUNIONREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBERESOURCESBYTAGSUNIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tag/v20180813/model/TagFilter.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * DescribeResourcesByTagsUnion request structure.
                */
                class DescribeResourcesByTagsUnionRequest : public AbstractModel
                {
                public:
                    DescribeResourcesByTagsUnionRequest();
                    ~DescribeResourcesByTagsUnionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Tag filtering arrays.
                     * @return TagFilters Tag filtering arrays.
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置Tag filtering arrays.
                     * @param _tagFilters Tag filtering arrays.
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                    /**
                     * 获取Tag creator uin.
                     * @return CreateUin Tag creator uin.
                     * 
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 设置Tag creator uin.
                     * @param _createUin Tag creator uin.
                     * 
                     */
                    void SetCreateUin(const uint64_t& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     * 
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取Data offset. The default value is 0. Must be an integral multiple of the `Limit` parameter.
                     * @return Offset Data offset. The default value is 0. Must be an integral multiple of the `Limit` parameter.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Data offset. The default value is 0. Must be an integral multiple of the `Limit` parameter.
                     * @param _offset Data offset. The default value is 0. Must be an integral multiple of the `Limit` parameter.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Page size. The default value is 15.
                     * @return Limit Page size. The default value is 15.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Page size. The default value is 15.
                     * @param _limit Page size. The default value is 15.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Resource prefix.
                     * @return ResourcePrefix Resource prefix.
                     * 
                     */
                    std::string GetResourcePrefix() const;

                    /**
                     * 设置Resource prefix.
                     * @param _resourcePrefix Resource prefix.
                     * 
                     */
                    void SetResourcePrefix(const std::string& _resourcePrefix);

                    /**
                     * 判断参数 ResourcePrefix 是否已赋值
                     * @return ResourcePrefix 是否已赋值
                     * 
                     */
                    bool ResourcePrefixHasBeenSet() const;

                    /**
                     * 获取Unique resource ID.
                     * @return ResourceId Unique resource ID.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Unique resource ID.
                     * @param _resourceId Unique resource ID.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取The resource’s region.
                     * @return ResourceRegion The resource’s region.
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置The resource’s region.
                     * @param _resourceRegion The resource’s region.
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取Service type
                     * @return ServiceType Service type
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置Service type
                     * @param _serviceType Service type
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                private:

                    /**
                     * Tag filtering arrays.
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * Tag creator uin.
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * Data offset. The default value is 0. Must be an integral multiple of the `Limit` parameter.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Page size. The default value is 15.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Resource prefix.
                     */
                    std::string m_resourcePrefix;
                    bool m_resourcePrefixHasBeenSet;

                    /**
                     * Unique resource ID.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * The resource’s region.
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * Service type
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBERESOURCESBYTAGSUNIONREQUEST_H_

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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBERESOURCETAGSREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBERESOURCETAGSREQUEST_H_

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
                * DescribeResourceTags request structure.
                */
                class DescribeResourceTagsRequest : public AbstractModel
                {
                public:
                    DescribeResourceTagsRequest();
                    ~DescribeResourceTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Creator `uin`
                     * @return CreateUin Creator `uin`
                     * 
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 设置Creator `uin`
                     * @param _createUin Creator `uin`
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
                     * 获取Resource region.
                     * @return ResourceRegion Resource region.
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置Resource region.
                     * @param _resourceRegion Resource region.
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
                     * 获取Service type.
                     * @return ServiceType Service type.
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置Service type.
                     * @param _serviceType Service type.
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取Resource prefix
                     * @return ResourcePrefix Resource prefix
                     * 
                     */
                    std::string GetResourcePrefix() const;

                    /**
                     * 设置Resource prefix
                     * @param _resourcePrefix Resource prefix
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
                     * 获取Unique resource ID. Queries with `ResourceId` only may be slow or fail to return results. We recommend you also enter `ServiceType`, `ResourcePrefix`, and `ResourceRegion` (which can be ignored for resources that don't have the region attribute) when entering `ResourceId`.
                     * @return ResourceId Unique resource ID. Queries with `ResourceId` only may be slow or fail to return results. We recommend you also enter `ServiceType`, `ResourcePrefix`, and `ResourceRegion` (which can be ignored for resources that don't have the region attribute) when entering `ResourceId`.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Unique resource ID. Queries with `ResourceId` only may be slow or fail to return results. We recommend you also enter `ServiceType`, `ResourcePrefix`, and `ResourceRegion` (which can be ignored for resources that don't have the region attribute) when entering `ResourceId`.
                     * @param _resourceId Unique resource ID. Queries with `ResourceId` only may be slow or fail to return results. We recommend you also enter `ServiceType`, `ResourcePrefix`, and `ResourceRegion` (which can be ignored for resources that don't have the region attribute) when entering `ResourceId`.
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
                     * 获取Data offset. Default value: 0. It must be an integer multiple of the `Limit` parameter
                     * @return Offset Data offset. Default value: 0. It must be an integer multiple of the `Limit` parameter
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Data offset. Default value: 0. It must be an integer multiple of the `Limit` parameter
                     * @param _offset Data offset. Default value: 0. It must be an integer multiple of the `Limit` parameter
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
                     * 获取Number of entries per page. Default value: 15
                     * @return Limit Number of entries per page. Default value: 15
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page. Default value: 15
                     * @param _limit Number of entries per page. Default value: 15
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
                     * 获取Whether it is a COS resource (0 or 1). This parameter is required when the entered `ResourceId` is a COS resource.
                     * @return CosResourceId Whether it is a COS resource (0 or 1). This parameter is required when the entered `ResourceId` is a COS resource.
                     * 
                     */
                    uint64_t GetCosResourceId() const;

                    /**
                     * 设置Whether it is a COS resource (0 or 1). This parameter is required when the entered `ResourceId` is a COS resource.
                     * @param _cosResourceId Whether it is a COS resource (0 or 1). This parameter is required when the entered `ResourceId` is a COS resource.
                     * 
                     */
                    void SetCosResourceId(const uint64_t& _cosResourceId);

                    /**
                     * 判断参数 CosResourceId 是否已赋值
                     * @return CosResourceId 是否已赋值
                     * 
                     */
                    bool CosResourceIdHasBeenSet() const;

                private:

                    /**
                     * Creator `uin`
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * Resource region.
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * Service type.
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * Resource prefix
                     */
                    std::string m_resourcePrefix;
                    bool m_resourcePrefixHasBeenSet;

                    /**
                     * Unique resource ID. Queries with `ResourceId` only may be slow or fail to return results. We recommend you also enter `ServiceType`, `ResourcePrefix`, and `ResourceRegion` (which can be ignored for resources that don't have the region attribute) when entering `ResourceId`.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Data offset. Default value: 0. It must be an integer multiple of the `Limit` parameter
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of entries per page. Default value: 15
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Whether it is a COS resource (0 or 1). This parameter is required when the entered `ResourceId` is a COS resource.
                     */
                    uint64_t m_cosResourceId;
                    bool m_cosResourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBERESOURCETAGSREQUEST_H_

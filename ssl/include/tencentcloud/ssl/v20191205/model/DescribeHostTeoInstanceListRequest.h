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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTTEOINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTTEOINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/Filter.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeHostTeoInstanceList request structure.
                */
                class DescribeHostTeoInstanceListRequest : public AbstractModel
                {
                public:
                    DescribeHostTeoInstanceListRequest();
                    ~DescribeHostTeoInstanceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The ID of the certificate to be deployed.
                     * @return CertificateId The ID of the certificate to be deployed.
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置The ID of the certificate to be deployed.
                     * @param _certificateId The ID of the certificate to be deployed.
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取The type of resource for certificate deployment.
                     * @return ResourceType The type of resource for certificate deployment.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置The type of resource for certificate deployment.
                     * @param _resourceType The type of resource for certificate deployment.
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
                     * 获取Whether to query the cached results. Valid values: `1` (yes) and `0` (no). By default, the cached results within 30 minutes are queried.
                     * @return IsCache Whether to query the cached results. Valid values: `1` (yes) and `0` (no). By default, the cached results within 30 minutes are queried.
                     * 
                     */
                    uint64_t GetIsCache() const;

                    /**
                     * 设置Whether to query the cached results. Valid values: `1` (yes) and `0` (no). By default, the cached results within 30 minutes are queried.
                     * @param _isCache Whether to query the cached results. Valid values: `1` (yes) and `0` (no). By default, the cached results within 30 minutes are queried.
                     * 
                     */
                    void SetIsCache(const uint64_t& _isCache);

                    /**
                     * 判断参数 IsCache 是否已赋值
                     * @return IsCache 是否已赋值
                     * 
                     */
                    bool IsCacheHasBeenSet() const;

                    /**
                     * 获取The list of filter parameters. FilterKey: domainMatch (query the list of instances with matching or non-matching domains). FilterValue: `1` (default; query the list of instances with matching domains) or `0` (query the list of instances with non-matching domains).
                     * @return Filters The list of filter parameters. FilterKey: domainMatch (query the list of instances with matching or non-matching domains). FilterValue: `1` (default; query the list of instances with matching domains) or `0` (query the list of instances with non-matching domains).
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置The list of filter parameters. FilterKey: domainMatch (query the list of instances with matching or non-matching domains). FilterValue: `1` (default; query the list of instances with matching domains) or `0` (query the list of instances with non-matching domains).
                     * @param _filters The list of filter parameters. FilterKey: domainMatch (query the list of instances with matching or non-matching domains). FilterValue: `1` (default; query the list of instances with matching domains) or `0` (query the list of instances with non-matching domains).
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取The ID of the deployed certificate.
                     * @return OldCertificateId The ID of the deployed certificate.
                     * 
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置The ID of the deployed certificate.
                     * @param _oldCertificateId The ID of the deployed certificate.
                     * 
                     */
                    void SetOldCertificateId(const std::string& _oldCertificateId);

                    /**
                     * 判断参数 OldCertificateId 是否已赋值
                     * @return OldCertificateId 是否已赋值
                     * 
                     */
                    bool OldCertificateIdHasBeenSet() const;

                    /**
                     * 获取The pagination offset, starting from 0.
                     * @return Offset The pagination offset, starting from 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置The pagination offset, starting from 0.
                     * @param _offset The pagination offset, starting from 0.
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
                     * 获取The number of instances on each page. Default value: 10.	
                     * @return Limit The number of instances on each page. Default value: 10.	
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of instances on each page. Default value: 10.	
                     * @param _limit The number of instances on each page. Default value: 10.	
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
                     * 获取Whether the query is asynchronous.
                     * @return AsyncCache Whether the query is asynchronous.
                     * 
                     */
                    int64_t GetAsyncCache() const;

                    /**
                     * 设置Whether the query is asynchronous.
                     * @param _asyncCache Whether the query is asynchronous.
                     * 
                     */
                    void SetAsyncCache(const int64_t& _asyncCache);

                    /**
                     * 判断参数 AsyncCache 是否已赋值
                     * @return AsyncCache 是否已赋值
                     * 
                     */
                    bool AsyncCacheHasBeenSet() const;

                private:

                    /**
                     * The ID of the certificate to be deployed.
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * The type of resource for certificate deployment.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Whether to query the cached results. Valid values: `1` (yes) and `0` (no). By default, the cached results within 30 minutes are queried.
                     */
                    uint64_t m_isCache;
                    bool m_isCacheHasBeenSet;

                    /**
                     * The list of filter parameters. FilterKey: domainMatch (query the list of instances with matching or non-matching domains). FilterValue: `1` (default; query the list of instances with matching domains) or `0` (query the list of instances with non-matching domains).
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The ID of the deployed certificate.
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                    /**
                     * The pagination offset, starting from 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of instances on each page. Default value: 10.	
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Whether the query is asynchronous.
                     */
                    int64_t m_asyncCache;
                    bool m_asyncCacheHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTTEOINSTANCELISTREQUEST_H_

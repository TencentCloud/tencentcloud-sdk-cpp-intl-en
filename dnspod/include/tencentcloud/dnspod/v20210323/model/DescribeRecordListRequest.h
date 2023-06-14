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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDLISTREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeRecordList request structure.
                */
                class DescribeRecordListRequest : public AbstractModel
                {
                public:
                    DescribeRecordListRequest();
                    ~DescribeRecordListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The domain for which DNS records are to be obtained.
                     * @return Domain The domain for which DNS records are to be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The domain for which DNS records are to be obtained.
                     * @param _domain The domain for which DNS records are to be obtained.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取The ID of the domain whose DNS records are requested. If `DomainId` is passed in, `Domain` is ignored. You can view all `Domain` and `DomainId` values via the `DescribeDomainList` API.
                     * @return DomainId The ID of the domain whose DNS records are requested. If `DomainId` is passed in, `Domain` is ignored. You can view all `Domain` and `DomainId` values via the `DescribeDomainList` API.
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置The ID of the domain whose DNS records are requested. If `DomainId` is passed in, `Domain` is ignored. You can view all `Domain` and `DomainId` values via the `DescribeDomainList` API.
                     * @param _domainId The ID of the domain whose DNS records are requested. If `DomainId` is passed in, `Domain` is ignored. You can view all `Domain` and `DomainId` values via the `DescribeDomainList` API.
                     * 
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取The host header of a DNS record. If this parameter is passed in, only the DNS record corresponding to this host header will be returned.
                     * @return Subdomain The host header of a DNS record. If this parameter is passed in, only the DNS record corresponding to this host header will be returned.
                     * 
                     */
                    std::string GetSubdomain() const;

                    /**
                     * 设置The host header of a DNS record. If this parameter is passed in, only the DNS record corresponding to this host header will be returned.
                     * @param _subdomain The host header of a DNS record. If this parameter is passed in, only the DNS record corresponding to this host header will be returned.
                     * 
                     */
                    void SetSubdomain(const std::string& _subdomain);

                    /**
                     * 判断参数 Subdomain 是否已赋值
                     * @return Subdomain 是否已赋值
                     * 
                     */
                    bool SubdomainHasBeenSet() const;

                    /**
                     * 获取The type of DNS record, such as A, CNAME, NS, AAAA, explicit URL, implicit URL, CAA, or SPF record.
                     * @return RecordType The type of DNS record, such as A, CNAME, NS, AAAA, explicit URL, implicit URL, CAA, or SPF record.
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置The type of DNS record, such as A, CNAME, NS, AAAA, explicit URL, implicit URL, CAA, or SPF record.
                     * @param _recordType The type of DNS record, such as A, CNAME, NS, AAAA, explicit URL, implicit URL, CAA, or SPF record.
                     * 
                     */
                    void SetRecordType(const std::string& _recordType);

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     * 
                     */
                    bool RecordTypeHasBeenSet() const;

                    /**
                     * 获取The name of the split zone for which DNS records are requested. You can view split zones allowed by this domain via the `DescribeRecordLineList` API.
                     * @return RecordLine The name of the split zone for which DNS records are requested. You can view split zones allowed by this domain via the `DescribeRecordLineList` API.
                     * 
                     */
                    std::string GetRecordLine() const;

                    /**
                     * 设置The name of the split zone for which DNS records are requested. You can view split zones allowed by this domain via the `DescribeRecordLineList` API.
                     * @param _recordLine The name of the split zone for which DNS records are requested. You can view split zones allowed by this domain via the `DescribeRecordLineList` API.
                     * 
                     */
                    void SetRecordLine(const std::string& _recordLine);

                    /**
                     * 判断参数 RecordLine 是否已赋值
                     * @return RecordLine 是否已赋值
                     * 
                     */
                    bool RecordLineHasBeenSet() const;

                    /**
                     * 获取The ID of the split zone for which DNS records are requested. If `RecordLineId` is passed in, `RecordLine` is ignored. You can view split zones allowed by this domain via the `DescribeRecordLineList` API.
                     * @return RecordLineId The ID of the split zone for which DNS records are requested. If `RecordLineId` is passed in, `RecordLine` is ignored. You can view split zones allowed by this domain via the `DescribeRecordLineList` API.
                     * 
                     */
                    std::string GetRecordLineId() const;

                    /**
                     * 设置The ID of the split zone for which DNS records are requested. If `RecordLineId` is passed in, `RecordLine` is ignored. You can view split zones allowed by this domain via the `DescribeRecordLineList` API.
                     * @param _recordLineId The ID of the split zone for which DNS records are requested. If `RecordLineId` is passed in, `RecordLine` is ignored. You can view split zones allowed by this domain via the `DescribeRecordLineList` API.
                     * 
                     */
                    void SetRecordLineId(const std::string& _recordLineId);

                    /**
                     * 判断参数 RecordLineId 是否已赋值
                     * @return RecordLineId 是否已赋值
                     * 
                     */
                    bool RecordLineIdHasBeenSet() const;

                    /**
                     * 获取The group ID passed in to get DNS records in the group.
                     * @return GroupId The group ID passed in to get DNS records in the group.
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置The group ID passed in to get DNS records in the group.
                     * @param _groupId The group ID passed in to get DNS records in the group.
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取The keyword for searching for DNS records. Host headers and record values are supported.
                     * @return Keyword The keyword for searching for DNS records. Host headers and record values are supported.
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置The keyword for searching for DNS records. Host headers and record values are supported.
                     * @param _keyword The keyword for searching for DNS records. Host headers and record values are supported.
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取The sorting field. Available values: `name`, `line`, `type`, `value`, `weight`, `mx`, and `ttl,updated_on`.
                     * @return SortField The sorting field. Available values: `name`, `line`, `type`, `value`, `weight`, `mx`, and `ttl,updated_on`.
                     * 
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置The sorting field. Available values: `name`, `line`, `type`, `value`, `weight`, `mx`, and `ttl,updated_on`.
                     * @param _sortField The sorting field. Available values: `name`, `line`, `type`, `value`, `weight`, `mx`, and `ttl,updated_on`.
                     * 
                     */
                    void SetSortField(const std::string& _sortField);

                    /**
                     * 判断参数 SortField 是否已赋值
                     * @return SortField 是否已赋值
                     * 
                     */
                    bool SortFieldHasBeenSet() const;

                    /**
                     * 获取The sorting type. Valid values: `ASC` (ascending, default), `DESC` (descending).
                     * @return SortType The sorting type. Valid values: `ASC` (ascending, default), `DESC` (descending).
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置The sorting type. Valid values: `ASC` (ascending, default), `DESC` (descending).
                     * @param _sortType The sorting type. Valid values: `ASC` (ascending, default), `DESC` (descending).
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取The offset. Default value: `0`.
                     * @return Offset The offset. Default value: `0`.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置The offset. Default value: `0`.
                     * @param _offset The offset. Default value: `0`.
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
                     * 获取The limit. It defaults to 100 and can be up to 3,000.
                     * @return Limit The limit. It defaults to 100 and can be up to 3,000.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The limit. It defaults to 100 and can be up to 3,000.
                     * @param _limit The limit. It defaults to 100 and can be up to 3,000.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * The domain for which DNS records are to be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The ID of the domain whose DNS records are requested. If `DomainId` is passed in, `Domain` is ignored. You can view all `Domain` and `DomainId` values via the `DescribeDomainList` API.
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * The host header of a DNS record. If this parameter is passed in, only the DNS record corresponding to this host header will be returned.
                     */
                    std::string m_subdomain;
                    bool m_subdomainHasBeenSet;

                    /**
                     * The type of DNS record, such as A, CNAME, NS, AAAA, explicit URL, implicit URL, CAA, or SPF record.
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * The name of the split zone for which DNS records are requested. You can view split zones allowed by this domain via the `DescribeRecordLineList` API.
                     */
                    std::string m_recordLine;
                    bool m_recordLineHasBeenSet;

                    /**
                     * The ID of the split zone for which DNS records are requested. If `RecordLineId` is passed in, `RecordLine` is ignored. You can view split zones allowed by this domain via the `DescribeRecordLineList` API.
                     */
                    std::string m_recordLineId;
                    bool m_recordLineIdHasBeenSet;

                    /**
                     * The group ID passed in to get DNS records in the group.
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * The keyword for searching for DNS records. Host headers and record values are supported.
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * The sorting field. Available values: `name`, `line`, `type`, `value`, `weight`, `mx`, and `ttl,updated_on`.
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * The sorting type. Valid values: `ASC` (ascending, default), `DESC` (descending).
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * The offset. Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The limit. It defaults to 100 and can be up to 3,000.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDLISTREQUEST_H_

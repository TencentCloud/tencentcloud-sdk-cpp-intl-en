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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINSREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveDomains request structure.
                */
                class DescribeLiveDomainsRequest : public AbstractModel
                {
                public:
                    DescribeLiveDomainsRequest();
                    ~DescribeLiveDomainsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter by domain name status. 0: disabled, 1: enabled.
                     * @return DomainStatus Filter by domain name status. 0: disabled, 1: enabled.
                     * 
                     */
                    uint64_t GetDomainStatus() const;

                    /**
                     * 设置Filter by domain name status. 0: disabled, 1: enabled.
                     * @param _domainStatus Filter by domain name status. 0: disabled, 1: enabled.
                     * 
                     */
                    void SetDomainStatus(const uint64_t& _domainStatus);

                    /**
                     * 判断参数 DomainStatus 是否已赋值
                     * @return DomainStatus 是否已赋值
                     * 
                     */
                    bool DomainStatusHasBeenSet() const;

                    /**
                     * 获取Filter by domain name type. 0: push. 1: playback
                     * @return DomainType Filter by domain name type. 0: push. 1: playback
                     * 
                     */
                    uint64_t GetDomainType() const;

                    /**
                     * 设置Filter by domain name type. 0: push. 1: playback
                     * @param _domainType Filter by domain name type. 0: push. 1: playback
                     * 
                     */
                    void SetDomainType(const uint64_t& _domainType);

                    /**
                     * 判断参数 DomainType 是否已赋值
                     * @return DomainType 是否已赋值
                     * 
                     */
                    bool DomainTypeHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. Value range: 10-100. Default value: 10.
                     * @return PageSize Number of entries per page. Value range: 10-100. Default value: 10.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of entries per page. Value range: 10-100. Default value: 10.
                     * @param _pageSize Number of entries per page. Value range: 10-100. Default value: 10.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Page number to get. Value range: 1-100000. Default value: 1.
                     * @return PageNum Page number to get. Value range: 1-100000. Default value: 1.
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置Page number to get. Value range: 1-100000. Default value: 1.
                     * @param _pageNum Page number to get. Value range: 1-100000. Default value: 1.
                     * 
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取0: LVB, 1: LCB. Default value: 0.
                     * @return IsDelayLive 0: LVB, 1: LCB. Default value: 0.
                     * 
                     */
                    uint64_t GetIsDelayLive() const;

                    /**
                     * 设置0: LVB, 1: LCB. Default value: 0.
                     * @param _isDelayLive 0: LVB, 1: LCB. Default value: 0.
                     * 
                     */
                    void SetIsDelayLive(const uint64_t& _isDelayLive);

                    /**
                     * 判断参数 IsDelayLive 是否已赋值
                     * @return IsDelayLive 是否已赋值
                     * 
                     */
                    bool IsDelayLiveHasBeenSet() const;

                    /**
                     * 获取Domain name prefix.
                     * @return DomainPrefix Domain name prefix.
                     * 
                     */
                    std::string GetDomainPrefix() const;

                    /**
                     * 设置Domain name prefix.
                     * @param _domainPrefix Domain name prefix.
                     * 
                     */
                    void SetDomainPrefix(const std::string& _domainPrefix);

                    /**
                     * 判断参数 DomainPrefix 是否已赋值
                     * @return DomainPrefix 是否已赋值
                     * 
                     */
                    bool DomainPrefixHasBeenSet() const;

                    /**
                     * 获取Playback region. This parameter is valid only when `DomainType` is set to `1`.
`1`: Chinese mainland
`2`: global
`3`: outside Chinese mainland
                     * @return PlayType Playback region. This parameter is valid only when `DomainType` is set to `1`.
`1`: Chinese mainland
`2`: global
`3`: outside Chinese mainland
                     * 
                     */
                    uint64_t GetPlayType() const;

                    /**
                     * 设置Playback region. This parameter is valid only when `DomainType` is set to `1`.
`1`: Chinese mainland
`2`: global
`3`: outside Chinese mainland
                     * @param _playType Playback region. This parameter is valid only when `DomainType` is set to `1`.
`1`: Chinese mainland
`2`: global
`3`: outside Chinese mainland
                     * 
                     */
                    void SetPlayType(const uint64_t& _playType);

                    /**
                     * 判断参数 PlayType 是否已赋值
                     * @return PlayType 是否已赋值
                     * 
                     */
                    bool PlayTypeHasBeenSet() const;

                private:

                    /**
                     * Filter by domain name status. 0: disabled, 1: enabled.
                     */
                    uint64_t m_domainStatus;
                    bool m_domainStatusHasBeenSet;

                    /**
                     * Filter by domain name type. 0: push. 1: playback
                     */
                    uint64_t m_domainType;
                    bool m_domainTypeHasBeenSet;

                    /**
                     * Number of entries per page. Value range: 10-100. Default value: 10.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Page number to get. Value range: 1-100000. Default value: 1.
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 0: LVB, 1: LCB. Default value: 0.
                     */
                    uint64_t m_isDelayLive;
                    bool m_isDelayLiveHasBeenSet;

                    /**
                     * Domain name prefix.
                     */
                    std::string m_domainPrefix;
                    bool m_domainPrefixHasBeenSet;

                    /**
                     * Playback region. This parameter is valid only when `DomainType` is set to `1`.
`1`: Chinese mainland
`2`: global
`3`: outside Chinese mainland
                     */
                    uint64_t m_playType;
                    bool m_playTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINSREQUEST_H_

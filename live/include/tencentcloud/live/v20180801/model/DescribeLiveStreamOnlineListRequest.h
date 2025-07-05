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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMONLINELISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMONLINELISTREQUEST_H_

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
                * DescribeLiveStreamOnlineList request structure.
                */
                class DescribeLiveStreamOnlineListRequest : public AbstractModel
                {
                public:
                    DescribeLiveStreamOnlineListRequest();
                    ~DescribeLiveStreamOnlineListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Push domain name. If you use multiple paths, enter the `DomainName`.
                     * @return DomainName Push domain name. If you use multiple paths, enter the `DomainName`.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Push domain name. If you use multiple paths, enter the `DomainName`.
                     * @param _domainName Push domain name. If you use multiple paths, enter the `DomainName`.
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default. If you use multiple paths, enter the `AppName`.
                     * @return AppName Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default. If you use multiple paths, enter the `AppName`.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default. If you use multiple paths, enter the `AppName`.
                     * @param _appName Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default. If you use multiple paths, enter the `AppName`.
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Page number to get. Default value: 1.
                     * @return PageNum Page number to get. Default value: 1.
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置Page number to get. Default value: 1.
                     * @param _pageNum Page number to get. Default value: 1.
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
                     * 获取Number of entries per page. Maximum value: 100. 
Value: any integer between 10 and 100.
Default value: 10.
                     * @return PageSize Number of entries per page. Maximum value: 100. 
Value: any integer between 10 and 100.
Default value: 10.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of entries per page. Maximum value: 100. 
Value: any integer between 10 and 100.
Default value: 10.
                     * @param _pageSize Number of entries per page. Maximum value: 100. 
Value: any integer between 10 and 100.
Default value: 10.
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
                     * 获取Stream name, which is used for exact query.
                     * @return StreamName Stream name, which is used for exact query.
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name, which is used for exact query.
                     * @param _streamName Stream name, which is used for exact query.
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                private:

                    /**
                     * Push domain name. If you use multiple paths, enter the `DomainName`.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default. If you use multiple paths, enter the `AppName`.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Page number to get. Default value: 1.
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Number of entries per page. Maximum value: 100. 
Value: any integer between 10 and 100.
Default value: 10.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Stream name, which is used for exact query.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMONLINELISTREQUEST_H_

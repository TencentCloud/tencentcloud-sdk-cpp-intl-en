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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMPUSHINFOLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMPUSHINFOLISTREQUEST_H_

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
                * DescribeLiveStreamPushInfoList request structure.
                */
                class DescribeLiveStreamPushInfoListRequest : public AbstractModel
                {
                public:
                    DescribeLiveStreamPushInfoListRequest();
                    ~DescribeLiveStreamPushInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Push domain name.
                     * @return PushDomain Push domain name.
                     */
                    std::string GetPushDomain() const;

                    /**
                     * 设置Push domain name.
                     * @param PushDomain Push domain name.
                     */
                    void SetPushDomain(const std::string& _pushDomain);

                    /**
                     * 判断参数 PushDomain 是否已赋值
                     * @return PushDomain 是否已赋值
                     */
                    bool PushDomainHasBeenSet() const;

                    /**
                     * 获取Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default.
                     * @return AppName Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default.
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default.
                     * @param AppName Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default.
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取Number of pages,
Value range: [1,10000],
Default value: 1.
                     * @return PageNum Number of pages,
Value range: [1,10000],
Default value: 1.
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置Number of pages,
Value range: [1,10000],
Default value: 1.
                     * @param PageNum Number of pages,
Value range: [1,10000],
Default value: 1.
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取Number of entries per page,
Value range: [1,1000],
Default value: 200.
                     * @return PageSize Number of entries per page,
Value range: [1,1000],
Default value: 200.
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of entries per page,
Value range: [1,1000],
Default value: 200.
                     * @param PageSize Number of entries per page,
Value range: [1,1000],
Default value: 200.
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Push domain name.
                     */
                    std::string m_pushDomain;
                    bool m_pushDomainHasBeenSet;

                    /**
                     * Push path, which is the same as the `AppName` in push and playback addresses and is `live` by default.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Number of pages,
Value range: [1,10000],
Default value: 1.
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * Number of entries per page,
Value range: [1,1000],
Default value: 200.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMPUSHINFOLISTREQUEST_H_

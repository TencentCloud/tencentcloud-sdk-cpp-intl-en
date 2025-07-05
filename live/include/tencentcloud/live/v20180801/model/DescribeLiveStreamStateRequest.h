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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMSTATEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMSTATEREQUEST_H_

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
                * DescribeLiveStreamState request structure.
                */
                class DescribeLiveStreamStateRequest : public AbstractModel
                {
                public:
                    DescribeLiveStreamStateRequest();
                    ~DescribeLiveStreamStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Push path, which is the same as the AppName in push and playback addresses and is "live" by default.
                     * @return AppName Push path, which is the same as the AppName in push and playback addresses and is "live" by default.
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置Push path, which is the same as the AppName in push and playback addresses and is "live" by default.
                     * @param _appName Push path, which is the same as the AppName in push and playback addresses and is "live" by default.
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
                     * 获取Your push domain name.
                     * @return DomainName Your push domain name.
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置Your push domain name.
                     * @param _domainName Your push domain name.
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
                     * 获取Stream name.
                     * @return StreamName Stream name.
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream name.
                     * @param _streamName Stream name.
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
                     * Push path, which is the same as the AppName in push and playback addresses and is "live" by default.
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Your push domain name.
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * Stream name.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVESTREAMSTATEREQUEST_H_

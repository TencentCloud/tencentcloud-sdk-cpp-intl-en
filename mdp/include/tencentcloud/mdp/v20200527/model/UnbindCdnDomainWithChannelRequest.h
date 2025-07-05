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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_UNBINDCDNDOMAINWITHCHANNELREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_UNBINDCDNDOMAINWITHCHANNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * UnbindCdnDomainWithChannel request structure.
                */
                class UnbindCdnDomainWithChannelRequest : public AbstractModel
                {
                public:
                    UnbindCdnDomainWithChannelRequest();
                    ~UnbindCdnDomainWithChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel ID
                     * @return ChannelId Channel ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Channel ID
                     * @param _channelId Channel ID
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取CDN playback domain name
                     * @return CdnDomain CDN playback domain name
                     * 
                     */
                    std::string GetCdnDomain() const;

                    /**
                     * 设置CDN playback domain name
                     * @param _cdnDomain CDN playback domain name
                     * 
                     */
                    void SetCdnDomain(const std::string& _cdnDomain);

                    /**
                     * 判断参数 CdnDomain 是否已赋值
                     * @return CdnDomain 是否已赋值
                     * 
                     */
                    bool CdnDomainHasBeenSet() const;

                private:

                    /**
                     * Channel ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * CDN playback domain name
                     */
                    std::string m_cdnDomain;
                    bool m_cdnDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_UNBINDCDNDOMAINWITHCHANNELREQUEST_H_

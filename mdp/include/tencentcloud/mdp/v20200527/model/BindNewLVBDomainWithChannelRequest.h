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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_BINDNEWLVBDOMAINWITHCHANNELREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_BINDNEWLVBDOMAINWITHCHANNELREQUEST_H_

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
                * BindNewLVBDomainWithChannel request structure.
                */
                class BindNewLVBDomainWithChannelRequest : public AbstractModel
                {
                public:
                    BindNewLVBDomainWithChannelRequest();
                    ~BindNewLVBDomainWithChannelRequest() = default;
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
                     * 获取The LVB domain name to bind
                     * @return LVBDomain The LVB domain name to bind
                     * 
                     */
                    std::string GetLVBDomain() const;

                    /**
                     * 设置The LVB domain name to bind
                     * @param _lVBDomain The LVB domain name to bind
                     * 
                     */
                    void SetLVBDomain(const std::string& _lVBDomain);

                    /**
                     * 判断参数 LVBDomain 是否已赋值
                     * @return LVBDomain 是否已赋值
                     * 
                     */
                    bool LVBDomainHasBeenSet() const;

                private:

                    /**
                     * Channel ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * The LVB domain name to bind
                     */
                    std::string m_lVBDomain;
                    bool m_lVBDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_BINDNEWLVBDOMAINWITHCHANNELREQUEST_H_

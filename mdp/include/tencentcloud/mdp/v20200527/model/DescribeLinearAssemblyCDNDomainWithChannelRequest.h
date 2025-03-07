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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBELINEARASSEMBLYCDNDOMAINWITHCHANNELREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBELINEARASSEMBLYCDNDOMAINWITHCHANNELREQUEST_H_

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
                * DescribeLinearAssemblyCDNDomainWithChannel request structure.
                */
                class DescribeLinearAssemblyCDNDomainWithChannelRequest : public AbstractModel
                {
                public:
                    DescribeLinearAssemblyCDNDomainWithChannelRequest();
                    ~DescribeLinearAssemblyCDNDomainWithChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel Id.
                     * @return ChannelId Channel Id.
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Channel Id.
                     * @param _channelId Channel Id.
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                private:

                    /**
                     * Channel Id.
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_DESCRIBELINEARASSEMBLYCDNDOMAINWITHCHANNELREQUEST_H_

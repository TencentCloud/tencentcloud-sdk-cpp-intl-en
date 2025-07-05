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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGECHANNELREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGECHANNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdp/v20200527/model/CacheInfo.h>


namespace TencentCloud
{
    namespace Mdp
    {
        namespace V20200527
        {
            namespace Model
            {
                /**
                * CreateStreamPackageChannel request structure.
                */
                class CreateStreamPackageChannelRequest : public AbstractModel
                {
                public:
                    CreateStreamPackageChannelRequest();
                    ~CreateStreamPackageChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel name.
                     * @return Name Channel name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Channel name.
                     * @param _name Channel name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Channel protocol. Valid values: HLS, DASH, CMAF.
                     * @return Protocol Channel protocol. Valid values: HLS, DASH, CMAF.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Channel protocol. Valid values: HLS, DASH, CMAF.
                     * @param _protocol Channel protocol. Valid values: HLS, DASH, CMAF.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Cache configuration.
                     * @return CacheInfo Cache configuration.
                     * 
                     */
                    CacheInfo GetCacheInfo() const;

                    /**
                     * 设置Cache configuration.
                     * @param _cacheInfo Cache configuration.
                     * 
                     */
                    void SetCacheInfo(const CacheInfo& _cacheInfo);

                    /**
                     * 判断参数 CacheInfo 是否已赋值
                     * @return CacheInfo 是否已赋值
                     * 
                     */
                    bool CacheInfoHasBeenSet() const;

                private:

                    /**
                     * Channel name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Channel protocol. Valid values: HLS, DASH, CMAF.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Cache configuration.
                     */
                    CacheInfo m_cacheInfo;
                    bool m_cacheInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_CREATESTREAMPACKAGECHANNELREQUEST_H_

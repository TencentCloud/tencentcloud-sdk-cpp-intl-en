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

#ifndef TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGECHANNELREQUEST_H_
#define TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGECHANNELREQUEST_H_

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
                * ModifyStreamPackageChannel request structure.
                */
                class ModifyStreamPackageChannelRequest : public AbstractModel
                {
                public:
                    ModifyStreamPackageChannelRequest();
                    ~ModifyStreamPackageChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel ID.
                     * @return Id Channel ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Channel ID.
                     * @param _id Channel ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取New channel name.
                     * @return Name New channel name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置New channel name.
                     * @param _name New channel name.
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
                     * 获取New channel protocol. Valid values: HLS, DASH, CMAF.
                     * @return Protocol New channel protocol. Valid values: HLS, DASH, CMAF.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置New channel protocol. Valid values: HLS, DASH, CMAF.
                     * @param _protocol New channel protocol. Valid values: HLS, DASH, CMAF.
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
                     * Channel ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * New channel name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * New channel protocol. Valid values: HLS, DASH, CMAF.
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

#endif // !TENCENTCLOUD_MDP_V20200527_MODEL_MODIFYSTREAMPACKAGECHANNELREQUEST_H_

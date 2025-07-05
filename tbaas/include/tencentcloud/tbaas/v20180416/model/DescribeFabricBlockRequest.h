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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_DESCRIBEFABRICBLOCKREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_DESCRIBEFABRICBLOCKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeFabricBlock request structure.
                */
                class DescribeFabricBlockRequest : public AbstractModel
                {
                public:
                    DescribeFabricBlockRequest();
                    ~DescribeFabricBlockRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID, which can be obtained from the blockchain cluster details or in the list.
                     * @return ClusterId Cluster ID, which can be obtained from the blockchain cluster details or in the list.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID, which can be obtained from the blockchain cluster details or in the list.
                     * @param _clusterId Cluster ID, which can be obtained from the blockchain cluster details or in the list.
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Channel ID, which can be obtained from the channel list or channel detail.
                     * @return ChannelId Channel ID, which can be obtained from the channel list or channel detail.
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Channel ID, which can be obtained from the channel list or channel detail.
                     * @param _channelId Channel ID, which can be obtained from the channel list or channel detail.
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
                     * 获取Block height, starting from 0.
                     * @return BlockHeight Block height, starting from 0.
                     * 
                     */
                    int64_t GetBlockHeight() const;

                    /**
                     * 设置Block height, starting from 0.
                     * @param _blockHeight Block height, starting from 0.
                     * 
                     */
                    void SetBlockHeight(const int64_t& _blockHeight);

                    /**
                     * 判断参数 BlockHeight 是否已赋值
                     * @return BlockHeight 是否已赋值
                     * 
                     */
                    bool BlockHeightHasBeenSet() const;

                private:

                    /**
                     * Cluster ID, which can be obtained from the blockchain cluster details or in the list.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Channel ID, which can be obtained from the channel list or channel detail.
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Block height, starting from 0.
                     */
                    int64_t m_blockHeight;
                    bool m_blockHeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_DESCRIBEFABRICBLOCKREQUEST_H_

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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_DESCRIBEFABRICTRANSACTIONREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_DESCRIBEFABRICTRANSACTIONREQUEST_H_

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
                * DescribeFabricTransaction request structure.
                */
                class DescribeFabricTransactionRequest : public AbstractModel
                {
                public:
                    DescribeFabricTransactionRequest();
                    ~DescribeFabricTransactionRequest() = default;
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
                     * 获取Transaction ID
                     * @return TxId Transaction ID
                     * 
                     */
                    std::string GetTxId() const;

                    /**
                     * 设置Transaction ID
                     * @param _txId Transaction ID
                     * 
                     */
                    void SetTxId(const std::string& _txId);

                    /**
                     * 判断参数 TxId 是否已赋值
                     * @return TxId 是否已赋值
                     * 
                     */
                    bool TxIdHasBeenSet() const;

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
                     * Transaction ID
                     */
                    std::string m_txId;
                    bool m_txIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_DESCRIBEFABRICTRANSACTIONREQUEST_H_

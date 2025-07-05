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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_INVOKEFABRICCHAINCODEREQUEST_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_INVOKEFABRICCHAINCODEREQUEST_H_

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
                * InvokeFabricChaincode request structure.
                */
                class InvokeFabricChaincodeRequest : public AbstractModel
                {
                public:
                    InvokeFabricChaincodeRequest();
                    ~InvokeFabricChaincodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID, which can be obtained from the blockchain cluster details.
                     * @return ClusterId Cluster ID, which can be obtained from the blockchain cluster details.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID, which can be obtained from the blockchain cluster details.
                     * @param _clusterId Cluster ID, which can be obtained from the blockchain cluster details.
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
                     * 获取Contract name. it can be obtained from the contract list or contract details.
                     * @return ChaincodeName Contract name. it can be obtained from the contract list or contract details.
                     * 
                     */
                    std::string GetChaincodeName() const;

                    /**
                     * 设置Contract name. it can be obtained from the contract list or contract details.
                     * @param _chaincodeName Contract name. it can be obtained from the contract list or contract details.
                     * 
                     */
                    void SetChaincodeName(const std::string& _chaincodeName);

                    /**
                     * 判断参数 ChaincodeName 是否已赋值
                     * @return ChaincodeName 是否已赋值
                     * 
                     */
                    bool ChaincodeNameHasBeenSet() const;

                    /**
                     * 获取Contract method.
                     * @return FuncName Contract method.
                     * 
                     */
                    std::string GetFuncName() const;

                    /**
                     * 设置Contract method.
                     * @param _funcName Contract method.
                     * 
                     */
                    void SetFuncName(const std::string& _funcName);

                    /**
                     * 判断参数 FuncName 是否已赋值
                     * @return FuncName 是否已赋值
                     * 
                     */
                    bool FuncNameHasBeenSet() const;

                    /**
                     * 获取Contract method input parameter.
                     * @return FuncParam Contract method input parameter.
                     * 
                     */
                    std::vector<std::string> GetFuncParam() const;

                    /**
                     * 设置Contract method input parameter.
                     * @param _funcParam Contract method input parameter.
                     * 
                     */
                    void SetFuncParam(const std::vector<std::string>& _funcParam);

                    /**
                     * 判断参数 FuncParam 是否已赋值
                     * @return FuncParam 是否已赋值
                     * 
                     */
                    bool FuncParamHasBeenSet() const;

                    /**
                     * 获取Whether to execute asynchronously. if so, use the transaction TxID in the return value to query the execution result.
                     * @return WithAsyncResult Whether to execute asynchronously. if so, use the transaction TxID in the return value to query the execution result.
                     * 
                     */
                    bool GetWithAsyncResult() const;

                    /**
                     * 设置Whether to execute asynchronously. if so, use the transaction TxID in the return value to query the execution result.
                     * @param _withAsyncResult Whether to execute asynchronously. if so, use the transaction TxID in the return value to query the execution result.
                     * 
                     */
                    void SetWithAsyncResult(const bool& _withAsyncResult);

                    /**
                     * 判断参数 WithAsyncResult 是否已赋值
                     * @return WithAsyncResult 是否已赋值
                     * 
                     */
                    bool WithAsyncResultHasBeenSet() const;

                private:

                    /**
                     * Cluster ID, which can be obtained from the blockchain cluster details.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Channel ID, which can be obtained from the channel list or channel detail.
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Contract name. it can be obtained from the contract list or contract details.
                     */
                    std::string m_chaincodeName;
                    bool m_chaincodeNameHasBeenSet;

                    /**
                     * Contract method.
                     */
                    std::string m_funcName;
                    bool m_funcNameHasBeenSet;

                    /**
                     * Contract method input parameter.
                     */
                    std::vector<std::string> m_funcParam;
                    bool m_funcParamHasBeenSet;

                    /**
                     * Whether to execute asynchronously. if so, use the transaction TxID in the return value to query the execution result.
                     */
                    bool m_withAsyncResult;
                    bool m_withAsyncResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_INVOKEFABRICCHAINCODEREQUEST_H_

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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_DESCRIBEFABRICTRANSACTIONRESPONSE_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_DESCRIBEFABRICTRANSACTIONRESPONSE_H_

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
                * DescribeFabricTransaction response structure.
                */
                class DescribeFabricTransactionResponse : public AbstractModel
                {
                public:
                    DescribeFabricTransactionResponse();
                    ~DescribeFabricTransactionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Transaction ID
                     * @return TxId Transaction ID
                     * 
                     */
                    std::string GetTxId() const;

                    /**
                     * 判断参数 TxId 是否已赋值
                     * @return TxId 是否已赋值
                     * 
                     */
                    bool TxIdHasBeenSet() const;

                    /**
                     * 获取Transaction Hash.
                     * @return TxHash Transaction Hash.
                     * 
                     */
                    std::string GetTxHash() const;

                    /**
                     * 判断参数 TxHash 是否已赋值
                     * @return TxHash 是否已赋值
                     * 
                     */
                    bool TxHashHasBeenSet() const;

                    /**
                     * 获取Transaction status.
                     * @return TxStatus Transaction status.
                     * 
                     */
                    std::string GetTxStatus() const;

                    /**
                     * 判断参数 TxStatus 是否已赋值
                     * @return TxStatus 是否已赋值
                     * 
                     */
                    bool TxStatusHasBeenSet() const;

                    /**
                     * 获取Organization list involved.
                     * @return JoinOrgList Organization list involved.
                     * 
                     */
                    std::vector<std::string> GetJoinOrgList() const;

                    /**
                     * 判断参数 JoinOrgList 是否已赋值
                     * @return JoinOrgList 是否已赋值
                     * 
                     */
                    bool JoinOrgListHasBeenSet() const;

                    /**
                     * 获取Transaction sender.
                     * @return Sender Transaction sender.
                     * 
                     */
                    std::string GetSender() const;

                    /**
                     * 判断参数 Sender 是否已赋值
                     * @return Sender 是否已赋值
                     * 
                     */
                    bool SenderHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Block height.
                     * @return BlockHeight Block height.
                     * 
                     */
                    int64_t GetBlockHeight() const;

                    /**
                     * 判断参数 BlockHeight 是否已赋值
                     * @return BlockHeight 是否已赋值
                     * 
                     */
                    bool BlockHeightHasBeenSet() const;

                    /**
                     * 获取The contract to which the exchange belongs.
                     * @return ChaincodeName The contract to which the exchange belongs.
                     * 
                     */
                    std::string GetChaincodeName() const;

                    /**
                     * 判断参数 ChaincodeName 是否已赋值
                     * @return ChaincodeName 是否已赋值
                     * 
                     */
                    bool ChaincodeNameHasBeenSet() const;

                    /**
                     * 获取Transaction data, base64 encoded, decoded as a json string.
                     * @return TransactionData Transaction data, base64 encoded, decoded as a json string.
                     * 
                     */
                    std::string GetTransactionData() const;

                    /**
                     * 判断参数 TransactionData 是否已赋值
                     * @return TransactionData 是否已赋值
                     * 
                     */
                    bool TransactionDataHasBeenSet() const;

                private:

                    /**
                     * Transaction ID
                     */
                    std::string m_txId;
                    bool m_txIdHasBeenSet;

                    /**
                     * Transaction Hash.
                     */
                    std::string m_txHash;
                    bool m_txHashHasBeenSet;

                    /**
                     * Transaction status.
                     */
                    std::string m_txStatus;
                    bool m_txStatusHasBeenSet;

                    /**
                     * Organization list involved.
                     */
                    std::vector<std::string> m_joinOrgList;
                    bool m_joinOrgListHasBeenSet;

                    /**
                     * Transaction sender.
                     */
                    std::string m_sender;
                    bool m_senderHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Block height.
                     */
                    int64_t m_blockHeight;
                    bool m_blockHeightHasBeenSet;

                    /**
                     * The contract to which the exchange belongs.
                     */
                    std::string m_chaincodeName;
                    bool m_chaincodeNameHasBeenSet;

                    /**
                     * Transaction data, base64 encoded, decoded as a json string.
                     */
                    std::string m_transactionData;
                    bool m_transactionDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_DESCRIBEFABRICTRANSACTIONRESPONSE_H_

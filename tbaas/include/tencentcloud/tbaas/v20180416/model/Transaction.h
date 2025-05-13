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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_TRANSACTION_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_TRANSACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Transaction overview information display.
                */
                class Transaction : public AbstractModel
                {
                public:
                    Transaction();
                    ~Transaction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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

                    /**
                     * 获取Contract name.
                     * @return ChaincodeName Contract name.
                     * 
                     */
                    std::string GetChaincodeName() const;

                    /**
                     * 设置Contract name.
                     * @param _chaincodeName Contract name.
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
                     * 获取Transaction sender.
                     * @return Sender Transaction sender.
                     * 
                     */
                    std::string GetSender() const;

                    /**
                     * 设置Transaction sender.
                     * @param _sender Transaction sender.
                     * 
                     */
                    void SetSender(const std::string& _sender);

                    /**
                     * 判断参数 Sender 是否已赋值
                     * @return Sender 是否已赋值
                     * 
                     */
                    bool SenderHasBeenSet() const;

                    /**
                     * 获取Transaction creation time.
                     * @return CreateTime Transaction creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Transaction creation time.
                     * @param _createTime Transaction creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The block height where the trading platform is located.
                     * @return BlockHeight The block height where the trading platform is located.
                     * 
                     */
                    int64_t GetBlockHeight() const;

                    /**
                     * 设置The block height where the trading platform is located.
                     * @param _blockHeight The block height where the trading platform is located.
                     * 
                     */
                    void SetBlockHeight(const int64_t& _blockHeight);

                    /**
                     * 判断参数 BlockHeight 是否已赋值
                     * @return BlockHeight 是否已赋值
                     * 
                     */
                    bool BlockHeightHasBeenSet() const;

                    /**
                     * 获取The serial number of a transaction in a block.
                     * @return TxIndex The serial number of a transaction in a block.
                     * 
                     */
                    int64_t GetTxIndex() const;

                    /**
                     * 设置The serial number of a transaction in a block.
                     * @param _txIndex The serial number of a transaction in a block.
                     * 
                     */
                    void SetTxIndex(const int64_t& _txIndex);

                    /**
                     * 判断参数 TxIndex 是否已赋值
                     * @return TxIndex 是否已赋值
                     * 
                     */
                    bool TxIndexHasBeenSet() const;

                private:

                    /**
                     * Transaction ID
                     */
                    std::string m_txId;
                    bool m_txIdHasBeenSet;

                    /**
                     * Contract name.
                     */
                    std::string m_chaincodeName;
                    bool m_chaincodeNameHasBeenSet;

                    /**
                     * Transaction sender.
                     */
                    std::string m_sender;
                    bool m_senderHasBeenSet;

                    /**
                     * Transaction creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The block height where the trading platform is located.
                     */
                    int64_t m_blockHeight;
                    bool m_blockHeightHasBeenSet;

                    /**
                     * The serial number of a transaction in a block.
                     */
                    int64_t m_txIndex;
                    bool m_txIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_TRANSACTION_H_

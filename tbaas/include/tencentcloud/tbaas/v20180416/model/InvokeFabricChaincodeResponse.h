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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_INVOKEFABRICCHAINCODERESPONSE_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_INVOKEFABRICCHAINCODERESPONSE_H_

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
                * InvokeFabricChaincode response structure.
                */
                class InvokeFabricChaincodeResponse : public AbstractModel
                {
                public:
                    InvokeFabricChaincodeResponse();
                    ~InvokeFabricChaincodeResponse() = default;
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
                     * 获取Transaction result.
                     * @return TxResult Transaction result.
                     * 
                     */
                    std::string GetTxResult() const;

                    /**
                     * 判断参数 TxResult 是否已赋值
                     * @return TxResult 是否已赋值
                     * 
                     */
                    bool TxResultHasBeenSet() const;

                private:

                    /**
                     * Transaction ID
                     */
                    std::string m_txId;
                    bool m_txIdHasBeenSet;

                    /**
                     * Transaction status.
                     */
                    std::string m_txStatus;
                    bool m_txStatusHasBeenSet;

                    /**
                     * Transaction result.
                     */
                    std::string m_txResult;
                    bool m_txResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_INVOKEFABRICCHAINCODERESPONSE_H_

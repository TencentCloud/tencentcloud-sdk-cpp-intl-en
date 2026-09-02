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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TESTWEBHOOKRECEIVERREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TESTWEBHOOKRECEIVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * TestWebhookReceiver request structure.
                */
                class TestWebhookReceiverRequest : public AbstractModel
                {
                public:
                    TestWebhookReceiverRequest();
                    ~TestWebhookReceiverRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Robot configuration ID</p>
                     * @return ID <p>Robot configuration ID</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>Robot configuration ID</p>
                     * @param _iD <p>Robot configuration ID</p>
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>Custom test content (plaintext). If not passed, the system default test sample is used<br>Input limit: length 0-2048</p>
                     * @return Data <p>Custom test content (plaintext). If not passed, the system default test sample is used<br>Input limit: length 0-2048</p>
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置<p>Custom test content (plaintext). If not passed, the system default test sample is used<br>Input limit: length 0-2048</p>
                     * @param _data <p>Custom test content (plaintext). If not passed, the system default test sample is used<br>Input limit: length 0-2048</p>
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * <p>Robot configuration ID</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Custom test content (plaintext). If not passed, the system default test sample is used<br>Input limit: length 0-2048</p>
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TESTWEBHOOKRECEIVERREQUEST_H_

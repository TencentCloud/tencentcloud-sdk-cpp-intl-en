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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKRECEIVERUSAGE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKRECEIVERUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Usage information on associated policies of the alarm recipient
                */
                class WebHookReceiverUsage : public AbstractModel
                {
                public:
                    WebHookReceiverUsage();
                    ~WebHookReceiverUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Recipient ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReceiverId Recipient ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetReceiverId() const;

                    /**
                     * 设置Recipient ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _receiverId Recipient ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReceiverId(const int64_t& _receiverId);

                    /**
                     * 判断参数 ReceiverId 是否已赋值
                     * @return ReceiverId 是否已赋值
                     * 
                     */
                    bool ReceiverIdHasBeenSet() const;

                    /**
                     * 获取Recipient name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReceiverName Recipient name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetReceiverName() const;

                    /**
                     * 设置Recipient name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _receiverName Recipient name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReceiverName(const std::string& _receiverName);

                    /**
                     * 判断参数 ReceiverName 是否已赋值
                     * @return ReceiverName 是否已赋值
                     * 
                     */
                    bool ReceiverNameHasBeenSet() const;

                    /**
                     * 获取Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PolicyName Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _policyName Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                private:

                    /**
                     * Recipient ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_receiverId;
                    bool m_receiverIdHasBeenSet;

                    /**
                     * Recipient name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_receiverName;
                    bool m_receiverNameHasBeenSet;

                    /**
                     * Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKRECEIVERUSAGE_H_

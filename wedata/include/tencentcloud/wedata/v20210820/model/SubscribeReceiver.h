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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBSCRIBERECEIVER_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBSCRIBERECEIVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Subscription Recipient
                */
                class SubscribeReceiver : public AbstractModel
                {
                public:
                    SubscribeReceiver();
                    ~SubscribeReceiver() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Recipient Uin
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ReceiverUserId Recipient Uin
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetReceiverUserId() const;

                    /**
                     * 设置Recipient Uin
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _receiverUserId Recipient Uin
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetReceiverUserId(const uint64_t& _receiverUserId);

                    /**
                     * 判断参数 ReceiverUserId 是否已赋值
                     * @return ReceiverUserId 是否已赋值
                     * 
                     */
                    bool ReceiverUserIdHasBeenSet() const;

                    /**
                     * 获取Recipient Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ReceiverName Recipient Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetReceiverName() const;

                    /**
                     * 设置Recipient Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _receiverName Recipient Name
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Recipient UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ReceiverUserIdStr Recipient UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetReceiverUserIdStr() const;

                    /**
                     * 设置Recipient UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _receiverUserIdStr Recipient UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetReceiverUserIdStr(const std::string& _receiverUserIdStr);

                    /**
                     * 判断参数 ReceiverUserIdStr 是否已赋值
                     * @return ReceiverUserIdStr 是否已赋值
                     * 
                     */
                    bool ReceiverUserIdStrHasBeenSet() const;

                private:

                    /**
                     * Recipient Uin
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_receiverUserId;
                    bool m_receiverUserIdHasBeenSet;

                    /**
                     * Recipient Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_receiverName;
                    bool m_receiverNameHasBeenSet;

                    /**
                     * Recipient UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_receiverUserIdStr;
                    bool m_receiverUserIdStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBSCRIBERECEIVER_H_

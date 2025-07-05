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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_PHONENUMBUYINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_PHONENUMBUYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * Number purchase information.
                */
                class PhoneNumBuyInfo : public AbstractModel
                {
                public:
                    PhoneNumBuyInfo();
                    ~PhoneNumBuyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Telephone number.
                     * @return PhoneNum Telephone number.
                     * 
                     */
                    std::string GetPhoneNum() const;

                    /**
                     * 设置Telephone number.
                     * @param _phoneNum Telephone number.
                     * 
                     */
                    void SetPhoneNum(const std::string& _phoneNum);

                    /**
                     * 判断参数 PhoneNum 是否已赋值
                     * @return PhoneNum 是否已赋值
                     * 
                     */
                    bool PhoneNumHasBeenSet() const;

                    /**
                     * 获取Number type, 0 - landline | 1 - virtual business number | 2 - ISP number | 3 - 400 number.
                     * @return Type Number type, 0 - landline | 1 - virtual business number | 2 - ISP number | 3 - 400 number.
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Number type, 0 - landline | 1 - virtual business number | 2 - ISP number | 3 - 400 number.
                     * @param _type Number type, 0 - landline | 1 - virtual business number | 2 - ISP number | 3 - 400 number.
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Call type of the number, 1 - inbound | 2 - outbound | 3 - inbound and outbound.
                     * @return CallType Call type of the number, 1 - inbound | 2 - outbound | 3 - inbound and outbound.
                     * 
                     */
                    int64_t GetCallType() const;

                    /**
                     * 设置Call type of the number, 1 - inbound | 2 - outbound | 3 - inbound and outbound.
                     * @param _callType Call type of the number, 1 - inbound | 2 - outbound | 3 - inbound and outbound.
                     * 
                     */
                    void SetCallType(const int64_t& _callType);

                    /**
                     * 判断参数 CallType 是否已赋值
                     * @return CallType 是否已赋值
                     * 
                     */
                    bool CallTypeHasBeenSet() const;

                    /**
                     * 获取Purchased timestamp.
                     * @return BuyTime Purchased timestamp.
                     * 
                     */
                    int64_t GetBuyTime() const;

                    /**
                     * 设置Purchased timestamp.
                     * @param _buyTime Purchased timestamp.
                     * 
                     */
                    void SetBuyTime(const int64_t& _buyTime);

                    /**
                     * 判断参数 BuyTime 是否已赋值
                     * @return BuyTime 是否已赋值
                     * 
                     */
                    bool BuyTimeHasBeenSet() const;

                    /**
                     * 获取Deadline timestamp.
                     * @return EndTime Deadline timestamp.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置Deadline timestamp.
                     * @param _endTime Deadline timestamp.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Number status, 1-normal | 2-suspended due to non-payment | 4-admin suspended | 5-suspended due to violation.
                     * @return State Number status, 1-normal | 2-suspended due to non-payment | 4-admin suspended | 5-suspended due to violation.
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置Number status, 1-normal | 2-suspended due to non-payment | 4-admin suspended | 5-suspended due to violation.
                     * @param _state Number status, 1-normal | 2-suspended due to non-payment | 4-admin suspended | 5-suspended due to violation.
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * Telephone number.
                     */
                    std::string m_phoneNum;
                    bool m_phoneNumHasBeenSet;

                    /**
                     * Number type, 0 - landline | 1 - virtual business number | 2 - ISP number | 3 - 400 number.
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Call type of the number, 1 - inbound | 2 - outbound | 3 - inbound and outbound.
                     */
                    int64_t m_callType;
                    bool m_callTypeHasBeenSet;

                    /**
                     * Purchased timestamp.
                     */
                    int64_t m_buyTime;
                    bool m_buyTimeHasBeenSet;

                    /**
                     * Deadline timestamp.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Number status, 1-normal | 2-suspended due to non-payment | 4-admin suspended | 5-suspended due to violation.
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_PHONENUMBUYINFO_H_

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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_OWNNUMBERAPPLYDETAILITEM_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_OWNNUMBERAPPLYDETAILITEM_H_

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
                * User-owned number approval detail data type
                */
                class OwnNumberApplyDetailItem : public AbstractModel
                {
                public:
                    OwnNumberApplyDetailItem();
                    ~OwnNumberApplyDetailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number type: 0 - inbound | 1 - outbound | 2 - inbound and outbound.
                     * @return CallType Number type: 0 - inbound | 1 - outbound | 2 - inbound and outbound.
                     * 
                     */
                    int64_t GetCallType() const;

                    /**
                     * 设置Number type: 0 - inbound | 1 - outbound | 2 - inbound and outbound.
                     * @param _callType Number type: 0 - inbound | 1 - outbound | 2 - inbound and outbound.
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
                     * 获取Line number.
                     * @return PhoneNumber Line number.
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置Line number.
                     * @param _phoneNumber Line number.
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取Maximum concurrent call number.
                     * @return MaxCallCount Maximum concurrent call number.
                     * 
                     */
                    int64_t GetMaxCallCount() const;

                    /**
                     * 设置Maximum concurrent call number.
                     * @param _maxCallCount Maximum concurrent call number.
                     * 
                     */
                    void SetMaxCallCount(const int64_t& _maxCallCount);

                    /**
                     * 判断参数 MaxCallCount 是否已赋值
                     * @return MaxCallCount 是否已赋值
                     * 
                     */
                    bool MaxCallCountHasBeenSet() const;

                    /**
                     * 获取Maximum number of concurrencies per second.
                     * @return MaxCallPSec Maximum number of concurrencies per second.
                     * 
                     */
                    int64_t GetMaxCallPSec() const;

                    /**
                     * 设置Maximum number of concurrencies per second.
                     * @param _maxCallPSec Maximum number of concurrencies per second.
                     * 
                     */
                    void SetMaxCallPSec(const int64_t& _maxCallPSec);

                    /**
                     * 判断参数 MaxCallPSec 是否已赋值
                     * @return MaxCallPSec 是否已赋值
                     * 
                     */
                    bool MaxCallPSecHasBeenSet() const;

                    /**
                     * 获取Outbound called number format, use {+e.164} or {e.164}. 
                     * @return OutboundCalleeFormat Outbound called number format, use {+e.164} or {e.164}. 
                     * 
                     */
                    std::string GetOutboundCalleeFormat() const;

                    /**
                     * 设置Outbound called number format, use {+e.164} or {e.164}. 
                     * @param _outboundCalleeFormat Outbound called number format, use {+e.164} or {e.164}. 
                     * 
                     */
                    void SetOutboundCalleeFormat(const std::string& _outboundCalleeFormat);

                    /**
                     * 判断参数 OutboundCalleeFormat 是否已赋值
                     * @return OutboundCalleeFormat 是否已赋值
                     * 
                     */
                    bool OutboundCalleeFormatHasBeenSet() const;

                private:

                    /**
                     * Number type: 0 - inbound | 1 - outbound | 2 - inbound and outbound.
                     */
                    int64_t m_callType;
                    bool m_callTypeHasBeenSet;

                    /**
                     * Line number.
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * Maximum concurrent call number.
                     */
                    int64_t m_maxCallCount;
                    bool m_maxCallCountHasBeenSet;

                    /**
                     * Maximum number of concurrencies per second.
                     */
                    int64_t m_maxCallPSec;
                    bool m_maxCallPSecHasBeenSet;

                    /**
                     * Outbound called number format, use {+e.164} or {e.164}. 
                     */
                    std::string m_outboundCalleeFormat;
                    bool m_outboundCalleeFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_OWNNUMBERAPPLYDETAILITEM_H_

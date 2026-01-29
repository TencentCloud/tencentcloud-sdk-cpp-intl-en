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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_USERCALLRECORD_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_USERCALLRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Record details.
                */
                class UserCallRecord : public AbstractModel
                {
                public:
                    UserCallRecord();
                    ~UserCallRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Source IP of the call.
                     * @return SourceIP Source IP of the call.
                     * 
                     */
                    std::string GetSourceIP() const;

                    /**
                     * 设置Source IP of the call.
                     * @param _sourceIP Source IP of the call.
                     * 
                     */
                    void SetSourceIP(const std::string& _sourceIP);

                    /**
                     * 判断参数 SourceIP 是否已赋值
                     * @return SourceIP 是否已赋值
                     * 
                     */
                    bool SourceIPHasBeenSet() const;

                    /**
                     * 获取Invocation type.
0: console invocation.
1:API
                     * @return EventType Invocation type.
0: console invocation.
1:API
                     * 
                     */
                    int64_t GetEventType() const;

                    /**
                     * 设置Invocation type.
0: console invocation.
1:API
                     * @param _eventType Invocation type.
0: console invocation.
1:API
                     * 
                     */
                    void SetEventType(const int64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取Number of calls.
                     * @return CallCount Number of calls.
                     * 
                     */
                    int64_t GetCallCount() const;

                    /**
                     * 设置Number of calls.
                     * @param _callCount Number of calls.
                     * 
                     */
                    void SetCallCount(const int64_t& _callCount);

                    /**
                     * 判断参数 CallCount 是否已赋值
                     * @return CallCount 是否已赋值
                     * 
                     */
                    bool CallCountHasBeenSet() const;

                    /**
                     * 获取Error code.
0: Successful
                     * @return Code Error code.
0: Successful
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置Error code.
0: Successful
                     * @param _code Error code.
0: Successful
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取First time call time.
                     * @return FirstCallTime First time call time.
                     * 
                     */
                    std::string GetFirstCallTime() const;

                    /**
                     * 设置First time call time.
                     * @param _firstCallTime First time call time.
                     * 
                     */
                    void SetFirstCallTime(const std::string& _firstCallTime);

                    /**
                     * 判断参数 FirstCallTime 是否已赋值
                     * @return FirstCallTime 是否已赋值
                     * 
                     */
                    bool FirstCallTimeHasBeenSet() const;

                    /**
                     * 获取Call time.
                     * @return LastCallTime Call time.
                     * 
                     */
                    std::string GetLastCallTime() const;

                    /**
                     * 设置Call time.
                     * @param _lastCallTime Call time.
                     * 
                     */
                    void SetLastCallTime(const std::string& _lastCallTime);

                    /**
                     * 判断参数 LastCallTime 是否已赋值
                     * @return LastCallTime 是否已赋值
                     * 
                     */
                    bool LastCallTimeHasBeenSet() const;

                    /**
                     * 获取Source IP of the call remark.
                     * @return SourceIPRemark Source IP of the call remark.
                     * 
                     */
                    std::string GetSourceIPRemark() const;

                    /**
                     * 设置Source IP of the call remark.
                     * @param _sourceIPRemark Source IP of the call remark.
                     * 
                     */
                    void SetSourceIPRemark(const std::string& _sourceIPRemark);

                    /**
                     * 判断参数 SourceIPRemark 是否已赋值
                     * @return SourceIPRemark 是否已赋值
                     * 
                     */
                    bool SourceIPRemarkHasBeenSet() const;

                    /**
                     * 获取Source IP region of the call.
                     * @return Region Source IP region of the call.
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Source IP region of the call.
                     * @param _region Source IP region of the call.
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取User/Role name.
                     * @return UserName User/Role name.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置User/Role name.
                     * @param _userName User/Role name.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Aggregate date.
                     * @return Date Aggregate date.
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置Aggregate date.
                     * @param _date Aggregate date.
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取appid
                     * @return AppID appid
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置appid
                     * @param _appID appid
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取Carrier.
                     * @return ISP Carrier.
                     * 
                     */
                    std::string GetISP() const;

                    /**
                     * 设置Carrier.
                     * @param _iSP Carrier.
                     * 
                     */
                    void SetISP(const std::string& _iSP);

                    /**
                     * 判断参数 ISP 是否已赋值
                     * @return ISP 是否已赋值
                     * 
                     */
                    bool ISPHasBeenSet() const;

                private:

                    /**
                     * Source IP of the call.
                     */
                    std::string m_sourceIP;
                    bool m_sourceIPHasBeenSet;

                    /**
                     * Invocation type.
0: console invocation.
1:API
                     */
                    int64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Number of calls.
                     */
                    int64_t m_callCount;
                    bool m_callCountHasBeenSet;

                    /**
                     * Error code.
0: Successful
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * First time call time.
                     */
                    std::string m_firstCallTime;
                    bool m_firstCallTimeHasBeenSet;

                    /**
                     * Call time.
                     */
                    std::string m_lastCallTime;
                    bool m_lastCallTimeHasBeenSet;

                    /**
                     * Source IP of the call remark.
                     */
                    std::string m_sourceIPRemark;
                    bool m_sourceIPRemarkHasBeenSet;

                    /**
                     * Source IP region of the call.
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * User/Role name.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Aggregate date.
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * appid
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * Carrier.
                     */
                    std::string m_iSP;
                    bool m_iSPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_USERCALLRECORD_H_

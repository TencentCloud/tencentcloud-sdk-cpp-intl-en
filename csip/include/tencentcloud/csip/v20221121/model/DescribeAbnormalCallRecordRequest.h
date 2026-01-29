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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEABNORMALCALLRECORDREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEABNORMALCALLRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAbnormalCallRecord request structure.
                */
                class DescribeAbnormalCallRecordRequest : public AbstractModel
                {
                public:
                    DescribeAbnormalCallRecordRequest();
                    ~DescribeAbnormalCallRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Alarm rule ID.
                     * @return AlarmRuleID Alarm rule ID.
                     * 
                     */
                    int64_t GetAlarmRuleID() const;

                    /**
                     * 设置Alarm rule ID.
                     * @param _alarmRuleID Alarm rule ID.
                     * 
                     */
                    void SetAlarmRuleID(const int64_t& _alarmRuleID);

                    /**
                     * 判断参数 AlarmRuleID 是否已赋值
                     * @return AlarmRuleID 是否已赋值
                     * 
                     */
                    bool AlarmRuleIDHasBeenSet() const;

                    /**
                     * 获取Group Account Member ID
                     * @return MemberId Group Account Member ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group Account Member ID
                     * @param _memberId Group Account Member ID
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取Access key.
                     * @return AccessKey Access key.
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置Access key.
                     * @param _accessKey Access key.
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

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
                     * 获取Filter.
                     * @return Filter Filter.
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置Filter.
                     * @param _filter Filter.
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * Alarm rule ID.
                     */
                    int64_t m_alarmRuleID;
                    bool m_alarmRuleIDHasBeenSet;

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * Access key.
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * Source IP of the call.
                     */
                    std::string m_sourceIP;
                    bool m_sourceIPHasBeenSet;

                    /**
                     * Filter.
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEABNORMALCALLRECORDREQUEST_H_

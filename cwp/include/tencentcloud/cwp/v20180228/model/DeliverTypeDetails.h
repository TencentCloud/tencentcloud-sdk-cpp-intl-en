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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DELIVERTYPEDETAILS_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DELIVERTYPEDETAILS_H_

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
                * Log shipping type details
                */
                class DeliverTypeDetails : public AbstractModel
                {
                public:
                    DeliverTypeDetails();
                    ~DeliverTypeDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Security module type. 1: intrusion detection; 2: vulnerability management; 3: baseline management; 4: advanced defense; 5: client security; 6: asset fingerprint; 7: host list; 8: client reporting.
                     * @return SecurityType Security module type. 1: intrusion detection; 2: vulnerability management; 3: baseline management; 4: advanced defense; 5: client security; 6: asset fingerprint; 7: host list; 8: client reporting.
                     * 
                     */
                    uint64_t GetSecurityType() const;

                    /**
                     * 设置Security module type. 1: intrusion detection; 2: vulnerability management; 3: baseline management; 4: advanced defense; 5: client security; 6: asset fingerprint; 7: host list; 8: client reporting.
                     * @param _securityType Security module type. 1: intrusion detection; 2: vulnerability management; 3: baseline management; 4: advanced defense; 5: client security; 6: asset fingerprint; 7: host list; 8: client reporting.
                     * 
                     */
                    void SetSecurityType(const uint64_t& _securityType);

                    /**
                     * 判断参数 SecurityType 是否已赋值
                     * @return SecurityType 是否已赋值
                     * 
                     */
                    bool SecurityTypeHasBeenSet() const;

                    /**
                     * 获取Type of logs of the security module
                     * @return LogType Type of logs of the security module
                     * 
                     */
                    std::vector<int64_t> GetLogType() const;

                    /**
                     * 设置Type of logs of the security module
                     * @param _logType Type of logs of the security module
                     * 
                     */
                    void SetLogType(const std::vector<int64_t>& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取Topic ID
                     * @return TopicId Topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Topic ID
                     * @param _topicId Topic ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Topic name
                     * @return TopicName Topic name
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name
                     * @param _topicName Topic name
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Shipping enabling status. 0: disabled; 1: enabled.
                     * @return Switch Shipping enabling status. 0: disabled; 1: enabled.
                     * 
                     */
                    uint64_t GetSwitch() const;

                    /**
                     * 设置Shipping enabling status. 0: disabled; 1: enabled.
                     * @param _switch Shipping enabling status. 0: disabled; 1: enabled.
                     * 
                     */
                    void SetSwitch(const uint64_t& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Shipping status. 0: disabled; 1: normal; 2: abnormal.
                     * @return Status Shipping status. 0: disabled; 1: normal; 2: abnormal.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Shipping status. 0: disabled; 1: normal; 2: abnormal.
                     * @param _status Shipping status. 0: disabled; 1: normal; 2: abnormal.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Error message
                     * @return ErrInfo Error message
                     * 
                     */
                    std::string GetErrInfo() const;

                    /**
                     * 设置Error message
                     * @param _errInfo Error message
                     * 
                     */
                    void SetErrInfo(const std::string& _errInfo);

                    /**
                     * 判断参数 ErrInfo 是否已赋值
                     * @return ErrInfo 是否已赋值
                     * 
                     */
                    bool ErrInfoHasBeenSet() const;

                    /**
                     * 获取Timestamp of last status reporting
                     * @return StatusTime Timestamp of last status reporting
                     * 
                     */
                    int64_t GetStatusTime() const;

                    /**
                     * 设置Timestamp of last status reporting
                     * @param _statusTime Timestamp of last status reporting
                     * 
                     */
                    void SetStatusTime(const int64_t& _statusTime);

                    /**
                     * 判断参数 StatusTime 是否已赋值
                     * @return StatusTime 是否已赋值
                     * 
                     */
                    bool StatusTimeHasBeenSet() const;

                    /**
                     * 获取Logset name
                     * @return LogName Logset name
                     * 
                     */
                    std::string GetLogName() const;

                    /**
                     * 设置Logset name
                     * @param _logName Logset name
                     * 
                     */
                    void SetLogName(const std::string& _logName);

                    /**
                     * 判断参数 LogName 是否已赋值
                     * @return LogName 是否已赋值
                     * 
                     */
                    bool LogNameHasBeenSet() const;

                    /**
                     * 获取Logset ID
                     * @return LogSetId Logset ID
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置Logset ID
                     * @param _logSetId Logset ID
                     * 
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     * 
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取Logset region
                     * @return Region Logset region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Logset region
                     * @param _region Logset region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * Security module type. 1: intrusion detection; 2: vulnerability management; 3: baseline management; 4: advanced defense; 5: client security; 6: asset fingerprint; 7: host list; 8: client reporting.
                     */
                    uint64_t m_securityType;
                    bool m_securityTypeHasBeenSet;

                    /**
                     * Type of logs of the security module
                     */
                    std::vector<int64_t> m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * Topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Shipping enabling status. 0: disabled; 1: enabled.
                     */
                    uint64_t m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Shipping status. 0: disabled; 1: normal; 2: abnormal.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error message
                     */
                    std::string m_errInfo;
                    bool m_errInfoHasBeenSet;

                    /**
                     * Timestamp of last status reporting
                     */
                    int64_t m_statusTime;
                    bool m_statusTimeHasBeenSet;

                    /**
                     * Logset name
                     */
                    std::string m_logName;
                    bool m_logNameHasBeenSet;

                    /**
                     * Logset ID
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * Logset region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DELIVERTYPEDETAILS_H_

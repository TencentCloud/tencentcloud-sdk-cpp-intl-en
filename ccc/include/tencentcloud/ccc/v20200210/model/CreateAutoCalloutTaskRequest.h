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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAUTOCALLOUTTASKREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAUTOCALLOUTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/Variable.h>
#include <tencentcloud/ccc/v20200210/model/CalleeAttribute.h>
#include <tencentcloud/ccc/v20200210/model/TimeRange.h>
#include <tencentcloud/ccc/v20200210/model/RetryTagItem.h>
#include <tencentcloud/ccc/v20200210/model/AvailableTimeConfig.h>
#include <tencentcloud/ccc/v20200210/model/TriggerStrategyItem.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * CreateAutoCalloutTask request structure.
                */
                class CreateAutoCalloutTaskRequest : public AbstractModel
                {
                public:
                    CreateAutoCalloutTaskRequest();
                    ~CreateAutoCalloutTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @return SdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * @param _sdkAppId Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Task starting timestamp. unix second-level timestamp.
                     * @return NotBefore Task starting timestamp. unix second-level timestamp.
                     * 
                     */
                    int64_t GetNotBefore() const;

                    /**
                     * 设置Task starting timestamp. unix second-level timestamp.
                     * @param _notBefore Task starting timestamp. unix second-level timestamp.
                     * 
                     */
                    void SetNotBefore(const int64_t& _notBefore);

                    /**
                     * 判断参数 NotBefore 是否已赋值
                     * @return NotBefore 是否已赋值
                     * 
                     */
                    bool NotBeforeHasBeenSet() const;

                    /**
                     * 获取List of called numbers.
                     * @return Callees List of called numbers.
                     * 
                     */
                    std::vector<std::string> GetCallees() const;

                    /**
                     * 设置List of called numbers.
                     * @param _callees List of called numbers.
                     * 
                     */
                    void SetCallees(const std::vector<std::string>& _callees);

                    /**
                     * 判断参数 Callees 是否已赋值
                     * @return Callees 是否已赋值
                     * 
                     */
                    bool CalleesHasBeenSet() const;

                    /**
                     * 获取List of calling numbers.
                     * @return Callers List of calling numbers.
                     * 
                     */
                    std::vector<std::string> GetCallers() const;

                    /**
                     * 设置List of calling numbers.
                     * @param _callers List of calling numbers.
                     * 
                     */
                    void SetCallers(const std::vector<std::string>& _callers);

                    /**
                     * 判断参数 Callers 是否已赋值
                     * @return Callers 是否已赋值
                     * 
                     */
                    bool CallersHasBeenSet() const;

                    /**
                     * 获取IVR Id used for calling. if not filled, AIAgentId needs to be filled.
                     * @return IvrId IVR Id used for calling. if not filled, AIAgentId needs to be filled.
                     * 
                     */
                    uint64_t GetIvrId() const;

                    /**
                     * 设置IVR Id used for calling. if not filled, AIAgentId needs to be filled.
                     * @param _ivrId IVR Id used for calling. if not filled, AIAgentId needs to be filled.
                     * 
                     */
                    void SetIvrId(const uint64_t& _ivrId);

                    /**
                     * 判断参数 IvrId 是否已赋值
                     * @return IvrId 是否已赋值
                     * 
                     */
                    bool IvrIdHasBeenSet() const;

                    /**
                     * 获取Task name.
                     * @return Name Task name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Task name.
                     * @param _name Task name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<Task description>.
                     * @return Description <Task description>.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<Task description>.
                     * @param _description <Task description>.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Task stop timestamp. unix second-level timestamp.
                     * @return NotAfter Task stop timestamp. unix second-level timestamp.
                     * 
                     */
                    int64_t GetNotAfter() const;

                    /**
                     * 设置Task stop timestamp. unix second-level timestamp.
                     * @param _notAfter Task stop timestamp. unix second-level timestamp.
                     * 
                     */
                    void SetNotAfter(const int64_t& _notAfter);

                    /**
                     * 判断参数 NotAfter 是否已赋值
                     * @return NotAfter 是否已赋值
                     * 
                     */
                    bool NotAfterHasBeenSet() const;

                    /**
                     * 获取Maximum attempts, 1-3 times.
                     * @return Tries Maximum attempts, 1-3 times.
                     * 
                     */
                    uint64_t GetTries() const;

                    /**
                     * 设置Maximum attempts, 1-3 times.
                     * @param _tries Maximum attempts, 1-3 times.
                     * 
                     */
                    void SetTries(const uint64_t& _tries);

                    /**
                     * 判断参数 Tries 是否已赋值
                     * @return Tries 是否已赋值
                     * 
                     */
                    bool TriesHasBeenSet() const;

                    /**
                     * 获取Custom variable (advanced edition support). using the same variable in the CalleeAttributes field will overwrite here.
                     * @return Variables Custom variable (advanced edition support). using the same variable in the CalleeAttributes field will overwrite here.
                     * 
                     */
                    std::vector<Variable> GetVariables() const;

                    /**
                     * 设置Custom variable (advanced edition support). using the same variable in the CalleeAttributes field will overwrite here.
                     * @param _variables Custom variable (advanced edition support). using the same variable in the CalleeAttributes field will overwrite here.
                     * 
                     */
                    void SetVariables(const std::vector<Variable>& _variables);

                    /**
                     * 判断参数 Variables 是否已赋值
                     * @return Variables 是否已赋值
                     * 
                     */
                    bool VariablesHasBeenSet() const;

                    /**
                     * 获取User-Defined data. specifies that using UUI in the CalleeAttributes field will overwrite here.
                     * @return UUI User-Defined data. specifies that using UUI in the CalleeAttributes field will overwrite here.
                     * 
                     */
                    std::string GetUUI() const;

                    /**
                     * 设置User-Defined data. specifies that using UUI in the CalleeAttributes field will overwrite here.
                     * @param _uUI User-Defined data. specifies that using UUI in the CalleeAttributes field will overwrite here.
                     * 
                     */
                    void SetUUI(const std::string& _uUI);

                    /**
                     * 判断参数 UUI 是否已赋值
                     * @return UUI 是否已赋值
                     * 
                     */
                    bool UUIHasBeenSet() const;

                    /**
                     * 获取Property of the called.
                     * @return CalleeAttributes Property of the called.
                     * 
                     */
                    std::vector<CalleeAttribute> GetCalleeAttributes() const;

                    /**
                     * 设置Property of the called.
                     * @param _calleeAttributes Property of the called.
                     * 
                     */
                    void SetCalleeAttributes(const std::vector<CalleeAttribute>& _calleeAttributes);

                    /**
                     * 判断参数 CalleeAttributes 是否已赋值
                     * @return CalleeAttributes 是否已赋值
                     * 
                     */
                    bool CalleeAttributesHasBeenSet() const;

                    /**
                     * 获取IANA time zone name. see https://datatracker.ietf.org/doc/html/draft-ietf-netmod-iana-timezones.
                     * @return TimeZone IANA time zone name. see https://datatracker.ietf.org/doc/html/draft-ietf-netmod-iana-timezones.
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置IANA time zone name. see https://datatracker.ietf.org/doc/html/draft-ietf-netmod-iana-timezones.
                     * @param _timeZone IANA time zone name. see https://datatracker.ietf.org/doc/html/draft-ietf-netmod-iana-timezones.
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取Available time period.
                     * @return AvailableTime Available time period.
                     * 
                     */
                    std::vector<TimeRange> GetAvailableTime() const;

                    /**
                     * 设置Available time period.
                     * @param _availableTime Available time period.
                     * 
                     */
                    void SetAvailableTime(const std::vector<TimeRange>& _availableTime);

                    /**
                     * 判断参数 AvailableTime 是否已赋值
                     * @return AvailableTime 是否已赋值
                     * 
                     */
                    bool AvailableTimeHasBeenSet() const;

                    /**
                     * 获取Intelligent agent ID. if not filled, IvrId needs to be filled.
                     * @return AIAgentId Intelligent agent ID. if not filled, IvrId needs to be filled.
                     * 
                     */
                    int64_t GetAIAgentId() const;

                    /**
                     * 设置Intelligent agent ID. if not filled, IvrId needs to be filled.
                     * @param _aIAgentId Intelligent agent ID. if not filled, IvrId needs to be filled.
                     * 
                     */
                    void SetAIAgentId(const int64_t& _aIAgentId);

                    /**
                     * 判断参数 AIAgentId 是否已赋值
                     * @return AIAgentId 是否已赋值
                     * 
                     */
                    bool AIAgentIdHasBeenSet() const;

                    /**
                     * 获取Retry interval for task failure. value range: 600-86400 seconds.
                     * @return RetryInterval Retry interval for task failure. value range: 600-86400 seconds.
                     * 
                     */
                    int64_t GetRetryInterval() const;

                    /**
                     * 设置Retry interval for task failure. value range: 600-86400 seconds.
                     * @param _retryInterval Retry interval for task failure. value range: 600-86400 seconds.
                     * 
                     */
                    void SetRetryInterval(const int64_t& _retryInterval);

                    /**
                     * 判断参数 RetryInterval 是否已赋值
                     * @return RetryInterval 是否已赋值
                     * 
                     */
                    bool RetryIntervalHasBeenSet() const;

                    /**
                     * 获取Maximum ringing duration. auto hang up when the duration threshold is reached. only own number supports this parameter.
                     * @return MaxRingTimeoutSecond Maximum ringing duration. auto hang up when the duration threshold is reached. only own number supports this parameter.
                     * 
                     */
                    int64_t GetMaxRingTimeoutSecond() const;

                    /**
                     * 设置Maximum ringing duration. auto hang up when the duration threshold is reached. only own number supports this parameter.
                     * @param _maxRingTimeoutSecond Maximum ringing duration. auto hang up when the duration threshold is reached. only own number supports this parameter.
                     * 
                     */
                    void SetMaxRingTimeoutSecond(const int64_t& _maxRingTimeoutSecond);

                    /**
                     * 判断参数 MaxRingTimeoutSecond 是否已赋值
                     * @return MaxRingTimeoutSecond 是否已赋值
                     * 
                     */
                    bool MaxRingTimeoutSecondHasBeenSet() const;

                    /**
                     * 获取<p>Retry according to the specified hang-up reasons (optional hang-up status codes: 202, 203, 204, 205, 206, 207, 208, 210, 212, 213, 215, 216, 217, 218, 219, 221, 222, 234). This only takes effect for tasks using AIAgentID. For the description of hang-up status codes</p>
<p><a href="https://cloud.tencent.com/document/product/679/123938">see details</a></p>
                     * @return RetryHangupTypes <p>Retry according to the specified hang-up reasons (optional hang-up status codes: 202, 203, 204, 205, 206, 207, 208, 210, 212, 213, 215, 216, 217, 218, 219, 221, 222, 234). This only takes effect for tasks using AIAgentID. For the description of hang-up status codes</p>
<p><a href="https://cloud.tencent.com/document/product/679/123938">see details</a></p>
                     * 
                     */
                    std::vector<std::string> GetRetryHangupTypes() const;

                    /**
                     * 设置<p>Retry according to the specified hang-up reasons (optional hang-up status codes: 202, 203, 204, 205, 206, 207, 208, 210, 212, 213, 215, 216, 217, 218, 219, 221, 222, 234). This only takes effect for tasks using AIAgentID. For the description of hang-up status codes</p>
<p><a href="https://cloud.tencent.com/document/product/679/123938">see details</a></p>
                     * @param _retryHangupTypes <p>Retry according to the specified hang-up reasons (optional hang-up status codes: 202, 203, 204, 205, 206, 207, 208, 210, 212, 213, 215, 216, 217, 218, 219, 221, 222, 234). This only takes effect for tasks using AIAgentID. For the description of hang-up status codes</p>
<p><a href="https://cloud.tencent.com/document/product/679/123938">see details</a></p>
                     * 
                     */
                    void SetRetryHangupTypes(const std::vector<std::string>& _retryHangupTypes);

                    /**
                     * 判断参数 RetryHangupTypes 是否已赋值
                     * @return RetryHangupTypes 是否已赋值
                     * 
                     */
                    bool RetryHangupTypesHasBeenSet() const;

                    /**
                     * 获取Retry based on the specified post-dialogue tag. It only takes effect for AIAgentID tasks that use the dialogue model. Tag information can be queried in the agent configuration.
                     * @return RetryTags Retry based on the specified post-dialogue tag. It only takes effect for AIAgentID tasks that use the dialogue model. Tag information can be queried in the agent configuration.
                     * 
                     */
                    std::vector<RetryTagItem> GetRetryTags() const;

                    /**
                     * 设置Retry based on the specified post-dialogue tag. It only takes effect for AIAgentID tasks that use the dialogue model. Tag information can be queried in the agent configuration.
                     * @param _retryTags Retry based on the specified post-dialogue tag. It only takes effect for AIAgentID tasks that use the dialogue model. Tag information can be queried in the agent configuration.
                     * 
                     */
                    void SetRetryTags(const std::vector<RetryTagItem>& _retryTags);

                    /**
                     * 判断参数 RetryTags 是否已赋值
                     * @return RetryTags 是否已赋值
                     * 
                     */
                    bool RetryTagsHasBeenSet() const;

                    /**
                     * 获取<p>Effective working time configuration. It is recommended to use this field instead of the AvailableTime field. If both are used simultaneously, AvailableTime takes priority.</p>
                     * @return AvailableWorkTimeConfig <p>Effective working time configuration. It is recommended to use this field instead of the AvailableTime field. If both are used simultaneously, AvailableTime takes priority.</p>
                     * 
                     */
                    std::vector<AvailableTimeConfig> GetAvailableWorkTimeConfig() const;

                    /**
                     * 设置<p>Effective working time configuration. It is recommended to use this field instead of the AvailableTime field. If both are used simultaneously, AvailableTime takes priority.</p>
                     * @param _availableWorkTimeConfig <p>Effective working time configuration. It is recommended to use this field instead of the AvailableTime field. If both are used simultaneously, AvailableTime takes priority.</p>
                     * 
                     */
                    void SetAvailableWorkTimeConfig(const std::vector<AvailableTimeConfig>& _availableWorkTimeConfig);

                    /**
                     * 判断参数 AvailableWorkTimeConfig 是否已赋值
                     * @return AvailableWorkTimeConfig 是否已赋值
                     * 
                     */
                    bool AvailableWorkTimeConfigHasBeenSet() const;

                    /**
                     * 获取<p>Trigger Strategy</p>
                     * @return TriggerStrategy <p>Trigger Strategy</p>
                     * 
                     */
                    std::vector<TriggerStrategyItem> GetTriggerStrategy() const;

                    /**
                     * 设置<p>Trigger Strategy</p>
                     * @param _triggerStrategy <p>Trigger Strategy</p>
                     * 
                     */
                    void SetTriggerStrategy(const std::vector<TriggerStrategyItem>& _triggerStrategy);

                    /**
                     * 判断参数 TriggerStrategy 是否已赋值
                     * @return TriggerStrategy 是否已赋值
                     * 
                     */
                    bool TriggerStrategyHasBeenSet() const;

                private:

                    /**
                     * Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Task starting timestamp. unix second-level timestamp.
                     */
                    int64_t m_notBefore;
                    bool m_notBeforeHasBeenSet;

                    /**
                     * List of called numbers.
                     */
                    std::vector<std::string> m_callees;
                    bool m_calleesHasBeenSet;

                    /**
                     * List of calling numbers.
                     */
                    std::vector<std::string> m_callers;
                    bool m_callersHasBeenSet;

                    /**
                     * IVR Id used for calling. if not filled, AIAgentId needs to be filled.
                     */
                    uint64_t m_ivrId;
                    bool m_ivrIdHasBeenSet;

                    /**
                     * Task name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <Task description>.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Task stop timestamp. unix second-level timestamp.
                     */
                    int64_t m_notAfter;
                    bool m_notAfterHasBeenSet;

                    /**
                     * Maximum attempts, 1-3 times.
                     */
                    uint64_t m_tries;
                    bool m_triesHasBeenSet;

                    /**
                     * Custom variable (advanced edition support). using the same variable in the CalleeAttributes field will overwrite here.
                     */
                    std::vector<Variable> m_variables;
                    bool m_variablesHasBeenSet;

                    /**
                     * User-Defined data. specifies that using UUI in the CalleeAttributes field will overwrite here.
                     */
                    std::string m_uUI;
                    bool m_uUIHasBeenSet;

                    /**
                     * Property of the called.
                     */
                    std::vector<CalleeAttribute> m_calleeAttributes;
                    bool m_calleeAttributesHasBeenSet;

                    /**
                     * IANA time zone name. see https://datatracker.ietf.org/doc/html/draft-ietf-netmod-iana-timezones.
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * Available time period.
                     */
                    std::vector<TimeRange> m_availableTime;
                    bool m_availableTimeHasBeenSet;

                    /**
                     * Intelligent agent ID. if not filled, IvrId needs to be filled.
                     */
                    int64_t m_aIAgentId;
                    bool m_aIAgentIdHasBeenSet;

                    /**
                     * Retry interval for task failure. value range: 600-86400 seconds.
                     */
                    int64_t m_retryInterval;
                    bool m_retryIntervalHasBeenSet;

                    /**
                     * Maximum ringing duration. auto hang up when the duration threshold is reached. only own number supports this parameter.
                     */
                    int64_t m_maxRingTimeoutSecond;
                    bool m_maxRingTimeoutSecondHasBeenSet;

                    /**
                     * <p>Retry according to the specified hang-up reasons (optional hang-up status codes: 202, 203, 204, 205, 206, 207, 208, 210, 212, 213, 215, 216, 217, 218, 219, 221, 222, 234). This only takes effect for tasks using AIAgentID. For the description of hang-up status codes</p>
<p><a href="https://cloud.tencent.com/document/product/679/123938">see details</a></p>
                     */
                    std::vector<std::string> m_retryHangupTypes;
                    bool m_retryHangupTypesHasBeenSet;

                    /**
                     * Retry based on the specified post-dialogue tag. It only takes effect for AIAgentID tasks that use the dialogue model. Tag information can be queried in the agent configuration.
                     */
                    std::vector<RetryTagItem> m_retryTags;
                    bool m_retryTagsHasBeenSet;

                    /**
                     * <p>Effective working time configuration. It is recommended to use this field instead of the AvailableTime field. If both are used simultaneously, AvailableTime takes priority.</p>
                     */
                    std::vector<AvailableTimeConfig> m_availableWorkTimeConfig;
                    bool m_availableWorkTimeConfigHasBeenSet;

                    /**
                     * <p>Trigger Strategy</p>
                     */
                    std::vector<TriggerStrategyItem> m_triggerStrategy;
                    bool m_triggerStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATEAUTOCALLOUTTASKREQUEST_H_

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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKPOLICY_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/WebHookEventKv.h>
#include <tencentcloud/cwp/v20180228/model/WebHookHostLabel.h>
#include <tencentcloud/cwp/v20180228/model/WebHookReceiver.h>
#include <tencentcloud/cwp/v20180228/model/WebHookCustomField.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Policy
                */
                class WebHookPolicy : public AbstractModel
                {
                public:
                    WebHookPolicy();
                    ~WebHookPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Id id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _id id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Policy name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Event type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Events Event type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<WebHookEventKv> GetEvents() const;

                    /**
                     * 设置Event type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _events Event type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEvents(const std::vector<WebHookEventKv>& _events);

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取Host range
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostLabels Host range
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<WebHookHostLabel> GetHostLabels() const;

                    /**
                     * 设置Host range
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostLabels Host range
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostLabels(const std::vector<WebHookHostLabel>& _hostLabels);

                    /**
                     * 判断参数 HostLabels 是否已赋值
                     * @return HostLabels 是否已赋值
                     * 
                     */
                    bool HostLabelsHasBeenSet() const;

                    /**
                     * 获取Recipient
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Receivers Recipient
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<WebHookReceiver> GetReceivers() const;

                    /**
                     * 设置Recipient
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _receivers Recipient
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReceivers(const std::vector<WebHookReceiver>& _receivers);

                    /**
                     * 判断参数 Receivers 是否已赋值
                     * @return Receivers 是否已赋值
                     * 
                     */
                    bool ReceiversHasBeenSet() const;

                    /**
                     * 获取Format. 0: text; 1: JSON.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Format Format. 0: text; 1: JSON.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetFormat() const;

                    /**
                     * 设置Format. 0: text; 1: JSON.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _format Format. 0: text; 1: JSON.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFormat(const int64_t& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取Custom passthrough field
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CustomFields Custom passthrough field
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<WebHookCustomField> GetCustomFields() const;

                    /**
                     * 设置Custom passthrough field
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _customFields Custom passthrough field
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCustomFields(const std::vector<WebHookCustomField>& _customFields);

                    /**
                     * 判断参数 CustomFields 是否已赋值
                     * @return CustomFields 是否已赋值
                     * 
                     */
                    bool CustomFieldsHasBeenSet() const;

                    /**
                     * 获取Enable/Disable [1-Disable, 0-Enable]
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsDisabled Enable/Disable [1-Disable, 0-Enable]
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsDisabled() const;

                    /**
                     * 设置Enable/Disable [1-Disable, 0-Enable]
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isDisabled Enable/Disable [1-Disable, 0-Enable]
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsDisabled(const int64_t& _isDisabled);

                    /**
                     * 判断参数 IsDisabled 是否已赋值
                     * @return IsDisabled 是否已赋值
                     * 
                     */
                    bool IsDisabledHasBeenSet() const;

                    /**
                     * 获取Host list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Quuids Host list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置Host list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _quuids Host list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取Number of hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostCount Number of hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 设置Number of hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hostCount Number of hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHostCount(const int64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                private:

                    /**
                     * id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Policy name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Event type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<WebHookEventKv> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * Host range
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<WebHookHostLabel> m_hostLabels;
                    bool m_hostLabelsHasBeenSet;

                    /**
                     * Recipient
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<WebHookReceiver> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * Format. 0: text; 1: JSON.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Custom passthrough field
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<WebHookCustomField> m_customFields;
                    bool m_customFieldsHasBeenSet;

                    /**
                     * Enable/Disable [1-Disable, 0-Enable]
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isDisabled;
                    bool m_isDisabledHasBeenSet;

                    /**
                     * Host list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * Number of hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_WEBHOOKPOLICY_H_

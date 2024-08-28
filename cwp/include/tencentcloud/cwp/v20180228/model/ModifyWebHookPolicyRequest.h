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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBHOOKPOLICYREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBHOOKPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyWebHookPolicy request structure.
                */
                class ModifyWebHookPolicyRequest : public AbstractModel
                {
                public:
                    ModifyWebHookPolicyRequest();
                    ~ModifyWebHookPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取id
                     * @return Id id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置id
                     * @param _id id
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
                     * @return Name Policy name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Policy name
                     * @param _name Policy name
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
                     * @return Events Event type
                     * 
                     */
                    std::vector<WebHookEventKv> GetEvents() const;

                    /**
                     * 设置Event type
                     * @param _events Event type
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
                     * @return HostLabels Host range
                     * 
                     */
                    std::vector<WebHookHostLabel> GetHostLabels() const;

                    /**
                     * 设置Host range
                     * @param _hostLabels Host range
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
                     * @return Receivers Recipient
                     * 
                     */
                    std::vector<WebHookReceiver> GetReceivers() const;

                    /**
                     * 设置Recipient
                     * @param _receivers Recipient
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
                     * @return Format Format. 0: text; 1: JSON.
                     * 
                     */
                    int64_t GetFormat() const;

                    /**
                     * 设置Format. 0: text; 1: JSON.
                     * @param _format Format. 0: text; 1: JSON.
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
                     * @return CustomFields Custom passthrough field
                     * 
                     */
                    std::vector<WebHookCustomField> GetCustomFields() const;

                    /**
                     * 设置Custom passthrough field
                     * @param _customFields Custom passthrough field
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
                     * @return IsDisabled Enable/Disable [1-Disable, 0-Enable]
                     * 
                     */
                    int64_t GetIsDisabled() const;

                    /**
                     * 设置Enable/Disable [1-Disable, 0-Enable]
                     * @param _isDisabled Enable/Disable [1-Disable, 0-Enable]
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
                     * @return Quuids Host list
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置Host list
                     * @param _quuids Host list
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
                     * 获取
                     * @return ExcludedQuuids 
                     * 
                     */
                    std::vector<std::string> GetExcludedQuuids() const;

                    /**
                     * 设置
                     * @param _excludedQuuids 
                     * 
                     */
                    void SetExcludedQuuids(const std::vector<std::string>& _excludedQuuids);

                    /**
                     * 判断参数 ExcludedQuuids 是否已赋值
                     * @return ExcludedQuuids 是否已赋值
                     * 
                     */
                    bool ExcludedQuuidsHasBeenSet() const;

                private:

                    /**
                     * id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Policy name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Event type
                     */
                    std::vector<WebHookEventKv> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * Host range
                     */
                    std::vector<WebHookHostLabel> m_hostLabels;
                    bool m_hostLabelsHasBeenSet;

                    /**
                     * Recipient
                     */
                    std::vector<WebHookReceiver> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * Format. 0: text; 1: JSON.
                     */
                    int64_t m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Custom passthrough field
                     */
                    std::vector<WebHookCustomField> m_customFields;
                    bool m_customFieldsHasBeenSet;

                    /**
                     * Enable/Disable [1-Disable, 0-Enable]
                     */
                    int64_t m_isDisabled;
                    bool m_isDisabledHasBeenSet;

                    /**
                     * Host list
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_excludedQuuids;
                    bool m_excludedQuuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBHOOKPOLICYREQUEST_H_

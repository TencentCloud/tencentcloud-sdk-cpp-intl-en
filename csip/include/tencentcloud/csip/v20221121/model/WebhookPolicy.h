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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKPOLICY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/WebhookNotifyItem.h>
#include <tencentcloud/csip/v20221121/model/WebhookAssetScope.h>
#include <tencentcloud/csip/v20221121/model/WebhookCustomField.h>
#include <tencentcloud/csip/v20221121/model/WebhookReceiverBrief.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Complete notification policy information
                */
                class WebhookPolicy : public AbstractModel
                {
                public:
                    WebhookPolicy();
                    ~WebhookPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Policy ID</p>
                     * @return ID <p>Policy ID</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>Policy ID</p>
                     * @param _iD <p>Policy ID</p>
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>Policy name.</p>
                     * @return Name <p>Policy name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Policy name.</p>
                     * @param _name <p>Policy name.</p>
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
                     * 获取<p>Enabled status<br>Enumeration values:<br>ON: enable<br>OFF: disable</p>
                     * @return Status <p>Enabled status<br>Enumeration values:<br>ON: enable<br>OFF: disable</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Enabled status<br>Enumeration values:<br>ON: enable<br>OFF: disable</p>
                     * @param _status <p>Enabled status<br>Enumeration values:<br>ON: enable<br>OFF: disable</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Notification item list (module + submodule + severity + handling status)</p>
                     * @return NotifyItems <p>Notification item list (module + submodule + severity + handling status)</p>
                     * 
                     */
                    std::vector<WebhookNotifyItem> GetNotifyItems() const;

                    /**
                     * 设置<p>Notification item list (module + submodule + severity + handling status)</p>
                     * @param _notifyItems <p>Notification item list (module + submodule + severity + handling status)</p>
                     * 
                     */
                    void SetNotifyItems(const std::vector<WebhookNotifyItem>& _notifyItems);

                    /**
                     * 判断参数 NotifyItems 是否已赋值
                     * @return NotifyItems 是否已赋值
                     * 
                     */
                    bool NotifyItemsHasBeenSet() const;

                    /**
                     * 获取<p>Account range of members to receive</p>
                     * @return MemberId <p>Account range of members to receive</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Account range of members to receive</p>
                     * @param _memberId <p>Account range of members to receive</p>
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
                     * 获取<p>Notification asset scope</p>
                     * @return AssetScope <p>Notification asset scope</p>
                     * 
                     */
                    WebhookAssetScope GetAssetScope() const;

                    /**
                     * 设置<p>Notification asset scope</p>
                     * @param _assetScope <p>Notification asset scope</p>
                     * 
                     */
                    void SetAssetScope(const WebhookAssetScope& _assetScope);

                    /**
                     * 判断参数 AssetScope 是否已赋值
                     * @return AssetScope 是否已赋值
                     * 
                     */
                    bool AssetScopeHasBeenSet() const;

                    /**
                     * 获取<p>Accept format<br>Enumeration values:<br>TEXT: text format<br>JSON: JSON format</p>
                     * @return ReceiveFormat <p>Accept format<br>Enumeration values:<br>TEXT: text format<br>JSON: JSON format</p>
                     * 
                     */
                    std::string GetReceiveFormat() const;

                    /**
                     * 设置<p>Accept format<br>Enumeration values:<br>TEXT: text format<br>JSON: JSON format</p>
                     * @param _receiveFormat <p>Accept format<br>Enumeration values:<br>TEXT: text format<br>JSON: JSON format</p>
                     * 
                     */
                    void SetReceiveFormat(const std::string& _receiveFormat);

                    /**
                     * 判断参数 ReceiveFormat 是否已赋值
                     * @return ReceiveFormat 是否已赋值
                     * 
                     */
                    bool ReceiveFormatHasBeenSet() const;

                    /**
                     * 获取<p>Push language<br>Enumeration values:<br>zh: Chinese<br>en: English</p>
                     * @return MsgLanguage <p>Push language<br>Enumeration values:<br>zh: Chinese<br>en: English</p>
                     * 
                     */
                    std::string GetMsgLanguage() const;

                    /**
                     * 设置<p>Push language<br>Enumeration values:<br>zh: Chinese<br>en: English</p>
                     * @param _msgLanguage <p>Push language<br>Enumeration values:<br>zh: Chinese<br>en: English</p>
                     * 
                     */
                    void SetMsgLanguage(const std::string& _msgLanguage);

                    /**
                     * 判断参数 MsgLanguage 是否已赋值
                     * @return MsgLanguage 是否已赋值
                     * 
                     */
                    bool MsgLanguageHasBeenSet() const;

                    /**
                     * 获取<p>Custom passthrough field list. It is an empty array when turned off.</p>
                     * @return CustomFields <p>Custom passthrough field list. It is an empty array when turned off.</p>
                     * 
                     */
                    std::vector<WebhookCustomField> GetCustomFields() const;

                    /**
                     * 设置<p>Custom passthrough field list. It is an empty array when turned off.</p>
                     * @param _customFields <p>Custom passthrough field list. It is an empty array when turned off.</p>
                     * 
                     */
                    void SetCustomFields(const std::vector<WebhookCustomField>& _customFields);

                    /**
                     * 判断参数 CustomFields 是否已赋值
                     * @return CustomFields 是否已赋值
                     * 
                     */
                    bool CustomFieldsHasBeenSet() const;

                    /**
                     * 获取<p>Receiving robot ID list</p>
                     * @return ReceiverIDList <p>Receiving robot ID list</p>
                     * 
                     */
                    std::vector<int64_t> GetReceiverIDList() const;

                    /**
                     * 设置<p>Receiving robot ID list</p>
                     * @param _receiverIDList <p>Receiving robot ID list</p>
                     * 
                     */
                    void SetReceiverIDList(const std::vector<int64_t>& _receiverIDList);

                    /**
                     * 判断参数 ReceiverIDList 是否已赋值
                     * @return ReceiverIDList 是否已赋值
                     * 
                     */
                    bool ReceiverIDListHasBeenSet() const;

                    /**
                     * 获取<p>Simplify info for the receiving robot (for list row display)</p>
                     * @return ReceiverList <p>Simplify info for the receiving robot (for list row display)</p>
                     * 
                     */
                    std::vector<WebhookReceiverBrief> GetReceiverList() const;

                    /**
                     * 设置<p>Simplify info for the receiving robot (for list row display)</p>
                     * @param _receiverList <p>Simplify info for the receiving robot (for list row display)</p>
                     * 
                     */
                    void SetReceiverList(const std::vector<WebhookReceiverBrief>& _receiverList);

                    /**
                     * 判断参数 ReceiverList 是否已赋值
                     * @return ReceiverList 是否已赋值
                     * 
                     */
                    bool ReceiverListHasBeenSet() const;

                private:

                    /**
                     * <p>Policy ID</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Policy name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Enabled status<br>Enumeration values:<br>ON: enable<br>OFF: disable</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Notification item list (module + submodule + severity + handling status)</p>
                     */
                    std::vector<WebhookNotifyItem> m_notifyItems;
                    bool m_notifyItemsHasBeenSet;

                    /**
                     * <p>Account range of members to receive</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Notification asset scope</p>
                     */
                    WebhookAssetScope m_assetScope;
                    bool m_assetScopeHasBeenSet;

                    /**
                     * <p>Accept format<br>Enumeration values:<br>TEXT: text format<br>JSON: JSON format</p>
                     */
                    std::string m_receiveFormat;
                    bool m_receiveFormatHasBeenSet;

                    /**
                     * <p>Push language<br>Enumeration values:<br>zh: Chinese<br>en: English</p>
                     */
                    std::string m_msgLanguage;
                    bool m_msgLanguageHasBeenSet;

                    /**
                     * <p>Custom passthrough field list. It is an empty array when turned off.</p>
                     */
                    std::vector<WebhookCustomField> m_customFields;
                    bool m_customFieldsHasBeenSet;

                    /**
                     * <p>Receiving robot ID list</p>
                     */
                    std::vector<int64_t> m_receiverIDList;
                    bool m_receiverIDListHasBeenSet;

                    /**
                     * <p>Simplify info for the receiving robot (for list row display)</p>
                     */
                    std::vector<WebhookReceiverBrief> m_receiverList;
                    bool m_receiverListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKPOLICY_H_

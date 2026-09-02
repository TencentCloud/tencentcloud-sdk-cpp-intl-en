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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYWEBHOOKPOLICYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYWEBHOOKPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/WebhookNotifyItem.h>
#include <tencentcloud/csip/v20221121/model/WebhookAssetScope.h>
#include <tencentcloud/csip/v20221121/model/WebhookCustomField.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyWebhookPolicy request structure.
                */
                class ModifyWebhookPolicyRequest : public AbstractModel
                {
                public:
                    ModifyWebhookPolicyRequest();
                    ~ModifyWebhookPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Policy Name<br>Input parameter limit: 1-20 characters, tenant-unique</p>
                     * @return Name <p>Policy Name<br>Input parameter limit: 1-20 characters, tenant-unique</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Policy Name<br>Input parameter limit: 1-20 characters, tenant-unique</p>
                     * @param _name <p>Policy Name<br>Input parameter limit: 1-20 characters, tenant-unique</p>
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
                     * 获取<p>Enable status<br>Enumeration values:<br>ON: Enabled<br>OFF: Disabled</p>
                     * @return Status <p>Enable status<br>Enumeration values:<br>ON: Enabled<br>OFF: Disabled</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Enable status<br>Enumeration values:<br>ON: Enabled<br>OFF: Disabled</p>
                     * @param _status <p>Enable status<br>Enumeration values:<br>ON: Enabled<br>OFF: Disabled</p>
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
                     * 获取<p>List of notification items<br>Input parameter limit: at least 1 item. Module/SubModule must be a valid composite returned by DescribeWebhookNotifyItemTree</p>
                     * @return NotifyItems <p>List of notification items<br>Input parameter limit: at least 1 item. Module/SubModule must be a valid composite returned by DescribeWebhookNotifyItemTree</p>
                     * 
                     */
                    std::vector<WebhookNotifyItem> GetNotifyItems() const;

                    /**
                     * 设置<p>List of notification items<br>Input parameter limit: at least 1 item. Module/SubModule must be a valid composite returned by DescribeWebhookNotifyItemTree</p>
                     * @param _notifyItems <p>List of notification items<br>Input parameter limit: at least 1 item. Module/SubModule must be a valid composite returned by DescribeWebhookNotifyItemTree</p>
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
                     * 获取<p>Asset scope for notification</p>
                     * @return AssetScope <p>Asset scope for notification</p>
                     * 
                     */
                    WebhookAssetScope GetAssetScope() const;

                    /**
                     * 设置<p>Asset scope for notification</p>
                     * @param _assetScope <p>Asset scope for notification</p>
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
                     * 获取<p>Accept format<br>Enumeration values:<br>TEXT: Text format<br>JSON: JSON format</p>
                     * @return ReceiveFormat <p>Accept format<br>Enumeration values:<br>TEXT: Text format<br>JSON: JSON format</p>
                     * 
                     */
                    std::string GetReceiveFormat() const;

                    /**
                     * 设置<p>Accept format<br>Enumeration values:<br>TEXT: Text format<br>JSON: JSON format</p>
                     * @param _receiveFormat <p>Accept format<br>Enumeration values:<br>TEXT: Text format<br>JSON: JSON format</p>
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
                     * 获取<p>Receiving robot ID list<br>Input limits: at least 1, up to 50</p>
                     * @return ReceiverIDList <p>Receiving robot ID list<br>Input limits: at least 1, up to 50</p>
                     * 
                     */
                    std::vector<int64_t> GetReceiverIDList() const;

                    /**
                     * 设置<p>Receiving robot ID list<br>Input limits: at least 1, up to 50</p>
                     * @param _receiverIDList <p>Receiving robot ID list<br>Input limits: at least 1, up to 50</p>
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
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
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
                     * 获取<p>Policy ID. More than 0 means modification; equal to 0 or not passed means adding new<br>Default value: 0</p>
                     * @return ID <p>Policy ID. More than 0 means modification; equal to 0 or not passed means adding new<br>Default value: 0</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>Policy ID. More than 0 means modification; equal to 0 or not passed means adding new<br>Default value: 0</p>
                     * @param _iD <p>Policy ID. More than 0 means modification; equal to 0 or not passed means adding new<br>Default value: 0</p>
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
                     * 获取<p>Push language<br>Enumeration values:<br>zh: Chinese<br>en: English<br>Default value: zh on the Chinese site and en on the international site</p>
                     * @return MsgLanguage <p>Push language<br>Enumeration values:<br>zh: Chinese<br>en: English<br>Default value: zh on the Chinese site and en on the international site</p>
                     * 
                     */
                    std::string GetMsgLanguage() const;

                    /**
                     * 设置<p>Push language<br>Enumeration values:<br>zh: Chinese<br>en: English<br>Default value: zh on the Chinese site and en on the international site</p>
                     * @param _msgLanguage <p>Push language<br>Enumeration values:<br>zh: Chinese<br>en: English<br>Default value: zh on the Chinese site and en on the international site</p>
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
                     * 获取<p>List of custom passthrough fields<br>Input limitation: Required when EnableCustomFields=true, up to 20</p>
                     * @return CustomFields <p>List of custom passthrough fields<br>Input limitation: Required when EnableCustomFields=true, up to 20</p>
                     * 
                     */
                    std::vector<WebhookCustomField> GetCustomFields() const;

                    /**
                     * 设置<p>List of custom passthrough fields<br>Input limitation: Required when EnableCustomFields=true, up to 20</p>
                     * @param _customFields <p>List of custom passthrough fields<br>Input limitation: Required when EnableCustomFields=true, up to 20</p>
                     * 
                     */
                    void SetCustomFields(const std::vector<WebhookCustomField>& _customFields);

                    /**
                     * 判断参数 CustomFields 是否已赋值
                     * @return CustomFields 是否已赋值
                     * 
                     */
                    bool CustomFieldsHasBeenSet() const;

                private:

                    /**
                     * <p>Policy Name<br>Input parameter limit: 1-20 characters, tenant-unique</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Enable status<br>Enumeration values:<br>ON: Enabled<br>OFF: Disabled</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>List of notification items<br>Input parameter limit: at least 1 item. Module/SubModule must be a valid composite returned by DescribeWebhookNotifyItemTree</p>
                     */
                    std::vector<WebhookNotifyItem> m_notifyItems;
                    bool m_notifyItemsHasBeenSet;

                    /**
                     * <p>Asset scope for notification</p>
                     */
                    WebhookAssetScope m_assetScope;
                    bool m_assetScopeHasBeenSet;

                    /**
                     * <p>Accept format<br>Enumeration values:<br>TEXT: Text format<br>JSON: JSON format</p>
                     */
                    std::string m_receiveFormat;
                    bool m_receiveFormatHasBeenSet;

                    /**
                     * <p>Receiving robot ID list<br>Input limits: at least 1, up to 50</p>
                     */
                    std::vector<int64_t> m_receiverIDList;
                    bool m_receiverIDListHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Policy ID. More than 0 means modification; equal to 0 or not passed means adding new<br>Default value: 0</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>Push language<br>Enumeration values:<br>zh: Chinese<br>en: English<br>Default value: zh on the Chinese site and en on the international site</p>
                     */
                    std::string m_msgLanguage;
                    bool m_msgLanguageHasBeenSet;

                    /**
                     * <p>List of custom passthrough fields<br>Input limitation: Required when EnableCustomFields=true, up to 20</p>
                     */
                    std::vector<WebhookCustomField> m_customFields;
                    bool m_customFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYWEBHOOKPOLICYREQUEST_H_

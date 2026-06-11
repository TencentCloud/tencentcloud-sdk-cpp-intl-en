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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYRISKDNSEVENTSTATUSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYRISKDNSEVENTSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifyRiskDnsEventStatus request structure.
                */
                class ModifyRiskDnsEventStatusRequest : public AbstractModel
                {
                public:
                    ModifyRiskDnsEventStatusRequest();
                    ~ModifyRiskDnsEventStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of malicious request event IDs. It is required for adding to the allowlist. Otherwise, choose Filters or EventIDSet.
                     * @return EventIDSet Array of malicious request event IDs. It is required for adding to the allowlist. Otherwise, choose Filters or EventIDSet.
                     * 
                     */
                    std::vector<uint64_t> GetEventIDSet() const;

                    /**
                     * 设置Array of malicious request event IDs. It is required for adding to the allowlist. Otherwise, choose Filters or EventIDSet.
                     * @param _eventIDSet Array of malicious request event IDs. It is required for adding to the allowlist. Otherwise, choose Filters or EventIDSet.
                     * 
                     */
                    void SetEventIDSet(const std::vector<uint64_t>& _eventIDSet);

                    /**
                     * 判断参数 EventIDSet 是否已赋值
                     * @return EventIDSet 是否已赋值
                     * 
                     */
                    bool EventIDSetHasBeenSet() const;

                    /**
                     * 获取Mark the status of the event.
EVENT_UNDEAL: Unprocessed (unignore)
EVENT_DEALED: Processed
EVENT_IGNORE: Ignore
EVENT_DELETE: Deleted
EVENT_ADD_WHITE: Add to whitelist
EVENT_ISOLATE_CONTAINER: Isolate container
EVENT_RESTORE_CONTAINER: Restore CONTAINER.
                     * @return EventStatus Mark the status of the event.
EVENT_UNDEAL: Unprocessed (unignore)
EVENT_DEALED: Processed
EVENT_IGNORE: Ignore
EVENT_DELETE: Deleted
EVENT_ADD_WHITE: Add to whitelist
EVENT_ISOLATE_CONTAINER: Isolate container
EVENT_RESTORE_CONTAINER: Restore CONTAINER.
                     * 
                     */
                    std::string GetEventStatus() const;

                    /**
                     * 设置Mark the status of the event.
EVENT_UNDEAL: Unprocessed (unignore)
EVENT_DEALED: Processed
EVENT_IGNORE: Ignore
EVENT_DELETE: Deleted
EVENT_ADD_WHITE: Add to whitelist
EVENT_ISOLATE_CONTAINER: Isolate container
EVENT_RESTORE_CONTAINER: Restore CONTAINER.
                     * @param _eventStatus Mark the status of the event.
EVENT_UNDEAL: Unprocessed (unignore)
EVENT_DEALED: Processed
EVENT_IGNORE: Ignore
EVENT_DELETE: Deleted
EVENT_ADD_WHITE: Add to whitelist
EVENT_ISOLATE_CONTAINER: Isolate container
EVENT_RESTORE_CONTAINER: Restore CONTAINER.
                     * 
                     */
                    void SetEventStatus(const std::string& _eventStatus);

                    /**
                     * 判断参数 EventStatus 是否已赋值
                     * @return EventStatus 是否已赋值
                     * 
                     */
                    bool EventStatusHasBeenSet() const;

                    /**
                     * 获取Allowlist Domain/IP
                     * @return Address Allowlist Domain/IP
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Allowlist Domain/IP
                     * @param _address Allowlist Domain/IP
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Adding Identical Request Domain Name/IP Events to Allowlist
                     * @return AllSameEventAddWhite Adding Identical Request Domain Name/IP Events to Allowlist
                     * 
                     */
                    bool GetAllSameEventAddWhite() const;

                    /**
                     * 设置Adding Identical Request Domain Name/IP Events to Allowlist
                     * @param _allSameEventAddWhite Adding Identical Request Domain Name/IP Events to Allowlist
                     * 
                     */
                    void SetAllSameEventAddWhite(const bool& _allSameEventAddWhite);

                    /**
                     * 判断参数 AllSameEventAddWhite 是否已赋值
                     * @return AllSameEventAddWhite 是否已赋值
                     * 
                     */
                    bool AllSameEventAddWhiteHasBeenSet() const;

                    /**
                     * 获取Allowlist Adding Event Type. DOMAIN: Malicious Domain Request; IP: Malicious IP Request
                     * @return AddWhiteEventType Allowlist Adding Event Type. DOMAIN: Malicious Domain Request; IP: Malicious IP Request
                     * 
                     */
                    std::string GetAddWhiteEventType() const;

                    /**
                     * 设置Allowlist Adding Event Type. DOMAIN: Malicious Domain Request; IP: Malicious IP Request
                     * @param _addWhiteEventType Allowlist Adding Event Type. DOMAIN: Malicious Domain Request; IP: Malicious IP Request
                     * 
                     */
                    void SetAddWhiteEventType(const std::string& _addWhiteEventType);

                    /**
                     * 判断参数 AddWhiteEventType 是否已赋值
                     * @return AddWhiteEventType 是否已赋值
                     * 
                     */
                    bool AddWhiteEventTypeHasBeenSet() const;

                private:

                    /**
                     * Array of malicious request event IDs. It is required for adding to the allowlist. Otherwise, choose Filters or EventIDSet.
                     */
                    std::vector<uint64_t> m_eventIDSet;
                    bool m_eventIDSetHasBeenSet;

                    /**
                     * Mark the status of the event.
EVENT_UNDEAL: Unprocessed (unignore)
EVENT_DEALED: Processed
EVENT_IGNORE: Ignore
EVENT_DELETE: Deleted
EVENT_ADD_WHITE: Add to whitelist
EVENT_ISOLATE_CONTAINER: Isolate container
EVENT_RESTORE_CONTAINER: Restore CONTAINER.
                     */
                    std::string m_eventStatus;
                    bool m_eventStatusHasBeenSet;

                    /**
                     * Allowlist Domain/IP
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Adding Identical Request Domain Name/IP Events to Allowlist
                     */
                    bool m_allSameEventAddWhite;
                    bool m_allSameEventAddWhiteHasBeenSet;

                    /**
                     * Allowlist Adding Event Type. DOMAIN: Malicious Domain Request; IP: Malicious IP Request
                     */
                    std::string m_addWhiteEventType;
                    bool m_addWhiteEventTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYRISKDNSEVENTSTATUSREQUEST_H_

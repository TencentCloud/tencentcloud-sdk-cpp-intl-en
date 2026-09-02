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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXALERTSTATUSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXALERTSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifySandboxAlertStatus request structure.
                */
                class ModifySandboxAlertStatusRequest : public AbstractModel
                {
                public:
                    ModifySandboxAlertStatusRequest();
                    ~ModifySandboxAlertStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Alarm type
Enumeration values:
ACL: access control
DLP: data leakage protection
LLM_AUDIT: LLM audit
                     * @return AlertType Alarm type
Enumeration values:
ACL: access control
DLP: data leakage protection
LLM_AUDIT: LLM audit
                     * 
                     */
                    std::string GetAlertType() const;

                    /**
                     * 设置Alarm type
Enumeration values:
ACL: access control
DLP: data leakage protection
LLM_AUDIT: LLM audit
                     * @param _alertType Alarm type
Enumeration values:
ACL: access control
DLP: data leakage protection
LLM_AUDIT: LLM audit
                     * 
                     */
                    void SetAlertType(const std::string& _alertType);

                    /**
                     * 判断参数 AlertType 是否已赋值
                     * @return AlertType 是否已赋值
                     * 
                     */
                    bool AlertTypeHasBeenSet() const;

                    /**
                     * 获取Asset type to which it belongs
Enumeration values:
HOST: Host
CONTAINER: Container
                     * @return BelongAssetType Asset type to which it belongs
Enumeration values:
HOST: Host
CONTAINER: Container
                     * 
                     */
                    std::string GetBelongAssetType() const;

                    /**
                     * 设置Asset type to which it belongs
Enumeration values:
HOST: Host
CONTAINER: Container
                     * @param _belongAssetType Asset type to which it belongs
Enumeration values:
HOST: Host
CONTAINER: Container
                     * 
                     */
                    void SetBelongAssetType(const std::string& _belongAssetType);

                    /**
                     * 判断参数 BelongAssetType 是否已赋值
                     * @return BelongAssetType 是否已赋值
                     * 
                     */
                    bool BelongAssetTypeHasBeenSet() const;

                    /**
                     * 获取Alarm record ID list
Input parameter limits: non-empty, 1-100 in length, take effect after deduplication.
                     * @return IDList Alarm record ID list
Input parameter limits: non-empty, 1-100 in length, take effect after deduplication.
                     * 
                     */
                    std::vector<int64_t> GetIDList() const;

                    /**
                     * 设置Alarm record ID list
Input parameter limits: non-empty, 1-100 in length, take effect after deduplication.
                     * @param _iDList Alarm record ID list
Input parameter limits: non-empty, 1-100 in length, take effect after deduplication.
                     * 
                     */
                    void SetIDList(const std::vector<int64_t>& _iDList);

                    /**
                     * 判断参数 IDList 是否已赋值
                     * @return IDList 是否已赋值
                     * 
                     */
                    bool IDListHasBeenSet() const;

                    /**
                     * 获取Target Operation
Enumeration values:
HANDLED: processed
IGNORE: ignored
PASS: allowlisted
DELETE: Delete (cannot be undone)
                     * @return Status Target Operation
Enumeration values:
HANDLED: processed
IGNORE: ignored
PASS: allowlisted
DELETE: Delete (cannot be undone)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Target Operation
Enumeration values:
HANDLED: processed
IGNORE: ignored
PASS: allowlisted
DELETE: Delete (cannot be undone)
                     * @param _status Target Operation
Enumeration values:
HANDLED: processed
IGNORE: ignored
PASS: allowlisted
DELETE: Delete (cannot be undone)
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Alarm type
Enumeration values:
ACL: access control
DLP: data leakage protection
LLM_AUDIT: LLM audit
                     */
                    std::string m_alertType;
                    bool m_alertTypeHasBeenSet;

                    /**
                     * Asset type to which it belongs
Enumeration values:
HOST: Host
CONTAINER: Container
                     */
                    std::string m_belongAssetType;
                    bool m_belongAssetTypeHasBeenSet;

                    /**
                     * Alarm record ID list
Input parameter limits: non-empty, 1-100 in length, take effect after deduplication.
                     */
                    std::vector<int64_t> m_iDList;
                    bool m_iDListHasBeenSet;

                    /**
                     * Target Operation
Enumeration values:
HANDLED: processed
IGNORE: ignored
PASS: allowlisted
DELETE: Delete (cannot be undone)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYSANDBOXALERTSTATUSREQUEST_H_

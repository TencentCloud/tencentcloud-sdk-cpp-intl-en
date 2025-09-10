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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_MODIFYSTAFFREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_MODIFYSTAFFREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/ForwardingConfig.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * ModifyStaff request structure.
                */
                class ModifyStaffRequest : public AbstractModel
                {
                public:
                    ModifyStaffRequest();
                    ~ModifyStaffRequest() = default;
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
                     * 获取Agent account.
                     * @return Email Agent account.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Agent account.
                     * @param _email Agent account.
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取Agent name.
                     * @return Name Agent name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Agent name.
                     * @param _name Agent name.
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
                     * 获取Agent phone number (preceded by 0086, example: 008618011111111).
                     * @return Phone Agent phone number (preceded by 0086, example: 008618011111111).
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置Agent phone number (preceded by 0086, example: 008618011111111).
                     * @param _phone Agent phone number (preceded by 0086, example: 008618011111111).
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取Agent nickname.
                     * @return Nick Agent nickname.
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置Agent nickname.
                     * @param _nick Agent nickname.
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取Agent id.
                     * @return StaffNo Agent id.
                     * 
                     */
                    std::string GetStaffNo() const;

                    /**
                     * 设置Agent id.
                     * @param _staffNo Agent id.
                     * 
                     */
                    void SetStaffNo(const std::string& _staffNo);

                    /**
                     * 判断参数 StaffNo 是否已赋值
                     * @return StaffNo 是否已赋值
                     * 
                     */
                    bool StaffNoHasBeenSet() const;

                    /**
                     * 获取Bind skill group id list.
                     * @return SkillGroupIds Bind skill group id list.
                     * 
                     */
                    std::vector<int64_t> GetSkillGroupIds() const;

                    /**
                     * 设置Bind skill group id list.
                     * @param _skillGroupIds Bind skill group id list.
                     * 
                     */
                    void SetSkillGroupIds(const std::vector<int64_t>& _skillGroupIds);

                    /**
                     * 判断参数 SkillGroupIds 是否已赋值
                     * @return SkillGroupIds 是否已赋值
                     * 
                     */
                    bool SkillGroupIdsHasBeenSet() const;

                    /**
                     * 获取Whether the cell phone outbound call switch is enabled or not.
                     * @return UseMobileCallOut Whether the cell phone outbound call switch is enabled or not.
                     * 
                     */
                    bool GetUseMobileCallOut() const;

                    /**
                     * 设置Whether the cell phone outbound call switch is enabled or not.
                     * @param _useMobileCallOut Whether the cell phone outbound call switch is enabled or not.
                     * 
                     */
                    void SetUseMobileCallOut(const bool& _useMobileCallOut);

                    /**
                     * 判断参数 UseMobileCallOut 是否已赋值
                     * @return UseMobileCallOut 是否已赋值
                     * 
                     */
                    bool UseMobileCallOutHasBeenSet() const;

                    /**
                     * 获取Cell phone answering pattern: 0 - off | 1 - only when offline | 2 - always.
                     * @return UseMobileAccept Cell phone answering pattern: 0 - off | 1 - only when offline | 2 - always.
                     * 
                     */
                    int64_t GetUseMobileAccept() const;

                    /**
                     * 设置Cell phone answering pattern: 0 - off | 1 - only when offline | 2 - always.
                     * @param _useMobileAccept Cell phone answering pattern: 0 - off | 1 - only when offline | 2 - always.
                     * 
                     */
                    void SetUseMobileAccept(const int64_t& _useMobileAccept);

                    /**
                     * 判断参数 UseMobileAccept 是否已赋值
                     * @return UseMobileAccept 是否已赋值
                     * 
                     */
                    bool UseMobileAcceptHasBeenSet() const;

                    /**
                     * 获取Agent extension number (starting with 1 to 8, 4 - 6 digits).
                     * @return ExtensionNumber Agent extension number (starting with 1 to 8, 4 - 6 digits).
                     * 
                     */
                    std::string GetExtensionNumber() const;

                    /**
                     * 设置Agent extension number (starting with 1 to 8, 4 - 6 digits).
                     * @param _extensionNumber Agent extension number (starting with 1 to 8, 4 - 6 digits).
                     * 
                     */
                    void SetExtensionNumber(const std::string& _extensionNumber);

                    /**
                     * 判断参数 ExtensionNumber 是否已赋值
                     * @return ExtensionNumber 是否已赋值
                     * 
                     */
                    bool ExtensionNumberHasBeenSet() const;

                    /**
                     * 获取Call forwarding configuration.
                     * @return ForwardingConfig Call forwarding configuration.
                     * 
                     */
                    ForwardingConfig GetForwardingConfig() const;

                    /**
                     * 设置Call forwarding configuration.
                     * @param _forwardingConfig Call forwarding configuration.
                     * 
                     */
                    void SetForwardingConfig(const ForwardingConfig& _forwardingConfig);

                    /**
                     * 判断参数 ForwardingConfig 是否已赋值
                     * @return ForwardingConfig 是否已赋值
                     * 
                     */
                    bool ForwardingConfigHasBeenSet() const;

                private:

                    /**
                     * Application id (required) can be found at https://console.cloud.tencent.com/ccc.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Agent account.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Agent name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Agent phone number (preceded by 0086, example: 008618011111111).
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * Agent nickname.
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * Agent id.
                     */
                    std::string m_staffNo;
                    bool m_staffNoHasBeenSet;

                    /**
                     * Bind skill group id list.
                     */
                    std::vector<int64_t> m_skillGroupIds;
                    bool m_skillGroupIdsHasBeenSet;

                    /**
                     * Whether the cell phone outbound call switch is enabled or not.
                     */
                    bool m_useMobileCallOut;
                    bool m_useMobileCallOutHasBeenSet;

                    /**
                     * Cell phone answering pattern: 0 - off | 1 - only when offline | 2 - always.
                     */
                    int64_t m_useMobileAccept;
                    bool m_useMobileAcceptHasBeenSet;

                    /**
                     * Agent extension number (starting with 1 to 8, 4 - 6 digits).
                     */
                    std::string m_extensionNumber;
                    bool m_extensionNumberHasBeenSet;

                    /**
                     * Call forwarding configuration.
                     */
                    ForwardingConfig m_forwardingConfig;
                    bool m_forwardingConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_MODIFYSTAFFREQUEST_H_

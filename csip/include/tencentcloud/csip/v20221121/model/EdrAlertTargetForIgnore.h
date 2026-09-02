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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTTARGETFORIGNORE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTTARGETFORIGNORE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Location information of EDR alerts for permanent ignore or unignore
                */
                class EdrAlertTargetForIgnore : public AbstractModel
                {
                public:
                    EdrAlertTargetForIgnore();
                    ~EdrAlertTargetForIgnore() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm primary key ID
                     * @return Id Alarm primary key ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Alarm primary key ID
                     * @param _id Alarm primary key ID
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
                     * 获取Alarm Account ID (across different accounts, required for frontend)
                     * @return AppId Alarm Account ID (across different accounts, required for frontend)
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置Alarm Account ID (across different accounts, required for frontend)
                     * @param _appId Alarm Account ID (across different accounts, required for frontend)
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Alarm unique ID
                     * @return AlertId Alarm unique ID
                     * 
                     */
                    std::string GetAlertId() const;

                    /**
                     * 设置Alarm unique ID
                     * @param _alertId Alarm unique ID
                     * 
                     */
                    void SetAlertId(const std::string& _alertId);

                    /**
                     * 判断参数 AlertId 是否已赋值
                     * @return AlertId 是否已赋值
                     * 
                     */
                    bool AlertIdHasBeenSet() const;

                    /**
                     * 获取Host UUID (optional)
                     * @return Quuid Host UUID (optional)
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Host UUID (optional)
                     * @param _quuid Host UUID (optional)
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Instance ID (selectable, used for allowlist deletion)
                     * @return InstanceId Instance ID (selectable, used for allowlist deletion)
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID (selectable, used for allowlist deletion)
                     * @param _instanceId Instance ID (selectable, used for allowlist deletion)
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Alarm primary key ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Alarm Account ID (across different accounts, required for frontend)
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Alarm unique ID
                     */
                    std::string m_alertId;
                    bool m_alertIdHasBeenSet;

                    /**
                     * Host UUID (optional)
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Instance ID (selectable, used for allowlist deletion)
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTTARGETFORIGNORE_H_

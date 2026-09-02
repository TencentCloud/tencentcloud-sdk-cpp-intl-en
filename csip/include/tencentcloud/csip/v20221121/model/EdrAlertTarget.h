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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTTARGET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTTARGET_H_

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
                * EDR alert location information (ID + AlertID + AppID triplet)
                */
                class EdrAlertTarget : public AbstractModel
                {
                public:
                    EdrAlertTarget();
                    ~EdrAlertTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Alarm primary key ID</p>
                     * @return Id <p>Alarm primary key ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>Alarm primary key ID</p>
                     * @param _id <p>Alarm primary key ID</p>
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
                     * 获取<p>Alarm account ID (across different accounts, required by frontend)</p>
                     * @return AppId <p>Alarm account ID (across different accounts, required by frontend)</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>Alarm account ID (across different accounts, required by frontend)</p>
                     * @param _appId <p>Alarm account ID (across different accounts, required by frontend)</p>
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
                     * 获取<p>Alarm unique ID</p>
                     * @return AlertId <p>Alarm unique ID</p>
                     * 
                     */
                    std::string GetAlertId() const;

                    /**
                     * 设置<p>Alarm unique ID</p>
                     * @param _alertId <p>Alarm unique ID</p>
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
                     * 获取<p>Host UUID (Optional, returned from the list and passed through)</p>
                     * @return Quuid <p>Host UUID (Optional, returned from the list and passed through)</p>
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>Host UUID (Optional, returned from the list and passed through)</p>
                     * @param _quuid <p>Host UUID (Optional, returned from the list and passed through)</p>
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
                     * 获取<p>Instance ID (optional, passed through from the list, used for tag enrichment in security center)</p>
                     * @return InstanceId <p>Instance ID (optional, passed through from the list, used for tag enrichment in security center)</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID (optional, passed through from the list, used for tag enrichment in security center)</p>
                     * @param _instanceId <p>Instance ID (optional, passed through from the list, used for tag enrichment in security center)</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Alarm sub-type</p>
                     * @return AlertSubType <p>Alarm sub-type</p>
                     * 
                     */
                    std::string GetAlertSubType() const;

                    /**
                     * 设置<p>Alarm sub-type</p>
                     * @param _alertSubType <p>Alarm sub-type</p>
                     * 
                     */
                    void SetAlertSubType(const std::string& _alertSubType);

                    /**
                     * 判断参数 AlertSubType 是否已赋值
                     * @return AlertSubType 是否已赋值
                     * 
                     */
                    bool AlertSubTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Alarm primary key ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Alarm account ID (across different accounts, required by frontend)</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Alarm unique ID</p>
                     */
                    std::string m_alertId;
                    bool m_alertIdHasBeenSet;

                    /**
                     * <p>Host UUID (Optional, returned from the list and passed through)</p>
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * <p>Instance ID (optional, passed through from the list, used for tag enrichment in security center)</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Alarm sub-type</p>
                     */
                    std::string m_alertSubType;
                    bool m_alertSubTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTTARGET_H_

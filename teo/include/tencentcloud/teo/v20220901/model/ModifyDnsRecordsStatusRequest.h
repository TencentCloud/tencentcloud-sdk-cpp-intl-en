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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDNSRECORDSSTATUSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDNSRECORDSSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyDnsRecordsStatus request structure.
                */
                class ModifyDnsRecordsStatusRequest : public AbstractModel
                {
                public:
                    ModifyDnsRecordsStatusRequest();
                    ~ModifyDnsRecordsStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone id.
                     * @return ZoneId Zone id.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone id.
                     * @param _zoneId Zone id.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取List of dns record ids to be enabled, upper limit: 200. <br>note: the same dns record id cannot exist in both recordstoenable and recordstodisable.
                     * @return RecordsToEnable List of dns record ids to be enabled, upper limit: 200. <br>note: the same dns record id cannot exist in both recordstoenable and recordstodisable.
                     * 
                     */
                    std::vector<std::string> GetRecordsToEnable() const;

                    /**
                     * 设置List of dns record ids to be enabled, upper limit: 200. <br>note: the same dns record id cannot exist in both recordstoenable and recordstodisable.
                     * @param _recordsToEnable List of dns record ids to be enabled, upper limit: 200. <br>note: the same dns record id cannot exist in both recordstoenable and recordstodisable.
                     * 
                     */
                    void SetRecordsToEnable(const std::vector<std::string>& _recordsToEnable);

                    /**
                     * 判断参数 RecordsToEnable 是否已赋值
                     * @return RecordsToEnable 是否已赋值
                     * 
                     */
                    bool RecordsToEnableHasBeenSet() const;

                    /**
                     * 获取List of dns record ids to be disabled, upper limit: 200. <br>note: the same dns record id cannot exist in both recordstoenable and recordstodisable.
                     * @return RecordsToDisable List of dns record ids to be disabled, upper limit: 200. <br>note: the same dns record id cannot exist in both recordstoenable and recordstodisable.
                     * 
                     */
                    std::vector<std::string> GetRecordsToDisable() const;

                    /**
                     * 设置List of dns record ids to be disabled, upper limit: 200. <br>note: the same dns record id cannot exist in both recordstoenable and recordstodisable.
                     * @param _recordsToDisable List of dns record ids to be disabled, upper limit: 200. <br>note: the same dns record id cannot exist in both recordstoenable and recordstodisable.
                     * 
                     */
                    void SetRecordsToDisable(const std::vector<std::string>& _recordsToDisable);

                    /**
                     * 判断参数 RecordsToDisable 是否已赋值
                     * @return RecordsToDisable 是否已赋值
                     * 
                     */
                    bool RecordsToDisableHasBeenSet() const;

                private:

                    /**
                     * Zone id.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * List of dns record ids to be enabled, upper limit: 200. <br>note: the same dns record id cannot exist in both recordstoenable and recordstodisable.
                     */
                    std::vector<std::string> m_recordsToEnable;
                    bool m_recordsToEnableHasBeenSet;

                    /**
                     * List of dns record ids to be disabled, upper limit: 200. <br>note: the same dns record id cannot exist in both recordstoenable and recordstodisable.
                     */
                    std::vector<std::string> m_recordsToDisable;
                    bool m_recordsToDisableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDNSRECORDSSTATUSREQUEST_H_

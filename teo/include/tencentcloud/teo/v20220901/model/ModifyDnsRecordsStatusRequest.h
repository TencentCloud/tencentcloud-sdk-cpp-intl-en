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
                     * 获取Site ID.
                     * @return ZoneId Site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID.
                     * @param _zoneId Site ID.
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
                     * 获取List of DNS record IDs to be enabled, with a limit of 200. Note: The same DNS record ID cannot exist in both RecordsToEnable and RecordsToDisable.
                     * @return RecordsToEnable List of DNS record IDs to be enabled, with a limit of 200. Note: The same DNS record ID cannot exist in both RecordsToEnable and RecordsToDisable.
                     * 
                     */
                    std::vector<std::string> GetRecordsToEnable() const;

                    /**
                     * 设置List of DNS record IDs to be enabled, with a limit of 200. Note: The same DNS record ID cannot exist in both RecordsToEnable and RecordsToDisable.
                     * @param _recordsToEnable List of DNS record IDs to be enabled, with a limit of 200. Note: The same DNS record ID cannot exist in both RecordsToEnable and RecordsToDisable.
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
                     * 获取List of DNS record IDs to be disabled, with a limit of 200. Note: The same DNS record ID cannot exist in both RecordsToEnable and RecordsToDisable.
                     * @return RecordsToDisable List of DNS record IDs to be disabled, with a limit of 200. Note: The same DNS record ID cannot exist in both RecordsToEnable and RecordsToDisable.
                     * 
                     */
                    std::vector<std::string> GetRecordsToDisable() const;

                    /**
                     * 设置List of DNS record IDs to be disabled, with a limit of 200. Note: The same DNS record ID cannot exist in both RecordsToEnable and RecordsToDisable.
                     * @param _recordsToDisable List of DNS record IDs to be disabled, with a limit of 200. Note: The same DNS record ID cannot exist in both RecordsToEnable and RecordsToDisable.
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
                     * Site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * List of DNS record IDs to be enabled, with a limit of 200. Note: The same DNS record ID cannot exist in both RecordsToEnable and RecordsToDisable.
                     */
                    std::vector<std::string> m_recordsToEnable;
                    bool m_recordsToEnableHasBeenSet;

                    /**
                     * List of DNS record IDs to be disabled, with a limit of 200. Note: The same DNS record ID cannot exist in both RecordsToEnable and RecordsToDisable.
                     */
                    std::vector<std::string> m_recordsToDisable;
                    bool m_recordsToDisableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDNSRECORDSSTATUSREQUEST_H_

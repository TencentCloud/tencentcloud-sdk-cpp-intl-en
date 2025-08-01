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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYRECORDSSTATUSREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYRECORDSSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * ModifyRecordsStatus request structure.
                */
                class ModifyRecordsStatusRequest : public AbstractModel
                {
                public:
                    ModifyRecordsStatusRequest();
                    ~ModifyRecordsStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The private domain ID
                     * @return ZoneId The private domain ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The private domain ID
                     * @param _zoneId The private domain ID
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
                     * 获取The DNS record IDs.
                     * @return RecordIds The DNS record IDs.
                     * 
                     */
                    std::vector<int64_t> GetRecordIds() const;

                    /**
                     * 设置The DNS record IDs.
                     * @param _recordIds The DNS record IDs.
                     * 
                     */
                    void SetRecordIds(const std::vector<int64_t>& _recordIds);

                    /**
                     * 判断参数 RecordIds 是否已赋值
                     * @return RecordIds 是否已赋值
                     * 
                     */
                    bool RecordIdsHasBeenSet() const;

                    /**
                     * 获取`enabled`: Enable; `disabled`: Disable.
                     * @return Status `enabled`: Enable; `disabled`: Disable.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置`enabled`: Enable; `disabled`: Disable.
                     * @param _status `enabled`: Enable; `disabled`: Disable.
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
                     * The private domain ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * The DNS record IDs.
                     */
                    std::vector<int64_t> m_recordIds;
                    bool m_recordIdsHasBeenSet;

                    /**
                     * `enabled`: Enable; `disabled`: Disable.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_MODIFYRECORDSSTATUSREQUEST_H_

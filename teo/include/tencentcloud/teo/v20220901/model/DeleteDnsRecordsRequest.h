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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DELETEDNSRECORDSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DELETEDNSRECORDSREQUEST_H_

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
                * DeleteDnsRecords request structure.
                */
                class DeleteDnsRecordsRequest : public AbstractModel
                {
                public:
                    DeleteDnsRecordsRequest();
                    ~DeleteDnsRecordsRequest() = default;
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
                     * 获取List of dns record ids to be deleted, upper limit: 1000.
                     * @return RecordIds List of dns record ids to be deleted, upper limit: 1000.
                     * 
                     */
                    std::vector<std::string> GetRecordIds() const;

                    /**
                     * 设置List of dns record ids to be deleted, upper limit: 1000.
                     * @param _recordIds List of dns record ids to be deleted, upper limit: 1000.
                     * 
                     */
                    void SetRecordIds(const std::vector<std::string>& _recordIds);

                    /**
                     * 判断参数 RecordIds 是否已赋值
                     * @return RecordIds 是否已赋值
                     * 
                     */
                    bool RecordIdsHasBeenSet() const;

                private:

                    /**
                     * Zone id.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * List of dns record ids to be deleted, upper limit: 1000.
                     */
                    std::vector<std::string> m_recordIds;
                    bool m_recordIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DELETEDNSRECORDSREQUEST_H_

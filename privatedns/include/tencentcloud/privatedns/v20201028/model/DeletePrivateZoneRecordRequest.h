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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DELETEPRIVATEZONERECORDREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DELETEPRIVATEZONERECORDREQUEST_H_

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
                * DeletePrivateZoneRecord request structure.
                */
                class DeletePrivateZoneRecordRequest : public AbstractModel
                {
                public:
                    DeletePrivateZoneRecordRequest();
                    ~DeletePrivateZoneRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Private domain ID
                     * @return ZoneId Private domain ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Private domain ID
                     * @param _zoneId Private domain ID
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
                     * 获取Record ID
                     * @return RecordId Record ID
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置Record ID
                     * @param _recordId Record ID
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取Array of record IDs. `RecordId` takes precedence.
                     * @return RecordIdSet Array of record IDs. `RecordId` takes precedence.
                     * 
                     */
                    std::vector<std::string> GetRecordIdSet() const;

                    /**
                     * 设置Array of record IDs. `RecordId` takes precedence.
                     * @param _recordIdSet Array of record IDs. `RecordId` takes precedence.
                     * 
                     */
                    void SetRecordIdSet(const std::vector<std::string>& _recordIdSet);

                    /**
                     * 判断参数 RecordIdSet 是否已赋值
                     * @return RecordIdSet 是否已赋值
                     * 
                     */
                    bool RecordIdSetHasBeenSet() const;

                private:

                    /**
                     * Private domain ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Record ID
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * Array of record IDs. `RecordId` takes precedence.
                     */
                    std::vector<std::string> m_recordIdSet;
                    bool m_recordIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DELETEPRIVATEZONERECORDREQUEST_H_

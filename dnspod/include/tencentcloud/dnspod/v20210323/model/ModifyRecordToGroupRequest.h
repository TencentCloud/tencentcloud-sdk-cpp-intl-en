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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYRECORDTOGROUPREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYRECORDTOGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * ModifyRecordToGroup request structure.
                */
                class ModifyRecordToGroupRequest : public AbstractModel
                {
                public:
                    ModifyRecordToGroupRequest();
                    ~ModifyRecordToGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain
                     * @return Domain Domain
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain
                     * @param _domain Domain
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Group ID
                     * @return GroupId Group ID
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置Group ID
                     * @param _groupId Group ID
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Record ID. Separate multiple IDs by vertical bar ("|").
                     * @return RecordId Record ID. Separate multiple IDs by vertical bar ("|").
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置Record ID. Separate multiple IDs by vertical bar ("|").
                     * @param _recordId Record ID. Separate multiple IDs by vertical bar ("|").
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
                     * 获取The domain ID. `DomainId` takes priority over `Domain`. If `DomainId` is passed in, `Domain` is ignored.
                     * @return DomainId The domain ID. `DomainId` takes priority over `Domain`. If `DomainId` is passed in, `Domain` is ignored.
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置The domain ID. `DomainId` takes priority over `Domain`. If `DomainId` is passed in, `Domain` is ignored.
                     * @param _domainId The domain ID. `DomainId` takes priority over `Domain`. If `DomainId` is passed in, `Domain` is ignored.
                     * 
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                private:

                    /**
                     * Domain
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Group ID
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Record ID. Separate multiple IDs by vertical bar ("|").
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * The domain ID. `DomainId` takes priority over `Domain`. If `DomainId` is passed in, `Domain` is ignored.
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYRECORDTOGROUPREQUEST_H_

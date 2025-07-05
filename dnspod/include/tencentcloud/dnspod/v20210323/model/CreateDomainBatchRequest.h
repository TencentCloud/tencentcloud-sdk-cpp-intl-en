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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEDOMAINBATCHREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEDOMAINBATCHREQUEST_H_

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
                * CreateDomainBatch request structure.
                */
                class CreateDomainBatchRequest : public AbstractModel
                {
                public:
                    CreateDomainBatchRequest();
                    ~CreateDomainBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain array
                     * @return DomainList Domain array
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置Domain array
                     * @param _domainList Domain array
                     * 
                     */
                    void SetDomainList(const std::vector<std::string>& _domainList);

                    /**
                     * 判断参数 DomainList 是否已赋值
                     * @return DomainList 是否已赋值
                     * 
                     */
                    bool DomainListHasBeenSet() const;

                    /**
                     * 获取Add A records of @ and www for each domain with the record value of the IP. If this parameter is not passed in or is set to an empty string or null, only the domain but not the records will be added.
                     * @return RecordValue Add A records of @ and www for each domain with the record value of the IP. If this parameter is not passed in or is set to an empty string or null, only the domain but not the records will be added.
                     * 
                     */
                    std::string GetRecordValue() const;

                    /**
                     * 设置Add A records of @ and www for each domain with the record value of the IP. If this parameter is not passed in or is set to an empty string or null, only the domain but not the records will be added.
                     * @param _recordValue Add A records of @ and www for each domain with the record value of the IP. If this parameter is not passed in or is set to an empty string or null, only the domain but not the records will be added.
                     * 
                     */
                    void SetRecordValue(const std::string& _recordValue);

                    /**
                     * 判断参数 RecordValue 是否已赋值
                     * @return RecordValue 是否已赋值
                     * 
                     */
                    bool RecordValueHasBeenSet() const;

                private:

                    /**
                     * Domain array
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                    /**
                     * Add A records of @ and www for each domain with the record value of the IP. If this parameter is not passed in or is set to an empty string or null, only the domain but not the records will be added.
                     */
                    std::string m_recordValue;
                    bool m_recordValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATEDOMAINBATCHREQUEST_H_

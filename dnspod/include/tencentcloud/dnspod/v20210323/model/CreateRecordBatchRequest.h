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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATERECORDBATCHREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATERECORDBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/AddRecordBatch.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * CreateRecordBatch request structure.
                */
                class CreateRecordBatchRequest : public AbstractModel
                {
                public:
                    CreateRecordBatchRequest();
                    ~CreateRecordBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain ID. Separate multiple ones by comma.
                     * @return DomainIdList Domain ID. Separate multiple ones by comma.
                     * 
                     */
                    std::vector<std::string> GetDomainIdList() const;

                    /**
                     * 设置Domain ID. Separate multiple ones by comma.
                     * @param _domainIdList Domain ID. Separate multiple ones by comma.
                     * 
                     */
                    void SetDomainIdList(const std::vector<std::string>& _domainIdList);

                    /**
                     * 判断参数 DomainIdList 是否已赋值
                     * @return DomainIdList 是否已赋值
                     * 
                     */
                    bool DomainIdListHasBeenSet() const;

                    /**
                     * 获取Record array
                     * @return RecordList Record array
                     * 
                     */
                    std::vector<AddRecordBatch> GetRecordList() const;

                    /**
                     * 设置Record array
                     * @param _recordList Record array
                     * 
                     */
                    void SetRecordList(const std::vector<AddRecordBatch>& _recordList);

                    /**
                     * 判断参数 RecordList 是否已赋值
                     * @return RecordList 是否已赋值
                     * 
                     */
                    bool RecordListHasBeenSet() const;

                private:

                    /**
                     * Domain ID. Separate multiple ones by comma.
                     */
                    std::vector<std::string> m_domainIdList;
                    bool m_domainIdListHasBeenSet;

                    /**
                     * Record array
                     */
                    std::vector<AddRecordBatch> m_recordList;
                    bool m_recordListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATERECORDBATCHREQUEST_H_

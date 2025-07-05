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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATERECORDBATCHRESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATERECORDBATCHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/CreateRecordBatchDetail.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * CreateRecordBatch response structure.
                */
                class CreateRecordBatchResponse : public AbstractModel
                {
                public:
                    CreateRecordBatchResponse();
                    ~CreateRecordBatchResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Information of the bulk added domains
                     * @return DetailList Information of the bulk added domains
                     * 
                     */
                    std::vector<CreateRecordBatchDetail> GetDetailList() const;

                    /**
                     * 判断参数 DetailList 是否已赋值
                     * @return DetailList 是否已赋值
                     * 
                     */
                    bool DetailListHasBeenSet() const;

                    /**
                     * 获取Bulk task ID
                     * @return JobId Bulk task ID
                     * 
                     */
                    uint64_t GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                private:

                    /**
                     * Information of the bulk added domains
                     */
                    std::vector<CreateRecordBatchDetail> m_detailList;
                    bool m_detailListHasBeenSet;

                    /**
                     * Bulk task ID
                     */
                    uint64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_CREATERECORDBATCHRESPONSE_H_

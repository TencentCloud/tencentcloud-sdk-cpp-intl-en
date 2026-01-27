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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_LISTRECEIVERDETAILSRESPONSE_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_LISTRECEIVERDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/ReceiverDetail.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * ListReceiverDetails response structure.
                */
                class ListReceiverDetailsResponse : public AbstractModel
                {
                public:
                    ListReceiverDetailsResponse();
                    ~ListReceiverDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number.
                     * @return TotalCount Total number.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Data record.
                     * @return Data Data record.
                     * 
                     */
                    std::vector<ReceiverDetail> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Number of valid email addresses.
                     * @return ValidCount Number of valid email addresses.
                     * 
                     */
                    uint64_t GetValidCount() const;

                    /**
                     * 判断参数 ValidCount 是否已赋值
                     * @return ValidCount 是否已赋值
                     * 
                     */
                    bool ValidCountHasBeenSet() const;

                    /**
                     * 获取Number of invalid email addresses.
                     * @return InvalidCount Number of invalid email addresses.
                     * 
                     */
                    uint64_t GetInvalidCount() const;

                    /**
                     * 判断参数 InvalidCount 是否已赋值
                     * @return InvalidCount 是否已赋值
                     * 
                     */
                    bool InvalidCountHasBeenSet() const;

                private:

                    /**
                     * Total number.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Data record.
                     */
                    std::vector<ReceiverDetail> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Number of valid email addresses.
                     */
                    uint64_t m_validCount;
                    bool m_validCountHasBeenSet;

                    /**
                     * Number of invalid email addresses.
                     */
                    uint64_t m_invalidCount;
                    bool m_invalidCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_LISTRECEIVERDETAILSRESPONSE_H_

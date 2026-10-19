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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEPOLICYHITDATAREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEPOLICYHITDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribePolicyHitData request structure.
                */
                class DescribePolicyHitDataRequest : public AbstractModel
                {
                public:
                    DescribePolicyHitDataRequest();
                    ~DescribePolicyHitDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Timestamp of the date and time to view
                     * @return IndexTimestamp Timestamp of the date and time to view
                     * 
                     */
                    int64_t GetIndexTimestamp() const;

                    /**
                     * 设置Timestamp of the date and time to view
                     * @param _indexTimestamp Timestamp of the date and time to view
                     * 
                     */
                    void SetIndexTimestamp(const int64_t& _indexTimestamp);

                    /**
                     * 判断参数 IndexTimestamp 是否已赋值
                     * @return IndexTimestamp 是否已赋值
                     * 
                     */
                    bool IndexTimestampHasBeenSet() const;

                    /**
                     * 获取Group Account Member ID
                     * @return MemberId Group Account Member ID
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置Group Account Member ID
                     * @param _memberId Group Account Member ID
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * Timestamp of the date and time to view
                     */
                    int64_t m_indexTimestamp;
                    bool m_indexTimestampHasBeenSet;

                    /**
                     * Group Account Member ID
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEPOLICYHITDATAREQUEST_H_

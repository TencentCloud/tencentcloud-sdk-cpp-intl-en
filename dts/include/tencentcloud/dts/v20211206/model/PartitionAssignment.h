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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_PARTITIONASSIGNMENT_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_PARTITIONASSIGNMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * The partition allocation of Kafka consumer groups in data subscriptions. This data is queried in real time. If you need the latest data, you need to call the interface again.
                */
                class PartitionAssignment : public AbstractModel
                {
                public:
                    PartitionAssignment();
                    ~PartitionAssignment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The clientId of the consumer
                     * @return ClientId The clientId of the consumer
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置The clientId of the consumer
                     * @param _clientId The clientId of the consumer
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取The partition is being consumed by this consumer.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PartitionNo The partition is being consumed by this consumer.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<uint64_t> GetPartitionNo() const;

                    /**
                     * 设置The partition is being consumed by this consumer.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _partitionNo The partition is being consumed by this consumer.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPartitionNo(const std::vector<uint64_t>& _partitionNo);

                    /**
                     * 判断参数 PartitionNo 是否已赋值
                     * @return PartitionNo 是否已赋值
                     * 
                     */
                    bool PartitionNoHasBeenSet() const;

                private:

                    /**
                     * The clientId of the consumer
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * The partition is being consumed by this consumer.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<uint64_t> m_partitionNo;
                    bool m_partitionNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_PARTITIONASSIGNMENT_H_

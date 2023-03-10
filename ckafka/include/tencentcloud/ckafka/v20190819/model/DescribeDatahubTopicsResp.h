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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEDATAHUBTOPICSRESP_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEDATAHUBTOPICSRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/DatahubTopicDTO.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DataHub topic list
                */
                class DescribeDatahubTopicsResp : public AbstractModel
                {
                public:
                    DescribeDatahubTopicsResp();
                    ~DescribeDatahubTopicsResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total count
                     * @return TotalCount Total count
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置Total count
                     * @param TotalCount Total count
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Topic list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicList Topic list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DatahubTopicDTO> GetTopicList() const;

                    /**
                     * 设置Topic list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TopicList Topic list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTopicList(const std::vector<DatahubTopicDTO>& _topicList);

                    /**
                     * 判断参数 TopicList 是否已赋值
                     * @return TopicList 是否已赋值
                     */
                    bool TopicListHasBeenSet() const;

                private:

                    /**
                     * Total count
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Topic list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DatahubTopicDTO> m_topicList;
                    bool m_topicListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEDATAHUBTOPICSRESP_H_

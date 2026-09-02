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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLSLOGINDEXV3RESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLSLOGINDEXV3RESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LogTopicIndexInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCLSLogIndexV3 response structure.
                */
                class DescribeCLSLogIndexV3Response : public AbstractModel
                {
                public:
                    DescribeCLSLogIndexV3Response();
                    ~DescribeCLSLogIndexV3Response() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Topic information</p>
                     * @return TopicIndexInfos <p>Topic information</p>
                     * 
                     */
                    std::vector<LogTopicIndexInfo> GetTopicIndexInfos() const;

                    /**
                     * 判断参数 TopicIndexInfos 是否已赋值
                     * @return TopicIndexInfos 是否已赋值
                     * 
                     */
                    bool TopicIndexInfosHasBeenSet() const;

                    /**
                     * 获取<p>Total.</p>
                     * @return TotalCount <p>Total.</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>Topic information</p>
                     */
                    std::vector<LogTopicIndexInfo> m_topicIndexInfos;
                    bool m_topicIndexInfosHasBeenSet;

                    /**
                     * <p>Total.</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLSLOGINDEXV3RESPONSE_H_

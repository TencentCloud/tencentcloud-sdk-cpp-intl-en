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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEMRAPPLICATIONSTATICSRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEMRAPPLICATIONSTATICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ApplicationStatics.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeEmrApplicationStatics response structure.
                */
                class DescribeEmrApplicationStaticsResponse : public AbstractModel
                {
                public:
                    DescribeEmrApplicationStaticsResponse();
                    ~DescribeEmrApplicationStaticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Application statistics
                     * @return Statics Application statistics
                     * 
                     */
                    std::vector<ApplicationStatics> GetStatics() const;

                    /**
                     * 判断参数 Statics 是否已赋值
                     * @return Statics 是否已赋值
                     * 
                     */
                    bool StaticsHasBeenSet() const;

                    /**
                     * 获取Total count
                     * @return TotalCount Total count
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Available queue name
                     * @return Queues Available queue name
                     * 
                     */
                    std::vector<std::string> GetQueues() const;

                    /**
                     * 判断参数 Queues 是否已赋值
                     * @return Queues 是否已赋值
                     * 
                     */
                    bool QueuesHasBeenSet() const;

                    /**
                     * 获取Available usernames
                     * @return Users Available usernames
                     * 
                     */
                    std::vector<std::string> GetUsers() const;

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                    /**
                     * 获取Available application type
                     * @return ApplicationTypes Available application type
                     * 
                     */
                    std::vector<std::string> GetApplicationTypes() const;

                    /**
                     * 判断参数 ApplicationTypes 是否已赋值
                     * @return ApplicationTypes 是否已赋值
                     * 
                     */
                    bool ApplicationTypesHasBeenSet() const;

                private:

                    /**
                     * Application statistics
                     */
                    std::vector<ApplicationStatics> m_statics;
                    bool m_staticsHasBeenSet;

                    /**
                     * Total count
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Available queue name
                     */
                    std::vector<std::string> m_queues;
                    bool m_queuesHasBeenSet;

                    /**
                     * Available usernames
                     */
                    std::vector<std::string> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * Available application type
                     */
                    std::vector<std::string> m_applicationTypes;
                    bool m_applicationTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEEMRAPPLICATIONSTATICSRESPONSE_H_

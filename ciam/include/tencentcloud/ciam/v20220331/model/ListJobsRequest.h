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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_LISTJOBSREQUEST_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_LISTJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * ListJobs request structure.
                */
                class ListJobsRequest : public AbstractModel
                {
                public:
                    ListJobsRequest();
                    ~ListJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User directory ID
                     * @return UserStoreId User directory ID
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置User directory ID
                     * @param UserStoreId User directory ID
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取List of task IDs. If this parameter is empty, all tasks will be returned.
                     * @return JobIds List of task IDs. If this parameter is empty, all tasks will be returned.
                     */
                    std::vector<std::string> GetJobIds() const;

                    /**
                     * 设置List of task IDs. If this parameter is empty, all tasks will be returned.
                     * @param JobIds List of task IDs. If this parameter is empty, all tasks will be returned.
                     */
                    void SetJobIds(const std::vector<std::string>& _jobIds);

                    /**
                     * 判断参数 JobIds 是否已赋值
                     * @return JobIds 是否已赋值
                     */
                    bool JobIdsHasBeenSet() const;

                private:

                    /**
                     * User directory ID
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * List of task IDs. If this parameter is empty, all tasks will be returned.
                     */
                    std::vector<std::string> m_jobIds;
                    bool m_jobIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_LISTJOBSREQUEST_H_

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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEAPPACCOUNTRESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEAPPACCOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/AppAccountInfo.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * DescribeAppAccount response structure.
                */
                class DescribeAppAccountResponse : public AbstractModel
                {
                public:
                    DescribeAppAccountResponse();
                    ~DescribeAppAccountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of records returned for the query.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total number of records returned for the query.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Application ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationId Application ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取Returned list of eligible data.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AppAccountList Returned list of eligible data.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AppAccountInfo> GetAppAccountList() const;

                    /**
                     * 判断参数 AppAccountList 是否已赋值
                     * @return AppAccountList 是否已赋值
                     */
                    bool AppAccountListHasBeenSet() const;

                private:

                    /**
                     * Total number of records returned for the query.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Application ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Returned list of eligible data.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AppAccountInfo> m_appAccountList;
                    bool m_appAccountListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DESCRIBEAPPACCOUNTRESPONSE_H_

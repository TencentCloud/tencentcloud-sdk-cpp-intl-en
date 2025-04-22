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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBESIMPLEINSTANCESRESPONSE_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBESIMPLEINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/InstanceSimpleInfoNew.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * DescribeSimpleInstances response structure.
                */
                class DescribeSimpleInstancesResponse : public AbstractModel
                {
                public:
                    DescribeSimpleInstancesResponse();
                    ~DescribeSimpleInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total count of instance lists.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total count of instance lists.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Instance list details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstancesList Instance list details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<InstanceSimpleInfoNew> GetInstancesList() const;

                    /**
                     * 判断参数 InstancesList 是否已赋值
                     * @return InstancesList 是否已赋值
                     * 
                     */
                    bool InstancesListHasBeenSet() const;

                    /**
                     * 获取Error message.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ErrorMsg Error message.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * Total count of instance lists.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Instance list details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<InstanceSimpleInfoNew> m_instancesList;
                    bool m_instancesListHasBeenSet;

                    /**
                     * Error message.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_DESCRIBESIMPLEINSTANCESRESPONSE_H_

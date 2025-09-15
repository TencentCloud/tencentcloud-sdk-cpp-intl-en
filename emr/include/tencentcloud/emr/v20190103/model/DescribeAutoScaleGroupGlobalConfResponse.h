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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEAUTOSCALEGROUPGLOBALCONFRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEAUTOSCALEGROUPGLOBALCONFRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/GroupGlobalConfs.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeAutoScaleGroupGlobalConf response structure.
                */
                class DescribeAutoScaleGroupGlobalConfResponse : public AbstractModel
                {
                public:
                    DescribeAutoScaleGroupGlobalConfResponse();
                    ~DescribeAutoScaleGroupGlobalConfResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Global information of all scaling groups in the cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupGlobalConfs Global information of all scaling groups in the cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<GroupGlobalConfs> GetGroupGlobalConfs() const;

                    /**
                     * 判断参数 GroupGlobalConfs 是否已赋值
                     * @return GroupGlobalConfs 是否已赋值
                     * 
                     */
                    bool GroupGlobalConfsHasBeenSet() const;

                    /**
                     * 获取Total number.
                     * @return TotalCount Total number.
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
                     * Global information of all scaling groups in the cluster.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<GroupGlobalConfs> m_groupGlobalConfs;
                    bool m_groupGlobalConfsHasBeenSet;

                    /**
                     * Total number.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEAUTOSCALEGROUPGLOBALCONFRESPONSE_H_

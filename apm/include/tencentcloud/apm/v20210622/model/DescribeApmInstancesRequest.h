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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMINSTANCESREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeApmInstances request structure.
                */
                class DescribeApmInstancesRequest : public AbstractModel
                {
                public:
                    DescribeApmInstancesRequest();
                    ~DescribeApmInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Tag list.
                     * @return Tags Tag list.
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置Tag list.
                     * @param _tags Tag list.
                     * 
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Filter by business system name.
                     * @return InstanceName Filter by business system name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Filter by business system name.
                     * @param _instanceName Filter by business system name.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Filter by business system id.
                     * @return InstanceIds Filter by business system id.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Filter by business system id.
                     * @param _instanceIds Filter by business system id.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Whether to query the official demo business system (0 = non-demo business system, 1 = demo business system, default is 0).
                     * @return DemoInstanceFlag Whether to query the official demo business system (0 = non-demo business system, 1 = demo business system, default is 0).
                     * 
                     */
                    int64_t GetDemoInstanceFlag() const;

                    /**
                     * 设置Whether to query the official demo business system (0 = non-demo business system, 1 = demo business system, default is 0).
                     * @param _demoInstanceFlag Whether to query the official demo business system (0 = non-demo business system, 1 = demo business system, default is 0).
                     * 
                     */
                    void SetDemoInstanceFlag(const int64_t& _demoInstanceFlag);

                    /**
                     * 判断参数 DemoInstanceFlag 是否已赋值
                     * @return DemoInstanceFlag 是否已赋值
                     * 
                     */
                    bool DemoInstanceFlagHasBeenSet() const;

                    /**
                     * 获取Whether to query all regional business systems (0 = do not query all regions, 1 = query all regions, default is 0).
                     * @return AllRegionsFlag Whether to query all regional business systems (0 = do not query all regions, 1 = query all regions, default is 0).
                     * 
                     */
                    int64_t GetAllRegionsFlag() const;

                    /**
                     * 设置Whether to query all regional business systems (0 = do not query all regions, 1 = query all regions, default is 0).
                     * @param _allRegionsFlag Whether to query all regional business systems (0 = do not query all regions, 1 = query all regions, default is 0).
                     * 
                     */
                    void SetAllRegionsFlag(const int64_t& _allRegionsFlag);

                    /**
                     * 判断参数 AllRegionsFlag 是否已赋值
                     * @return AllRegionsFlag 是否已赋值
                     * 
                     */
                    bool AllRegionsFlagHasBeenSet() const;

                private:

                    /**
                     * Tag list.
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Filter by business system name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Filter by business system id.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Whether to query the official demo business system (0 = non-demo business system, 1 = demo business system, default is 0).
                     */
                    int64_t m_demoInstanceFlag;
                    bool m_demoInstanceFlagHasBeenSet;

                    /**
                     * Whether to query all regional business systems (0 = do not query all regions, 1 = query all regions, default is 0).
                     */
                    int64_t m_allRegionsFlag;
                    bool m_allRegionsFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMINSTANCESREQUEST_H_

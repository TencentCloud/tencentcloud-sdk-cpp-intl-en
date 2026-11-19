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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBEDEPLOYMENTSREQUEST_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBEDEPLOYMENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/makers/v20261113/model/DeploymentFilter.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * DescribeDeployments request structure.
                */
                class DescribeDeploymentsRequest : public AbstractModel
                {
                public:
                    DescribeDeploymentsRequest();
                    ~DescribeDeploymentsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Makers site ID</p>
                     * @return ZoneId <p>Makers site ID</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Makers site ID</p>
                     * @param _zoneId <p>Makers site ID</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>Project ID</p>
                     * @return ProjectId <p>Project ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>Project ID</p>
                     * @param _projectId <p>Project ID</p>
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>Query by deployment ID</p>
                     * @return DeploymentIds <p>Query by deployment ID</p>
                     * 
                     */
                    std::vector<std::string> GetDeploymentIds() const;

                    /**
                     * 设置<p>Query by deployment ID</p>
                     * @param _deploymentIds <p>Query by deployment ID</p>
                     * 
                     */
                    void SetDeploymentIds(const std::vector<std::string>& _deploymentIds);

                    /**
                     * 判断参数 DeploymentIds 是否已赋值
                     * @return DeploymentIds 是否已赋值
                     * 
                     */
                    bool DeploymentIdsHasBeenSet() const;

                    /**
                     * 获取<p>Filter conditions.</p>
                     * @return Filters <p>Filter conditions.</p>
                     * 
                     */
                    std::vector<DeploymentFilter> GetFilters() const;

                    /**
                     * 设置<p>Filter conditions.</p>
                     * @param _filters <p>Filter conditions.</p>
                     * 
                     */
                    void SetFilters(const std::vector<DeploymentFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Offset</p>
                     * @return Offset <p>Offset</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Offset</p>
                     * @param _offset <p>Offset</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Number of items per page. Maximum value: 100.</p>
                     * @return Limit <p>Number of items per page. Maximum value: 100.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of items per page. Maximum value: 100.</p>
                     * @param _limit <p>Number of items per page. Maximum value: 100.</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>CreatedOn or ModifiedOn</p>
                     * @return OrderBy <p>CreatedOn or ModifiedOn</p>
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置<p>CreatedOn or ModifiedOn</p>
                     * @param _orderBy <p>CreatedOn or ModifiedOn</p>
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取<p>Asc or Desc</p>
                     * @return OrderType <p>Asc or Desc</p>
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置<p>Asc or Desc</p>
                     * @param _orderType <p>Asc or Desc</p>
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取<p>Start time.</p>
                     * @return StartTime <p>Start time.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start time.</p>
                     * @param _startTime <p>Start time.</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>End time.</p>
                     * @return EndTime <p>End time.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End time.</p>
                     * @param _endTime <p>End time.</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Makers site ID</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Project ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>Query by deployment ID</p>
                     */
                    std::vector<std::string> m_deploymentIds;
                    bool m_deploymentIdsHasBeenSet;

                    /**
                     * <p>Filter conditions.</p>
                     */
                    std::vector<DeploymentFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Offset</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Number of items per page. Maximum value: 100.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>CreatedOn or ModifiedOn</p>
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * <p>Asc or Desc</p>
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * <p>Start time.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBEDEPLOYMENTSREQUEST_H_

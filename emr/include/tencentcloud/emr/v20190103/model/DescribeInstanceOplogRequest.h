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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCEOPLOGREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCEOPLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/SearchItem.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeInstanceOplog request structure.
                */
                class DescribeInstanceOplogRequest : public AbstractModel
                {
                public:
                    DescribeInstanceOplogRequest();
                    ~DescribeInstanceOplogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EMR instance ID.
                     * @return InstanceId EMR instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置EMR instance ID.
                     * @param _instanceId EMR instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Offset.
                     * @return Offset Offset.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param _offset Offset.
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
                     * 获取Number of entries per page.
                     * @return Limit Number of entries per page.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page.
                     * @param _limit Number of entries per page.
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
                     * 获取Start time timestamp.
                     * @return StartTime Start time timestamp.
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置Start time timestamp.
                     * @param _startTime Start time timestamp.
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time timestamp.
                     * @return EndTime End time timestamp.
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置End time timestamp.
                     * @param _endTime End time timestamp.
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Search criteria array.
                     * @return SearchFields Search criteria array.
                     * 
                     */
                    std::vector<SearchItem> GetSearchFields() const;

                    /**
                     * 设置Search criteria array.
                     * @param _searchFields Search criteria array.
                     * 
                     */
                    void SetSearchFields(const std::vector<SearchItem>& _searchFields);

                    /**
                     * 判断参数 SearchFields 是否已赋值
                     * @return SearchFields 是否已赋值
                     * 
                     */
                    bool SearchFieldsHasBeenSet() const;

                    /**
                     * 获取Cluster, node, and component.
                     * @return Operand Cluster, node, and component.
                     * 
                     */
                    std::string GetOperand() const;

                    /**
                     * 设置Cluster, node, and component.
                     * @param _operand Cluster, node, and component.
                     * 
                     */
                    void SetOperand(const std::string& _operand);

                    /**
                     * 判断参数 Operand 是否已赋值
                     * @return Operand 是否已赋值
                     * 
                     */
                    bool OperandHasBeenSet() const;

                    /**
                     * 获取Low-risk, medium-risk, and high-risk.
                     * @return SecurityLevel Low-risk, medium-risk, and high-risk.
                     * 
                     */
                    std::string GetSecurityLevel() const;

                    /**
                     * 设置Low-risk, medium-risk, and high-risk.
                     * @param _securityLevel Low-risk, medium-risk, and high-risk.
                     * 
                     */
                    void SetSecurityLevel(const std::string& _securityLevel);

                    /**
                     * 判断参数 SecurityLevel 是否已赋值
                     * @return SecurityLevel 是否已赋值
                     * 
                     */
                    bool SecurityLevelHasBeenSet() const;

                private:

                    /**
                     * EMR instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of entries per page.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Start time timestamp.
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time timestamp.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Search criteria array.
                     */
                    std::vector<SearchItem> m_searchFields;
                    bool m_searchFieldsHasBeenSet;

                    /**
                     * Cluster, node, and component.
                     */
                    std::string m_operand;
                    bool m_operandHasBeenSet;

                    /**
                     * Low-risk, medium-risk, and high-risk.
                     */
                    std::string m_securityLevel;
                    bool m_securityLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCEOPLOGREQUEST_H_

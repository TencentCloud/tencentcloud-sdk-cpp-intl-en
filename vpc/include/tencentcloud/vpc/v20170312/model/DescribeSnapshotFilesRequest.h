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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESNAPSHOTFILESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESNAPSHOTFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeSnapshotFiles request structure.
                */
                class DescribeSnapshotFilesRequest : public AbstractModel
                {
                public:
                    DescribeSnapshotFilesRequest();
                    ~DescribeSnapshotFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Type of associated resource. Values: `securitygroup`
                     * @return BusinessType Type of associated resource. Values: `securitygroup`
                     * 
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置Type of associated resource. Values: `securitygroup`
                     * @param _businessType Type of associated resource. Values: `securitygroup`
                     * 
                     */
                    void SetBusinessType(const std::string& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     * 
                     */
                    bool BusinessTypeHasBeenSet() const;

                    /**
                     * 获取Service instance ID. It's corresponding to the `BusinessType`. 
                     * @return InstanceId Service instance ID. It's corresponding to the `BusinessType`. 
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Service instance ID. It's corresponding to the `BusinessType`. 
                     * @param _instanceId Service instance ID. It's corresponding to the `BusinessType`. 
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
                     * 获取Start time. Format: %Y-%m-%d %H:%M:%S
                     * @return StartDate Start time. Format: %Y-%m-%d %H:%M:%S
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置Start time. Format: %Y-%m-%d %H:%M:%S
                     * @param _startDate Start time. Format: %Y-%m-%d %H:%M:%S
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取End time. Format: %Y-%m-%d %H:%M:%S
                     * @return EndDate End time. Format: %Y-%m-%d %H:%M:%S
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置End time. Format: %Y-%m-%d %H:%M:%S
                     * @param _endDate End time. Format: %Y-%m-%d %H:%M:%S
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: `0`.
                     * @return Offset Offset. Default value: `0`.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: `0`.
                     * @param _offset Offset. Default value: `0`.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returned results. Default value: 20. Maximum value: 100.
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100.
                     * @param _limit Number of returned results. Default value: 20. Maximum value: 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Type of associated resource. Values: `securitygroup`
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * Service instance ID. It's corresponding to the `BusinessType`. 
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time. Format: %Y-%m-%d %H:%M:%S
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * End time. Format: %Y-%m-%d %H:%M:%S
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * Offset. Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBESNAPSHOTFILESREQUEST_H_

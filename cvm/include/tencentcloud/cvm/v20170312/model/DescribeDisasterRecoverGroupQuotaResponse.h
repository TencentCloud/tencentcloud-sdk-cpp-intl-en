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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEDISASTERRECOVERGROUPQUOTARESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEDISASTERRECOVERGROUPQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDisasterRecoverGroupQuota response structure.
                */
                class DescribeDisasterRecoverGroupQuotaResponse : public AbstractModel
                {
                public:
                    DescribeDisasterRecoverGroupQuotaResponse();
                    ~DescribeDisasterRecoverGroupQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The maximum number of placement groups that can be created.
                     * @return GroupQuota The maximum number of placement groups that can be created.
                     */
                    int64_t GetGroupQuota() const;

                    /**
                     * 判断参数 GroupQuota 是否已赋值
                     * @return GroupQuota 是否已赋值
                     */
                    bool GroupQuotaHasBeenSet() const;

                    /**
                     * 获取The number of placement groups that have been created by the current user.
                     * @return CurrentNum The number of placement groups that have been created by the current user.
                     */
                    int64_t GetCurrentNum() const;

                    /**
                     * 判断参数 CurrentNum 是否已赋值
                     * @return CurrentNum 是否已赋值
                     */
                    bool CurrentNumHasBeenSet() const;

                    /**
                     * 获取Quota on instances in a physical-machine-type disaster recovery group.
                     * @return CvmInHostGroupQuota Quota on instances in a physical-machine-type disaster recovery group.
                     */
                    int64_t GetCvmInHostGroupQuota() const;

                    /**
                     * 判断参数 CvmInHostGroupQuota 是否已赋值
                     * @return CvmInHostGroupQuota 是否已赋值
                     */
                    bool CvmInHostGroupQuotaHasBeenSet() const;

                    /**
                     * 获取Quota on instances in a switch-type disaster recovery group.
                     * @return CvmInSwGroupQuota Quota on instances in a switch-type disaster recovery group.
                     */
                    int64_t GetCvmInSwGroupQuota() const;

                    /**
                     * 判断参数 CvmInSwGroupQuota 是否已赋值
                     * @return CvmInSwGroupQuota 是否已赋值
                     */
                    bool CvmInSwGroupQuotaHasBeenSet() const;

                    /**
                     * 获取Quota on instances in a rack-type disaster recovery group.
                     * @return CvmInRackGroupQuota Quota on instances in a rack-type disaster recovery group.
                     */
                    int64_t GetCvmInRackGroupQuota() const;

                    /**
                     * 判断参数 CvmInRackGroupQuota 是否已赋值
                     * @return CvmInRackGroupQuota 是否已赋值
                     */
                    bool CvmInRackGroupQuotaHasBeenSet() const;

                private:

                    /**
                     * The maximum number of placement groups that can be created.
                     */
                    int64_t m_groupQuota;
                    bool m_groupQuotaHasBeenSet;

                    /**
                     * The number of placement groups that have been created by the current user.
                     */
                    int64_t m_currentNum;
                    bool m_currentNumHasBeenSet;

                    /**
                     * Quota on instances in a physical-machine-type disaster recovery group.
                     */
                    int64_t m_cvmInHostGroupQuota;
                    bool m_cvmInHostGroupQuotaHasBeenSet;

                    /**
                     * Quota on instances in a switch-type disaster recovery group.
                     */
                    int64_t m_cvmInSwGroupQuota;
                    bool m_cvmInSwGroupQuotaHasBeenSet;

                    /**
                     * Quota on instances in a rack-type disaster recovery group.
                     */
                    int64_t m_cvmInRackGroupQuota;
                    bool m_cvmInRackGroupQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEDISASTERRECOVERGROUPQUOTARESPONSE_H_

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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBECORPRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBECORPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeCorp response structure.
                */
                class DescribeCorpResponse : public AbstractModel
                {
                public:
                    DescribeCorpResponse();
                    ~DescribeCorpResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Corporate ID.

                     * @return CorpBizId Corporate ID.

                     * 
                     */
                    std::string GetCorpBizId() const;

                    /**
                     * 判断参数 CorpBizId 是否已赋值
                     * @return CorpBizId 是否已赋值
                     * 
                     */
                    bool CorpBizIdHasBeenSet() const;

                    /**
                     * 获取Application quota.
                     * @return RobotQuota Application quota.
                     * 
                     */
                    uint64_t GetRobotQuota() const;

                    /**
                     * 判断参数 RobotQuota 是否已赋值
                     * @return RobotQuota 是否已赋值
                     * 
                     */
                    bool RobotQuotaHasBeenSet() const;

                    /**
                     * 获取Full name of the corporate.

                     * @return FullName Full name of the corporate.

                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 判断参数 FullName 是否已赋值
                     * @return FullName 是否已赋值
                     * 
                     */
                    bool FullNameHasBeenSet() const;

                    /**
                     * 获取Whether to try out.
                     * @return IsTrial Whether to try out.
                     * 
                     */
                    bool GetIsTrial() const;

                    /**
                     * 判断参数 IsTrial 是否已赋值
                     * @return IsTrial 是否已赋值
                     * 
                     */
                    bool IsTrialHasBeenSet() const;

                    /**
                     * 获取Whether the trial has expired.
                     * @return IsTrialExpired Whether the trial has expired.
                     * 
                     */
                    bool GetIsTrialExpired() const;

                    /**
                     * 判断参数 IsTrialExpired 是否已赋值
                     * @return IsTrialExpired 是否已赋值
                     * 
                     */
                    bool IsTrialExpiredHasBeenSet() const;

                    /**
                     * 获取Quantity of available applications.
                     * @return AvailableAppQuota Quantity of available applications.
                     * 
                     */
                    uint64_t GetAvailableAppQuota() const;

                    /**
                     * 判断参数 AvailableAppQuota 是否已赋值
                     * @return AvailableAppQuota 是否已赋值
                     * 
                     */
                    bool AvailableAppQuotaHasBeenSet() const;

                    /**
                     * 获取Whether custom model configuration is supported.
                     * @return IsSupportCustomModel Whether custom model configuration is supported.
                     * 
                     */
                    bool GetIsSupportCustomModel() const;

                    /**
                     * 判断参数 IsSupportCustomModel 是否已赋值
                     * @return IsSupportCustomModel 是否已赋值
                     * 
                     */
                    bool IsSupportCustomModelHasBeenSet() const;

                private:

                    /**
                     * Corporate ID.

                     */
                    std::string m_corpBizId;
                    bool m_corpBizIdHasBeenSet;

                    /**
                     * Application quota.
                     */
                    uint64_t m_robotQuota;
                    bool m_robotQuotaHasBeenSet;

                    /**
                     * Full name of the corporate.

                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * Whether to try out.
                     */
                    bool m_isTrial;
                    bool m_isTrialHasBeenSet;

                    /**
                     * Whether the trial has expired.
                     */
                    bool m_isTrialExpired;
                    bool m_isTrialExpiredHasBeenSet;

                    /**
                     * Quantity of available applications.
                     */
                    uint64_t m_availableAppQuota;
                    bool m_availableAppQuotaHasBeenSet;

                    /**
                     * Whether custom model configuration is supported.
                     */
                    bool m_isSupportCustomModel;
                    bool m_isSupportCustomModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBECORPRESPONSE_H_

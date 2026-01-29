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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEACCESSKEYRISKDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEACCESSKEYRISKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AccessKeyRisk.h>
#include <tencentcloud/csip/v20221121/model/AccessKeyAlarmCount.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAccessKeyRiskDetail response structure.
                */
                class DescribeAccessKeyRiskDetailResponse : public AbstractModel
                {
                public:
                    DescribeAccessKeyRiskDetailResponse();
                    ~DescribeAccessKeyRiskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Risk list.
                     * @return RiskInfo Risk list.
                     * 
                     */
                    AccessKeyRisk GetRiskInfo() const;

                    /**
                     * 判断参数 RiskInfo 是否已赋值
                     * @return RiskInfo 是否已赋值
                     * 
                     */
                    bool RiskInfoHasBeenSet() const;

                    /**
                     * 获取Total number of CAM policies.
                     * @return CamCount Total number of CAM policies.
                     * 
                     */
                    int64_t GetCamCount() const;

                    /**
                     * 判断参数 CamCount 是否已赋值
                     * @return CamCount 是否已赋值
                     * 
                     */
                    bool CamCountHasBeenSet() const;

                    /**
                     * 获取Number of associated alarms for the account.
                     * @return AlarmCount Number of associated alarms for the account.
                     * 
                     */
                    int64_t GetAlarmCount() const;

                    /**
                     * 判断参数 AlarmCount 是否已赋值
                     * @return AlarmCount 是否已赋值
                     * 
                     */
                    bool AlarmCountHasBeenSet() const;

                    /**
                     * 获取Access method 0 API 1 console and API.
                     * @return AccessType Access method 0 API 1 console and API.
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取Access key Alarm count list.
                     * @return AccessKeyAlarmCount Access key Alarm count list.
                     * 
                     */
                    std::vector<AccessKeyAlarmCount> GetAccessKeyAlarmCount() const;

                    /**
                     * 判断参数 AccessKeyAlarmCount 是否已赋值
                     * @return AccessKeyAlarmCount 是否已赋值
                     * 
                     */
                    bool AccessKeyAlarmCountHasBeenSet() const;

                    /**
                     * 获取Whether operation protection is enabled. valid values: 0 (not enabled), 1 (enabled).
                     * @return ActionFlag Whether operation protection is enabled. valid values: 0 (not enabled), 1 (enabled).
                     * 
                     */
                    int64_t GetActionFlag() const;

                    /**
                     * 判断参数 ActionFlag 是否已赋值
                     * @return ActionFlag 是否已赋值
                     * 
                     */
                    bool ActionFlagHasBeenSet() const;

                    /**
                     * 获取Whether login protection is enabled. valid values: 0 (not enabled), 1 (enabled).
                     * @return LoginFlag Whether login protection is enabled. valid values: 0 (not enabled), 1 (enabled).
                     * 
                     */
                    int64_t GetLoginFlag() const;

                    /**
                     * 判断参数 LoginFlag 是否已赋值
                     * @return LoginFlag 是否已赋值
                     * 
                     */
                    bool LoginFlagHasBeenSet() const;

                private:

                    /**
                     * Risk list.
                     */
                    AccessKeyRisk m_riskInfo;
                    bool m_riskInfoHasBeenSet;

                    /**
                     * Total number of CAM policies.
                     */
                    int64_t m_camCount;
                    bool m_camCountHasBeenSet;

                    /**
                     * Number of associated alarms for the account.
                     */
                    int64_t m_alarmCount;
                    bool m_alarmCountHasBeenSet;

                    /**
                     * Access method 0 API 1 console and API.
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * Access key Alarm count list.
                     */
                    std::vector<AccessKeyAlarmCount> m_accessKeyAlarmCount;
                    bool m_accessKeyAlarmCountHasBeenSet;

                    /**
                     * Whether operation protection is enabled. valid values: 0 (not enabled), 1 (enabled).
                     */
                    int64_t m_actionFlag;
                    bool m_actionFlagHasBeenSet;

                    /**
                     * Whether login protection is enabled. valid values: 0 (not enabled), 1 (enabled).
                     */
                    int64_t m_loginFlag;
                    bool m_loginFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEACCESSKEYRISKDETAILRESPONSE_H_

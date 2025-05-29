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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBECONCURRENCYUSAGEGRAPHREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBECONCURRENCYUSAGEGRAPHREQUEST_H_

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
                * DescribeConcurrencyUsageGraph request structure.
                */
                class DescribeConcurrencyUsageGraphRequest : public AbstractModel
                {
                public:
                    DescribeConcurrencyUsageGraphRequest();
                    ~DescribeConcurrencyUsageGraphRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Model identifier.
                     * @return ModelName Model identifier.
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置Model identifier.
                     * @param _modelName Model identifier.
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取Start timestamp, in seconds.
                     * @return StartTime Start timestamp, in seconds.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start timestamp, in seconds.
                     * @param _startTime Start timestamp, in seconds.
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
                     * 获取End timestamp, in seconds.
                     * @return EndTime End timestamp, in seconds.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End timestamp, in seconds.
                     * @param _endTime End timestamp, in seconds.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取uin
                     * @return UinAccount uin
                     * 
                     */
                    std::vector<std::string> GetUinAccount() const;

                    /**
                     * 设置uin
                     * @param _uinAccount uin
                     * 
                     */
                    void SetUinAccount(const std::vector<std::string>& _uinAccount);

                    /**
                     * 判断参数 UinAccount 是否已赋值
                     * @return UinAccount 是否已赋值
                     * 
                     */
                    bool UinAccountHasBeenSet() const;

                    /**
                     * 获取Login to user's root account (required in integrator mode).
                     * @return LoginUin Login to user's root account (required in integrator mode).
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置Login to user's root account (required in integrator mode).
                     * @param _loginUin Login to user's root account (required in integrator mode).
                     * 
                     */
                    void SetLoginUin(const std::string& _loginUin);

                    /**
                     * 判断参数 LoginUin 是否已赋值
                     * @return LoginUin 是否已赋值
                     * 
                     */
                    bool LoginUinHasBeenSet() const;

                    /**
                     * 获取Login to user's sub-account (required in integrator mode).
                     * @return LoginSubAccountUin Login to user's sub-account (required in integrator mode).
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置Login to user's sub-account (required in integrator mode).
                     * @param _loginSubAccountUin Login to user's sub-account (required in integrator mode).
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                    /**
                     * 获取Sub-business type.
                     * @return SubBizType Sub-business type.
                     * 
                     */
                    std::string GetSubBizType() const;

                    /**
                     * 设置Sub-business type.
                     * @param _subBizType Sub-business type.
                     * 
                     */
                    void SetSubBizType(const std::string& _subBizType);

                    /**
                     * 判断参数 SubBizType 是否已赋值
                     * @return SubBizType 是否已赋值
                     * 
                     */
                    bool SubBizTypeHasBeenSet() const;

                    /**
                     * 获取Application ID list.
                     * @return AppBizIds Application ID list.
                     * 
                     */
                    std::vector<std::string> GetAppBizIds() const;

                    /**
                     * 设置Application ID list.
                     * @param _appBizIds Application ID list.
                     * 
                     */
                    void SetAppBizIds(const std::vector<std::string>& _appBizIds);

                    /**
                     * 判断参数 AppBizIds 是否已赋值
                     * @return AppBizIds 是否已赋值
                     * 
                     */
                    bool AppBizIdsHasBeenSet() const;

                private:

                    /**
                     * Model identifier.
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * Start timestamp, in seconds.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End timestamp, in seconds.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * uin
                     */
                    std::vector<std::string> m_uinAccount;
                    bool m_uinAccountHasBeenSet;

                    /**
                     * Login to user's root account (required in integrator mode).
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * Login to user's sub-account (required in integrator mode).
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                    /**
                     * Sub-business type.
                     */
                    std::string m_subBizType;
                    bool m_subBizTypeHasBeenSet;

                    /**
                     * Application ID list.
                     */
                    std::vector<std::string> m_appBizIds;
                    bool m_appBizIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBECONCURRENCYUSAGEGRAPHREQUEST_H_

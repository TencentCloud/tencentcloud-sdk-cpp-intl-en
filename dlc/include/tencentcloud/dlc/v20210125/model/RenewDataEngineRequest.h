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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RENEWDATAENGINEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RENEWDATAENGINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * RenewDataEngine request structure.
                */
                class RenewDataEngineRequest : public AbstractModel
                {
                public:
                    RenewDataEngineRequest();
                    ~RenewDataEngineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CU queue name
                     * @return DataEngineName CU queue name
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置CU queue name
                     * @param _dataEngineName CU queue name
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取Renewal period in months, which is at least one month.
                     * @return TimeSpan Renewal period in months, which is at least one month.
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Renewal period in months, which is at least one month.
                     * @param _timeSpan Renewal period in months, which is at least one month.
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Payment type. It is 1 by default and is prepaid.
                     * @return PayMode Payment type. It is 1 by default and is prepaid.
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Payment type. It is 1 by default and is prepaid.
                     * @param _payMode Payment type. It is 1 by default and is prepaid.
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Unit. It is m by default, and only m can be filled in.
                     * @return TimeUnit Unit. It is m by default, and only m can be filled in.
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Unit. It is m by default, and only m can be filled in.
                     * @param _timeUnit Unit. It is m by default, and only m can be filled in.
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag: 0 means the initial status, and there is no automatic renewal by default. If the user has the privilege to retain services with prepayment, there will be an automatic renewal. 1 means that there is an automatic renewal. 2 means that there is surely no automatic renewal. If it is not specified, the parameter is 0 by default.
                     * @return RenewFlag Auto-renewal flag: 0 means the initial status, and there is no automatic renewal by default. If the user has the privilege to retain services with prepayment, there will be an automatic renewal. 1 means that there is an automatic renewal. 2 means that there is surely no automatic renewal. If it is not specified, the parameter is 0 by default.
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag: 0 means the initial status, and there is no automatic renewal by default. If the user has the privilege to retain services with prepayment, there will be an automatic renewal. 1 means that there is an automatic renewal. 2 means that there is surely no automatic renewal. If it is not specified, the parameter is 0 by default.
                     * @param _renewFlag Auto-renewal flag: 0 means the initial status, and there is no automatic renewal by default. If the user has the privilege to retain services with prepayment, there will be an automatic renewal. 1 means that there is an automatic renewal. 2 means that there is surely no automatic renewal. If it is not specified, the parameter is 0 by default.
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * CU queue name
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * Renewal period in months, which is at least one month.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Payment type. It is 1 by default and is prepaid.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Unit. It is m by default, and only m can be filled in.
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Auto-renewal flag: 0 means the initial status, and there is no automatic renewal by default. If the user has the privilege to retain services with prepayment, there will be an automatic renewal. 1 means that there is an automatic renewal. 2 means that there is surely no automatic renewal. If it is not specified, the parameter is 0 by default.
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RENEWDATAENGINEREQUEST_H_
